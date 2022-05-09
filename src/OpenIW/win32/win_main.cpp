int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
  MessageBox(nullptr, "Zynamic has been successfully loaded.", "OpenIW", MB_ICONINFORMATION);
  return cast<int WINAPI(HINSTANCE, HINSTANCE, LPSTR, int)>(0x05C93C0)(hInstance, hPrevInstance, lpCmdLine, nCmdShow);
}
