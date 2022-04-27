//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto CG_GetEntityBModelContents(const struct centity_s *cent) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_GetEntityBModelBounds(const struct centity_s *cent, struct Bounds *bounds, struct Bounds *absBounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_GetEntityDobjBounds(const struct centity_s *cent, const struct DObj *dobj, struct Bounds *absBounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_LocationalTraceDObj(int localClientNum, int entIndex) -> struct DObj*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_LocationTraceDobjCalcPose(const struct DObj *dobj, const struct cpose_t *pose, int *partBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsEntityLinked(int localClientNum, int entIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_EntityNeedsLinked(int localClientNum, int entIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UnlinkEntity(int localClientNum, int entIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_LinkEntity(int localClientNum, int entIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_ClipMoveToEntity(const struct moveclip_t *clip, int entIndex, struct trace_t *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_ClipMoveToEntities_r(const struct moveclip_t *clip, unsigned short sectorIndex, const float *p1, const float *p2, struct trace_t *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_ClipMoveToEntities(const struct moveclip_t *clip, struct trace_t *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_PointTraceToEntity(const struct pointtrace_t *clip, int entIndex, struct trace_t *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_PointTraceToEntities_r(const struct pointtrace_t *clip, unsigned short sectorIndex, const float *p1, const float *p2, struct trace_t *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_PointTraceToEntities(const struct pointtrace_t *clip, struct trace_t *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_BrushModelSightTrace(int oldHitNum, const float *start, const float *end, const struct Bounds *bounds, unsigned int bmodelIndex, int brushmask) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_WorldTrace(struct trace_t *results, const float *start, const float *end, const struct Bounds *bounds, int brushmask) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_Trace(struct trace_t *results, const float *start, const float *end, const struct Bounds *bounds, int passEntityNum, int contentMask, bool locational, bool staticModels) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_LocationalTrace(struct trace_t *results, const float *start, const float *end, int passEntityNum, int contentMask) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_LocationalTraceEntitiesOnly(struct trace_t *results, const float *start, const float *end, int passEntityNum, int contentMask) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_TraceCapsule(struct trace_t *results, const float *start, const float *end, const struct Bounds *bounds, int passEntityNum, int contentMask) -> void
{

}

#endif // __UNIMPLEMENTED__
