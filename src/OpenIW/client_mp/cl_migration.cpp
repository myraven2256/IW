//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CL_SetVerboseMigrationState(const int localClientNum, const char *state) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_UpdateMigrationProfile(enum clientMigState_t oldState, enum clientMigState_t newState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetLocalClientMigrationString(const int localClientNum) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_Migrate(int localClientNum, struct _XSESSION_INFO *hostInfo, struct netadr_t addr, int numPublicSlots, int numPrivateSlots) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ping(const int localClientNum, struct netadr_t to) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_MigrationFrame(const int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_MigrationInit() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PingAck(const int localClientNum, struct netadr_t to, const int time) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SendToHost(const int localClientNum, const char *cmd, const unsigned char *data, int len) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetHostRating(const int localClientNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HandleStartMsg(const int localClientNum, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HandleSaveDataMsg(const int localClientNum, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HandlePingMsg(const int localClientNum, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HandlePingAckMsg(const int localClientNum, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HandleHeaderMsg(const int localClientNum, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HandleStateMsg(const int localClientNum, struct netadr_t from, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_MigrationPacket(const int localClientNum, const char *cmd, struct netadr_t from, struct msg_t *msg) -> bool
{

}

#endif // __UNIMPLEMENTED__
