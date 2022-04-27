//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_r_scene() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AllocSceneDObj() -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocSceneModel() -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocSceneBrush() -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetBrushModel(unsigned int modelIndex) -> struct GfxBrushModel*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddBrushModelToSceneFromAngles(const struct GfxBrushModel *bmodel, const float *origin, const float *angles, unsigned int entnum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_InitSceneModel(struct GfxSceneModel *sceneModel) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_InitSceneEntity(struct GfxSceneEntity *sceneEnt) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddDObjToScene(const struct DObj *obj, const struct cpose_t *pose, unsigned int entnum, unsigned int renderFxFlags, float *lightingOrigin, float materialTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddViewmodelDObjToScene(const struct DObj *obj, const struct cpose_t *pose, unsigned int entnum, unsigned int renderFxFlags, float *lightingOrigin, float materialTime, int markableViewmodel) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EndDObjScene() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearDObjInScene(unsigned int entnum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkSceneEnts() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ResetSceneEnts() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddPerClientSceneEnts(unsigned int clientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AllocateClouds(const int count, unsigned int *outCloudIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddParticleSparkCloudToScene(struct Material *material) -> struct GfxParticleCloud*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddParticleCloudToScene(struct Material *material) -> struct GfxParticleCloud*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddOmniLightToScene(const float *org, float radius, float r, float g, float b) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddSpotLightToScene(const float *org, const float *dir, float radius, float r, float g, float b) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LerpByte(unsigned char from, unsigned char to, float frac) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DisableFogThisFrame() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdateFrameFog() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetDefaultNearClip() -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AdjustProjectionForSubWindow(const struct GfxCamera *camera, struct GfxMatrix *projMtx) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupViewProjectionMatrices(struct GfxViewParms *viewParms) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetupPerspectiveViewProjectionMatrices(struct GfxViewParms *viewParms) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetAllowShadowMaps(const bool allowShadowMaps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetAllowShadowMaps() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DynamicShadowType() -> enum ShadowType
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddBModelSurfacesCamera(struct BModelDrawInfo *bmodelInfo, const struct GfxBrushModel *bmodel, union GfxDrawSurf **drawSurfs, union GfxDrawSurf **lastDrawSurfs, unsigned int reflectionProbeIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddBModelSurfaces(struct BModelDrawInfo *bmodelInfo, const struct GfxBrushModel *bmodel, enum MaterialTechniqueType techType, union GfxDrawSurf *drawSurf, union GfxDrawSurf *lastDrawSurf) -> union GfxDrawSurf*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetXSurface(const void *modelSurf, enum surfaceType_t surfType) -> const struct XSurface*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddXModelDebugString(const float *origin, const char *string) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddXModelSurfacesCamera(struct XModelDrawInfo *modelInfo, const struct XModel *model, float *origin, unsigned int lightingHandle, unsigned int primaryLightIndex, int depthHack, union GfxDrawSurf **drawSurfs, union GfxDrawSurf **lastDrawSurfs, unsigned int reflectionProbeIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddXModelSurfaces(struct XModelDrawInfo *modelInfo, const struct XModel *model, enum MaterialTechniqueType techType, union GfxDrawSurf *drawSurf, union GfxDrawSurf *lastDrawSurf) -> union GfxDrawSurf*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddDObjSurfacesCamera(struct GfxSceneEntity *sceneEnt, unsigned int lightingHandle, unsigned int primaryLightIndex, union GfxDrawSurf **drawSurfs, union GfxDrawSurf **lastDrawSurfs) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddDObjSurfaces(struct GfxSceneEntity *sceneEnt, enum MaterialTechniqueType techType, union GfxDrawSurf *drawSurf, union GfxDrawSurf *lastDrawSurf) -> union GfxDrawSurf*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ShouldDrawDLights() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_PerformanceWarning(const char *text, float ypos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetDepthOfField(struct GfxViewInfo *viewInfo, const struct GfxSceneParms *sceneParms) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetNearClip(float zNear) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetCameraForView(const struct RefdefView *view, struct GfxCamera *camera) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_UpdateColorManipulation(struct GfxViewInfo *viewInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetWaterSheetingFx(struct GfxViewInfo *viewInfo, const struct GfxSceneParms *sceneParms) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetStageInfo(struct GfxViewInfo *viewInfo, const struct GfxSceneParms *sceneParms) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetFilmInfo(struct GfxViewInfo *viewInfo, const struct GfxSceneParms *sceneParms) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetGlowInfo(struct GfxViewInfo *viewInfo, const struct GfxSceneParms *sceneParms) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetCharacterPrimaryLightScaleInfo(struct GfxViewInfo *viewInfo, const struct GfxSceneParms *sceneParms) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CheckStreaming() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetFullSceneViewMesh(int viewInfoIndex, struct GfxViewInfo *viewInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetEndTime(int endTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddDrawCall(struct GfxViewInfo *viewInfo, unsigned int drawListType) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GenerateSortedSunShadowDrawSurfs(struct GfxViewInfo *viewInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddEmissiveSpotLight(struct GfxViewInfo *viewInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetSceneGlass(int pieceIndex) -> const union GfxSceneGlass*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddDynamicLights(struct GfxViewInfo *viewInfo) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetDynamicLightSurfs(struct GfxViewInfo *viewInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetEmissiveTechnique(const struct GfxViewInfo *viewInfo, enum MaterialTechniqueType baseTech) -> enum MaterialTechniqueType
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetSunShadowConstants(struct GfxCmdBufInput *input, const struct GfxSunShadowProjection *sunProj) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DrawCineWarning() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetNextViewInfoIndex(int *viewInfoIndex, bool isAlternateScene) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetViewInfo(struct GfxViewInfo **viewInfo, int viewInfoIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetupViewInfo(struct GfxViewInfo *viewInfo, const struct GfxSceneParms *sceneParms, const struct GfxViewParms *viewParmsDraw, enum ShadowType dynamicShadowType, bool isAlternateScene) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_UpdateCachedSceneLightIsUsed() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AnyDistortionSurface(const struct GfxDrawList *drawList) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_FillSceneMarkDrawData(struct GfxSceneMarkDrawData *data) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddDynMarks(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_IsInSpotShadow(const float *samplePos) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GenerateSortedDrawSurfs(int viewInfoIndex, const struct GfxSceneParms *sceneParms, const struct GfxViewParms *viewParmsDpvs, const struct GfxViewParms *viewParmsDraw) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitScene() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearScene() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearSceneView(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdateSound() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetViewParmsForScene(const struct RefdefView *view, struct GfxViewParms *viewParms) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetSceneParms(const struct refdef_t *refdef, struct GfxSceneParms *sceneParms) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_LerpDir(const float *dirBegin, const float *dirEnd, const int beginLerpTime, const int endLerpTime, const int currTime, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_UpdateFrameLightmapTextures() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_UpdateFrameSun(struct GfxLight *primaryLights, const struct GfxStageInfo *stageInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetInvViewScale(float invViewScale) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_UpdateLodParms(const struct RefdefView *view, struct GfxLodParms *lodParms, int isAlternateScene) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetLodOrigin(const struct refdef_t *refdef, int isAlternateScene) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetThermalView(bool thermalOn, struct Material *bodyMaterial) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CorrectLodScale(const struct RefdefView *view, int isAlternateScene) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_RenderScene(const struct refdef_t *refdef, int viewInfoIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LinkDObjEntity(unsigned int localClientNum, unsigned int entnum, float *origin, float radius) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LinkBModelEntity(unsigned int localClientNum, unsigned int entnum, struct GfxBrushModel *bmodel) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UnlinkEntity(unsigned int localClientNum, unsigned int entnum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LinkDynEnt(unsigned int dynEntId, enum DynEntityDrawType drawType, const struct Bounds *bounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UnlinkDynEnt(unsigned int dynEntId, enum DynEntityDrawType drawType) -> void
{

}

#endif // __UNIMPLEMENTED__
