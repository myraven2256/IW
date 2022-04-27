//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Voice_XUIDIsRegisteredWithXHV(unsigned __int64 *xuids, unsigned long count, unsigned __int64 x) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_FindUser(const struct SessionData *session, const unsigned __int64 xuid) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_GetClientXUID(struct SessionData *session, const int clientNum) -> unsigned __int64
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_CheckXHVSync(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_Init(struct SessionData *session) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Voice_IsMicEnabled(const struct SessionData *session, const int controllerIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Voice_IsMicEnabledInAnySession(const int controllerIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_EnableMic(struct SessionData *session, int port) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_DisableMic(struct SessionData *session, int port) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_DisableLocalMics(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Voice_SetFriendFlag(int localControllerIndex, struct SessionData *session, const int clientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_SetAllFriendFlags(int localControllerIndex, struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_IsClientAFriend(struct SessionData *session, const int clientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_EnableMicIfAllowed(struct SessionData *session, int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_RegisterRemotePlayer(int localControllerIndex, struct SessionData *session, const int clientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_UnregisterRemotePlayer(struct SessionData *session, const int slot) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_ClearRemoteTalkers(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_GetConnectedPlayerList(const struct SessionData *session, unsigned __int64 *playerList) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_GetConnectedPlayerCount(const struct SessionData *session) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_IncomingVoiceData(const struct SessionData *session, int clientNum, unsigned char *data, int size) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_GetLocalVoiceData(struct SessionData *session, const int clientNum, struct ClientVoicePacket_t *voiceData) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_IsXuidTalking(struct SessionData *session, int localControllerIndex, unsigned __int64 xuid) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_IsLocalClientTalking(struct SessionData *session, int localClientIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_GetTalkingCount(struct SessionData *session, const int localControllerIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_IsHeadsetPresent(struct SessionData *session, const int localControllerIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_Shutdown(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Voice_IsPlayerGloballyMuted(const int localControllerIndex, const unsigned __int64 player) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_IsMemberMuted(struct SessionData *session, const int localControllerIndex, const unsigned __int64 player) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_IsMemberUnmutable(struct SessionData *session, const int localControllerIndex, const unsigned __int64 player) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_MuteMember(struct SessionData *session, const int clientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Voice_UnmuteMember(struct SessionData *session, const int clientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
