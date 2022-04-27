//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto FX_SpawnSparkFountain_AllocOrFindCachedSparkFountain(struct FxSystem *system, struct FxEffect *effect, struct FxElem *elem, struct FxSparkFountain **outAllocedSparkFountain) -> enum FindSlotResult
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto frand01() -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto frand() -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vec3Rand(float *outVec) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RandomizeNormal(const float *inNormal, const float randFrac, float *outNormal) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SolveQuadraticForSmalestPositiveOrZero(float a, float b, float c) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CollideTrajectory(const float *pos, const float *vel, const float *gravity, float timeLeft, float *outPos, float *outNormal, float *outTime, float *fixedVel) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto InitTrajectories(const float *trajPos0Array, unsigned int trajCount, unsigned int maxCollisions, float *velDir, float velMin, float velMax, float velConeFrac, struct FxSpark *outSparks) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CollideTrajectories(unsigned int trajCount, unsigned int maxCollisions, float maxTime, float bounceFrac, float bounceRandFrac, float *gravity, struct FxSpark *outSparks) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SparkFountain_DoClusterPortion(struct FxSparkFountainCluster *cluster, const struct FxSparkFountainDef *fountainDef, int begin, int count) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnSparkFountain(struct FxSystem *system, struct FxEffect *effect, struct FxElem *elem, const struct FxElemDef *elemDef, int randomSeed) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_UpdateElement_SparkFountain(struct FxSystem *system, struct FxUpdateElem *update, struct FxElem *elem) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_DrawElem_SparkFountain_PopulateVertices(struct FxDrawState *draw, struct GfxPosTexVertex **inOutVerts, const float *times, const float *pos[0x3], float uMin, float uDelta, float vMin, float vDelta) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawElem_SparkFountain_GetBoostedTime(float boostTime, float boostFactor, float *outTMsec, float *outDTMsec, float tMsec) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawElem_SparkFountain(struct FxDrawState *draw) -> void
{

}

#endif // __UNIMPLEMENTED__
