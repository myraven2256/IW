//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Bounds_Min(const struct Bounds *bounds, unsigned int axis) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_Max(const struct Bounds *bounds, unsigned int axis) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_Mins2D(const struct Bounds *bounds, float *mins) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_Maxs2D(const struct Bounds *bounds, float *maxs) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_MinsMaxs2D(const struct Bounds *bounds, float *mins, float *maxs) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_SetMin(struct Bounds *bounds, unsigned int axis, float min) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_SetMax(struct Bounds *bounds, unsigned int axis, float max) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_SetMinMax(struct Bounds *bounds, unsigned int axis, float min, float max) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_ShiftMin(struct Bounds *bounds, unsigned int axis, float shift) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_GetCorner(const struct Bounds *bounds, unsigned int cornerIndex, float *corner) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_ClassifyPlaneSide(const struct Bounds *bounds, const struct cplane_s *p) -> enum SideClassification
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Sphere_ClassifyPlaneSide(const struct Sphere *sphere, const struct cplane_s *p) -> enum SideClassification
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_Transform(const struct Bounds *baseBounds, const float *origin, const float *axis[0x3], struct Bounds *rotatedBounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto ExtentBounds_Clear(struct ExtentBounds *bounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_Clear(struct Bounds *bounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_ForEverything(struct Bounds *bounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BuildBounds_ForNothing(struct BuildBounds *bounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BuildBounds_ToBounds(const struct BuildBounds *fromBounds, struct Bounds *toBounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BuildBounds_FromBounds(struct BuildBounds *toBounds, const struct Bounds *fromBounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto ExtentBounds_FromBounds(struct ExtentBounds *toBounds, const struct Bounds *fromBounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto ExtentBounds_AddPoint(struct ExtentBounds *bounds, const float *pt) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_ContainsPoint(const struct Bounds *bounds, const float *pt) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_ContainsOrTouchesPoint(const struct Bounds *bounds, const float *pt) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_Overlap(const struct Bounds *b0, const struct Bounds *b1) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_OverlapOrTouch(const struct Bounds *b0, const struct Bounds *b1) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_OverlapEpsilon(const struct Bounds *b0, const struct Bounds *b1, float epsilon) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_FullyContainOnAxis(const struct Bounds *outer, const struct Bounds *inner, unsigned int axis) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_FullyContain(const struct Bounds *outer, const struct Bounds *inner) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_Expand(struct Bounds *bounds, const struct Bounds *added) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto BuildBounds_Expand(struct BuildBounds *bounds, const struct BuildBounds *added) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_Extend(struct Bounds *bounds, const float *offset) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_Pad(struct Bounds *bounds, float padding) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_ExpandToWidth(struct Bounds *bounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_RaiseToWidth(struct Bounds *bounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_ShrinkToHeight(struct Bounds *bounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_AddOffset(struct Bounds *bounds, const float *offset) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_AddOffsetTo(struct Bounds *toBounds, const struct Bounds *fromBounds, const float *offset) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_SubtractOffsetTo(struct Bounds *toBounds, const struct Bounds *fromBounds, const float *offset) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_Midpoint(const struct Bounds *bounds, float *midpoint) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_Size(const struct Bounds *bounds, unsigned int axis) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_Sizes(const struct Bounds *bounds, float *size) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_ToRadius2D(const struct Bounds *bounds) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_ToRadius(const struct Bounds *bounds) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_ForCube(struct Bounds *bounds, const float *origin, float halfSize) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_ForCubeAtOrigin(struct Bounds *bounds, float halfSize) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_ForSphere(struct Bounds *bounds, const float *origin, float radius) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Sphere_ForSphere(struct Sphere *sphere, const float *origin, float radius) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_ForSphereAtOrigin(struct Bounds *bounds, float radius) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_ForCapsule(struct Bounds *bounds, const float *origin, float radius, float bottom, float top) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_ForCapsuleAtOrigin(struct Bounds *bounds, float radius, float bottom, float top) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_ForCenteredCapsule(struct Bounds *bounds, const float *origin, float radius, float midZ, float halfHeight) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_ForCenteredCapsuleAtOrigin(struct Bounds *bounds, float radius, float midZ, float halfHeight) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_ForExtents(struct Bounds *bounds, const float *mins, const float *maxs) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_ForPoint(struct Bounds *bounds, const float *pt) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_ForSegment(struct Bounds *bounds, const float *v0, const float *v1) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_DistToPointSq(const struct Bounds *bounds, const float *point) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Bounds_DistToPoint(const struct Bounds *bounds, const float *point) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Sphere_OverlapOrTouch(const struct Bounds *b, const struct Sphere *s) -> bool
{

}

#endif // __UNIMPLEMENTED__
