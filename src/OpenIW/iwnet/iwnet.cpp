//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto IWNet_CloseTask(struct IWNetCommandData *cmd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWNet_CancelTask(struct IWNetCommandData *cmd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWNet_CancelStorageTask(struct IWNetStorageTaskState *storageTaskState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWNet_CancelCommand(enum IWNetCommand command) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWNet_IsCommandActive(enum IWNetCommand command) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWNet_UtilFindWriter(const struct IWNetCommandWriter *writers, enum IWNetCommand command) -> function*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWNet_GetCommandSlotByIndex(const int index) -> struct IWNetCommandData*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWNet_GetCommandIndex(const struct IWNetCommandData *cmd) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWNet_GetActiveCmdCount() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWNet_FindFreeCommand() -> struct IWNetCommandData*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWNet_AddCommand(const int localControllerIndex, enum IWNetCommand command, union IWNetParameters *params) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWNet_DNSResolved() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWNet_DNSLookup(const char *authMachineName, const char *matchmakingMachineName, const char *storageMachineName, const char *teammakingMachineName, const char *ipDetectHostname, const char *loggingMachineName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWNet_Init(const char *authMachineName, const char *matchmakingMachineName, const char *storageMachineName, const char *teammakingMachineName, const char *ipDetectHostname, const char *loggingMachineName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWNet_Frame() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWNet_CancelTasksForController(const int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
