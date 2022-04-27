#include "stdafx.hpp"

#pragma bss_seg      (".reflective_pe")
                   char reflective_pe[0x0A000000];
__declspec(thread) char reflective_pe_thread_local_storage[0x10000];
#pragma comment (linker,"\"/manifestdependency:type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

namespace ReflectivePE
{

struct PE
{
  HMODULE           image;
  PIMAGE_DOS_HEADER image_dos_header;
  PIMAGE_NT_HEADERS image_nt_headers;
};

auto load(std::vector<char> pe)
{
  PE src{}, dst{};

  src.image            = reinterpret_cast<HMODULE>(&pe.at(0));
  src.image_dos_header = reinterpret_cast<PIMAGE_DOS_HEADER>(src.image);
  src.image_nt_headers = reinterpret_cast<PIMAGE_NT_HEADERS>(reinterpret_cast<unsigned>(src.image) + src.image_dos_header->e_lfanew);
  dst.image            = GetModuleHandleA(nullptr);
  dst.image_dos_header = reinterpret_cast<PIMAGE_DOS_HEADER>(dst.image);
  dst.image_nt_headers = reinterpret_cast<PIMAGE_NT_HEADERS>(reinterpret_cast<unsigned>(dst.image) + dst.image_dos_header->e_lfanew);

  auto section = IMAGE_FIRST_SECTION(src.image_nt_headers);

  for (auto i = 0; i < src.image_nt_headers->FileHeader.NumberOfSections; ++i, ++section)
  {
    if (!section && section->SizeOfRawData <= 0)
      continue;

    auto section_virtual_address = reinterpret_cast<void*>(reinterpret_cast<unsigned>(dst.image) + section->VirtualAddress);
    auto section_raw_data = reinterpret_cast<void*>(reinterpret_cast<unsigned>(src.image) + section->PointerToRawData);
    auto section_raw_data_size = (std::min)(section->SizeOfRawData, section->Misc.VirtualSize);
    auto section_page_protection = 0ul;

    VirtualProtect(section_virtual_address, section_raw_data_size, PAGE_EXECUTE_READWRITE, &section_page_protection);
    memmove(section_virtual_address, section_raw_data, section_raw_data_size);
    VirtualProtect(section_virtual_address, section_raw_data_size, section_page_protection, &section_page_protection);
  }

  auto import_directory = &src.image_nt_headers->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT];
  auto import_descriptor = reinterpret_cast<PIMAGE_IMPORT_DESCRIPTOR>(reinterpret_cast<unsigned>(dst.image) + import_directory->VirtualAddress);

  while (import_descriptor->Name)
  {
    auto import_descriptor_name = reinterpret_cast<char*>(reinterpret_cast<unsigned>(dst.image) + import_descriptor->Name);
    auto import_descriptor_first_thunk = reinterpret_cast<unsigned*>(reinterpret_cast<unsigned>(dst.image) + import_descriptor->FirstThunk);
    auto import_descriptor_original_first_thunk = reinterpret_cast<unsigned*>(reinterpret_cast<unsigned>(dst.image) + import_descriptor->OriginalFirstThunk);

    while (*import_descriptor_original_first_thunk)
    {
      auto import_descriptor_library = LoadLibraryA(import_descriptor_name);
      auto import_descriptor_lookup_table = reinterpret_cast<PIMAGE_IMPORT_BY_NAME>(reinterpret_cast<unsigned>(dst.image) + *import_descriptor_original_first_thunk);
      auto import_descriptor_address_table = IMAGE_SNAP_BY_ORDINAL(*import_descriptor_original_first_thunk) ? GetProcAddress(import_descriptor_library, MAKEINTRESOURCEA(IMAGE_ORDINAL(*import_descriptor_original_first_thunk))) : GetProcAddress(import_descriptor_library, &import_descriptor_lookup_table->Name[0]);

      if (!import_descriptor_library)
      {
        MessageBox(nullptr, (std::string("The code execution cannot proceed because") + " " + import_descriptor_name + " " + "was not found.").c_str(), "Fatal Error", MB_ICONERROR);
        std::quick_exit(EXIT_FAILURE);
      }

     *import_descriptor_first_thunk = reinterpret_cast<unsigned>(import_descriptor_address_table);
      import_descriptor_first_thunk++;
      import_descriptor_original_first_thunk++;
    }
    import_descriptor++;
  }

  auto headers_page_protection = 0ul;

  VirtualProtect(dst.image_nt_headers, 0x1000, PAGE_EXECUTE_READWRITE, &headers_page_protection);
  dst.image_nt_headers->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT] = src.image_nt_headers->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT];
  memmove(dst.image_nt_headers, src.image_nt_headers, sizeof(IMAGE_NT_HEADERS) + dst.image_nt_headers->FileHeader.NumberOfSections * sizeof(IMAGE_SECTION_HEADER));
  VirtualProtect(dst.image_nt_headers, 0x1000, headers_page_protection, &headers_page_protection);

  auto steam_api = LoadLibrary("steam_api.dll");
  auto steam_api_init = GetProcAddress(steam_api, "SteamAPI_Init");
  auto steamapi_appid = std::ofstream("steam_appid.txt"); // Steam only looks for the file name. It does not read its content.
  steam_api_init(); // It won't fail, but if it does, IW will handle it gracefully.

  reinterpret_cast<FARPROC>(src.image_nt_headers->OptionalHeader.AddressOfEntryPoint + 0x00400000)();
}

} // namespace ReflectivePE

auto main(int argc, char* argv[]) -> int
{
  if (argc < 2)
    return MessageBox(nullptr, "Please set the game directory in property pages - debugging - command arguments.", "Fatal Error", MB_ICONERROR);

  SetDllDirectory(argv[1]);
  SetCurrentDirectory(argv[1]);
  memset(reflective_pe_thread_local_storage, 0, sizeof reflective_pe_thread_local_storage);
  ReflectivePE::load(std::vector(std::istreambuf_iterator(std::ifstream("iw4mp.exe", std::ios::binary).rdbuf()), std::istreambuf_iterator<char>()));
}
