//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto CL_CanClient1ConnectToClient2(struct SessionData *session, const int client1Num, const int client2Num) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CanWeConnectToClient(struct SessionData *session, const int ourClientNum, const int theirClientNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CanClientConnectToUs(struct SessionData *session, const int ourClientNum, const int theirClientNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_CanClientTalkToAllClientsInList(struct SessionData *session, const int sender, const int clientBits) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_UpdateVoiceConnectivityBitsForRemoteUser(struct SessionData *session, const int ourClientNum, const int clientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_UpdateConnectivityBits(int localClientNum, struct SessionData *session, int connectivityBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_WeNowCantHearSomeone(int localClientNum, struct SessionData *session, int remoteClient) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetLocalClientSock(const int localClientNum, const enum connstate_t minConnState) -> enum netsrc_t
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SendPeerConnectivityTest(const int localClientNum, struct SessionData *session, const int clientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_RebuildConnectionToClient(struct SessionData *session, int localClientNum, int ourClientNum, int destClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SendVoiceTestPackets(int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_SendPeerVoiceData_Real(struct SessionData *session, const int localClientNum, const enum netsrc_t sock, const int clientNum, struct msg_t *msg, bool voiceData) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SendPeerVoiceData(struct SessionData *session, const int localClientNum, const enum netsrc_t sock, const int clientNum, struct msg_t *msg, bool voiceData) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_ServerIsTheOnlyWayToTalkToClient(struct SessionData *session, const int clientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_FindGoodRouteForClientList(struct SessionData *session, int *routeList, const int clientBits) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_FindGoodRouteForClientNum(struct SessionData *session, int *routeList, const int clientNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_BuildRouteList(struct SessionData *session, int localClientNum, int ourClientNum, int *routeList) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_WriteVoicePacket(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_VoiceConnectionTestPacket(int localClientNum, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_VoicePacket(int localClientNum, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ConnectionIsEstablished(struct SessionData *session, const int clientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_HasConnectionFailed(struct in_addr inaddr) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_FindRouteForClientNum(struct SessionData *session, const int clientNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SendRelayPacket(struct SessionData *session, int relayClientNum, int destinationClientNum, const char *message, bool voiceData) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_WritePeerToPeerOOBString(struct SessionData *session, int localControllerIndex, int clientNum, const char *message, bool voiceData) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_IsUsingVoice(const int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_IsPlayerTalking(struct SessionData *session, int localClientNum, int talkingClientIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_VoiceInitOnceForAll() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_VoiceTransmit(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_VoiceFrame(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ResetPlayerMuting(struct SessionData *session, int muteClientIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_MutePlayer(struct SessionData *session, int localClientNum, int muteClientIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_UnmutePlayer(struct SessionData *session, int localClientNum, int muteClientIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_IsClientBlockedByPrivacySettings(struct SessionData *session, int controllerIndex, int muteClientIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_IsPlayerMuted(struct SessionData *session, int localClientNum, int muteClientIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_IsPlayerUnmutable(struct SessionData *session, int localClientNum, int muteClientIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_TogglePlayerMute(struct SessionData *session, int localClientNum, int muteClientIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_CheckMutes(struct SessionData *session, int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ClearMutedList(struct SessionData *session) -> void
{

}

#endif // __UNIMPLEMENTED__
