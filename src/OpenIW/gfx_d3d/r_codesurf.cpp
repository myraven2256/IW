//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_BeginCodeSurfs(enum GfxCodeSurfUser user, enum GfxCodeSurfListType surfList, struct GfxCodeSurfGlob **codeSurfGlobOut) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EndCodeSurfs(struct GfxCodeSurfGlob *codeSurfGlob, enum GfxCodeSurfUser user) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReserveCodeSurfVerts(struct GfxCodeSurfGlob *codeSurfGlob, unsigned int vertCount, unsigned short *baseVertexOut) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReturnCodeSurfVerts(struct GfxCodeSurfGlob *codeSurfGlob, unsigned int vertCount, const struct GfxPackedVertex *vertsIter) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReserveCodeSurfIndices(struct GfxCodeSurfGlob *codeSurfGlob, unsigned int indexCount, struct r_double_index_t **indicesOut) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ReserveCodeSurfBuffers(struct GfxCodeSurfGlob *codeSurfGlob, unsigned int vertCount, unsigned int indexCount, unsigned int argCount, unsigned short *baseVertexOut, struct r_double_index_t **indicesOut, unsigned int *argOffsetOut) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetCodeSurfArgs(struct GfxCodeSurfGlob *codeSurfGlob[0x4], unsigned int argOffset) -> float*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCodeSurf(struct GfxCodeSurfGlob *codeSurfGlob, struct Material *mtlHandle, struct r_double_index_t *indices, unsigned int indexCount, unsigned int argOffset, unsigned int argCount, const char *fxName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddCode3DQuadSurf(struct GfxCodeSurfGlob *codeSurfGlob, unsigned short baseVertex, struct r_double_index_t *indices, const float *center, const float *axis[0x3], float width, float height, float s0, float t0, float s1, float t1, const float *color, struct Material *material) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CodeSurfVertIter_Begin(struct GfxCodeSurfGlob *codeSurfGlob, unsigned short baseVertex) -> struct GfxPackedVertex*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CodeSurfArgsIter_Begin(struct GfxCodeSurfGlob *codeSurfGlob[0x4], unsigned int argsOffset) -> float*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxSortCodeSurfsInterface::GetIncrement(const struct GfxCodeSurf *codeSurf) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GfxSortCodeSurfsInterface::GetMaterialSortedIndex(const struct GfxCodeSurf *codeSurf) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EmitCodeSurfs(struct GfxCodeSurfList *codeSurfList, unsigned int codeSurfLimit, enum GfxCodeSurfListType surfList) -> void
{

}

#endif // __UNIMPLEMENTED__
