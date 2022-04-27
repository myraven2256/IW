//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto R_AddStaticModelDebugString(float *origin, const char *string) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ShowCountsStaticModel(int smodelIndex, int lod) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_StaticModelWriteInfoHeader(void *fileHandle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_StaticModelWriteInfo(void *fileHandle, const struct GfxStaticModelDrawInst *smodelDrawInst, const float dist) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DumpStaticModelLodInfo(const struct GfxStaticModelDrawInst *smodelDrawInst, const float dist) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EndDumpStaticModelLodInfo() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_EmitSModelSurfVisData(const struct XModel *model, unsigned int lodIndex, const unsigned short *smodelIndexes, unsigned int smodelCount, struct GfxSModelSurfDrawData *drawData, unsigned int *smodelSurfType, unsigned short *visDataIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SortSModelSurfDelaySort(union GfxSModelSurfDelaySort *delaySurfList, unsigned int begin, unsigned int end) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_FinishEmittingPreviousSModelSurf(struct GfxSModelSurfBuildList *buildList) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_EmitSingleSModelSurf(struct GfxSModelSurfBuildList *buildList, union GfxSModelSurfHeader smodelSurfHeader, union GfxSModelSurfVisDataRef visDataRef) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_EmitDelayedSModelSurfsUpToMaterial(struct GfxSModelSurfBuildList *buildListArray, union GfxSModelSurfHeader refKey, unsigned int firstMtlSortIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddDelayedSModelSurf(struct GfxSModelSurfBuildList *buildList, union GfxSModelSurfHeader smodelSurfHeader, union GfxSModelSurfVisDataRef visDataRef) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_EmitDelayedSModelSurfsRemaining(struct GfxSModelSurfBuildList *buildListArray) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_StaticModelDebugAids(unsigned int smodelIndex, unsigned int lod, float dist) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ClearStaticModelVisibility(unsigned char *smodelVisData, unsigned int smodelIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_InitSModelSurfBuffers(struct GfxSModelSurfDrawData *drawData, unsigned int visDataLimit, unsigned int surfDataLimit) -> unsigned char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_InitSModelSurfBuildList(struct GfxSModelSurfDrawData *drawData, unsigned int camRgn, unsigned char **surfData, union GfxSModelSurfDelaySort **delaySurfList, unsigned int surfDataLimit, unsigned int delaySurfLimit) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_InitSModelSurfBuildLists_Camera(struct GfxSModelSurfDrawData *drawData, union GfxSModelSurfDelaySort *delaySurfList) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetSModelShadowCasterMaterialIndex() -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_InitSModelSurfBuildLists_Shadow(struct GfxSModelSurfDrawData *drawData, unsigned int surfDataLimit, unsigned int visDataLimit, union GfxSModelSurfDelaySort *delaySurfList) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_InitSModelSurfBuildLists_SunShadow(struct GfxSModelSurfDrawData *drawData, unsigned int partitionIndex, union GfxSModelSurfDelaySort *delaySurfList) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_InitSModelSurfBuildLists_SpotShadow(struct GfxSModelSurfDrawData *drawData, union GfxSModelSurfDelaySort *delaySurfList) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_InitSModelSurfBuildLists_DynLight(struct GfxSModelSurfDrawData *drawData, union GfxSModelSurfDelaySort *delaySurfList, const struct GfxDrawList *shadowDrawList) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_EmitDelayedSModelSurfsRemaining_Camera(struct GfxSModelSurfDrawData *drawData) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_EmitDelayedSModelSurfsRemaining_Shadow(struct GfxSModelSurfDrawData *drawData) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetSModelSurfList(struct GfxSModelSurfList *smodelSurfListArray, struct GfxSModelSurfDrawData *drawData, unsigned int buildListIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetSModelSurfListIndex(unsigned int smodelSurfType, unsigned int lodIndex) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetSModelLodFromSurfListIndex(unsigned int smodelSurfList) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetSModelSurfTypeFromSurfListIndex(unsigned int smodelSurfList) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetSModelSurfListIndexForShadowMap(unsigned int lodIndex, int useShadowMap) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetSModelLodFromSurfListIndexForShadowMap(unsigned int smodelSurfList) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetSModelUseShadowMapFromSurfListIndex(unsigned int smodelSurfList) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_EmitSModelSurfs_Camera(struct GfxSModelSurfDrawData *drawData, const struct GfxSModelEmitInfo *smodelEmit, unsigned short *smodelIndexForSurf[0x128], unsigned int *smodelCountForSurf, unsigned int smodelCountMask) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_EmitSModelSurfs_Shadow(struct GfxSModelSurfDrawData *drawData, const struct XModel *model, unsigned short *smodelIndexForSurf[0x128], unsigned int *smodelCountForSurf, unsigned int smodelCountMask) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_EmitSModelSurfs_DynLight(struct GfxSModelSurfDrawData *drawData, const struct GfxSModelEmitInfo *smodelEmit, unsigned short *smodelIndexForSurf[0x128], unsigned int *smodelCountForSurf, unsigned int smodelCountMask, const struct GfxDrawList *shadowDrawList) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddSModelToAppropriateList(unsigned int smodelIndex, unsigned int lodIndex, unsigned short *smodelIndexForSurf[0x128], unsigned int *smodelCountForSurf) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddSModelToAppropriateListForShadowMap(unsigned int smodelIndex, unsigned int lodIndex, unsigned short *smodelIndexForSurf[0x128], unsigned int *smodelCountForSurf, int useShadowMap) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllStaticModelSurfacesCamera(struct GfxViewInfo *viewInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddAllStaticModelSurfacesRangeSunShadow(struct GfxViewInfo *viewInfo, unsigned int partitionIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllStaticModelSurfacesSunShadow(struct GfxViewInfo *viewInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllStaticModelSurfacesSpotShadow(struct GfxViewInfo *viewInfo, unsigned int spotShadowIndex, unsigned int primaryLightIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllStaticModelSurfacesDynLight(struct GfxViewInfo *viewInfo, unsigned int sceneLightIndex, const unsigned short *smodelIndexes, unsigned int smodelCount) -> void
{

}

#endif // __UNIMPLEMENTED__
