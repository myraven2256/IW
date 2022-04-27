//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_r_rendercmds() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_PerformanceCounters() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitRenderCommands() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownRenderCommands() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_InitDynamicMesh(struct GfxMeshData *mesh, unsigned int indexCount, unsigned int vertCount, unsigned int vertSize) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CmdBufUpdateFences(struct GfxCmdRingBuf *cmdBuf) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CmdBufReserveMemory(struct GfxCmdRingBuf *cmdBuf) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CmdBufAllocCallback(unsigned long Context, unsigned long Flags, unsigned long *pSize, unsigned long Alignment) -> void*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CmdBufFreeCallback(unsigned long Context) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CmdBufQueryCallback(unsigned long Context, unsigned long *pUsed, unsigned long *pRemaining) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitRenderBuffers() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitRenderThread() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SyncRenderThread() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReleaseDeviceOwnershipForStreaming() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ClearCmdList() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_UpdateSkinCacheUsage() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SkinCacheReachedThreshold() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReleaseThreadOwnership() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_WaitRenderer() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_WaitRenderer2() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ToggleSmpFrameCmd() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MayRenderFromBackend() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_HandOffToBackend() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IssueRenderCommands(unsigned int type) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AbortRenderCommands() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetCommandBuffer(enum GfxRenderCommand renderCmd, int bytes) -> void*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GrowCommandBuffer(int additionalByteCount) -> void*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BeginDisplayCmdList2D() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BeginClientCmdList2D() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearClientCmdList2D() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BeginSharedCmdList() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdEndOfList() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ToggleSmpFrame() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdateImageDeltaStats() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocViewParms() -> struct GfxViewParms*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_RenderCommandMaterial(struct Material *material) -> const struct Material*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdDrawStretchPic(float x, float y, float w, float h, float s0, float t0, float s1, float t1, const float *color, struct Material *material) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdDrawStretchPicFlipST(float x, float y, float w, float h, float s0, float t0, float s1, float t1, const float *color, struct Material *material) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdDrawStretchPicRotateXY(float x, float y, float w, float h, float s0, float t0, float s1, float t1, float angle, const float *color, struct Material *material) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdDrawStretchPicRotateST(float x, float y, float w, float h, float centerS, float centerT, float scaleFinalS, float scaleFinalT, float minS, float maxS, float minT, float maxT, float angle, const float *color, struct Material *material) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdDrawStretchRaw(int x, int y, int w, int h, int cols, int rows, const unsigned char *data, int client, int dirty) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AddBaseDrawTextCmd(const char *text, int maxChars, struct Font_s *font, float x, float y, float xScale, float yScale, float rotation, const float *color, int style, int cursorPos, char cursor) -> struct GfxCmdDrawText2D*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdDrawTextWithCursor(const char *text, int maxChars, struct Font_s *font, float x, float y, float xScale, float yScale, float rotation, const float *color, int style, int cursorPos, char cursor) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetDrawText2DGlowParms(struct GfxCmdDrawText2D *cmd, const float *color, const float *glowColor) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetDrawText2DPulseFXParms(struct GfxCmdDrawText2D *cmd, struct Material *fxMaterial, struct Material *fxMaterialGlow, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdDrawText(const char *text, int maxChars, struct Font_s *font, float x, float y, float xScale, float yScale, float rotation, const float *color, int style) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdDrawTextSubtitle(const char *text, int maxChars, struct Font_s *font, float x, float y, float xScale, float yScale, float rotation, const float *color, int style, const float *glowColor, bool cinematic) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdDrawTextWithEffects(const char *text, int maxChars, struct Font_s *font, float x, float y, float xScale, float yScale, float rotation, const float *color, int style, const float *glowColor, struct Material *fxMaterial, struct Material *fxMaterialGlow, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdDrawTextInSpace(const char *text, struct Font_s *font, const float *org, const float *xPixelStep, const float *yPixelStep, const float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CopyPoolTextToCmd(const char *textPool, int poolSize, int firstChar, int charCount, struct GfxCmdDrawText2D *cmd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AddBaseDrawConsoleTextCmd(const char *textPool, int poolSize, int firstChar, int charCount, struct Font_s *font, float x, float y, float xScale, float yScale, const float *color, int style) -> struct GfxCmdDrawText2D*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdDrawConsoleText(const char *textPool, int poolSize, int firstChar, int charCount, struct Font_s *font, float x, float y, float xScale, float yScale, const float *color, int style) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdDrawConsoleTextSubtitle(const char *textPool, int poolSize, int firstChar, int charCount, struct Font_s *font, float x, float y, float xScale, float yScale, const float *color, int style, const float *glowColor) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdDrawConsoleTextPulseFX(const char *textPool, int poolSize, int firstChar, int charCount, struct Font_s *font, float x, float y, float xScale, float yScale, const float *color, int style, const float *glowColor, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration, struct Material *fxMaterial, struct Material *fxMaterialGlow) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdDrawQuadPic(const float *verts[0x2], const float *color, struct Material *material) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdDrawFullScreenColoredQuad(float s0, float t0, float s1, float t1, const float *color, struct Material *material) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdSetMaterialColor(const float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdSetViewportValues(int x, int y, int width, int height) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdSetScissorRect(int x, int y, int width, int height) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdClearScissorRect() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetTestLods() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AreAnyImageOverridesActive() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetOutdoorFeatherConst() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_EnvMapOverrideConstants() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_FogIsWorldLoaded() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_UpdateFrontEndDvarOptions() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BeginFrame() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EndFrame() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdClearScreen(int whichToClear, const float *color, float depth, unsigned char stencil) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdSaveScreen(int screenTimerId) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdSaveScreenSection(float viewX, float viewY, float viewWidth, float viewHeight, int screenTimerId) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdBlendSavedScreenShockBlurred(int fadeMsec, float viewX, float viewY, float viewWidth, float viewHeight, int screenTimerId) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdBlendSavedScreenShockFlashed(float intensityWhiteout, float intensityScreengrab, float viewX, float viewY, float viewWidth, float viewHeight) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdRestoreSavedScreen(float viewX, float viewY, float viewWidth, float viewHeight) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddCmdDrawPoints(short pointCount, unsigned char size, unsigned char dimensions, const struct GfxPointVertex *verts) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdDrawPoints2D(short pointCount, unsigned char size, const struct GfxPointVertex *verts) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdDrawPoints3D(short pointCount, unsigned char size, const struct GfxPointVertex *verts) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddCmdDrawLines(short lineCount, unsigned char width, unsigned char dimensions, const struct GfxPointVertex *verts) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdDrawLines2D(short lineCount, unsigned char width, const struct GfxPointVertex *verts) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdDrawLines3D(short lineCount, unsigned char width, const struct GfxPointVertex *verts) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddCmdDrawTriangles(struct Material *materialHandle, enum MaterialTechniqueType techType, unsigned char dimensions, short indexCount, const unsigned short *indices, short vertexCount, const float *xyzw[0x4], const float *normal[0x3], const unsigned char *color[0x4], const float *st[0x2]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdDrawTriangles2D(struct Material *materialHandle, enum MaterialTechniqueType techType, short indexCount, const unsigned short *indices, short vertexCount, const float *xyzw[0x4], const float *normal[0x3], const unsigned char *color[0x4], const float *st[0x2]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdDrawTriangles3D(struct Material *materialHandle, enum MaterialTechniqueType techType, short indexCount, const unsigned short *indices, short vertexCount, const float *xyzw[0x4], const float *normal[0x3], const unsigned char *color[0x4], const float *st[0x2]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdDrawProfile() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddCmdProjectionSet(enum GfxProjectionTypes projection) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCmdProjectionSet2D() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BeginRemoteScreenUpdate() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EndRemoteScreenUpdate() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PushRemoteScreenUpdate(int remoteScreenUpdateNesting) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PopRemoteScreenUpdate() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsInRemoteScreenUpdate() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_IsInRemoteScreenUpdate() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AnySunHasShadowMap(const struct GfxBackEndData *data) -> bool
{

}

#endif // __UNIMPLEMENTED__
