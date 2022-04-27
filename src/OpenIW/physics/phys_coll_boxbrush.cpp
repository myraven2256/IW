//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Phys_DrawPoly(enum PhysWorld worldIndex, const struct Poly *poly, const float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_DrawPolyTransformed(enum PhysWorld worldIndex, const struct Poly *poly, const float *color, const float *pos, const float *R[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AddContact(struct Results *results) -> struct dContactGeom*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_AddContactData(struct Results *results, float depth, const float *normal, const float *pos, int surfaceFlags) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CircularRemoveRange(float *xyz[0x3], int pointCount, int begin, int end) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto InsertPoint(float *xyz[0x3], int pointCount, int maxPoints, int insertAfter) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPolyOrientation(const float *polyNormal, const float *poly[0x3], unsigned int ptCount) -> enum PolyOrientation
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_GetChoppingPlaneForPolyEdge(const float *polyNormal, const float *pt1, const float *pt2, bool clockwise, float *outPlane) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ClipLineSegmentAgainstPlane(float *pt1, float *pt2, const float *choppingPlane) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_ClipPolyAgainstPlane(float *poly[0x3], unsigned int polyCount, unsigned int maxCount, const float *choppingPlane) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ClipPolys(const float *polyPlane, const float *poly1[0x3], unsigned int poly1Count, const float *poly2[0x3], unsigned int poly2Count, float *result[0x3], const unsigned int maxCount) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ClipLineSegmentAgainstPoly(const float *polyPlane, const float *poly[0x3], unsigned int polyCount, float *pt1, float *pt2) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_ProjectBoxFaceOntoBrushFaceAndClip(const struct objInfo *info, int boxAxis, int boxSign, const float *brushPlane, const struct Poly *winding, int surfaceFlags, struct Results *results, const float *collisionNormal) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ProjectFaceOntoFaceAndClip(const float *referencePlane, const struct Poly *referencePoly, const struct Poly *poly2, int surfaceFlags, struct Results *results, const float *collisionNormal) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetClosestBrushFace(const float *normal, const struct Bounds *bounds, const struct cbrush_t *brush, const struct Poly *brushWindings, float *outBrushPlane) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetClosestOrientedBrushFace(const float *normal, const struct cbrush_t *brush, const struct Poly *brushPolys, const float *orientedPlanes[0x4], float *outBrushPlane) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetClosestBoxFace(const struct objInfo *info, const float *normal, int *minAxis, int *minSign) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IntersectPlanesSinglePrecision(const float *plane[0x4], float *xyz) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_GetWindingForBrushFace(const struct Bounds *bounds, const struct cbrush_t *brush, const float *inPlanes[0x4], unsigned int brushSide, struct Poly *outWinding, int maxVerts, const float *axialPlanes[0x4]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_GetWindingForBrushFace2(const struct Bounds *bounds, const struct cbrush_t *brush, unsigned int brushSide, struct Poly *outWinding, int maxVerts, const float *axialPlanes[0x4]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_BuildWindingsForBrush(const struct Bounds *bounds, const struct cbrush_t *brush, const float *planes[0x4], struct Poly *outPolys, unsigned int maxPolys, float *outVerts[0x3], unsigned int maxVerts) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_BuildWindingsForBrush2(const struct Bounds *bounds, const struct cbrush_t *brush, struct Poly *outPolys, unsigned int maxPolys, float *outVerts[0x3], unsigned int maxVerts) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_TestBoxAgainstEachBrushPlane(const struct Bounds *bounds, const struct cbrush_t *brush, const struct objInfo *info, float *outBrushPlane, int *outSideIndex, float *outMaxSeparation) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_CollideBoxWithBrushFace(const struct cbrush_t *brush, int brushSideIndex, const float *bestBrushPlane, const struct Poly *brushWinding, const struct objInfo *info, struct Results *results, float *collisionNormal) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_DoesPolyIntersectBox(const struct Poly *poly, const struct objInfo *info) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CollideBoxWithBrush(const struct Bounds *bounds, const struct cbrush_t *brush, const struct objInfo *info, struct Results *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_TestVertsAgainstPlane(const float *verts[0x3], unsigned int vertCount, const float *plane) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_TestVertsAgainstPlane_Wrapper(const float *plane, const struct Poly *verts) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_TestTriangleAgainstBrushPlane(const float *brushPlane, const float *triangle[0x3]) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_TestVertsAgainstPlanes(const float *verts[0x3], unsigned int vertCount, const struct cbrush_t *brushContainingThePlanes, const float *planes[0x4], float *outPlane, int *outSideIndex, float *outMaxSeparation) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_TransformPlane(const float *normal, float dist, const float *translate, const float *rotate[0x3], float *outPlane) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_CollideOrientedBrushAgainstFixedBrushFace(const struct cbrush_t *fixedBrush, int fixedBrushSideIndex, float *bestFixedBrushPlane, const struct Poly *fixedBrushPolys, const struct cbrush_t *orientedBrush, const struct Poly *orientedBrushPolys, const float *transformedPlanes[0x4], struct Results *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_CollideBrushAgainstBrushFace(const struct Bounds *bounds, const struct cbrush_t *brush, const struct Poly *brushPolys, const struct cbrush_t *referenceBrush, int referenceBrushSideIndex, float *referenceBrushPlane, const struct Poly *referenceBrushPolys, struct Results *results) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_DoesPolyIntersectOrientedBrush(const struct Poly *poly, const float *transformedPlanes[0x4], unsigned int brushSides) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CollideOrientedBrushWithBrush(const struct Bounds *orientedBounds, const struct cbrush_t *orientedBrush, const struct Bounds *fixedBounds, const struct cbrush_t *fixedBrush, const struct objInfo *info, struct Results *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_CollideOrientedBrushWithBrush_Wrapper(unsigned int orientedBrushNum, void *userData) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CollideOrientedBrushModelWithBrush(const struct Bounds *fixedBounds, const struct cbrush_t *fixedBrush, const struct objInfo *info, struct Results *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_CollideFixedBrushWithTriangle(const struct Bounds *bounds, const struct cbrush_t *brush, float *triangle[0x3], struct BrushTrimeshData *data) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_CollideOrientedBrushWithTriangle(const struct Bounds *orientedBounds, const struct cbrush_t *orientedBrush, const float *tri0, const float *tri1, const float *tri2, struct BrushTrimeshData *data) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CollideOrientedBrushWithTriangleList(const struct Bounds *orientedBounds, const struct cbrush_t *orientedBrush, const unsigned short *indices, const float *verts[0x3], int triCount, const struct objInfo *input, int surfaceFlags, struct Results *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_CollideOrientedBrushWithTriangleList_Wrapper(unsigned int orientedBrushNum, void *userData) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CollideOrientedBrushModelWithTriangleList(const unsigned short *indices, const float *verts[0x3], int triCount, const struct objInfo *info, int surfaceFlags, struct Results *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CollideBoxWithTriangleList(const unsigned short *indices, const float *verts[0x3], unsigned int triCount, const struct objInfo *info, int surfaceFlags, struct Results *results) -> void
{

}

#endif // __UNIMPLEMENTED__
