//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto FX_GetUpdateElemDef(const struct FxUpdateElem *update) -> const struct FxElemDef*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_LerpSpatialFrame(const struct FxSpatialFrame *fromFrame, const struct FxSpatialFrame *toFrame, float lerp, struct FxSpatialFrame *resultFrame) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_SpawnTrailLoopingElems(struct FxSystem *system, struct FxEffect *effect, struct FxTrail *trail, const struct FxSpatialFrame *frameBegin, const struct FxSpatialFrame *frameEnd, int msecWhenPlayed, int msecUpdateBegin, int msecUpdateEnd, float distanceTravelledBegin, float distanceTravelledEnd, float arcDistanceTravelled) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_LimitStabilizeTimeForElemDef_SelfOnly(const struct FxElemDef *elemDef, bool needToSpawnSystem) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_LimitStabilizeTimeForEffectDef_Recurse(const struct FxEffectDef *remoteEffectDef, int originalUpdateTime) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_LimitStabilizeTimeForElemDef_Recurse(const struct FxElemDef *elemDef, bool needToSpawnSystem, int originalUpdateTime) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_LimitStabilizeTimeForElemDef(const struct FxElemDef *elemDef, int originalUpdateTime) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_SpawnLoopingElems(struct FxSystem *system, struct FxEffect *effect, int elemDefIndex, const struct FxSpatialFrame *frameBegin, const struct FxSpatialFrame *frameEnd, int msecWhenPlayed, int msecUpdateBegin, int msecUpdateEnd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_SpawnOneShotElems(struct FxSystem *system, struct FxEffect *effect, int elemDefIndex, const struct FxSpatialFrame *frameWhenPlayed, int msecWhenPlayed) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_ProcessLooping(struct FxSystem *system, struct FxEffect *effect, int elemDefFirst, int elemDefCount, const struct FxSpatialFrame *frameBegin, const struct FxSpatialFrame *frameEnd, int msecWhenPlayed, int msecUpdateBegin, int msecUpdateEnd, float distanceTravelledBegin, float distanceTravelledEnd, float arcDistanceTravelled) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnAllFutureLooping(struct FxSystem *system, struct FxEffect *effect, int elemDefFirst, int elemDefCount, const struct FxSpatialFrame *frameBegin, const struct FxSpatialFrame *frameEnd, int msecWhenPlayed, int msecUpdateBegin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_BeginLooping(struct FxSystem *system, struct FxEffect *effect, int elemDefFirst, int elemDefCount, const struct FxSpatialFrame *frameWhenPlayed, const struct FxSpatialFrame *frameNow, int msecWhenPlayed, int msecNow) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_TriggerOneShot(struct FxSystem *system, struct FxEffect *effect, int elemDefFirst, int elemDefCount, const struct FxSpatialFrame *frameWhenPlayed, int msecWhenPlayed) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_StartNewEffect(struct FxSystem *system, struct FxEffect *effect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_EmitEffect(struct FxSystem *system, unsigned short owner, const struct FxEffectDef *def, int msecAtSpawn, const float *origin, const float *axis[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_ProcessEmitting(struct FxSystem *system, struct FxUpdateElem *update, unsigned char emitResidual, const struct FxSpatialFrame *frameBegin, const struct FxSpatialFrame *frameEnd) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_IntegrateVelocityFromZeroInSegment(const struct FxElemVelStateInFrame *statePrev, const struct FxElemVelStateInFrame *stateNext, float *weight, const float *amplitudeScale, float integralScale, float *pos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_IntegrateVelocityAcrossSegments(int elemDefFlags, const struct orientation_t *orient, const struct FxElemVelStateSample *velState0, const struct FxElemVelStateSample *velState1, float t0, float t1, const float *amplitudeScale, float integralScale, float *posLocal, float *posWorld) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_IntegrateVelocityInSegmentInFrame(const struct FxElemVelStateInFrame *statePrev, const struct FxElemVelStateInFrame *stateNext, const float *weight, const float *amplitudeScale, float integralScale, float *pos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_IntegrateVelocityInSegment(int elemDefFlags, const struct orientation_t *orient, const struct FxElemVelStateSample *velState, float t0, float t1, const float *amplitudeScale, float integralScale, float *posLocal, float *posWorld) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_IntegrateVelocity(const struct FxUpdateElem *update, float t0, float t1, float *posLocal, float *posWorld) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_NextElementPosition_NoExternalForces(struct FxUpdateElem *update, int msecUpdateBegin, int msecUpdateEnd, float *posLocal, float *posWorld) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_NextElementPosition(struct FxUpdateElem *update, int msecUpdateBegin, int msecUpdateEnd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_TraceHitSomething(const struct trace_t *trace) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GetAtRestFraction(const struct FxUpdateElem *update, float msec) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_SpawnImpactEffect(struct FxSystem *system, const struct FxUpdateElem *update, const struct FxEffectDef *impactEffect, int msecOnImpact, const float *impactNormal) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_CollisionResponse(struct FxSystem *system, struct FxUpdateElem *update, const struct trace_t *trace, int msecUpdateBegin, int msecUpdateEnd, float *xyzWorldOld) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_UpdateElementPosition_CollidingStep(struct FxSystem *system, struct FxUpdateElem *update, int msecUpdateBegin, int msecUpdateEnd, float *xyzWorldOld) -> enum FxUpdateResult
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_UpdateElementPosition_Colliding(struct FxSystem *system, struct FxUpdateElem *update) -> enum FxUpdateResult
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_UpdateElementPosition_NonColliding(struct FxUpdateElem *update) -> enum FxUpdateResult
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_UpdateElementPosition_Local(struct FxUpdateElem *update) -> enum FxUpdateResult
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_UpdateElementPosition(struct FxSystem *system, struct FxUpdateElem *update) -> enum FxUpdateResult
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GetQuatForOrientation(const struct FxEffect *effect, const struct FxElemDef *elemDef, const struct FxSpatialFrame *frameNow, struct orientation_t *orient, float *quat) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_SpawnDeathEffect(struct FxSystem *system, const struct FxUpdateElem *update) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_UpdateElement_SetupUpdate(struct FxEffect *effect, int msecUpdateBegin, int msecUpdateEnd, int elemDefIndex, int elemAtRestFraction, int msecElemBegin, bool isTrail, int elemSequence, float *elemOrigin, struct FxUpdateElem *update) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_UpdateElement_TruncateToElemEnd(struct FxUpdateElem *update, enum FxUpdateResult *outUpdateResult) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_UpdateElement_HandleEmitting(struct FxSystem *system, struct FxElem *elem, struct FxUpdateElem *update, const float *elemOriginPrev, enum FxUpdateResult *outUpdateResult) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_UpdateElement_TruncateToElemBegin(struct FxUpdateElem *update, enum FxUpdateResult *outUpdateResult) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_UpdateElement_UpdatePositionWithBaseVel(struct FxSystem *system, struct FxUpdateElem *update, float *elemBaseVel, enum FxUpdateResult *outUpdateResult) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_UpdateTrailElement(struct FxSystem *system, struct FxEffect *effect, struct FxTrail *trail, struct FxTrailElem *trailElem, int msecUpdateBegin, int msecUpdateEnd) -> enum FxUpdateResult
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_UpdateElement_RecordSparkCloud(struct FxSystem *system, struct FxUpdateElem *update, struct FxElem *elem) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_UpdateElement(struct FxSystem *system, struct FxEffect *effect, struct FxElem *elem, int msecUpdateBegin, int msecUpdateEnd) -> enum FxUpdateResult
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetBoltTemporalBits(int localClientNum, int dobjHandle) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GetBoneOrientation_IsDObjEntityValid(int localClientNum, int dobjHandle) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetBoneOrientation(int localClientNum, int dobjHandle, int boneIndex, struct orientation_t *orient) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_UpdateSpotLightEffectPartial(struct FxSystem *system, struct FxEffect *effect, int msecUpdateBegin, int msecUpdateEnd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_UpdateEffectPartialForClass(struct FxSystem *system, struct FxEffect *effect, int msecUpdateBegin, int msecUpdateEnd, unsigned short elemHandleStart, unsigned short elemHandleStop, unsigned int elemClass) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_UpdateEffectPartialTrail(struct FxSystem *system, struct FxEffect *effect, struct FxTrail *trail, int msecUpdateBegin, int msecUpdateEnd, float distanceTravelledEnd, unsigned short trailElemHandleStart, unsigned short trailElemHandleStop, struct FxSpatialFrame *frameNow) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateEffectPartial(struct FxSystem *system, struct FxEffect *effect, int msecUpdateBegin, int msecUpdateEnd, float distanceTravelledBegin, float distanceTravelledEnd, float arcDistanceTravelled, unsigned short *elemHandleStart, unsigned short *elemHandleStop, unsigned short *trailElemStart, unsigned short *trailElemStop) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_UpdateBoltSceneStatus(const int localClientNum, struct FxEffect *effect, int dobjHandle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_UpdateEffectBolt(struct FxSystem *system, struct FxEffect *effect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GetArcDistanceTravelledThisFrame(struct FxEffect *effect) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GetDistanceTravelledThisFrame(struct FxEffect *effect) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_UpdateEffect(struct FxSystem *system, struct FxEffect *effect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_UpdateSpotLightEffect(struct FxSystem *system, struct FxEffect *effect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_ShouldProcessEffect(struct FxSystem *system, struct FxEffect *effect, bool nonBoltedEffectsOnly) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_Update(struct FxSystem *system, int localClientNum, bool nonBoltedEffectsOnly) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateSpotLight(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateNonDependent(struct FxCmd *cmd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RunPhysics(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateRemaining(struct FxCmd *cmd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_BeginUpdateView(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_EndUpdate(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_AddNonSpriteDrawSurfs(struct FxCmd *cmd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SortEffects(struct FxCmd *cmd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_RewindTo_Setup(int localClientNum, int time) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_RewindTo_Finish(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RewindTo(int localClientNum, int time) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_RestartEffects_Begin() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_RestartEffects_Finish() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SetNextUpdateCamera(int localClientNum, const struct refdef_t *refdef, const struct RefdefView *view, float zfar, bool isThermalVision) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SetNextUpdateTime(int localClientNum, int time) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FillUpdateCmd(int localClientNum, struct FxCmd *cmd) -> void
{

}

#endif // __UNIMPLEMENTED__
