//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto CM_SetupTraceCapsuleWork(struct TraceCapsuleWork *work, const float *start, const float *end, const struct Bounds *bounds, const float *origin, const float *angles, float *axis[0x3]) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Trace_GetEntityHitId(const struct trace_t *trace) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Trace_GetDynEntHitId(const struct trace_t *trace, enum DynEntityDrawType *drawType) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Trace_GetGlassHitId(const struct trace_t *trace) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_GetTraceThreadInfo(struct TraceThreadInfo *threadInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_BrushModelIsValid(unsigned int bmodelIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_GetBrushModel(unsigned int bmodelIndex) -> const struct cmodel_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_ContentsOfBrushModel(unsigned int bmodelIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RotatePoint(float *point, const float *matrix[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TransposeMatrix(const float *matrix[0x3], float *transpose[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TestBoxInBrush(const struct traceWork_t *tw, unsigned int brushnum, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TestInLeafBrushNode_r(const struct traceWork_t *tw, struct cLeafBrushNode_s *node, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TestInLeafBrushNode(struct traceWork_t *tw, struct cLeaf_t *leaf, struct trace_t *trace) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TestInLeaf(struct traceWork_t *tw, struct cLeaf_t *leaf, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TestCapsuleInCapsule(const struct TraceCapsuleWork *work, const struct Bounds *capsule, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_PositionTest(struct traceWork_t *tw, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto intersect_aabb_aabb(struct __vector4 mn1, struct __vector4 mx1, struct __vector4 mn2, struct __vector4 mx2) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto intersect_line_box(struct __vector4 P, struct __vector4 D, struct __vector4 lens, struct __vector4 &DR) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto intersect_line_aabb(const struct traceWork_t *tw, struct __vector4 mn, struct __vector4 mx) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TraceThroughBrush(const struct traceWork_t *tw, unsigned int brushnum, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TraceThroughBrushes(const struct traceWork_t *tw, unsigned short *brushesBegin, unsigned short *brushesEnd, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TraceThroughLeafBrushNode_r(const struct traceWork_t *tw, struct cLeafBrushNode_s *node, const float *p1_, const float *p2, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TraceThroughLeafBrushNode(const struct traceWork_t *tw, struct cLeaf_t *leaf, struct trace_t *trace) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TraceThroughLeaf(const struct traceWork_t *tw, struct cLeaf_t *leaf, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TraceSphereThroughSphere(const struct TraceCapsuleWork *work, const float *start, const float *end, const float *stationary, float radius, int contents, struct trace_t *trace) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TraceCylinderThroughCylinder(const struct TraceCapsuleWork *work, const float *stationary, float stationaryHalfHeight, float radius, int contents, struct trace_t *trace) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TraceCapsuleThroughCapsule(const struct TraceCapsuleWork *work, const struct Bounds *capsule, int contents, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TraceThroughTree(const struct traceWork_t *tw, int num, const float *p1_, const float *p2, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_SetAxialCullOnly(struct traceWork_t *tw) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_BrushModelTraceSetup(struct traceWork_t *tw, const float *start, const float *end, const struct Bounds *bounds, int brushmask, struct CM_WorldTraceCallbacks *callbacks) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_BrushModelTraceFinish(struct traceWork_t *tw, struct trace_t *results, unsigned int bmodelIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_BrushModelTraceRotatedCapsule(struct trace_t *results, const float *start, const float *end, const struct Bounds *bounds, const float *capsuleUp, unsigned int bmodelIndex, int brushmask, struct CM_WorldTraceCallbacks *callbacks) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_BrushModelTraceVerticalCapsule(struct trace_t *results, const float *start, const float *end, const struct Bounds *bounds, unsigned int bmodelIndex, int brushmask, struct CM_WorldTraceCallbacks *callbacks) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_WorldTrace(struct trace_t *results, const float *start, const float *end, const struct Bounds *bounds, int brushmask, struct CM_WorldTraceCallbacks *callbacks) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_WorldTraceSimple_IsGlassSolid(unsigned int glassPieceIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_WorldTraceSimple(struct trace_t *results, const float *start, const float *end, const struct Bounds *bounds, int brushmask) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BrushModelIsGlassSolid(unsigned int glassPieceIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TransformedBrushModelTraceRotated(struct trace_t *results, const float *start, const float *end, const struct Bounds *bounds, unsigned int bmodelIndex, int brushmask, const float *origin, const float *matrix[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TransformedBrushModelTrace(struct trace_t *results, const float *start, const float *end, const struct Bounds *bounds, unsigned int bmodelIndex, int brushmask, const float *origin, const float *angles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TransformedCapsuleTrace(struct trace_t *results, const float *start, const float *end, const struct Bounds *bounds, const struct Bounds *capsule, int contents, const float *origin, const float *angles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TransformedBrushModelTraceExternal(struct trace_t *results, const float *start, const float *end, const struct Bounds *bounds, unsigned int bmodelIndex, int brushmask, const float *origin, const float *angles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TransformedCapsuleTraceExternal(struct trace_t *results, const float *start, const float *end, const struct Bounds *bounds, const struct Bounds *capsule, int contents, const float *origin, const float *angles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_SightTraceThroughBrush(const struct traceWork_t *tw, unsigned int brushnum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_SightTraceThroughLeafBrushNode_r(const struct traceWork_t *tw, struct cLeafBrushNode_s *node, const float *p1_, const float *p2) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_SightTraceThroughLeafBrushNode(const struct traceWork_t *tw, struct cLeaf_t *leaf) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_SightTraceThroughLeaf(const struct traceWork_t *tw, struct cLeaf_t *leaf, struct trace_t *trace) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_SightTraceSphereThroughSphere(const struct TraceCapsuleWork *work, const float *start, const float *stationary, float radius) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_SightTraceCylinderThroughCylinder(const struct TraceCapsuleWork *work, const float *stationary, float stationaryHalfHeight, float radius) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_SightTraceCapsuleThroughCapsule(const struct TraceCapsuleWork *work, const struct Bounds *capsule) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_SightTraceThroughTree(const struct traceWork_t *tw, int num, const float *p1_, const float *p2, struct trace_t *trace) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_BrushModelSightTrace(int oldHitNum, const float *start, const float *end, const struct Bounds *bounds, unsigned int bmodelIndex, int brushmask, struct CM_WorldTraceCallbacks *callbacks) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_GetBrushBoundsForHitNum(int hitNum, struct Bounds *outBounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TransformedBrushModelSightTrace(int hitNum, const float *start, const float *end, const struct Bounds *bounds, unsigned int bmodelIndex, int brushmask, const float *origin, const float *angles) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TransformedCapsuleSightTrace(const float *start, const float *end, const struct Bounds *bounds, const struct Bounds *capsule, const float *origin, const float *angles) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_IsGlassSolid(unsigned int glassPieceIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TraceCmd(void *cmdData) -> void
{

}

#endif // __UNIMPLEMENTED__
