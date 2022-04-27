//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_rb_backend() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_NextRenderCmd(const void *cmd) -> const void*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_AdvanceToNextRenderCmd(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetIdentity() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetVertex2d(struct GfxVertex *vert, float x, float y, float s, float t, unsigned long color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetVertex3d(struct GfxVertex *vert, float x, float y, float z, float s, float t, const unsigned char *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetVertex4d(struct GfxVertex *vert, float x, float y, float z, float w, float s, float t, const unsigned char *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetVertex4dWithNormal(struct GfxVertex *vert, float x, float y, float z, float w, float nx, float ny, float nz, float s, float t, const unsigned char *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawStretchPic(const struct Material *material, float x, float y, float w, float h, float s0, float t0, float s1, float t1, unsigned long color, enum GfxPrimStatsTarget primStatsTarget) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawStretchPicFlipST(const struct Material *material, float x, float y, float w, float h, float s0, float t0, float s1, float t1, unsigned long color, enum GfxPrimStatsTarget primStatsTarget) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_DrawStretchPicRotate(const struct Material *material, float x, float y, float w, float h, float s0, float t0, float s1, float t1, float sinAngle, float cosAngle, unsigned long color, enum GfxPrimStatsTarget primStatsTarget) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawFullScreenColoredQuad(const struct Material *material, float s0, float t0, float s1, float t1, unsigned long color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_FullScreenColoredFilter(const struct Material *material, unsigned long color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_SplitScreenTexCoords(float x, float y, float w, float h, float *s0, float *t0, float *s1, float *t1) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SplitScreenFilter(const struct Material *material, const struct GfxViewInfo *viewInfo, unsigned long color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_FullScreenFilter(const struct Material *material) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_IsViewFullScreen(const struct GfxViewInfo *viewInfo) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Filter(const struct Material *material, const struct GfxViewInfo *viewInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ViewportColoredFilter(const struct Material *material, unsigned long color, const struct GfxViewport *viewport) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ViewportFilter(const struct Material *material, const struct GfxViewport *viewport) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ResolveAndClear_Xbox360(struct D3DDevice *device, struct GfxImage *image, unsigned long resolveFlags, unsigned char whichToClear, enum _D3DFORMAT colorFormat, const float *color, float depth, unsigned char stencil, struct _D3DRECT *sourceRect, struct _D3DPOINT *destPoint) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ResolveAndClearFull_Xbox360(struct GfxCmdBufContext context, struct GfxImage *image, unsigned char whichToClear, enum _D3DFORMAT colorFormat, const float *color, float depth, unsigned char stencil) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_DrawStretchPicForResolve(struct GfxImage *image, float x, float y, float w, float h) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ResolveAndClearPartial_Xbox360(struct GfxCmdBufContext context, struct GfxImage *image, unsigned char whichToClear, enum _D3DFORMAT colorFormat, const float *color, float depth, unsigned char stencil, struct GfxViewport viewport) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ResolveDepthFull_Xbox360(struct GfxCmdBufContext context, enum GfxRenderTargetId renderTargetId) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ResolveSpecificDepthFull_Xbox360(struct GfxCmdBufContext context, struct GfxImage *image) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ResolveAndClearSection_Xbox360(struct GfxCmdBufContext context, struct GfxImage *image, unsigned char whichToClear, enum _D3DFORMAT colorFormat, const float *color, float depth, unsigned char stencil, float s0, float t0, float s1, float t1) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ResolveAndClearRenderTarget(struct GfxCmdBufContext context, unsigned char whichToClear, enum _D3DFORMAT colorFormat, const float *color, float depth, unsigned char stencil) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ResolveShadowmap(struct GfxCmdBufState *state, const struct GfxViewport *sourceViewport, unsigned int destX, unsigned int destY) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_Resolve(struct GfxCmdBufContext context, struct GfxImage *image) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ResolvePartial(struct GfxCmdBufContext context, struct GfxImage *image) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ResolveSection(struct GfxCmdBufContext context, struct GfxImage *image, float s0, float t0, float ds, float dt) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ResolveFloatZ(struct GfxCmdBufContext context, enum GfxRenderTargetId renderTargetId) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ResolveSpecificFloatZ(struct GfxCmdBufContext context, struct GfxImage *image) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_StretchPicCmd(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_StretchPicCmdFlipST(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_StretchPicRotateXYCmd(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_StretchPicRotateSTCmd(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_DrawQuadPicCmd(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_DrawFullScreenColoredQuadCmd(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_StretchRaw(int x, int y, int w, int h, int cols, int rows, const unsigned char *data, int client, int dirty) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_StretchRawCmd(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_RenderDrawGroup_SetupFirstPass(struct GfxDrawListArgs *listArgs, union GfxDrawGroupSetup drawGroup) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_RenderDrawGroup_SetupSecondPass(struct GfxDrawListArgs *listArgs) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_RenderDrawGroup_Finish(struct GfxDrawListArgs *listArgs) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxBspSurfTessCallback::Tess(struct GfxDrawListArgs *listArgs, struct GfxBspSurfIter *iter) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxBspLightMapSurfTessCallback::Tess(struct GfxDrawListArgs *listArgs, struct GfxBspLightMapSurfIter *iter) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxSModelRigidSurfTessCallback::Tess(struct GfxDrawListArgs *listArgs, struct GfxSModelRigidSurfIter *smodelSurfIter) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxDrawSurfTessCallback::Tess(struct GfxDrawListArgs *listArgs, struct GfxDrawSurfIter *iter) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxCodeSurfTessCallback::Tess(struct GfxDrawListArgs *listArgs, struct GfxCodeSurfIter *iter) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxMarkSurfTessCallback::Tess(struct GfxDrawListArgs *listArgs, struct GfxMarkSurfIter *iter) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxGlassSurfTessCallback::Tess(struct GfxDrawListArgs *listArgs, struct GfxGlassSurfIter *iter) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxCloudSurfTessCallback::Tess(struct GfxDrawListArgs *listArgs, struct GfxCloudSurfIter *iter) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxSparkSurfTessCallback::Tess(struct GfxDrawListArgs *listArgs, struct GfxSparkSurfIter *iter) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_RenderDrawGroup_FromSurfList<GfxBspSurfTessCallback, GfxBspSurfIter>(struct GfxDrawListArgs *listArgs, struct GfxDrawListIter *drawListIter) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_RenderDrawGroupNoRender_FromSurfList<GfxBspNoSunShadowsSurfIter>(struct GfxDrawListIter *drawListIter) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_Savemark_FromSurfList<GfxBspNoSunShadowsSurfIter>(struct GfxDrawListIter *drawListIter) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_Terminate_FromSurfList<GfxBspNoSunShadowsSurfIter>(struct GfxDrawListIter *drawListIter) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_TessEnd(struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DrawSurfs_InitListArgs(struct GfxCmdBufContext context, struct GfxCmdBufState *prepassState, const struct GfxDrawListInfo *listInfo, struct GfxDrawListArgs *listArgsOut) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DrawSurfs_Begin(struct GfxCmdBufContext context, struct GfxCmdBufState *prepassState, const struct GfxDrawListInfo *listInfo, struct GfxDrawListArgs *listArgsOut) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DrawSurfs_End(struct GfxCmdBufContext context, struct GfxCmdBufState *prepassState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DrawSurfs_InsertionSortHeadIterator(struct GfxSurfsIterator *iterators, unsigned int iteratorCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DrawSurfs_SortIterators(struct GfxSurfsIterator *iterators, unsigned int iteratorCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetDrawGroupSortKey<GfxBspSurfIter>(struct GfxDrawListIter *drawListIter) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetDrawGroupSortKey<GfxDrawSurfIter>(struct GfxDrawListIter *drawListIter) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddDrawGroupIterator_DrawGroupSortKey<GfxBspSurfTessCallback, GfxBspSurfIter>(struct GfxSpliceSurfs *spliceSurfs, unsigned int spliceIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetPrimarySortKey<GfxBspSurfIter>(struct GfxDrawListIter *drawListIter) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddDrawGroupIterator_PrimarySortKey<GfxBspSurfTessCallback, GfxBspSurfIter>(struct GfxSurfsIterGroup *iterGroup) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddDrawGroupIterator_PrimarySortKey_NoSunShadows<GfxBspSurfTessCallback, GfxBspNoSunShadowsSurfIter>(struct GfxSurfsIterGroup *iterGroup) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DrawSurfs_SetupIteratorList_DrawGroupSortKey(const struct GfxDrawList *drawList, struct GfxSpliceSurfs *spliceSurfs, unsigned int spliceIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawSurfs_SetupIteratorList_PrimarySortKey(const struct GfxDrawList *drawList, struct GfxSurfsIterGroup *iterGroup) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawSurfs_SetupIteratorList_PrimarySortKey_NoSunShadows(const struct GfxDrawList *drawList, struct GfxSurfsIterGroup *iterGroup) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DrawSurfs_Iterate_Sorted_NoRender(struct GfxSurfsIterGroup *iterGroup, unsigned int count) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SplitIterGroup(struct GfxSurfsIterGroup *iterGroup0, struct GfxSurfsIterGroup *iterGroup1) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CmdBuf_Exceeded(struct GfxCmdRingBuf *cmdBuf) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DrawSurfs_Iterate_ByType(struct GfxDrawListArgs *listArgs, struct GfxSurfsIterGroup *iterGroup) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DrawSurfs_Iterate_Sorted(struct GfxDrawListArgs *listArgs, struct GfxSurfsIterGroup *iterGroup) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DrawSurfs_Iterate_SortedSpliceGroups(struct GfxDrawListArgs *listArgsArray, struct GfxSpliceSurfs *spliceSurfs) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawSurfs_Camera(struct GfxCmdBufContext context, struct GfxCmdBufState *prepassState, const struct GfxDrawList *drawList) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawSurfs_Camera_NoSunShadows(struct GfxCmdBufContext context, struct GfxCmdBufState *prepassState, const struct GfxDrawList *drawList) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetDynLightScissorViewport(const struct GfxLight *dynLight, const struct GfxViewInfo *viewInfo, struct GfxViewport *scissorViewport) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawSurfs_SetupGfxSpliceSurfs_DrawGroupSortKey(const struct GfxBackEndData *data, const struct GfxViewInfo *viewInfo, const struct GfxDrawList *drawList, struct GfxSpliceSurfs *spliceSurfs) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawSurfs_LitTransAndDynLights(const struct GfxViewInfo *viewInfo, struct GfxCmdBufContext context, struct GfxCmdBufState *prepassState, const struct GfxDrawList *drawList) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawSurfs_Prepass(struct GfxCmdBufContext context, struct GfxCmdBufState *prepassState, struct GfxSurfsIterGroup *iterGroupRef, const struct GfxDrawList *drawList) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawSurfs_Unsorted(struct GfxCmdBufContext context, struct GfxCmdBufState *prepassState, const struct GfxDrawList *drawList) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_ClearScreenCmd(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetGammaRamp(const struct GfxGammaRamp *gammaTable) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_SaveScreenCmd(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_SaveScreenSectionCmd(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_BlendSavedScreenBlurredCmd(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_BlendSavedScreenFlashedCmd(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_DrawPoints2D(const struct GfxCmdDrawPoints *cmd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_DrawPoints3D(const struct GfxCmdDrawPoints *cmd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_DrawPointsCmd(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawLines2D(int count, int width, const struct GfxPointVertex *verts) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawLines3D(int count, int width, const struct GfxPointVertex *verts, bool depthTest) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_DrawLinesCmd(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_DrawTriangles_Internal(const struct Material *material, enum MaterialTechniqueType techType, unsigned char dimensions, short indexCount, const unsigned short *indices, short vertexCount, const float *xyzw[0x4], const float *normal[0x3], const union GfxColor *color, const float *st[0x2]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_DrawTrianglesCmd(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_DrawProfileCmd(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_SetMaterialColorCmd(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_SetViewportCmd(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_SetScissorCmd(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_ClearScissorCmd(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_LookupColor(unsigned char c, unsigned char *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_DrawHudIcon(const char *text, float x, float y, float sinAngle, float cosAngle, struct Font_s *font, float xScale, float yScale, unsigned long color) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ValidGamePadButtonIcon(unsigned int letter) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_ProcessLetterColor(unsigned long color, unsigned int letter) -> unsigned long
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_DrawChar(const struct Material *material, float x, float y, float w, float h, float sinAngle, float cosAngle, const struct Glyph *glyph, unsigned long color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_DrawCursor(const struct Material *material, unsigned char cursor, float x, float y, float sinAngle, float cosAngle, struct Font_s *font, float xScale, float yScale, unsigned long color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RotateXY(float cosAngle, float sinAngle, float pivotX, float pivotY, float x, float y, float *outX, float *outY) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetMonospaceWidth(struct Font_s *font, int renderFlags) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GlowColor(union GfxColor *result, union GfxColor baseColor, union GfxColor forcedGlowColor, int renderFlags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetupPulseFXVars(const char *text, int maxLength, int renderFlags, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration, bool *resultDrawRandChar, int *resultRandSeed, int *resultMaxLength, bool *resultDecaying, int *resultdecayTimeElapsed) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetDecayingLetterInfo(unsigned int letter, struct Font_s *font, int *randSeed, int decayTimeElapsed, int fxBirthTime, int fxDecayDuration, unsigned char alpha, bool *resultSkipDrawing, unsigned char *resultAlpha, unsigned int *resultLetter, bool *resultDrawExtraFxChar) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DrawTextFxExtraCharacter(const struct Material *material, int charIndex, float x, float y, float w, float h, float sinAngle, float cosAngle, unsigned long color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ModulateByteColors(unsigned char colorA, unsigned char colorB) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DrawText2D(const char *text, float x, float y, struct Font_s *font, float xScale, float yScale, float sinAngle, float cosAngle, const union GfxColor color, int maxLength, int renderFlags, int cursorPos, char cursorLetter, float padding, union GfxColor glowForcedColor, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration, const struct Material *fxMaterial, const struct Material *fxMaterialGlow) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawText(const char *text, struct Font_s *font, float x, float y, const union GfxColor color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_DrawCharInSpace(const struct Material *material, const float *xyz, const float *dx, const float *dy, const struct Glyph *glyph, unsigned long color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawTextInSpace(const char *text, struct Font_s *font, const float *org, const float *xPixelStep, const float *yPixelStep, unsigned long color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_DrawText2DCmd(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_DrawText3DCmd(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_ProjectionSetCmd(struct GfxRenderCommandExecState *execState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_BeginFrame(const void *data) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_SwapBuffers() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_EndFrame(unsigned int drawType) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_UpdateBackEndDvarOptions() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ExecuteRenderCommandsLoop(const void *cmds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Draw3D() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_SwapTimeout() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_CallExecuteRenderCommands() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_RenderCommandFrame(const void *data) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AcquireDeviceOwnership() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TryAcquireDeviceOwnership(int *waitedForFile) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReleaseDeviceOwnership() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_HasDeviceOwnership() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_ShowDirtyDiscError() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShowDirtyDiscError() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BladeErrorDisplay(const char *errorMessage) -> enum BladeErrorResponse
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BladeErrorHandleResponse(enum BladeErrorResponse response) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_RenderThreadIdle() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_RenderThread(unsigned int threadContext) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_InitBackendGlobalStructs() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_InitCodeConstants() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetBspImages() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_InitSingleCodeImage(unsigned int codeTexture, const struct GfxImage *image, unsigned char samplerState, const char *name) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_InitCodeImages() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_RegisterBackendAssets() -> void
{

}

#endif // __UNIMPLEMENTED__
