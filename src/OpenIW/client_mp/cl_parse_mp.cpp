//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_cl_parse() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SHOWNET(struct msg_t *msg, char *s) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SavePredictedOriginForServerTime(struct clientActive_t *cl, const int serverTime, const float *predictedOrigin, const float *predictedVelocity, const float *viewangles, int bobCycle, int movementDir) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_GetClientArchiveIndexForServerTime(struct clientActive_t *cl, const int serverTime, int *resultIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetPredictedOriginForServerTime(struct clientActive_t *cl, const int serverTime, float *predictedOrigin, float *predictedVelocity, int *bobCycle, int *movementDir) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetPredictedViewangleForServerTime(struct clientActive_t *cl, const int serverTime, float *viewangles) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetSelectedLocationForServerTime(struct clientActive_t *cl, const int serverTime, float *selectedLocation) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetSelectedLocationAngleForServerTime(struct clientActive_t *cl, const int serverTime, float *selectedLocationAngle) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_DeltaEntity(struct clientActive_t *cl, struct msg_t *msg, const int time, struct clSnapshot_t *frame, int newnum, struct entityState_s *old) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_CopyOldEntity(struct clientActive_t *cl, struct clSnapshot_t *frame, struct entityState_s *old) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DeltaClient(struct clientActive_t *cl, struct msg_t *msg, const int time, struct clSnapshot_t *frame, int newnum, struct clientState_s *old, int unchanged) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_ParsePacketEntities(struct clientActive_t *cl, struct msg_t *msg, const int time, struct clSnapshot_t *oldframe, struct clSnapshot_t *newframe) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_ParsePacketClients(struct clientActive_t *cl, struct msg_t *msg, const int time, struct clSnapshot_t *oldframe, struct clSnapshot_t *newframe) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_ReadOverlayBits(struct msg_t *msg, int numChangedEnts) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_ParseSnapshot(int localClientNum, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ServerIdChanged(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SystemInfoChanged(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ParseMapCenter(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_ParseGamestate(int localClientNum, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_ParseCommandString(int localClientNum, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_ParseMatchData(const int localClientNum, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ParseServerMessage(int localClientNum, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
