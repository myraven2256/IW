//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_xenon_net() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Xenon_SendPacketToSocket(unsigned int sock, const unsigned char *buffer, int size, const struct sockaddr *to) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Xenon_SendPacket(const unsigned char *buffer, int size, const struct sockaddr *to) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Xenon_BroadcastPacket(const char *buffer, int size) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Xenon_GetPacketFromSocket(unsigned int sock, char *data, int maxsize, struct sockaddr_in *from) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Xenon_GetPacket(char *data, int maxsize, struct sockaddr_in *from) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Xenon_GetXnAddrForInAddr(const struct in_addr inaddr, struct XNADDR *xnaddr, struct XNKID *xnkid) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Xenon_GetLocalAddressForEncryptedConnection(const struct XNADDR *xnaddr, const struct XNKID *sessionId, struct in_addr *localAddr, unsigned short *port) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Xenon_RegisterRemoteXenon(const struct _XSESSION_INFO *info, struct in_addr *localAddr, unsigned short *port) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Xenon_GetXNAddr() -> struct XNADDR*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_Init() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Xenon_GetXNAddrForLive() -> struct XNADDR*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_GetPacket(struct netadr_t *net_from, struct msg_t *net_message) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SendVoiceDataPacket(int dataLength, const void *gamedata, int voiceDataLength, const void *voiceData, struct netadr_t to) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_SendPacket(int length, const void *voiddata, struct netadr_t to) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto NET_GetLocalAddress() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto NET_IPSocket(const char *net_interface, int port, int protocol) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Xenon_SendLSPPacket(const unsigned char *buffer, int size, struct netadr_t *to) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Xenon_ConnectToLSP(struct in_addr addr, int port) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Xenon_GetLSPPacket(char *data, int maxsize, struct sockaddr_in *from) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_GetLSPPacket(struct netadr_t *net_from, struct msg_t *net_message) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_OpenIP() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_Config(int enableNetworking) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_Restart() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_Sleep(int msec) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_IsLANAddress(struct netadr_t adr) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_ShowIP() -> void
{

}

#endif // __UNIMPLEMENTED__
