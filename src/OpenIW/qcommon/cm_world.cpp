//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_cm_world() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_AllocWorldSector(const float *mins, const float *maxs) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_ClearWorld() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_LinkWorld() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_SaveWorld(unsigned char *buf) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_LoadWorld(unsigned char *buf) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_UnlockTree() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_ValidateEntity(struct svEntity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_ValidateEntities(struct svEntity_s *entities) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_ValidateTree(unsigned short nodeIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_ValidateWorld() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_RemoveEntityFromNode(struct svEntity_s *ent, struct worldSector_s *node) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_IsNodeEmpty(const struct worldSector_s *node) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_FreeNewlyEmptyNodes(struct worldSector_s *node, unsigned short nodeIndex) -> struct worldSector_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_UpdateNodeContentsAfterUnlink(struct worldSector_s *node) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_UnlinkEntity(struct svEntity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_AddEntityToNode(struct svEntity_s *ent, unsigned int childNodeIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_SortNode(unsigned int nodeIndex, const float *mins, const float *maxs) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_LinkEntity(struct svEntity_s *ent, const float *absmin, const float *absmax, int linkcontents) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_AreaEntities_r(unsigned int nodeIndex, struct areaParms_t *ap) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_AreaEntities(const struct Bounds *bounds, int *entityList, int maxcount, int contentmask) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_PointTraceStaticModels_r(struct locTraceWork_t *tw, unsigned int parentNodeIndex, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_PointTraceStaticModels(struct trace_t *results, const float *start, const float *end, int contentmask) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_PointTraceStaticModelsComplete_r(const struct staticmodeltrace_t *clip, unsigned int parentNodeIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_PointTraceStaticModelsComplete(const float *start, const float *end, int contentmask) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_ClipMoveToEntities_r(const struct moveclip_t *clip, unsigned short nodeIndex, const float *p1, const float *p2, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_ClipMoveToEntities(const struct moveclip_t *clip, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_ClipSightTraceToEntities_r(const struct sightclip_t *clip, unsigned short nodeIndex, const float *p1, const float *p2) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_ClipSightTraceToEntities(struct sightclip_t *clip) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_PointTraceToEntities_r(struct pointtrace_t *clip, unsigned short nodeIndex, const float *p1, const float *p2, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_PointTraceToEntities(struct pointtrace_t *clip, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_PointSightTraceToEntities_r(struct sightpointtrace_t *clip, unsigned short nodeIndex, const float *p1, const float *p2) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_PointSightTraceToEntities(struct sightpointtrace_t *clip) -> int
{

}

#endif // __UNIMPLEMENTED__
