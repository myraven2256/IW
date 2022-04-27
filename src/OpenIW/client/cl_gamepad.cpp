//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CL_GetLastGamePadEventTime() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ResetLastGamePadEventTime() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_InitGamepadCommands() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_InitGamepadAxisBindings() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Gamepad_StringToPhysicalAxis(const char *axisName) -> enum GamepadPhysicalAxis
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Axis_StringToVirtualAxis(const char *axisName) -> enum GamepadVirtualAxis
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Axis_NumToAxisString(enum GamepadPhysicalAxis axis) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Gamepad_VirtualAxisName(enum GamepadVirtualAxis axis) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Gamepad_InputTypeStringToId(const char *name) -> enum GamepadMapping
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Gamepad_InputTypeName(enum GamepadMapping mapType) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Gamepad_BindAxis(struct GpadAxesGlob *gaGlob, enum GamepadPhysicalAxis realIndex, enum GamepadVirtualAxis axisIndex, enum GamepadMapping mapType) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Axis_Bind_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Axis_Unbindall_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Gamepad_WriteBindings(int localClientNum, void *f) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_GamepadAnalogToButtonScrollEvent(int localClientNum, int portIndex, int physicalAxis, int time, int positiveDir, int down) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_GamepadGenerateAPad(int localClientNum, int portIndex, int physicalAxis, int time) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GamepadEvent(int portIndex, int physicalAxis, int value, int time) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GamepadAxisValue(int localClientNum, int virtualAxis) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_CheckForIgnoreDueToRepeat(int localClientNum, int key, int repeatCount, int time) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GamepadRepeatScrollingButtons(int localClientNum, int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IsGamepadKey(int key) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IsDPadKey(int key) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GamepadResetMenuScrollTime(int localClientNum, int key, int down, unsigned int time) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DPadKeyAdjacent(int keyBase, int keyTest) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GamepadButtonEvent(int localClientNum, int controllerIndex, int key, int down, unsigned int time) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GamepadButtonEventForPort(int portIndex, int key, int down, unsigned int time) -> void
{

}

#endif // __UNIMPLEMENTED__
