//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto FX_GetClientForSystem(const struct FxSystem *system) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_EffectToHandle(struct FxSystem *system, struct FxEffect *effect) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_EffectFromHandle(struct FxSystem *system, unsigned short handle) -> struct FxEffect*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_EffectFromIndex(struct FxSystem *system, volatile long index) -> struct FxEffect*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_PoolToHandle_Generic<FxTrailElem>(struct FxPool<FxTrailElem> *poolArray, struct FxTrailElem *item) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_PoolFromHandle_Generic<FxSparkFountainCluster>(struct FxPool<FxSparkFountainCluster> *poolArray, unsigned short handle) -> struct FxSparkFountainCluster*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_ElemToHandle(struct FxSystem *system, struct FxElem *elem) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_ElemFromHandle(struct FxSystem *system, unsigned short handle) -> struct FxElem*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_TrailElemToHandle(struct FxSystem *system, struct FxTrailElem *trailElem) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_TrailElemFromHandle(const struct FxSystem *system, unsigned short handle) -> struct FxTrailElem*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_TrailToHandle(struct FxSystem *system, struct FxTrail *trail) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_TrailFromHandle(struct FxSystem *system, unsigned short handle) -> struct FxTrail*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_BoltFromHandle(struct FxSystem *system, unsigned char handle) -> struct FxBolt*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_BoltToHandle(struct FxSystem *system, struct FxBolt *bolt) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_SparkCloudFromHandle(struct FxSystem *system, unsigned short handle) -> struct FxSparkCloud*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_SparkCloudFromHandle_Const(const struct FxSystem *system, unsigned short handle) -> const struct FxSparkCloud*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_SparkCloudToHandle(struct FxSystem *system, struct FxSparkCloud *sparkCloud) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_SparkFountainFromHandle(struct FxSystem *system, unsigned short handle) -> struct FxSparkFountain*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_SparkFountainFromHandle_Const(const struct FxSystem *system, unsigned short handle) -> const struct FxSparkFountain*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_SparkFountainToHandle(struct FxSystem *system, struct FxSparkFountain *sparkFountain) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_SparkFountainClusterFromHandle(struct FxSystem *system, unsigned short handle) -> struct FxSparkFountainCluster*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_SparkFountainClusterFromHandle_Const(const struct FxSystem *system, unsigned short handle) -> const struct FxSparkFountainCluster*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_SparkFountainClusterToHandle(struct FxSystem *system, struct FxSparkFountainCluster *sparkFountainCluster) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_AddRefToEffect(struct FxSystem *__formal, struct FxEffect *effect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_DelRefToEffect(struct FxSystem *system, struct FxEffect *effect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_GetEffectDef(const struct FxEffect *effect) -> const struct FxEffectDef*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_GetEffectElemDef(const struct FxEffect *effect, int index) -> const struct FxElemDef*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_AcquireEffectLock(struct FxEffect *effect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_ReleaseEffectLock(struct FxEffect *effect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_BeginIteratingOverEffects_Cooperative(struct FxSystem *system) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_EndIteratingOverEffects_Cooperative(struct FxSystem *system) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_WaitBeginIteratingOverEffects_Exclusive(struct FxSystem *system) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_BeginIteratingOverEffects_Exclusive(struct FxSystem *system) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto FX_EndIteratingOverEffects_Exclusive(struct FxSystem *system) -> void
{

}

#endif // __UNIMPLEMENTED__
