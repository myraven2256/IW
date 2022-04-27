//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CM_CullBox(const struct traceWork_t *tw, struct __vector4 boundsMidPoint, struct __vector4 boundsHalfSize) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_IsEdgeWalkable(int triIndex, int edgeIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TracePointThroughTriangle(const struct traceWork_t *tw, const unsigned short *indices, const float *verts[0x3], struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TraceSphereThroughEdge(const struct traceWork_t *tw, const float *sphereStart, const float *v0, const float *v0_v1, struct trace_t *trace) -> enum SphereEdgeTraceResult
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TraceSphereThroughVertex(const struct traceWork_t *tw, bool isWalkable, const float *sphereStart, const float *v, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TraceCapsuleThroughTriangle(const struct traceWork_t *tw, int triIndex, const unsigned short *indices, const float *verts[0x3], struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_ClosestPointOnTri(const float *pt, const float *v0, const float *e0, const float *e1, float a00, float a01, float a11, float *ptOnTri) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_IsPointOverTriangle(const float *pt, const float *v0, const float *e0, const float *e1, double a00, double a01, double a11, double det) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_DistanceSquaredFromPointToTriangle(const float *pt, const unsigned short *indices, const float *verts[0x3]) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_DistanceSquaredBetweenSegments(const float *start0, const float *delta0, const float *start1, const float *delta1) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_DoesCapsuleIntersectTriangle(const float *start, const float *end, float radiusSq, const unsigned short *indices, const float *verts[0x3]) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_PositionTestCapsuleInTriangle(const struct traceWork_t *tw, const unsigned short *indices, const float *verts[0x3], struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TraceSphereThroughBorder(const struct traceWork_t *tw, const struct CollisionBorder *border, float offsetZ, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TraceCapsuleThroughBorder(const struct traceWork_t *tw, struct CollisionBorder *border, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_PartitionChecked(const struct traceWork_t *tw, unsigned int partitionIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TraceThroughAabbTree_Hit(const struct traceWork_t *tw, const struct CollisionAabbTree *aabbTree, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TraceThroughAabbTree_Iterate(const struct traceWork_t *tw, const struct CollisionAabbTree *aabbTree, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_PositionTestInAabbTree_r(const struct traceWork_t *tw, struct CollisionAabbTree *aabbTree, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TraceThroughAabbTree(const struct traceWork_t *tw, const struct CollisionAabbTree *aabbTree, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_SightTraceThroughAabbTree(const struct traceWork_t *tw, const struct CollisionAabbTree *aabbTree, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_MeshTestInLeaf(const struct traceWork_t *tw, struct cLeaf_t *leaf, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_RayTriangleIntersect(const float *orig, const float *dir, const float *vert1, const float *vert2, const float *vert3, float *pt, float *pu, float *pv) -> bool
{

}

#endif // __UNIMPLEMENTED__
