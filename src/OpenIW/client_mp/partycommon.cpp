//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Live_UIMapPackFlags() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_CurrentLocalMapPackFlags() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_CurrentFullPartyMapPackFlags(struct PartyData *party) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_CurrentDesiredLobbyMapPackFlags() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_IsIndexedContentPackEnabled(int index) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_PartyMembersMissingMapPack(struct PartyData *party, int *playerSlot, int *mapPackIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_MissingMapPackPlayerName() -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_MissingMapPackName() -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_IsAnyMemberMissingMapPack() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_UpdateMissingMapPackDvar() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_ClearLastEntries(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_UpdateHostAddr(struct PartyData *party, struct netadr_t addr) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RandomPermute(int *arr, int size) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RandomizeParty(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_PlayPlayerJoinSound(const int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_PlayPlayerLeaveSound(const int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Party_GetLobbyState_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Lobby_DumpInfo_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Party_DumpInfo_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_DumpInfo(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_FindMemberByXUID(struct PartyData *party, const unsigned __int64 player) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_GetXuid(struct PartyData *party, const int memberIndex) -> unsigned __int64
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_IsMemberActive(struct PartyData *party, const int memberIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_GetVetoCount(struct PartyData *party) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_UsingLobbyMerge(struct PartyData *party) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_RemoveFromList(struct PartyData *party, struct XNADDR *xnaddr) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_StopParty(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Party_FindNextMemberUsingXNAddr(struct PartyData *party, const struct netadr_t playerAddr, const int startingSlot, const int remoteClientIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Party_FindNextMemberAtAddrInternal(struct PartyData *party, const struct netadr_t playerAddr, const int startingSlot, const int remoteClientIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_FindMember(struct PartyData *party, const struct netadr_t playerAddr, const int remoteClientIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_FindFirstMemberAtAddr(struct PartyData *party, const struct netadr_t playerAddr) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_FindNextMemberAtAddr(struct PartyData *party, const struct netadr_t playerAddr, int slotIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_GetVoiceConnectivityBits(struct PartyData *party, int memberIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_GetAssignedTeam(struct PartyData *party, const unsigned __int64 player) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_SetPlaylistEntry(struct PartyData *party, const int playlistEntry) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_GetPlaylistEntry(struct PartyData *party) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_ClearPartyList(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_AddPartyToList(struct PartyData *party, const struct _XSESSION_INFO *info, const int publicSlots, const int privateSlots, const int occupiedPublicSlots, const int occupiedPrivateSlots) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_SetPartyQoS(struct PartyData *party, int slot, int ping, int uploadBandwidth) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_GetPartyInfo(struct PartyData *party, int index) -> struct _XSESSION_INFO*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_FindPartyByXNKId(struct PartyData *party, const struct XNKID *key) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_JoinAttemptFailed(struct PartyData *party, const int localControllerIndex, const char *errorMsg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Party_CountActivePlayersInSubparty(struct PartyData *party, int subpartyIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_AskToJoinParty(struct PartyData *party, int partyId, int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_CountPotentialHosts(struct PartyData *party) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_GetLobbySessionFlags(struct PartyData *party, int localControllerIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_SetDisplayMapName(const char *rawmapname) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_SetDisplayGameType(const char *rawgametype) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Party_SetDisplayMapPacks(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_SetMapPackFlags(struct PartyData *party, const int flags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_WriteAvailableMapPackFlags(int mapPackFlags, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_ReadAvailableMapPackFlags(struct msg_t *msg) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_SendVetoMsg(struct PartyData *party, const bool veto) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_SendHeadsetMsg(struct PartyData *party, const bool headsetPresent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_UpdateClanName(struct PartyData *party, const char *clanAbbrev) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Party_UpdateVoteString(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Party_UpdateStatusString(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Party_UpdateUIDvars(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_SetQoSProgress(struct PartyData *party, float percent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Party_GetQoSPercent(struct PartyData *party) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Party_GetSuccessfulSearchResults(struct PartyData *party) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Party_GetPotentialSearchResults(struct PartyData *party) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_GetStatus(struct PartyData *party, int *timeRemaining) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_GetNatType(struct PartyData *party, const unsigned __int64 xuid) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_SetNatTypeForXuid(struct PartyData *party, const unsigned __int64 xuid, int natType) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_IsRunning(struct PartyData *party) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_InParty(struct PartyData *party) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_AreWeHost(struct PartyData *party) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Party_FailedToJoinParty(struct PartyData *party, int localControllerIndex, struct netadr_t from, const char *errorMsg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Party_HandleFailedPartyJoinMsg(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Party_HandleOldPlaylistMsg(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Party_HandleNewPlaylistMsg(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Party_HandleFullPartyMsg(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Party_HandleEndingMsg(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Party_HandleVoiceFailMsg(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_ClearMembers(struct PartyData *party, const int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_HandlePacket(struct PartyData *party, const char *c, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_Init() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_Sleep(struct PartyData *party, int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_ChooseNextPlaylist(const int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_SendNewLobbyToAddr(struct PartyData *party, struct PartyInfo *newHost, const int controllerIndex, const char *challenge, struct netadr_t addr) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Party_SendNewLobbyToClient(struct PartyData *party, struct PartyInfo *newHost, const int localControllerIndex, const char *challenge, int clientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_BroadcastLobby(struct PartyData *party, struct PartyInfo *newHost, const int localControllerIndex, const char *challenge) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_Awake(struct PartyData *party, const int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_InactiveFrame(struct PartyData *party, int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Party_CopySessionToPresence(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_Frame(struct PartyData *party, int localControllerIndex, const int msec) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_ShowTeams(const int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_HideTeams(const int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_AreTeamsVisible() -> bool
{

}

#endif // __UNIMPLEMENTED__
