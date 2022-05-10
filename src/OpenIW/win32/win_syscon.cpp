//! SPDX-License-Identifier: GPL-3.0-or-later

void Sys_ShowConsole()
{
  Zynamic::Forward<void()>(0x4305E0)();
}
