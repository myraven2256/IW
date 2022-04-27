//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto GetRumbleGlobals(int localClientNum) -> struct RumbleGlobals*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Rumble_Strcpy(unsigned char *member, const char *keyValue) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ParseRumbleGraph(struct RumbleGraph *graph, const char *buffer, const char *fileName) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ReadRumbleGraph(struct RumbleGraph *graph, const char *rumbleFileName) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LoadRumbleGraph(struct RumbleGraph *rumbleGraphArray, struct RumbleInfo *info, const char *highRumbleFileName, const char *lowRumbleFileName) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_LoadRumble(struct RumbleGraph *rumbleGraphArray, struct RumbleInfo *info, const char *name, int rumbleNameIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RegisterRumbles(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DrawActiveRumbles(int localClientNum, const struct ActiveRumble *activeRumbleArray) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto InvalidateActiveRumble(struct ActiveRumble *ar) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RemoveInactiveRumbles(int localClientNum, struct ActiveRumble *activeRumbleArray) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ShouldNotRumble(int localClientNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CalcActiveRumbles(int localClientNum, struct ActiveRumble *activeRumbleArray, const float *rumbleReceiverPos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateRumble(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetRumbleInfoIndexFromName(int localClientNum, const char *rumbleName) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FindClosestToDyingActiveRumble(const struct cg_s *cgameGlob, const struct ActiveRumble *activeRumbleArray) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetDuplicateRumbleIfExists(const struct cg_s *cgameGlob, struct ActiveRumble *arArray, const struct RumbleInfo *info, bool loop, enum RumbleSourceType type, int entityNum, const float *pos) -> struct ActiveRumble*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto NextAvailableRumble(const struct cg_s *cgameGlob, struct ActiveRumble *arArray) -> struct ActiveRumble*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PlayRumbleInternal(int localClientNum, const char *rumbleName, bool loop, enum RumbleSourceType type, int entityNum, const float *pos, float scale, bool updateDuplicates) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayRumbleOnEntity(int localClientNum, const char *rumbleName, int entityNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayRumbleOnPosition(int localClientNum, const char *rumbleName, const float *pos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayRumbleLoopOnEntity(int localClientNum, const char *rumbleName, int entityNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayRumbleLoopOnPosition(int localClientNum, const char *rumbleName, const float *pos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayRumbleOnClient(int localClientNum, const char *rumbleName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayRumbleOnClientSafe(int localClientNum, const char *rumbleName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayRumbleOnClientScaledWithUpdate(int localClientNum, const char *rumbleName, float scale) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayLoopRumbleOnClient(int localClientNum, const char *rumbleName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_StopRumble(int localClientNum, int entityNum, const char *rumbleName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_StopAllRumbles(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetRumbleReceiver(int localClientNum, int entityNum, const float *position) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawRumbleDebug(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RumbleGraphEventSaveToFile(const struct RumbleDevguiGraphInfo *graphInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RumbleGraphEventCallback(const struct DevGraph *graph, enum DevEventType event, int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RumbleGraphTextCallback(const struct DevGraph *graph, const float inputX, const float inputY, char *text, const int textLength) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto InitDevguiRumbleGraphInteral(const char *rumbleName, struct RumbleGraph *rumbleGraph, struct RumbleInfo *rumbleInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_InitDevguiRumbleGraph(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
