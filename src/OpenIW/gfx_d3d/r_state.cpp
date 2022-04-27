//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_SetTexFilter() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetInitialContextState(struct D3DDevice *device) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownCmdBufState(struct GfxCmdBufState *state) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DepthHackNearClipChanged(struct GfxCmdBufSourceState *source) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChangeDepthHackNearClip(struct GfxCmdBufSourceState *source, unsigned int depthHackFlags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ChangeObjectPlacement_Core(struct GfxCmdBufSourceState *source, const struct GfxPlacement *placement, float scale, int worldMatrixAlternateIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChangeObjectScaledPlacement(struct GfxCmdBufSourceState *source, const struct GfxScaledPlacement *placement) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChangeObjectScaledPlacementRemote(struct GfxCmdBufSourceState *source, const struct GfxScaledPlacement *remotePlacement) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChangeObjectPlacementRemote(struct GfxCmdBufSourceState *source, const struct GfxPlacement *remotePlacement) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChangeObjectPlacementAlternate(struct GfxCmdBufSourceState *source, const struct GfxScaledPlacement *placement, int worldMatrixAlternateIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetMatrixConstantVersion(struct GfxCmdBufSourceState *source, unsigned int codeConstIndex) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_IsMatrixConstantUpToDate(struct GfxCmdBufSourceState *source, unsigned int codeConstIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_FlagMatrixConstantAsUpToDate(struct GfxCmdBufSourceState *source, unsigned int codeConstIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DeriveViewMatrix(struct GfxCmdBufSourceState *source) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DeriveWorldViewMatrix(struct GfxCmdBufSourceState *source, unsigned int worldMatrixAlternateIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DeriveProjectionMatrix(struct GfxCmdBufSourceState *source) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DeriveViewProjectionMatrix(struct GfxCmdBufSourceState *source) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DeriveWorldViewProjectionMatrix(struct GfxCmdBufSourceState *source, unsigned int worldMatrixAlternateIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DeriveShadowLookupMatrix(struct GfxCmdBufSourceState *source) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GenerateWorldOutdoorLookupMatrix(struct GfxCmdBufSourceState *source, float *outMatrix[0x4]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DeriveCodeMatrix(struct GfxCmdBufSourceState *source, struct GfxCodeMatrices *activeMatrices, unsigned int baseIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetCodeMatrix(struct GfxCmdBufSourceState *source, unsigned int sourceIndex, unsigned int firstRow) -> const float*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetTextureFromCode(struct GfxCmdBufSourceState *source, unsigned int codeTexture, unsigned char *samplerState) -> const struct GfxImage*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TextureFromCodeError(struct GfxCmdBufSourceState *source, unsigned int codeTexture) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_OverrideGrayscaleImage(int dvarValue, const struct dvar_t *dvar) -> const struct GfxImage*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetLightmap(struct GfxCmdBufContext context, unsigned int lmapIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetReflectionProbe(struct GfxCmdBufContext context, unsigned int reflectionProbeIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetClipDepthNear(enum GfxDepthRangeType depthRangeType) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetClipDepthFar(enum GfxDepthRangeType depthRangeType) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChangeDepthRange(struct GfxCmdBufState *state, enum GfxDepthRangeType depthRangeType) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BeginMaterial(struct GfxCmdBufState *state, const struct Material *material, enum MaterialTechniqueType techType) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearAllStreamSources(struct GfxCmdBufPrimState *state) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawIndexedPrimitive(struct GfxCmdBufPrimState *state, const struct GfxDrawPrimArgs *args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawIndexedPrimitiveUP(struct GfxCmdBufState *state, const struct GfxDrawPrimArgs *args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChangeState_0(struct GfxCmdBufState *state, unsigned int stateBits0) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChangeState_1(struct GfxCmdBufState *state, unsigned int stateBits1) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_HW_ForceDisableGammaWrites(struct GfxCmdBufState *state) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetSampler(struct GfxCmdBufContext context, unsigned int samplerIndex, unsigned char samplerState, const struct GfxImage *image) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetSamplerState(struct GfxCmdBufState *state, unsigned int samplerIndex, unsigned char samplerState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ForceSetBlendState(struct D3DDevice *device, unsigned int stateBits0) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ForceSetStencilState(struct D3DDevice *device, unsigned int stateBits1) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PixStartNamedRenderTarget(enum GfxRenderTargetId renderTargetId) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_PixEndNamedRenderTarget() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetViewport(struct GfxCmdBufSourceState *source, struct GfxViewport *outViewport) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ForceSetViewport(struct GfxCmdBufState *state, const struct GfxViewport *viewport) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetViewport(struct GfxCmdBufState *state, const struct GfxViewport *viewport) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetViewportStruct(struct GfxCmdBufSourceState *source, const struct GfxViewport *viewport) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetViewportValues(struct GfxCmdBufSourceState *source, int x, int y, int width, int height) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetFullViewport(struct GfxCmdBufSourceState *source) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UpdateViewport(struct GfxCmdBufSourceState *source, struct GfxViewport *viewport) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawSurfs_Viewport(struct GfxCmdBufContext context, struct GfxCmdBufState *prepassState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ViewportBehaviorForRenderTarget(enum GfxRenderTargetId renderTargetId) -> enum GfxViewportBehavior
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DisableSampler(struct GfxCmdBufState *state, unsigned int samplerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UnbindImage(struct GfxCmdBufState *state, const struct GfxImage *image) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetRenderTargetSize(struct GfxCmdBufSourceState *source, enum GfxRenderTargetId newTargetId) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetRenderTargetSize(enum GfxRenderTargetId targetId, unsigned int *width, unsigned int *height) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetRenderTarget(struct GfxCmdBufContext context, enum GfxRenderTargetId newTargetId) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearScreenInternal(struct D3DDevice *device, unsigned char whichToClear, const float *color, float depth, unsigned char stencil, const struct GfxViewport *viewport) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearScreen(struct D3DDevice *device, unsigned char whichToClear, const float *color, float depth, unsigned char stencil, const struct GfxViewport *viewport) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ForceSetPolygonOffset(struct D3DDevice *device, unsigned int stateBits1) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetMeshStream(struct GfxCmdBufState *state, struct GfxMeshData *mesh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetCompleteState(struct D3DDevice *device, const unsigned int *stateBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_DrawCall(function *callback, const void *userData, struct GfxCmdBufSourceState *source, const struct GfxSceneDef *sceneDef, const struct GfxViewParms *viewParms, struct GfxDrawCallOutput *drawOutput) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_HW_SetScissor(struct GfxCmdBufState *state, const struct GfxViewport *scissorViewport) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_HW_EnableScissor(struct GfxCmdBufContext context, struct GfxCmdBufState *prepassState, const struct GfxViewport *scissorViewport) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_HW_DisableScissor(struct GfxCmdBufState *state, struct GfxCmdBufState *prepassState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_HW_EnableScissor2D(struct GfxCmdBufState *state, const struct GfxViewport *scissorViewport) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_HW_DisableScissor2D(struct GfxCmdBufState *state) -> void
{

}

#endif // __UNIMPLEMENTED__
