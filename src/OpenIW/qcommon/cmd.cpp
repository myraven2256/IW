//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_cmd() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_Wait_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cbuf_Init() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto memcpy_noncrt(void *dst, const void *src, unsigned int length) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto strlen_noncrt(const char *str) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cbuf_AddText(int localClientNum, const char *text) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cbuf_InsertText(int localClientNum, const char *text) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cbuf_AddServerText_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Cmd_ExecuteServerString(const char *text) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cbuf_SV_Execute() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_AddServerCommandInternal(const char *cmdName, function *function, struct cmd_function_s *allocedCmd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cbuf_ExecuteBuffer(int localClientNum, int controllerIndex, const char *buffer) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Cbuf_ExecuteInternal(int localClientNum, int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cbuf_Execute(int localClientNum, int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Cmd_ExecFromDisk(int localClientNum, int controllerIndex, const char *filename) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Cmd_ExecFromFastFile(int localClientNum, int controllerIndex, const char *filename) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Cmd_IsMainConfigFile(const char *filename) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Cmd_Exec_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_Vstr_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_Echo_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Cmd_ArgvBuffer(int arg, char *buffer, int bufferLength) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_ArgsBuffer(int start, char *buffer, int bufLength) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Cmd_IsWhiteSpaceChar(char letter) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Cmd_EmitChar(char letter, struct CmdArgsPrivate *argsPriv) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Cmd_TokenizeStringInternal(const char *text_in, int max_tokens, const char **argv, struct CmdArgsPrivate *argsPriv) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AssertCmdArgsConsistency(const struct CmdArgs *args, const struct CmdArgsPrivate *argsPriv) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Cmd_TokenizeStringKernel(const char *text_in, int max_tokens, struct CmdArgs *args, struct CmdArgsPrivate *argsPriv) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Cmd_EndTokenizedStringKernel(struct CmdArgs *args, struct CmdArgsPrivate *argsPriv) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_TokenizeStringWithLimit(const char *text_in, int max_tokens) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_TokenizeString(const char *text_in) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_EndTokenizedString() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Cmd_TokenizeString(const char *text_in) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Cmd_EndTokenizedString() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_FindCommand(const char *cmdName) -> struct cmd_function_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_AddCommandInternal(const char *cmdName, function *function, struct cmd_function_s *allocedCmd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_RemoveCommand(const char *cmdName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_SetAutoComplete(const char *cmdName, const char *dir, const char *ext) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_Shutdown() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_ForEach(function *callback) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Cmd_ResetArgs(struct CmdArgs *args, struct CmdArgsPrivate *argsPriv) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_ComErrorCleanup() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_SaveNotifications(struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_LoadNotifications(struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_RegisterNotification(const int clientNum, const char *commandString, const char *notifyString) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_UnregisterAllNotifications() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_CheckNotify_f(int clientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_ExecuteSingleCommand(int localClientNum, int controllerIndex, const char *text) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_Cmd_ExecuteString(int localClientNum, int controllerIndex, const char *text) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_List_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Cmd_Init() -> void
{

}

#endif // __UNIMPLEMENTED__
