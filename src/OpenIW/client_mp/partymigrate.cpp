//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto Party_IsUserRegistered(struct PartyData *party, int clientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetOurNominee(struct PartyData *party) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetOurNomineeUpload(struct PartyData *party) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetOurNomineeNAT(struct PartyData *party) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetOurNomineeLSPConnection(struct PartyData *party) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetOurNomineeXUID(struct PartyData *party) -> unsigned __int64
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyMigrate_SendNomineeMsg(struct PartyData *party, int localControllerIndex, int ourClientNum, int destinationClientNum, unsigned __int64 xuid, int uploadSpeed, int NATtype, bool lspConnected) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyMigrate_SendOurNominee(struct PartyData *party, int localControllerIndex, int ourClientNum, int clientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyMigrate_TellNewHost(struct PartyData *party, int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyMigrate_AnnounceOurNominee(struct PartyData *party, int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyMigrate_SetOurNominee(struct PartyData *party, int localControllerIndex, int ourClientNum, int nominee, bool lspConnected, int nomineeUpload, int nomineeNAT) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyMigrate_CanAnyoneTalkToThisGuy(struct SessionData *session, int destClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyMigrate_CanWeTalkToAllClients(struct PartyData *party, int localControllerIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyMigrate_DoWeHavePartyData(struct PartyData *party, int localControllerIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyMigrate_DoWeHaveNecessaryMapPacks(struct PartyData *party, int localControllerIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyMigrate_MigrateActive(struct PartyData *party) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyMigrate_CanWeHost(struct PartyData *party, int localControllerIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyMigrate_ClearMemberData(struct PartyData *party, int clientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyMigrate_StartTimeout(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyMigrate_ClearData(struct PartyData *party, int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyMigrate_StartNegotiation(struct PartyData *party, int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IsTheirNomineeBetter(struct PartyData *party, int ourClientNum, int theirNominee, int theirNomineeUpload, int theirNomineeNAT, bool theirNomineeLSPConnected) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyMigrate_HandleNomineeMsg(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyMigrate_HandleFindBestCommand(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyMigrate_HandleToMsg(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyMigrate_HandleSessionInfoMsg(struct PartyData *party, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyMigrate_HandlePacket(struct PartyData *party, const char *c, int localControllerIndex, struct netadr_t from, struct msg_t *msg) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyMigrate_SwapHostAndClient(struct PartyData *party, int clientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyMigrate_CheckBeforeContinuingToHost(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyMigrate_SendSessionInfo(struct PartyData *party, const int clientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyMigrate_RestartServer(struct PartyData *party, const int oldHost) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyMigrate_To(struct PartyData *party, const int newHost) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PartyMigrate_DetermineBestHost(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyMigrate_HostMigrationEnabled(struct PartyData *party) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyMigrate_Frame(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyMigrate_RequestFindBestHost(struct PartyData *party) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PartyMigrate_HostTo_f() -> void
{

}

#endif // __UNIMPLEMENTED__
