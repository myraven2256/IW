//! SPDX-License-Identifier: GPL-3.0-or-later

//! 
//! \brief Disable Valve's CEG (custom executable-generation) DRM
//! \warning There are probably other CEG checks besides GetTickCount.
//!
void Sys_CustomExecutableGeneration()
{
  auto GetTickCount =
  {
    0x402FD0, 0x402FD0, 0x4044E0, 0x4044E0,
    0x42BEB0, 0x42BEB0, 0x438620, 0x438620,
    0x446740, 0x446740, 0x4A81D0, 0x4A81D0,
    0x4CA590, 0x4CA590, 0x4CC180, 0x4CC180,
    0x4F3BF0, 0x4F3BF0, 0x4FAC40, 0x4FAC40
  };

  for (auto& address : GetTickCount)
  {
    const char* opcode = "\xB8\x01\x00\x00\x00\xC3";
    for (int i = 0; i < 6; i++)
      memset(reinterpret_cast<void*>(address + i), *opcode++, 6);
  }
}
