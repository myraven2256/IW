//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto R_IsSurfaceVisible(const unsigned char *surfaceVisData, unsigned int sortedSurfIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_BeginBspSurfList(struct GfxBspSurfListBuild *bspSurfList, unsigned int dataLimit, unsigned int buildIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_EndBspSurfList(struct GfxBspSurfListBuild *bspSurfListBuild, struct GfxBspSurfList *bspSurfList, unsigned int buildIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_IsBspSurfListFull(const struct GfxBspSurfListBuild *bspSurfListBuild) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_EmitBspSurfDatum(struct GfxBspSurfListBuild *bspSurfListBuild, unsigned short datum, unsigned int buildIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_EmitBspSurfArray(struct GfxBspSurfListBuild *bspSurfListBuild, union GfxDrawSurf drawSurf, unsigned int restartMask, unsigned int firstSurfIndex, unsigned int surfCount, unsigned int buildIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AreBspSurfsMergeable_Internal(unsigned int surfIndex, union GfxDrawSurf drawSurf, const struct GfxSurface *surface, struct GfxBspSurfMergeState *mergeState) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AreBspSurfsMergeable(unsigned int surfIndex, union GfxDrawSurf drawSurf, struct GfxBspSurfMergeState *mergeState) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetBspSurfList<GfxAddBspSurfacesCameraNonlitInterface, unsigned char*>(unsigned char *userData, unsigned int iterBegin, unsigned int iterEnd, unsigned int dataLimit, struct GfxBspSurfList *bspSurfListOut) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxGetBspSurfListCameraLitInterfaceBase::PerVisibleDrawSurfCallback(struct GfxGetBspSurfListCameraLitData &userData, unsigned int surfIndex, union GfxDrawSurf drawSurf) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxGetBspSurfListCameraLitInterfaceBase::PerEmittedDrawSurfCallback(union GfxDrawSurf drawSurf) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxGetBspSurfListCameraLitInterface::KeepSurfIndex(struct GfxGetBspSurfListCameraLitData &userData, unsigned int surfIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetBspSurfListLitCamera(struct GfxGetBspSurfListCameraLitData userData, unsigned int surfBegin, unsigned int surfEnd, unsigned int *dataLimit, struct GfxBspSurfList **bspSurfListOut) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllBspDrawSurfacesCamera(struct GfxViewInfo *viewInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxAddBspSurfacesCameraNonlitInterface::GetSurfIndex(unsigned char *surfaceVisData, unsigned int iter) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxAddBspSurfacesCameraNonlitInterface::KeepSurfIndex(unsigned char *surfaceVisData, unsigned int surfIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxAddBspSurfacesCameraNonlitInterface::PerVisibleDrawSurfCallback(unsigned char *surfaceVisData, unsigned int surfIndex, union GfxDrawSurf drawSurf) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxAddBspSurfacesCameraNonlitInterface::PerEmittedDrawSurfCallback(union GfxDrawSurf drawSurf) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllBspDrawSurfacesCameraNonlit(unsigned int beginSurface, unsigned int endSurface, unsigned int bspSurfDataLimit, struct GfxBspSurfList *bspSurfList) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxGetSunShadowBspSurfListInterface_SlowShadow::GetSurfIndex(const struct GfxGetSunShadowBspSurfListData &listData, unsigned int iter) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxGetSunShadowBspSurfListInterface_SlowShadow::KeepSurfIndex(const struct GfxGetSunShadowBspSurfListData &listData, unsigned int surfIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxGetSunShadowBspSurfListInterface_SlowShadow::PerVisibleDrawSurfCallback(const struct GfxGetSunShadowBspSurfListData &listData, unsigned int surfIndex, union GfxDrawSurf drawSurf) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxGetSunShadowBspSurfListInterface_SlowShadow::PerEmittedDrawSurfCallback(union GfxDrawSurf drawSurf) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxGetSunShadowBspSurfListInterface_FastShadow::GetSurfIndex(const struct GfxGetSunShadowBspSurfListData &listData, unsigned int iter) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxGetSunShadowBspSurfListInterface_FastShadow::KeepSurfIndex(const struct GfxGetSunShadowBspSurfListData &listData, unsigned int surfIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxGetSunShadowBspSurfListInterface_FastShadow::PerVisibleDrawSurfCallback(const struct GfxGetSunShadowBspSurfListData &listData, unsigned int surfIndex, union GfxDrawSurf drawSurf) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxGetSunShadowBspSurfListInterface_FastShadow::PerEmittedDrawSurfCallback(union GfxDrawSurf drawSurf) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddAllBspDrawSurfacesSunShadowInternal(struct GfxBspSurfList *bspSurfList_0, struct GfxBspSurfList *bspSurfList_1) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllBspDrawSurfacesSunShadow(struct GfxViewInfo *viewInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxGetSpotShadowBspSurfListInterface::GetSurfIndex(const struct GfxShadowGeometry *shadowGeom, unsigned int iter) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxGetSpotShadowBspSurfListInterface::KeepSurfIndex(const struct GfxShadowGeometry *shadowGeom, unsigned int surfIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxGetSpotShadowBspSurfListInterface::PerVisibleDrawSurfCallback(const struct GfxShadowGeometry *shadowGeom, unsigned int surfIndex, union GfxDrawSurf drawSurf) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxGetSpotShadowBspSurfListInterface::PerEmittedDrawSurfCallback(union GfxDrawSurf drawSurf) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllBspDrawSurfacesSpotShadow(struct GfxViewInfo *viewInfo, unsigned int spotShadowIndex, unsigned int primaryLightIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxGetSortedBspSurfListInterface::GetSurfIndex(struct GfxSurface **surfArray, unsigned int iter) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxGetSortedBspSurfListInterface::KeepSurfIndex(struct GfxSurface **surfArray, unsigned int surfIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxGetSortedBspSurfListInterface::PerVisibleDrawSurfCallback(struct GfxSurface **surfArray, unsigned int surfIndex, union GfxDrawSurf drawSurf) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxGetSortedBspSurfListInterface::PerEmittedDrawSurfCallback(union GfxDrawSurf drawSurf) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetSortedBspSurfListIndirect(struct GfxSurface **surfArray, unsigned int surfArraySize, struct GfxBspSurfList *bspSurfList) -> void
{

}

#endif // __UNIMPLEMENTED__
