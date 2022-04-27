//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_DynEntityCollWorld() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DynEnt_GetCollWorld(enum DynEntityCollType collType) -> struct DynEntityCollWorld*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetCollSector(enum DynEntityCollType collType, unsigned int sectorIndex) -> struct DynEntityCollSector*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_ClearCollWorld(enum DynEntityCollType collType) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DynEnt_Validate(enum DynEntityCollType collType, const struct DynEntityColl *dynEntColl) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DynEnt_ValidateWorldSector_r(enum DynEntityCollType collType, unsigned short sectorIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_ValidateCollWorldClient() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DrawDebugBox2D(float *mins, float *maxs, float height) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DynEnt_DrawCollSector(struct DynEntityCollWorld *world, float height, float *mins, float *maxs, struct DynEntityCollSector *sector) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_DrawCollWorld(enum DynEntityCollType collType, float height) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DynEnt_AllocCollSector(enum DynEntityCollType collType, const float *mins, const float *maxs) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DynEnt_AddToCollSector(enum DynEntityCollType collType, unsigned int dynEntId, unsigned short sectorIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DynEnt_SortCollSector(enum DynEntityCollType collType, unsigned short sectorIndex, const float *mins, const float *maxs) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_UnlinkEntity(enum DynEntityCollType collType, unsigned int dynEntId) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_LinkEntity(enum DynEntityCollType collType, unsigned int dynEntId, const float *absMins, const float *absMaxs) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetContents(const struct DynEntityDef *dynEntDef) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DynEnt_GetLocalBounds(const struct DynEntityDef *dynEntDef, struct Bounds *bounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetSphereDist(const struct DynEntityPose *dynEntPose, const float *origin) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetCylinderDist(const struct DynEntityPose *dynEntPose, const float *origin) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_IsInCone(const struct DynEntityDef *dynEntDef, const struct GfxPlacement *pose, const float *origin, float coneAngleCos, const float *coneDir) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_EntityInSphere(const struct DynEntityDef *dynEntDef, const struct DynEntityPose *dynEntPose, const struct DynEntityAreaParms *areaParms) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_EntityInCylinder(const struct DynEntityDef *dynEntDef, const struct DynEntityPose *dynEntPose, const struct DynEntityAreaParms *areaParms) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_PointTraceToModel(const struct DynEntityDef *dynEntDef, const struct DynEntityPose *dynEntPose, const struct pointtrace_t *clip, struct trace_t *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_PointTraceToBrush(const struct DynEntityDef *dynEntDef, const struct DynEntityPose *dynEntPose, const struct pointtrace_t *clip, struct trace_t *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_ClipMoveTraceToBrush(const struct DynEntityDef *dynEntDef, const struct DynEntityPose *dynEntPose, const struct moveclip_t *clip, struct trace_t *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_SetPhysObjCollision(const struct DynEntityDef *dynEntDef, int physId, bool loadingSaveGame) -> void
{

}

#endif // __UNIMPLEMENTED__
