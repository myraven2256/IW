//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto R_InitLocalCmdBufState(struct GfxCmdBufState *state) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_ShutdownLocalCmdBufState(struct GfxCmdBufState *state) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_InitGlobalCmdBufState() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetDepthRange(struct GfxCmdBufState *state, enum GfxDepthRangeType depthRangeType) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetDefaultDepthRange(const struct GfxCmdBufContext context) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_MakeShaderConstantDirty(unsigned __int64 *constant) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetObjectPlacement(struct GfxCmdBufSourceState *source, const struct GfxPlacement *placement) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetObjectScaledPlacementRemote(struct GfxCmdBufSourceState *source, const struct GfxScaledPlacement *remotePlacement, const struct GfxScaledPlacement *placement) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetObjectScaledPlacement(struct GfxCmdBufSourceState *source, const struct GfxScaledPlacement *placement) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetObjectScaledPlacementAlternateRemote(struct GfxCmdBufSourceState *source, unsigned int worldMatrixAlternateIndex, const struct GfxScaledPlacement *remotePlacement, const struct GfxScaledPlacement *placement) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_ClearObjectPlacementAllAlternates(struct GfxCmdBufSourceState *source) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetManualObjectPlacement(struct GfxCmdBufSourceState *source) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_IsChangeablePixelShaderConst(unsigned int constant) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_DirtyCodeConstant(struct GfxCmdBufSourceState *source, unsigned int constant) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_DirtyCodeConstantBlock(struct GfxCmdBufState *state, unsigned int dest) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_DirtyMatrixConstant(struct GfxCmdBufState *state, unsigned int dest) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetInputCodeConstant(struct GfxCmdBufInput *input, unsigned int constant, float x, float y, float z, float w) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetInputCodeConstantFromVec4(struct GfxCmdBufInput *input, unsigned int constant, const float *value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetCodeConstant(struct GfxCmdBufSourceState *source, unsigned int constant, float x, float y, float z, float w) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetCodeConstantFromVec4(struct GfxCmdBufSourceState *source, unsigned int constant, const float *value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_UpdateCodeConstant(struct GfxCmdBufSourceState *source, unsigned int constant, float x, float y, float z, float w) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_UpdateCodeConstantFromVec4(struct GfxCmdBufSourceState *source, unsigned int constant, const float *value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_UpdateShadowLookupMatrix(struct GfxCmdBufSourceState *source, unsigned int sceneLightIndex, const struct GfxMatrix *lookupMatrix) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetCodeImageSamplerState(struct GfxCmdBufSourceState *source, unsigned int codeTexture, unsigned char samplerState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetInputCodeImageTexture(struct GfxCmdBufInput *input, unsigned int codeTexture, const struct GfxImage *image) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetCodeImageTexture(struct GfxCmdBufSourceState *source, unsigned int codeTexture, const struct GfxImage *image) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static inline auto R_SetVertexShaderConstantFromLiteral(struct GfxCmdBufState *state, unsigned int dest, const float *literal) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetPixelShaderConstantFromLiteral(struct GfxCmdBufState *state, unsigned int dest, const float *literal) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_ChangeIndices(struct GfxCmdBufPrimState *state, struct D3DIndexBuffer *ib) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetIndices(struct GfxCmdBufPrimState *primState, struct D3DIndexBuffer *ib) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_ChangeStreamSource(struct GfxCmdBufPrimState *state, int streamIndex, struct D3DVertexBuffer *vb, unsigned int vertexOffset, unsigned int vertexStride) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetStreamSource(struct GfxCmdBufPrimState *primState, struct D3DVertexBuffer *vb, unsigned int vertexOffset, unsigned int vertexStride) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetDoubleStreamSource(struct GfxCmdBufPrimState *primState, struct D3DVertexBuffer *vb0, unsigned int vertexOffset0, unsigned int vertexStride0, struct D3DVertexBuffer *vb1, unsigned int vertexOffset1, unsigned int vertexStride1) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetVertexDecl(struct GfxCmdBufPrimState *primState, const struct MaterialVertexDeclaration *vertexDecl) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetVertexDeclType(struct GfxCmdBufPrimState *primState, enum MaterialVertexDeclType vertDeclType) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetAlphaTestFunction(struct GfxCmdBufState *state, unsigned int stateBits0) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetDefaultAlphaTestFunction(struct GfxCmdBufState *state) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_SetState(struct GfxCmdBufState *state, const unsigned int *stateBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_HW_SetRenderTarget(struct GfxCmdBufState *state, enum GfxRenderTargetId newTargetId) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_DecodeSamplerState(unsigned char samplerState) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
