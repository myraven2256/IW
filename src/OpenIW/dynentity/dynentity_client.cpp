//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto DynEntCl_RegisterDvars() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DynEntCl_UpdateBModelWorldBounds(const struct DynEntityDef *dynEntDef, const struct GfxPlacement *pose) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DynEntCl_LinkModel(unsigned int dynEntId) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DynEntCl_LinkBrush(unsigned int dynEntId) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_InitEntities(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_ProcessEntities() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_Shutdown(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_UnlinkEntity(unsigned int dynEntId, enum DynEntityDrawType drawType) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DynEntCl_PointTrace_r(enum DynEntityDrawType drawType, const struct pointtrace_t *clip, unsigned int sectorIndex, float *p1, float *p2, struct trace_t *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_PointTrace(const struct pointtrace_t *clip, struct trace_t *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DynEntCl_ClipMoveTrace_r(const struct moveclip_t *clip, unsigned int sectorIndex, float *p1, float *p2, struct trace_t *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_ClipMoveTrace(const struct moveclip_t *clip, struct trace_t *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DynEntCl_SphereEntities_r(enum DynEntityDrawType drawType, unsigned int sectorIndex, struct DynEntityAreaParms *areaParms) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DynEntCl_CylinderEntities_r(enum DynEntityDrawType drawType, unsigned int sectorIndex, struct DynEntityAreaParms *areaParms) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_SphereEntities(enum DynEntityDrawType drawType, const float *origin, float radius, int contentMask, unsigned int dynEntMaxCount, unsigned short *dynEntList) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_CylinderEntities(enum DynEntityDrawType drawType, const float *origin, float radius, int contentMask, unsigned int dynEntMaxCount, unsigned short *dynEntList) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DynEntCl_CreatePhysObj(const struct DynEntityDef *dynEntDef, const struct GfxPlacement *pose) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DynEntCl_PlayEventFx(const struct FxEffectDef *def, const float *origin, const float *axis[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DynEntCl_PlayImpactEffects(int localClientNum, int sourceEntityNum, int surfaceFlags, const float *hitPos, const float *hitNormal) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DynEntCl_Damage(int localClientNum, unsigned int dynEntId, enum DynEntityDrawType drawType, const float *hitPos, const float *hitDir, int damage) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DynEntCl_EventNeedsProcessed(int localClientNum, int sourceEntityNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_EntityImpactEvent(const struct trace_t *trace, int localClientNum, int sourceEntityNum, const float *start, const float *hitPos, bool isMelee) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DynEntCl_TestPhysicsEntities(int localClientNum, int sourceEntityNum, const float *start, const float *end, bool isMelee) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_DynEntImpactEvent(int localClientNum, int sourceEntityNum, const float *start, const float *end, int damage, bool isMelee) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_MeleeEvent(int localClientNum, int sourceEntityNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DynEntCl_CompareDynEntsForExplosion(const struct DynEntSortStruct &ent1, const struct DynEntSortStruct &ent2) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DynEntCl_GetClosestEntities(enum DynEntityDrawType drawType, const float *origin, float radius, unsigned short *hitEnts, bool isCylinder, int isBullet) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_ExplosionEvent(int localClientNum, bool isCylinder, const float *origin, float innerRadius, float outerRadius, const float *impulse, float forceScale, int innerDamage, int outerDamage, int isBullet) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_JitterEvent(int localClientNum, const float *origin, float innerRadius, float outerRadius, float minDisplacement, float maxDisplacement) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_DestroyEvent(int localClientNum, unsigned int dynEntId, enum DynEntityDrawType drawType, const float *hitPos, const float *hitDir) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_WakeUpAroundPlayer(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
