//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto RMsg_DropAllPacketsForClient(const int clientSlot) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RMsg_FindSlotForAddr(struct netadr_t *to) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RMsg_DropAllPacketsToAddr(struct netadr_t *to) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RMsg_Init() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RMsg_AddMessageAtMsgSlot(const int clientSlot, const int msgSlot, struct netadr_t *to, const unsigned char *msg, const int length) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RMsg_ShiftMessagesBackInBuffer(struct reliableClient *client, int bytesShifted) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RMsg_AddMessageForClient(int clientSlot, struct netadr_t *to, const unsigned char *msg, int length) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RMsg_AddMessage(struct netadr_t *to, struct msg_t *msg) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RMsg_AddPrint(struct netadr_t *to, const char *line) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RMsg_AddRMsgsToPacket(const int clientSlot, struct msg_t *outMsg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RMsg_SendMessages() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RMsg_AckSequence(struct netadr_t *from, unsigned char sequenceNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RMsg_FindOldestSeq(const int clientSlot) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RMsg_FindMessageSlot(const int clientSlot, unsigned char sequenceNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RMsg_CountOutstandingMessages(const int clientSlot) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RMsg_AckMsgSlot(struct reliableClient *client, int clientSlot, int msgSlot) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RMsg_MarkPacketReceived(struct netadr_t *from, unsigned char sequenceNum) -> void
{

}

#endif // __UNIMPLEMENTED__
