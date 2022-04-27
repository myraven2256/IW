//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto R_SetDpvsPlaneDist(const float *pointOnPlane, float epsilon, struct DpvsPlane *plane) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_FinishBuildingDpvsPlane(const float *pointOnPlane, float epsilon, struct DpvsPlane *plane) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_DpvsPlaneDistToPoint(const struct DpvsPlane *plane, const float *point) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_DpvsPlaneMaxSignedDistToBox(const struct DpvsPlane *plane, const struct Bounds *bounds) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_DpvsPlaneMinSignedDistToBox(const struct DpvsPlane *plane, const struct Bounds *bounds) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_BoxEntirelyBehindPlane(const struct Bounds *bounds, const struct DpvsPlane *plane) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SphereEntirelyBehindPlane(const float *origin, float radius, const struct DpvsPlane *plane) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_CullBoxDpvs(const struct Bounds *bounds, const struct DpvsPlane *planes, int planeCount) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_CullSphereDpvs(const float *origin, float radius, const struct DpvsPlane *planes, int planeCount) -> int
{

}

#endif // __UNIMPLEMENTED__
