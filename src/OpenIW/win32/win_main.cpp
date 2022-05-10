//! SPDX-License-Identifier: GPL-3.0-or-later

void Sys_CustomExecutableGeneration();
void Sys_ShowConsole();

auto WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) -> int
{
  MessageBox(nullptr, "Zynamic has been successfully loaded.", "OpenIW", MB_ICONINFORMATION);

  auto DB_GetXAssetSizeHandlers = reinterpret_cast<int(**)()>(0x799488);
  auto DB_XAssetPool = reinterpret_cast<void**>(0x007998A8);
  auto g_poolSize = reinterpret_cast<unsigned*>(0x007995E8);

  // Steam has increased the weapon allocation pool so we follow suit to avoid a crash.
  constexpr int ASSET_TYPE_WEAPON  = 0x1C;
  DB_XAssetPool[ASSET_TYPE_WEAPON] = malloc(2400 * DB_GetXAssetSizeHandlers[ASSET_TYPE_WEAPON]());
     g_poolSize[ASSET_TYPE_WEAPON] = 2400;

  // Steam has introduced an incompatible playlist causing a deadlock with DBPlaylist_WaitXFileStage.
  std::filesystem::remove("zone/english/mp_playlists.ff");

  Sys_ShowConsole();
  Sys_CustomExecutableGeneration();
  return Zynamic::Forward<int WINAPI(HINSTANCE, HINSTANCE, LPSTR, int)>(0x04513D0)(hInstance, hPrevInstance, lpCmdLine, nCmdShow);
}
