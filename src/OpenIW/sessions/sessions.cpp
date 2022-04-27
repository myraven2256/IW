//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto Session_FindRegisteredUserInternal(struct SessionData *session, const unsigned __int64 xuid) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_IsUserRegisteredInternal(struct SessionData *session, const int clientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SanityCheckSession(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_QoSListenStart(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_QoSListenStop(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_FindRegisteredUser(struct SessionData *session, const unsigned __int64 xuid) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_CountRegisteredUsers(const struct SessionData *session) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_IsInfoValid(const struct _XSESSION_INFO *sessionInfo) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_IsValid(const struct SessionData *session) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_IsFull(const struct SessionData *session) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_CompareSessionInfo(const struct _XSESSION_INFO *first, const struct _XSESSION_INFO *second) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_CurrentFlags(const struct SessionData *session) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_PrivateSlots(const struct SessionData *session) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_PublicSlots(const struct SessionData *session) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_CountTotalSlots(const struct SessionData *session) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_CountRegisteredUsersInternal(struct SessionData *session) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_IsUserRegistered(struct SessionData *session, const int clientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_GetXuid(struct SessionData *session, const int clientNum) -> unsigned __int64
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_GetXuidEvenIfInactive(struct SessionData *session, const int clientNum) -> unsigned __int64
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_MoveSession(struct SessionData *from, struct SessionData *to) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_ClearSession(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_GetFreeSessionTaskData() -> struct SessionTaskData*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_GetActiveSessionTaskData(const int tasknum) -> struct SessionTaskData*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_FreeActiveSessionTaskData(struct SessionTaskData *taskData) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_EndGameSession(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_StartDeleteHandle(const int slot) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_DeleteHandleComplete(const int slot) -> enum taskCompleteResults
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_DeleteHandle(void *sessionHandle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_UnregisterAllUsersFromVoice(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_GetFreeSessionGraveYardSlot() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_DeleteSessionImmediately(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_DeleteSession(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_ClientRegisterWithArbitration(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FindXuidInList(unsigned __int64 xuid, int listSize, unsigned __int64 *list) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_HostRegisterWithArbitration(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_SetUpTrueskillData(const int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_StartHostComplete(const int slot) -> enum taskCompleteResults
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_StartHost(struct SessionData *session, int sessionFlags, int numPrivateSlots, int numPublicSlots) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_StartClientInternal(struct SessionData *session, const int localControllerIndex, const int flags, struct _XSESSION_INFO *hostInfo, unsigned __int64 sessionNonce, int numPublicSlots, int numPrivateSlots) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_StartClient(struct SessionData *session, const int localControllerIndex, const int flags, struct _XSESSION_INFO *hostInfo, unsigned __int64 sessionNonce, int numPublicSlots, int numPrivateSlots) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetModifiableFlags() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_NeedToSyncParams(struct SessionData *session, const int numPublic, const int numPrivate, const int flags) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_SyncParams(const int localControllerIndex, struct SessionData *session, const int numPublic, const int numPrivate, const int flags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_Migrate(struct SessionData *session, struct _XSESSION_INFO *sessionInfo, const int localControllerIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_ModifyInProgress() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_Modify(const int localControllerIndex, struct SessionData *session, const int flags, const int publicSlots, const int privateSlots) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_ModifyComplete(const int slot) -> enum taskCompleteResults
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_FinishModify() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_CreateOrJoinInProgress() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_Started(struct SessionData *session) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_JoinSession(const int localControllerIndex, struct SessionData *session, const int slot, const unsigned __int64 xuid, bool privateSlot) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_JoinSessionComplete(const int slot) -> enum taskCompleteResults
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_EveryoneLeaveSessionComplete(const int slot) -> enum taskCompleteResults
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_EveryoneLeaveSessionAsync(const int localControllerIndex, struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_RemoveAllPlayersFromSession(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_LeaveSession(struct SessionData *session, const int registeredUserSlot) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_CountPrivateSlotsUsed(struct SessionData *session) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_CountPublicSlotsUsed(struct SessionData *session) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_RegisterRemotePlayer(const int localControllerIndex, struct SessionData *session, const unsigned __int64 xuid, bool privateSlot, const int clientNum, const int natType, const struct XNADDR *xnaddr, const struct netadr_t addr) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_UnregisterRemotePlayer(struct SessionData *session, const int slot) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_GetNonce(struct SessionData *session) -> unsigned __int64
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Xenon_SetSessionNonce(struct SessionData *session, unsigned __int64 nonce) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Xenon_GetXNKey(struct SessionData *session) -> struct XNKEY*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Xenon_GetXNKId(struct SessionData *session) -> struct XNKID*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_SearchForAllSessions(struct SessionData *session, int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_SearchForSession(struct SessionData *session, int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LookupCountryCode(const int countryCode) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XUSERDATA_PrintValue(struct _XUSER_DATA *data) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_ParseSearchResults(const int localControllerIndex, struct _XSESSION_SEARCHRESULT_HEADER *searchResults) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_RandomSearchSessionsComplete(const int slot) -> enum taskCompleteResults
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_CleanUpSearches(int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_KillSearches() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_SearchInProgress() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_ClearSessionIDFromGraveyard(const struct XNKID *sessionID) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_ManageGraveYard() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_DeleteGraveyardSlotImmediately(int slot) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_LeavePresenceSessionInGraveYard(const int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_EmptyGraveYard(const int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_NeedsSkillUpdate(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_CalcSkill() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_CalcSkillComplete(const int slot) -> enum taskCompleteResults
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_ModifySkill() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_ModifySkillComplete(const int slot) -> enum taskCompleteResults
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_GetTaskName(int taskEnum) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SpecificSessionTaskInProgress(const struct SessionData *session, const int tasknum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_SpecificSessionTasksInProgress(struct SessionData *session, int taskMask) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_SessionTasksInProgress(struct SessionData *session) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_CleanUpCancelledTask(struct SessionData *session, int tasknum, int taskType) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_CancelSpecificSessionTasks(struct SessionData *session, int taskMask) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_CancelAllSessionTasks(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_EndSpecificSessionTasks(struct SessionData *session, int taskMask) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_EndCreateSessionTasks(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_EndNonSkillSessionTasks(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_EndOngoingSessionTasks(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_JoinInProgressForXUID(struct SessionData *session, unsigned __int64 player) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_StartGameSession(const int localControllerIndex, struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_StartSessionComplete(const int slot) -> enum taskCompleteResults
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CheckOngoingSessionTask(const int tasknum) -> enum taskCompleteResults
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CheckSessionTaskDataLeaks() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_CheckOngoingSessionTasks() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_Init() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_Shutdown() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_AddMembersToSessionInternal(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_AddNewPlayersToSession(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_DropOldPlayersFromSession(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Session_UpdateIWNetPlayerList(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_FrameForSession(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_Frame() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_GetPlayerInAddr(const struct SessionData *session, const int clientNum) -> struct in_addr
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_UpdatePlayerInAddr(struct SessionData *session, const int clientNum, const struct in_addr inaddr, const unsigned short port) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_UpdatePlayerAddr(struct SessionData *session, const int clientNum, const struct netadr_t addr) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_GetPlayerAddr(struct SessionData *session, const int clientNum) -> struct netadr_t
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_PlayerHasLoopbackAddr(struct SessionData *session, const int clientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_GetNatTypeForClientNum(struct SessionData *session, const int player) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_IsHost(struct SessionData *session, const int clientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Session_HostNum(struct SessionData *session) -> int
{

}

#endif // __UNIMPLEMENTED__
