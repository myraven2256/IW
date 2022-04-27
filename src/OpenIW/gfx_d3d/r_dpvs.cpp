//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_r_dpvs() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DpvsPlaneDistToEye(const struct DpvsPlane *plane) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetSidePlaneNormals(const float *winding[0x3], unsigned int vertexCount, float *normals[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddNearAndFarClipPlanes(struct DpvsPlane *planes, unsigned int planeCount) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_FurthestPointOnWinding(const float *points[0x3], int pointCount, const struct DpvsPlane *plane) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_NearestPointOnWinding(const float *points[0x3], int pointCount, const struct DpvsPlane *plane) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FrustumClipPlanes(const struct GfxMatrix *viewProjMtx, const float *sidePlanes[0x4], int sidePlaneCount, struct DpvsPlane *frustumPlanes) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PortalAssertMsg() -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ProjectPortal(int vertexCount, const float *winding[0x3], float *mins, float *maxs, enum DpvsClipChildren *clipChildren) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_UnprojectPoint(const float *projected, float *unprojected) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_Show2DPortal(unsigned int hullPointCount, const float *portalVerts[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddBevelPlanes(struct DpvsPlane *planes, unsigned int vertexCount, const float *winding[0x3], const float *windingNormals[0x3], const float *mins, const float *maxs, enum DpvsForceBevels forceBevels) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_PortalClipPlanes(struct DpvsPlane *planes, unsigned int vertexCount, const float *winding[0x3], enum DpvsClipChildren *clipChildren) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_PortalClipPlanesNoFrustum(struct DpvsPlane *planes, unsigned int vertexCount, const float *winding[0x3]) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CellForPoint(const float *origin) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_PortalBehindPlane(const struct GfxPortal *portal, const struct DpvsPlane *plane) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_PortalBehindAnyPlane(const struct GfxPortal *portal, const struct DpvsPlane *planes, unsigned int planeCount) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ChopPortalWinding(const float *vertsIn[0x3], unsigned int *vertexCount, const struct DpvsPlane *plane, float *vertsOut[0x3]) -> const float*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_FindNearestReflectionProbeInCell(struct GfxWorldDraw *worldDraw, const struct GfxCell *cell, const float *origin) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_FindNearestReflectionProbe(struct GfxWorldDraw *worldDraw, const float *origin) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CalcReflectionProbeIndex(const float *origin) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_InitAndSortDrawSurfs(const union GfxDrawSurf *end, const int listType) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllSceneEntSurfacesCamera(const struct GfxViewInfo *viewInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddAllSceneEntSurfacesRangeSunShadow(unsigned int partitionIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllSceneEntSurfacesSunShadow() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddAllSceneEntSurfacesSpotShadow(unsigned int spotShadowIndex, unsigned int primaryLightIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddSceneDObj(unsigned int entnum, unsigned int viewIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DrawBModel(struct BModelDrawInfo *bmodelInfo, const struct GfxBrushModel *bmodel, const struct GfxPlacement *placement) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CullDynBrushInCell(enum GfxSceneViewType sceneViewType, unsigned int cellIndex, const struct DpvsPlane *planes, unsigned int planeCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_UpdateSceneEntUsageForDist(struct GfxSceneEntity *sceneEnt) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawViewModelSceneEnt() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawAllSceneEnt(const struct GfxViewInfo *viewInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawAllDynEnt() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UnfilterEntFromCells(unsigned int localClientNum, unsigned int entnum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UnfilterThingFromCells(unsigned int thingIndex, unsigned int *cellBits, unsigned int wordCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddEntToCell(const struct FilterEntInfo *entInfo, unsigned int cellIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddThingToCell(unsigned int cellIndex, unsigned int thingIndex, unsigned int *cellBits, unsigned int wordCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_FilterEntIntoAllCells_r(const struct FilterEntInfo *entInfo, struct mnode_t *node) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_FilterEntIntoCells_r(const struct FilterEntInfo *entInfo, struct mnode_t *node, const struct Bounds *bounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_FilterThingIntoCells_r(struct mnode_t *node, unsigned int dynEntIndex, const struct Bounds *bounds, unsigned int *cellBits, unsigned int wordCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FilterXModelIntoScene(const struct XModel *model, const struct GfxScaledPlacement *placement, unsigned int renderFxFlags, unsigned short *cachedLightingHandle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FilterDObjIntoCells(unsigned int localClientNum, unsigned int entnum, float *origin, float radius) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FilterBModelIntoCells(unsigned int localClientNum, unsigned int entnum, struct GfxBrushModel *bmodel) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FilterThingIntoCells(unsigned int thingIndex, const struct Bounds *bounds, unsigned int *cellBits, unsigned int wordCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_FrustumCullEntities(unsigned int maxSceneViewType) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCellDynBrushSurfacesInFrustumCmd(void *data) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddCellSurfacesAndCullGroupsInFrustumDelayed(enum GfxSceneViewType sceneViewType, unsigned int cellIndex, const struct DpvsPlane *planes, unsigned int planeCount, unsigned int frustumPlaneCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ParentHeapIndex(int heapIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_FirstChildHeapIndex(int heapIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AssertValidQueue() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_EnqueuePortal(struct GfxPortal *portal) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_NextQueuedPortal() -> struct GfxPortal*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AllocHullPoints() -> float*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_FreeHullPoints(float *hullPoints[0x2]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddVertToPortalHullPoints(struct GfxPortal *portal, const float *v) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ShouldSkipPortal(const struct GfxPortal *portal, const struct DpvsPlane *planes, unsigned int planeCount) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ChopPortal(const struct GfxPortal *portal, const struct DpvsPlane *parentPlane, const struct DpvsPlane *planes, unsigned int planeCount, float *v[0x128], const float **finalVerts[0x3]) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ChopPortalAndAddHullPoints(struct GfxPortal *portal, const struct DpvsPlane *parentPlane, const struct DpvsPlane *planes, unsigned int planeCount) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ChopPortalAndAddHullPointsNoFrustum(struct GfxPortal *portal, const struct DpvsPlane *parentPlane, const struct DpvsPlane *planes, unsigned int planeCount) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_IsCellInList(unsigned int cellIndex, unsigned int *cellList) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddCellToList(unsigned int cellIndex, unsigned int *cellList) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetFurtherCellList_r(unsigned int cellIndex, const struct DpvsPlane *parentPortalPlane, const struct DpvsPlane *rootPlanes, int rootPlaneCount, const struct DpvsPlane *parentPlanes, int parentPlaneCount, float *v[0x128], unsigned int *cellList) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetCellVisible(unsigned int cellIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_VisitAllFurtherCells(unsigned int cellIndex, const struct DpvsPlane *parentPlane, const struct DpvsPlane *planes, unsigned int planeCount, unsigned int frustumPlaneCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetAncestorListStatus(struct GfxPortal *portal, bool isAncestor) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetRecursionAncestors(struct GfxPortal *portal) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ClearRecursionAncestors(struct GfxPortal *portal) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_VisitPortalsForCell(unsigned int cellIndex, struct GfxPortal *parentPortal, const struct DpvsPlane *parentPlane, struct DpvsPlane *planes, unsigned int maxPlaneCount, unsigned int planeCount, unsigned int frustumPlaneCount, unsigned int recursionDepth, enum DpvsClipChildren clipChildren) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_VisitPortalsForCellNoFrustum(unsigned int cellIndex, struct GfxPortal *parentPortal, const struct DpvsPlane *parentPlane, const struct DpvsPlane *planes, unsigned int planeCount, unsigned int frustumPlaneCount, unsigned int recursionDepth) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_VisitPortals(unsigned int cellIndex, const struct DpvsPlane *parentPlane, struct DpvsPlane *planes, unsigned int planeCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_VisitPortalsNoFrustum(unsigned int cellIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GenerateShadowMapCasterCells() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GenerateSunLitSurfCells() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetupDpvsForPoint(const struct GfxViewParms *viewParms) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddSunShadowSurfacesFrustumOnly(enum GfxSceneViewType sceneViewType) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AnySunMightHaveShadowMap(const struct GfxViewInfo *viewInfo) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddWorldSurfacesPortalWalk(const float *viewOrigin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShowCull() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitSceneData(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearCachedSceneLightIsUsed(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntCl_InitFilter() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitSceneBuffers() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearDpvsScene() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearDpvsSceneView() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CullDynamicSpotLightInCameraView() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CullDynamicPointLightsInCameraView() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupWorldSurfacesDpvs(const struct GfxViewParms *viewParms) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetViewFrustumPlanes(struct GfxViewInfo *viewInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddWorldSurfacesDpvs(const struct GfxViewParms *viewParms) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupShadowSurfacesDpvs(const struct GfxViewParms *viewParms, const struct DpvsPlane *clipPlanes, unsigned int clipPlaneCount, unsigned int frustumPlaneCount, unsigned int partitionIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetFarPlaneDist() -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetCullDist(float dist) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsCellVisible(int cellIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsEntInScene(const unsigned int entnum) -> bool
{

}

#endif // __UNIMPLEMENTED__
