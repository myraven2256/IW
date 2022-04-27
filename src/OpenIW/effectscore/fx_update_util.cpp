//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto FX_TransformPosFromLocalToWorld(const struct FxSpatialFrame *frame, const float *posLocal, float *posWorld) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_OffsetSpawnOrigin(const struct FxSpatialFrame *effectFrame, const struct FxElemDef *elemDef, int randomSeed, float *spawnOrigin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetOriginForTrailElem(const struct FxElemDef *elemDef, const struct FxTrail *localTrail, const struct FxSpatialFrame *effectFrameWhenPlayed, int randomSeed, float *outOrigin, float *outRight, float *outUp) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetSpawnOrigin(const struct FxSpatialFrame *effectFrame, const struct FxElemDef *elemDef, int randomSeed, float *spawnOrigin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpatialFrameToOrientation(const struct FxSpatialFrame *frame, struct orientation_t *orient) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpatialFrameSetIdentity(struct FxSpatialFrame *frame) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpatialFrameInvert(const struct FxSpatialFrame *in, struct FxSpatialFrame *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpatialFrameMultiply(const struct FxSpatialFrame *in0, const struct FxSpatialFrame *in1, struct FxSpatialFrame *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetOrientation(const struct FxElemDef *elemDef, const struct FxSpatialFrame *frameAtSpawn, const struct FxSpatialFrame *frameNow, int randomSeed, struct orientation_t *orient) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GetVelocityAtTimeInFrame(const struct FxElemVelStateInFrame *statePrev, const struct FxElemVelStateInFrame *stateNext, const float *rangeLerp, const float *weight, float *velocity) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetVelocityAtTime(const struct FxElemDef *elemDef, int randomSeed, float msecLifeSpan, float msecElapsed, const struct orientation_t *orient, const float *baseVel, float *velocity) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_OrientationPosToWorldPos(const struct orientation_t *orient, const float *pos, float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_OrientationPosFromWorldPos(const struct orientation_t *orient, const float *pos, float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_AddVisBlocker(const struct FxSystem *system, const float *posWorld, float radius, float opacity) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ToggleVisBlockerFrame(struct FxSystem *system, struct FxSystem *remoteSystem) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CullSphere(const struct FxCamera *camera, unsigned int frustumPlaneCount, const float *posWorld, float radius) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_AnglesToOrientedAxis(const float *anglesInRad, const struct orientation_t *orient, float *axisOut[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetElemAxis(const struct FxElemDef *elemDef, int randomSeed, const struct orientation_t *orient, float msecElapsed, float *axis[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
