//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto NET_AdrToString(struct netadr_t a) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NetProf_PrepProfiling(struct netProfileInfo_t *prof) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NetProf_AddPacket(struct netProfileStream_t *pProfStream, int iSize, int bFragment) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NetProf_NewSendPacket(struct netchan_t *pChan, int iSize, int bFragment) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NetProf_NewRecievePacket(struct netchan_t *pChan, int iSize, int bFragment) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NetProf_UpdateStatistics(struct netProfileStream_t *pStream) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Net_DumpProfile_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Net_DisplayProfile(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_net_chan() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Netchan_Init(unsigned int port) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_GetMaxFragmentLength(struct netchan_t *chan) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Netchan_SetUpBuffers(struct netchan_t *chan, unsigned char *outgoingBuffer, int outgoingBufferSize, unsigned char *incomingBuffer, int incomingBufferSize) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Netchan_Setup(enum netsrc_t sock, struct netchan_t *chan, struct netadr_t adr, int qport, char *outgoingBuffer, int outgoingBufferSize, char *incomingBuffer, int incomingBufferSize, int remoteClientIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Netchan_TransmitNextFragment(struct netchan_t *chan) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Netchan_Transmit(struct netchan_t *chan, int length, const unsigned char *data) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Netchan_Process(struct netchan_t *chan, struct msg_t *msg) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_CompareBaseAdrSigned(struct netadr_t *a, struct netadr_t *b) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_CompareBaseAdr(struct netadr_t a, struct netadr_t b) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_CompareAdrSigned(struct netadr_t *a, struct netadr_t *b) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_CompareAdr(struct netadr_t a, struct netadr_t b) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_CompareXNAddr(struct XNADDR *a, struct XNADDR *b) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_IsLocalAddress(struct netadr_t adr) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_GetClientPacket(struct netadr_t *net_from, struct msg_t *net_message) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_GetServerPacket(struct netadr_t *net_from, struct msg_t *net_message) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto NET_GetServerLoopPacket_Real(struct netadr_t *net_from, struct msg_t *net_message) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto NET_GetClientLoopPacket_Real(enum netsrc_t sock, struct netadr_t *net_from, struct msg_t *net_message) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_GetLoopPacket_Real(enum netsrc_t sock, struct netadr_t *net_from, struct msg_t *net_message) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_GetLoopPacket(enum netsrc_t sock, struct netadr_t *net_from, struct msg_t *net_message) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto NET_SendServerLoopPacket(int port, int length, const void *data, struct netadr_t to) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto NET_SendClientLoopPacket(enum netsrc_t sock, int length, const void *data, struct netadr_t to) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_SendLoopPacket(enum netsrc_t sock, int length, const void *data, struct netadr_t to) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_DeferPacketToClient(struct netadr_t *net_from, struct msg_t *net_message) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_GetDeferredClientPacket(struct netadr_t *net_from, struct msg_t *net_message) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_SendPacket(enum netsrc_t sock, int length, const void *data, struct netadr_t to) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_SendVoiceDataPackets(enum netsrc_t sock, int dataLength, const void *data, int voiceDataLength, const void *voiceData, struct netadr_t to) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_OutOfBandPrint(enum netsrc_t sock, struct netadr_t adr, const char *data) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_OutOfBandData(enum netsrc_t sock, struct netadr_t adr, const unsigned char *format, int len) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_OutOfBandVoiceData(enum netsrc_t sock, struct netadr_t adr, unsigned char *format, int len, bool voiceData) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_StringToAdr(const char *s, struct netadr_t *a) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Int64ToString(__int64 int64, char *str) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Int128ToString(unsigned char *data, char *str) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StringToInt64(const char *str) -> __int64
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StringToInt128(const char *str, unsigned char *data) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XUIDToString(const unsigned __int64 *xuid, char *str) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StringToXUID(const char *str, unsigned __int64 *xuid) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XNAddrToString(const struct XNADDR *xnaddr, char *str) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StringToXNAddr(const char *str, struct XNADDR *xnaddr) -> void
{

}

#endif // __UNIMPLEMENTED__
