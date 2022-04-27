//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto SV_GetNextEnt(const int entCount, const int firstEntIndex, int curIndex) -> const struct entityState_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SV_GetCachedEntityByNumber(const int entityNum, const int entCount, const int firstEntityIndex) -> const struct entityState_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SV_EntLinkedToEnt(const struct entityState_s *childEnt, int parentEntIndex, const int entCount, const int firstEntityIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SV_ShouldEntityGoToClient(const struct entityState_s *ent, const int clientNum, const int entCount, const int firstEntityIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SV_WriteEndOfEntitiesMarker(struct SnapshotInfo_s *snapInfo, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SV_EmitPacketEntities(struct SnapshotInfo_s *snapInfo, const int viewClientNum, const int oldFrameViewClientNum, const int oldEntCount, const int firstOldEntityIndex, const int oldFrameTimeDelta, const int newEntCount, const int firstNewEntityIndex, const int newFrameTimeDelta, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SV_WriteEndOfClientsMarker(struct SnapshotInfo_s *snapInfo, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SV_EmitPacketClients(struct SnapshotInfo_s *snapInfo, const int from_num_clients, const int from_first_client, const int to_num_clients, const int to_first_client, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SV_WriteOverlayBits(const int clientNum, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_WriteSnapshotToClient(struct client_t *client, struct msg_t *msg, const bool sendEntities) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_UpdateServerCommandsToClient(struct client_t *client, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_UpdateServerCommandsToClient_PreventOverflow(struct client_t *client, struct msg_t *msg, int iMsgSize) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SV_PrintServerCommandsForClient(struct client_t *client) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SV_RateMsec(struct client_t *client, int messageSize) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SV_WriteDemoMessage(struct client_t *client, unsigned char *svCompressedBuf, int compressedSize) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SV_WriteDemoMessage2(struct client_t *client, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SendMessageToClient(struct msg_t *msg, struct client_t *client) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_BeginClientSnapshot(struct client_t *client, struct msg_t *msg, unsigned char *snapshotMsgBuf) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_EndClientSnapshot(struct client_t *client, struct msg_t *msg, unsigned char *snapshotMsgBuf) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SetServerStaticHeader() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetServerStaticHeader() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ShouldArchiveSnapshot() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_SendClientMessages() -> void
{

}

#endif // __UNIMPLEMENTED__
