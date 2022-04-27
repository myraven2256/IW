//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_cm_showcollision() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_GetShowCollisionColor(float *colorFloat, int colorCounter) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_BrushInView(unsigned int brushIndex, struct cplane_s *frustumPlanes, int frustumPlaneCount) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_AddSimpleBrushPoint(const struct cbrush_t *brush, const float *axialPlanes[0x4], const short *sideIndices, const float *xyz, int ptCount, struct ShowCollisionBrushPt *brushPts) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_GetPlaneVec4Form(const struct cbrushside_t *sides, const float *axialPlanes[0x4], int index, float *expandedPlane) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_ForEachBrushPlaneIntersection(const struct cbrush_t *brush, const float *axialPlanes[0x4], struct ShowCollisionBrushPt *brushPts) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_PointInList(const float *point, const float *xyzList[0x3], int xyzCount) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_GetXyzList(int sideIndex, const struct ShowCollisionBrushPt *pts, int ptCount, float *xyz[0x3], int xyzLimit) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_PickProjectionAxes(const float *normal, int *i, int *j) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_SignedAreaForPointsProjected(const float *pt0, const float *pt1, const float *pt2, int i, int j) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_AddColinearExteriorPointToWindingProjected(struct winding_t *w, const float *pt, int i, int j, int index0, int index1) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_AddExteriorPointToWindingProjected(struct winding_t *w, const float *pt, int i, int j) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_RepresentativeTriangleFromWinding(const struct winding_t *w, const float *normal, int *i0, int *i1, int *i2) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_ReverseWinding(struct winding_t *w) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_BuildBrushWindingForSide(struct winding_t *winding, float *planeNormal, int sideIndex, const struct ShowCollisionBrushPt *pts, int ptCount) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_ShowSingleBrushCollision(const struct Bounds *bounds, const struct cbrush_t *brush, const float *color, function *drawCollisionPoly) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_ShowBrushCollision(int contentMask, struct cplane_s *frustumPlanes, int frustumPlaneCount, function *drawCollisionPoly) -> void
{

}

#endif // __UNIMPLEMENTED__
