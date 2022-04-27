//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_debugsockets_host() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto WelcomePacketInit() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ClientsInit() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWSocketClose(unsigned int sock) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWSocketAccept(unsigned int sock, struct sockaddr_in *addr) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWSocketSetNotBlocking(unsigned int sock) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWSocketIPFromAddr(struct sockaddr_in *clientAddr, unsigned char *IPResult) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetTimestampMSecs() -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetTimestampSecs() -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWSocketLatestError_IsBlocking() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWSocketLatestError_IsConnectionAborted() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWSocketIsValid(unsigned int sock) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWSocketTransferResultIsValid(int value) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWSocketDataSend(unsigned int sock, void *buff, int buffSize, int transferedSoFar, int totalNeeded) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWSocketDataRecv(unsigned int sock, void *buff, int buffSize, int transferedSoFar, int totalNeeded) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SocketData__BLOCKING(function *transferFunc, unsigned int sock, void *buff, int buffLimit, int totalNeeded) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWSocketDataSendBLOCKING(unsigned int sock, void *buff, int buffLimit, int totalNeeded) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CreateHostSocket(unsigned short portNum) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ClientPrintIP(struct rdbgClientInfo *ci) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ClientDisconnect(struct rdbgClientInfo *ci) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ClientGetEmpty() -> struct rdbgClientInfo*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ClientStateSet_Idle(struct rdbgClientInfo *ci) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ClientStateSet_FatalError(struct rdbgClientInfo *ci, const char *reason) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ClientStateSet_Leaving(struct rdbgClientInfo *ci) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HeaderInit(struct rdbgMsgHeader_t *header, enum rdbgMsgType_t type, unsigned long bodyLength) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ClientHeaderInit(struct rdbgClientInfo *ci, enum rdbgMsgType_t type, unsigned long bodyLength) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HeaderIsValid(struct rdbgMsgHeader_t *header) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HeaderProcessAndValidateReceived(struct rdbgMsgHeader_t *header) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HeaderXferIsFinished(struct rdbgClientInfo *ci) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HeaderRecieveFragments(struct rdbgClientInfo *ci) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HeaderSendFragments(struct rdbgClientInfo *ci) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HeaderRecieve(struct rdbgClientInfo *ci) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HeaderOnlySendHandler(struct rdbgClientInfo *ci) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GeneralSendIsFinished(struct rdbgClientInfo *ci) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GeneralReceiveIsFinished(struct rdbgClientInfo *ci) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GeneralRecieveGetFragments(struct rdbgClientInfo *ci) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GeneralRecieveSetup(struct rdbgClientInfo *ci, enum rdbgClientState_t newState) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UnknownMsgRecvHandler(struct rdbgClientInfo *ci) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UnknownMsgRecvSetup(struct rdbgClientInfo *ci) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TabCompletePrepareMatching(const char *prefix) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TabCompleteSearchCallback(const char *txt) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TabCompleteQsortFunc(const void *e0, const void *e1) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TabCompleteSendSetup(struct rdbgClientInfo *ci) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TabCompleteRecvHandler(struct rdbgClientInfo *ci) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TabCompleteSendHandler(struct rdbgClientInfo *ci) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetDvarValueAsString(const char *dvarName) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DvarSendSetup(struct rdbgClientInfo *ci) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DVarRequestRecvHandler(struct rdbgClientInfo *ci) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DvarSendHandler(struct rdbgClientInfo *ci) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TextPool_Init(struct rdbgTextPool_t *pool) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TextPool_AddText(struct rdbgTextPool_t *pool, const char *text) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConsoleLogThreadShieldUp() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConsoleLogThreadShieldDown() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FrameThreadShieldUp() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FrameThreadShieldDown() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConsoleLogAssertShieldUp() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConsoleLogIsUpToDate(struct rdbgClientInfo *ci) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConsoleLogPosIsValid(int logGen, int logPos) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConsoleLogIsInValidState(struct rdbgClientInfo *ci) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConsoleLogResetMarkers(struct rdbgClientInfo *ci) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConsoleLogGetLength(int fromPos, int fromGen, int toPos, int toGen) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConsoleLogSendSegment(struct rdbgClientInfo *ci, int startPos, int len) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConsoleLogSendSetup(struct rdbgClientInfo *ci) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConsoleLogSendIsFinished(struct rdbgClientInfo *ci) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConsoleLogSendChunks(struct rdbgClientInfo *ci) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConsoleLogSendHandler(struct rdbgClientInfo *ci) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CommandShouldEcho(const char *cmd) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CommandRecvHandler(struct rdbgClientInfo *ci) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LightEditRecvHandler(struct rdbgClientInfo *ci) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto KeepAliveSendSetup(struct rdbgClientInfo *ci) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetStateFromNewHeader(struct rdbgClientInfo *ci) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ClientFrame_Console(struct rdbgClientInfo *ci) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ClientFrame_LightEdit(struct rdbgClientInfo *ci) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ClientFrame_Connecting(struct rdbgClientInfo *ci) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ClientFrame(struct rdbgClientInfo *ci) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ClientsAcceptNew(unsigned int hostSocket) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ClientsFrame() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AssertState_IsUnusable(struct rdbgClientInfo *ci) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AssertState_SendNeedsFlushed(struct rdbgClientInfo *ci) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FlushSendForAssert(struct rdbgClientInfo *ci) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ClientAssertHandler(struct rdbgClientInfo *ci, const char *assertText) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_RemoteDbgHostInitLogBuffer() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_RemoteDbgHostInitSockets() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_RemoteDbgHostFrame() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_RemoteDbgHostShutdownSockets() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_RemoteDbgHostWriteToLog(int channel, const char *text) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto NET_RemoteDbgHostWaitForStableConsoleConnection() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_RemoteDbgHostAssertHandler(const char *assertText) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_RemoteDbgSendMessageBlocking(void *ciUser, int msgType, const unsigned char *buffer, unsigned int length) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NET_RemoteDbgDisconnectClient(void *ciUser) -> bool
{

}

#endif // __UNIMPLEMENTED__
