//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto FX_InterlockedDecrement(volatile long *minuend) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_fx_system() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_AllocateClientMemory(int maxLocalClients) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FreeClientMemory() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpotLightIsAttachedToDobj(int localClientNum, const struct DObj *obj) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetSystem(int clientIndex) -> struct FxSystem*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetSystemBuffers(int clientIndex) -> struct FxSystemBuffers*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_AllocPool_Generic<FxElem>(volatile long *firstFreeIndex, struct FxPool<FxElem> *pool, volatile long *activeCount) -> struct FxElem*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_FreePool_Generic<FxTrail>(struct FxTrail *item, volatile long *firstFreeIndex, struct FxPool<FxTrail> *pool, volatile long *activeCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_AllocElem(struct FxSystem *system) -> struct FxElem*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_AllocTrailElem(struct FxSystem *system) -> struct FxTrailElem*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_AllocTrail(struct FxSystem *system) -> struct FxTrail*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_AllocBolt(struct FxSystem *system) -> struct FxBolt*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_AllocSparkCloud(struct FxSystem *system) -> struct FxSparkCloud*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_AllocSparkFountain(struct FxSystem *system) -> struct FxSparkFountain*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_AllocSparkFountainCluster(struct FxSystem *system) -> struct FxSparkFountainCluster*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_InitPool_Generic<FxElem>(volatile long *firstFree, struct FxPool<FxElem> *poolArray) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_ClassForElemType(unsigned char elemType) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_ResetSystem(struct FxSystem *system) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_LinkSystemBuffers(struct FxSystem *system, struct FxSystemBuffers *systemBuffers) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_InitSystem(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ShutdownSystem(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_RelocatePointer<FxVisState const>(const struct FxVisState **pointer, int relocationDistance) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RelocateSystem(struct FxSystem *system, int relocationDistance) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_CullElemSpawnEnabled() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_CullTrailElem(const struct FxCamera *camera, const struct FxElemDef *elemDef, const float *origin, unsigned char sequence) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_ViewElemForSpawn(const struct FxCamera *camera, const struct FxElemDef *elemDef, const float *origin) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_EffectHasSideEffects(const struct FxElemDef *elemDef) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_EffectNoLongerReferenced(struct FxSystem *system, struct FxEffect *remoteEffect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_RunGarbageCollection_FreeSpotLight(struct FxSystem *system, unsigned short effectHandle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_RunGarbageCollection_FreeTrails(struct FxSystem *system, struct FxEffect *effect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_RunGarbageCollection_FreeSparkFountains(struct FxSystem *system, struct FxEffect *effect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_RunGarbageCollection_FreeBolt(struct FxSystem *system, struct FxEffect *effect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RunGarbageCollection(struct FxSystem *system) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_EffectAffectsGameplay(const struct FxEffectDef *remoteEffectDef) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_SetEffectRandomSeed(struct FxEffect *effect, const struct FxEffectDef *remoteDef) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnEffect_AllocTrailsAndFountains(struct FxSystem *system, struct FxEffect *effect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_IsSpotLightEffect(struct FxSystem *system, const struct FxEffectDef *def) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_CanAllocSpotLightEffect(const struct FxSystem *system) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_CanAllocBolt(const struct FxSystem *system) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_SpawnEffect_AllocSpotLightEffect(struct FxSystem *system, struct FxEffect *effect) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CalculateLighting(const float *origin, unsigned char *lighting) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnEffect(struct FxSystem *system, const struct SpawnEffectInfo *info) -> struct FxEffect*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnOrientedEffectWithViewmodelInfo(int localClientNum, const struct FxEffectDef *def, int msecBegin, const float *origin, const float *axis[0x3], unsigned int markEntnum, bool markGivenModelsOnly, bool markViewmodel, int markViewmodelClientIndex) -> struct FxEffect*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnOrientedEffect(int localClientNum, const struct FxEffectDef *def, int msecBegin, const float *origin, const float *axis[0x3]) -> struct FxEffect*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_AssertAllocatedEffect(int localClientNum, struct FxEffect *effect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_PlayOrientedEffectWithMarkEntity(int localClientNum, const struct FxEffectDef *def, int startMsec, const float *origin, const float *axis[0x3], unsigned int markEntnum, bool markGivenModelsOnly) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_PlayOrientedEffect(int localClientNum, const struct FxEffectDef *def, int startMsec, const float *origin, const float *axis[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_PlayOrientedEffectWithMarkViewmodel(int localClientNum, const struct FxEffectDef *def, int startMsec, const float *origin, const float *axis[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_NeedsBoltUpdate(const struct FxEffectDef *def) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_SpawnBoltedEffect(int localClientNum, const struct FxEffectDef *def, int msecBegin, int dobjHandle, int boneIndex) -> struct FxEffect*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_StopBoltedEffects(int localClientNum, const struct FxEffectDef *defHandle, unsigned int dobjHandle, unsigned int boneIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_PlayBoltedEffect(int localClientNum, const struct FxEffectDef *def, int startMsec, int dobjHandle, int boneIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GetTrailHandleList_Last(struct FxSystem *system, struct FxEffect *effect, unsigned short *outHandleList, int *outTrailCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_EffectRestartLooping(struct FxSystem *system, struct FxEffect *effect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_EffectStopLooping(struct FxSystem *system, struct FxEffect *effect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_RetriggerEffect(int localClientNum, struct FxEffect *effect, int msecBegin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ThroughWithEffect(int localClientNum, struct FxEffect *effect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_PreventRewind(struct FxSystem *system, struct FxEffect *effect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_StopEffect(struct FxSystem *system, struct FxEffect *effect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_RemoveAllEffectElems(struct FxSystem *system, struct FxEffect *effect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_KillEffect(struct FxSystem *system, struct FxEffect *effect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_KillEffectDef(int localClientNum, const struct FxEffectDef *def) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_KillEffectDefNewerThan(int localClientNum, const struct FxEffectDef *def, int time) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_KillAllEffects(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_IsEffectDone(const struct FxEffect *effect) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_RandomlyRotateAxis(const float *axisIn[0x3], int randomSeed, float *axisOut[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_SpawnRunner(struct FxSystem *system, struct FxEffect *effect, const struct FxElemDef *remoteElemDef, const struct FxSpatialFrame *effectFrameWhenPlayed, int randomSeed, int msecWhenPlayed) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_SpawnModelPhysics(struct FxSystem *system, struct FxEffect *effect, const struct FxElemDef *elemDef, int randomSeed, struct FxElem *elem) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GetOriginForElem(struct FxEffect *effect, const struct FxElemDef *elemDef, const struct FxSpatialFrame *effectFrameWhenPlayed, int randomSeed, float *outOrigin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnTrailElem_NoCull(struct FxSystem *system, struct FxEffect *effect, struct FxTrail *trail, const struct FxSpatialFrame *effectFrameWhenPlayed, int msecWhenPlayed, float distanceWhenPlayed) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnTrailElem_Cull(struct FxSystem *system, struct FxEffect *effect, struct FxTrail *trail, const struct FxSpatialFrame *effectFrameWhenPlayed, int msecWhenPlayed, float distanceWhenPlayed) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_SpawnSound(int localClientNumber, struct FxEffect *effect, const struct FxElemDef *elemDef, const struct FxSpatialFrame *effectFrameWhenPlayed, int randomSeed, int msecWhenPlayed) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnSpotLightElem(struct FxSystem *system, struct FxElem *elem) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SpawnElem(struct FxSystem *system, struct FxEffect *effect, int elemDefIndex, const struct FxSpatialFrame *effectFrameWhenPlayed, int msecWhenPlayed, int sequence) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FreeElem(struct FxSystem *system, unsigned short elemHandle, struct FxEffect *effect, unsigned int elemClass) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FreeTrailElem(struct FxSystem *system, unsigned short trailElemHandle, struct FxEffect *effect, struct FxTrail *trail) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FreeSpotLightElem(struct FxSystem *system, unsigned short elemHandle, struct FxEffect *effect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetClientVisibility(int localClientNum, const float *start, const float *end) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetClientEffectIndex(int clientIndex, struct FxEffect *effect) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetClientEffectByIndex(int clientIndex, int index) -> struct FxEffect*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GetGlassVisInfo() -> struct FxGlassVisInfo*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ErrorCleanup() -> void
{

}

#endif // __UNIMPLEMENTED__
