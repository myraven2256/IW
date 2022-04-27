//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto Party_PrintTeams(struct SubpartyInfo *subparties, int subpartyCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_UsingAssignedTeams(struct PartyData *party) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_CheckTeams(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_GetMaxFreeSlots(struct PartyData *party, int memberCount) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_ReadyClients(struct PartyData *party) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_PrintConnectivity(struct PartyData *party, const int clientNum, const int bits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ClearMember(struct PartyData *party, const int memberIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_ClearMembers(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_CountUninvitedPlayers(struct PartyData *party) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_CountInvitedPlayers(struct PartyData *party) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_FindFirstSlotByStatus(struct PartyData *party, int status) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_FindOldestSlotByStatus(struct PartyData *party, int status) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_CheckAllXNAddrs(struct PartyData *party, int baseclient) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_AddAnonymousMemberAtSlot(struct PartyData *party, const int slot, const char *challenge) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_CountOpenPublicSlots(struct PartyData *party) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_AddAnonymousMember(struct PartyData *party, struct netadr_t *addr, const char *challenge, bool invited) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_FindSubparties(struct PartyData *party, struct SubpartyInfo *subparties, int *subpartyCount, int *totalSkill) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_BuildRandomChallengeId(char *challenge) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_AnonymousAddRequest(struct PartyData *party, struct netadr_t from, int numPlayersJoining, bool invited, int numSubPartiesJoining, int *numPlayersPerParty) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_MapIsAcceptable(struct PartyData *party, const char *mapname) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_AssignTeam(struct PartyData *party, const int slot) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_SetMaxFreeSlots(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_ClearConnectivityBitForClient(struct PartyData *party, const int slot) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_PlayerJustConnected(struct PartyData *party, const int slot, const struct netadr_t addr) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_AddPlayerAtSlot(struct PartyData *party, const int slot, const struct netadr_t addr, const unsigned __int64 *xuid, const int remoteClientIndex, const struct XNKID *privatePartyId, const char *gamertag, const char *clanAbbrev, const bool headsetPresent, int rank, int prestige, unsigned int playerCardIcon, unsigned int playerCardTitle, unsigned int playerCardNameplate, int availableMapPackFlags, const bool invited, const int natType) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_ClaimAnonymousSpot(struct PartyData *party, const struct netadr_t addr, const unsigned __int64 *xuid, const int remoteClientIndex, const struct XNKID *privatePartyId, const char *challenge, const char *gamertag, const char *clanAbbrev, const bool headsetPresent, int rank, int prestige, unsigned int playerCardIcon, unsigned int playerCardTitle, unsigned int playerCardNameplate, int availableMapPackFlags, const char *gametype, const bool invited, const int natType) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_AddLocalPlayer(struct PartyData *party, const int localControllerIndex, const int slot) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_RemovePlayer(struct PartyData *party, const int memberIndex, const bool tellThem, const char *reason) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_GetMemberName(struct PartyData *party, const int clientNum) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_GamestateChanged(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_MarkMemberInfoDirty(struct PartyData *party, int dirtyMemberSlot) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_UpdatePlayerHiding(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_AllPartyMembersPresent(struct PartyData *party) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_CleanUpNonResponsiveQoS(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_GetGoodSlot(struct PartyData *party) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_QoSResultsRemain(struct PartyData *party) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_SetUpPotentialHost(struct PartyData *party, int localControllerIndex, struct PartyInfo *host, struct in_addr localAddr, unsigned short port, int partyIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_TestPotentialHost(struct PartyData *party, int localControllerIndex, int partyIndex, struct PartyInfo **host, struct in_addr *localAddr, unsigned short *port) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_FindAnotherGameToJoin(struct PartyData *party, int localControllerIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_SearchForGames(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_MemberInfoChanged(struct PartyData *party, int memberSlot) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_MarkPacketReceivedForClients(struct PartyData *party, const struct netadr_t from) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_ResetClientTimeouts(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_SyncVoiceDataForAllPlayers(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_UpdateVoiceConnectivityBits(struct PartyData *party, int memberIndex, int connectivityBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_SendGo(struct PartyData *party, int localControllerIndex, int partyMemberSlot, const char *mapname, const char *gametype) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_SetRoundScores(struct PartyData *party, const int memberIndex, const int score, const int deaths) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_ReadyTeams(struct PartyData *party, int memberCount) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_MakeTeams(struct PartyData *party, int memberCount) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_SetAssignedTeam(struct PartyData *party, const unsigned __int64 player, int team) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_PreMatch(struct PartyData *party, int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_StartTeamMatch(struct PartyData *party, int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto InitMapLoad_FastFile(const char *mapName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HostPreloadMap(const char *mapname, const char *gametype) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_StartMatch(struct PartyData *party, int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_TestTeamCreation_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_AddTestClient(struct PartyData *party, int slot, int privatePartyId) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_RemoveTestClient(struct PartyData *party, int slot) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_RemoveTestClient_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_AddTestClients_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_GetExpectedPlayerCount(struct PartyData *party) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_TimeoutMembers(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_WritePartyStateMember(struct PartyData *party, struct PartyMember *partyMember, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_WritePartyStateFullHeader(struct PartyData *party, int destinationMemberSlot, struct msg_t *msg, int totalParts) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_WritePartyStatePartHeader(struct PartyData *party, int destinationMemberSlot, struct msg_t *msg, const int partyStatePartNum, const int totalPackets) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_WritePartyStateHeader(struct PartyData *party, int destinationMemberSlot, struct msg_t *msg, const int partyStatePartNum, const int totalParts) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_WritePartyStateMembers(struct PartyData *party, int destinationMemberSlot, struct msg_t *msg, const int partyStatePartNum, const int totalPackets) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_RemapClientAddr(struct PartyData *party, const int clientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_SendPartyStateToPlayer(struct PartyData *party, int clientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_SendPartyStates(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_SendHeartbeats(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_DropPlayersToMatchSlots(struct PartyData *party, const int publicSlots, const int privateSlots) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_TellClientToRejoin(struct PartyData *party, struct netadr_t from) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_BroadcastLobbyToParty(struct PartyData *party, struct PartyInfo *newHost, const int localControllerIndex, const char *challenge) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_SetupParty(struct PartyData *party, int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_StartParty(struct PartyData *party, int localControllerIndex, int flags, int numPrivateSlots, int numPublicSlots) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_CreatePartyPresenceComplete(int localControllerIndex, struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_StartPartyComplete(int localControllerIndex, struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_UpdateRank(struct PartyData *party, int rank, int prestige) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_UpdatePlayerCard(struct PartyData *party, unsigned int cardIconIndex, unsigned int cardTitleIndex, unsigned int cardNameplateIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_UpdateAvailableMapPackFlags(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_UpdateIdentity(const int localControllerIndex, struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_AutoStart(struct PartyData *party, int localControllerIndex, const int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_HandleHeartbeatAck(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_GenerateClientBitfield(struct PartyData *party) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_HandleClientPartyStateAckForMember(int partyClientNum, struct PartyData *party, int localControllerIndex, struct netadr_t from) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_HandleClientPartyStateAck(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_HandleJoinPartyRequest(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_IsStoppingAfterRound(struct PartyData *party) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HasSubparty(struct PartyData *party, struct XNKID *privatePartyId) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_HandleClientHandshake(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_HandleVetoMsg(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_HandleHeadsetMsg(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_HandleClanMsg(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_HandleIHearMsg(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_HandleCantHearMsg(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_HandleClientDisconnect(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_HandleRankMsg(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_HandlePlayerCardMsg(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_HandleMapPacksMsg(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyHost_HandleIdentMsg(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_HandlePacket(struct PartyData *party, const char *c, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_ClearVetoes(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_SanityCheck(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_Frame(struct PartyData *party, const int localControllerIndex, const int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyHost_ResetState(struct PartyData *party, const int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
