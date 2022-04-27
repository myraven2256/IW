//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Glass_Prefetch<FxGlassPiecePlace>(union FxGlassPiecePlace *data) -> union FxGlassPiecePlace*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_PrefetchArray<FxGlassGeometryData>(union FxGlassGeometryData *data, unsigned int count) -> union FxGlassGeometryData*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_WaitPrefetch<FxGlassGeometryData>(const union FxGlassGeometryData *data) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_PrefetchPiecePlaceIndex(const struct FxGlassSystem *glassSys, unsigned int pieceIndex) -> const union FxGlassPiecePlace*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_PrefetchPieceStateIndex(const struct FxGlassSystem *glassSys, unsigned int pieceIndex) -> const struct FxGlassPieceState*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_PrefetchHalfThicknessIndex(const struct FxGlassSystem *glassSys, unsigned int pieceIndex) -> const float*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_PrefetchDefFromIndex(const struct FxGlassSystem *glassSys, unsigned int defIndex) -> const struct FxGlassDef*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_PrefetchGeoData(const struct FxGlassSystem *glassSys, unsigned int firstGeoIndex, unsigned int geoCount) -> const union FxGlassGeometryData*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_PrefetchLightingHandles(const struct FxGlassSystem *glassSys) -> unsigned short*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_PrefetchInitPieceState(const struct FxGlassSystem *glassSys, unsigned int initIndex) -> const struct FxGlassInitPieceState*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_GetBufferReserveCounts(const struct FxGlassPieceState *pieceState, const union FxGlassGeometryData *geoData, unsigned int drawFlags, unsigned int *reserveVertCount, unsigned int *reserveIndexCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_TransformVertexArray(struct FxGlassDrawState *drawState, const struct FxGlassVertex *vertArray, unsigned int vertCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_TransformHoleVertices(struct FxGlassDrawState *drawState, const union FxGlassGeometryData *geoData, unsigned int holeDataCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_MakeFaceVerts(struct FxGlassDrawState *drawState, const struct FxGlassFaceDef *faceDef, unsigned int vertCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_MakeSimpleFanFaceIndices(unsigned int vertCount, unsigned short baseVertex, int i1, int i2, struct r_double_index_t *dstTri) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_MakeFaceIndices(const struct FxGlassDrawState *drawState, unsigned int borderVertCount, const union FxGlassGeometryData *geoData, unsigned int fanDataCount, int i1, int i2) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_TestCamAgainstBorderSegmentPlane(const struct FxGlassDrawState *drawState, const float *camOrg, unsigned int i1, unsigned int i2) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_DrawBorderSegment(struct FxGlassDrawState *drawState, unsigned int i0, unsigned int i1, unsigned int i2, unsigned int i3, bool usedLastEdge) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_DrawBorderSegmentIfVisible(struct FxGlassDrawState *drawState, const float *camOrg, unsigned int i0, unsigned int i1, unsigned int i2, unsigned int i3, bool usedLastEdge) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_MakeBorderGeometry(struct FxGlassDrawState *drawState, const float *camOrg, unsigned int supportMask, unsigned int firstVert, unsigned int vertCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_MakeSingleHoleBorderGeometry(struct FxGlassDrawState *drawState, const float *camOrg, unsigned int firstVert, unsigned int touchVert, unsigned int uniqueVertCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_MakeAllHoleBorderGeometry(struct FxGlassDrawState *drawState, const float *camOrg, const union FxGlassGeometryData *geoData, unsigned int holeDataCount, unsigned int firstVert) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_MakeAllCrackBorderGeometry(struct FxGlassDrawState *drawState, const float *camOrg, const union FxGlassGeometryData *geoData, unsigned int crackDataCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_MakeFaceGeometry(struct FxGlassDrawState *drawState, const float *camOrg, unsigned int vertCount, const union FxGlassGeometryData *geoData, unsigned int fanCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_MakePieceGeometry(struct FxGlassDrawState *drawState, const union FxGlassPiecePlace *piecePlace, const struct FxGlassPieceState *pieceState, const struct FxGlassDef *def, const union FxGlassGeometryData *geoData, const float *camOrg, unsigned int drawFlags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_DrawPiece(unsigned int pieceIndex, const union FxGlassPiecePlace *piecePlace, const struct FxGlassPieceState *pieceState, const struct FxGlassDef *def, const union FxGlassGeometryData *geoData, unsigned short lightingHandle, const struct GfxLightingInfo *lightingInfo, const struct FxGlassInitPieceState *initPieceState, struct FxGenerateGlassVertsCmd *cmd, unsigned int drawFlags, float *glassDist) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_GenerateVerts(const struct FxGlassSystem *glassSys, struct FxGlassVisInfo *visInfo, struct FxGenerateGlassVertsCmd *cmd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_CompareVisRefs(struct FxGlassPieceVisRef &visRef0, struct FxGlassPieceVisRef &visRef1) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GlassUpdatePieceLightingCmd(struct FxGlassPieceLightingCmd *lightingCmd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GlassTris_AddGlassPieceVerts(const struct FxGlassSystem *glassSys, const struct FxGlassDef *def, const struct FxGlassPieceState *pieceState, const union FxGlassPiecePlace *piecePlace, const union FxGlassGeometryData *geoData, float *axis[0x3], float side, float *verts[0x3], unsigned int *vertIndex, unsigned int maxVerts) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GlassTris_AddGlassPieceTris(const struct FxGlassSystem *glassSys, const struct FxGlassDef *def, const struct FxGlassPieceState *pieceState, const union FxGlassPiecePlace *piecePlace, const union FxGlassGeometryData *geoData, float *axis[0x3], float side, unsigned int startVertIndex, struct GlassTri *tris, unsigned int *triIndex, unsigned int maxTris) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GlassTris_AddGlassPiece(const struct FxGlassSystem *glassSys, unsigned int pieceIndex, float *normal, struct GlassTri *tris, unsigned int *triIndex, unsigned int maxTris, float *verts[0x3], unsigned int *vertIndex, unsigned int maxVerts, float *glassNormal) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GlassTrisInPiece(unsigned int pieceIndex, float *normal, struct GlassTri *tris, unsigned int maxTris, float *verts[0x3], unsigned int maxVerts, unsigned int *triCount, float *glassNormal) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GlassPiecesInSphere(struct Sphere *sphere, unsigned short *pieceIndices, unsigned int maxPieces, unsigned int *pieceCount) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GlassPieceMaterial(unsigned int pieceIndex) -> const struct Material*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateGlassVertsCmd(struct FxGenerateGlassVertsCmd *cmd) -> void
{

}

#endif // __UNIMPLEMENTED__
