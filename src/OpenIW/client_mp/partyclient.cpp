//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto PartyClient_CountMembersEvenIfInactive(struct PartyData *party) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyClient_CountMembers(struct PartyData *party) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyClient_RemovePartyMember(struct PartyData *party, int slot) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Party_CountTeamMembers(struct PartyData *party, int team) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyClient_GetMemberXuidBySlot(struct PartyData *party, int slot) -> unsigned __int64
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyClient_DisconnectFromHost(struct PartyData *party, int localControllerIndex, const char *reason) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyClient_HostTimedOut(struct PartyData *party, int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyClient_HostTimedOutMidGame(struct PartyData *party, int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyClient_CleanUpInviteSessions(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyClient_JoinParty(struct PartyData *party, const int localControllerIndex, struct netadr_t from, const char *challenge, unsigned __int64 xuid, const char *gamertag, const char *clanAbbrev) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyClient_UpdateRank(struct PartyData *party, int rank, int prestige) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyClient_UpdatePlayerCard(struct PartyData *party, unsigned int cardIconIndex, unsigned int cardTitleIndex, unsigned int cardNameplateIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyClient_UpdateVoiceBits(const int localControllerIndex, int ourClientNum, struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyClient_UpdateAvailableMapPackFlags(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyClient_UpdateIdentity(const int localControllerIndex, struct PartyData *party, const int slot) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyClient_ParsePartyStateHeaderData(struct PartyData *party, int localControllerIndex, struct msg_t *msg, struct netadr_t from, unsigned char numMembers, bool migrateHost) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyClient_ParseMemberListFromPacket(struct PartyData *party, int localControllerIndex, int partNum, struct msg_t *msg, struct netadr_t from, int memberStart, int numMembers) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyClient_DoneParsingPartyState(struct PartyData *party, int localControllerIndex, struct msg_t *msg, struct netadr_t from) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyClient_PreParsePartyState(struct PartyData *party, int localControllerIndex, struct msg_t *msg, struct netadr_t from) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyClient_ParsePartyStatePacket(struct PartyData *party, int localControllerIndex, int partNum, struct msg_t *msg, struct netadr_t from, bool migrateHost) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyClient_SetUpPartyForHost(struct PartyData *party, const int localControllerIndex, struct PartyHostDetails *hostInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyClient_MarkPacketReceived(struct PartyData *party, struct PartyHostDetails *partyHost) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyClient_SendHeartbeatAck(struct PartyData *party, int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyClient_HandleHeartbeat(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyClient_HandleHostAccept(struct PartyData *party, const int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyClient_HandleReconnect(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyClient_HandleNewLobbyInfo(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyClient_HandleEndParty(struct PartyData *party, const int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyClient_HaveAllPacketsForPartyState(struct PartyData *party) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyClient_ParsePartyStateMsg(struct PartyData *party, const int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyClient_HandlePartyStateMsg(struct PartyData *party, const int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyClient_HandleNotPresentMsg(struct PartyData *party, const int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyClient_HandleGoMsg(struct PartyData *party, const int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyClient_BecomePartyHost(struct PartyData *party, int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyClient_HandlePacket(struct PartyData *party, const char *c, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyClient_Frame(struct PartyData *party, const int localControllerIndex, const int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
