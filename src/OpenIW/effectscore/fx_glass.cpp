//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto Glass_AccumInertiaTensorForTriangleWedge(struct FxGlassInertiaTensor *tensor, const float *v0, const float *v1, float halfThickness) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_GetInertiaTensor(struct FxGlassInertiaTensor *tensor, const union FxGlassGeometryData *geoData, unsigned int vertCount, float halfThickness, float totalMass) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_GetConvexHullMask(const struct FxGlassSystem *glassSys, const struct FxGlassPieceState *pieceState) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_AllocPiece(struct FxGlassSystem *glassSys, unsigned char vertCount, unsigned char holeDataCount, unsigned char crackDataCount, unsigned char fanDataCount) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_FreePiece(struct FxGlassSystem *glassSys, unsigned int pieceIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_AddPiecePhysicsObject(struct FxGlassSystem *glassSys, unsigned int pieceIndex, const struct FxGlassDef *def, bool loadingSaveGame) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_FreePiecePhysicsObject(struct FxGlassPieceDynamics *pieceDynamics) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_FreePiecePhysicsJoint(struct FxGlassPieceDynamics *pieceDynamics) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_CompareGeoDataStart(const struct FxGlassPieceState *state0, const struct FxGlassPieceState *state1) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_CompactGeoData(struct FxGlassSystem *glassSys, unsigned int dstIndex, unsigned int srcIndex, unsigned int moveCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_AddActivePiece(struct FxGlassSystem *glassSys, struct FxGlassActiveList *active, unsigned int pieceIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_CompactData(struct FxGlassSystem *glassSys) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_FreeActivePiece(struct FxGlassSystem *glassSys, unsigned int unused, unsigned int pieceIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_FreeAllPieces() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_Shutdown() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_SetInitialState(struct FxGlassSystem *glassSys) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_Init() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_SetupPriority(struct FxGlassSystem *glassSys, struct RemovePiecesData *data, unsigned int pieceIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_MakeRoomForNewPieces_DeletePiece(struct FxGlassSystem *glassSys, struct RemovePiecesData *data, unsigned int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto PartitionPriorityPred::operator()(const struct PiecePriority &piecePriority) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_MakeRoomForNewPieces_r(struct FxGlassSystem *glassSys, struct RemovePiecesData *data, int beginIndex, int endIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_MakeRoomForNewPieces(struct Glass_BreakData *breakData) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_PlayEffect(const struct FxEffectDef *fx, const float *origin, const float *normal) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_DamagePiece(struct FxGlassSystem *glassSys, unsigned int initialPieceIndex, unsigned int pieceIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_DamageInitialPiece(unsigned int pieceIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_DeletePieceIfIndexMatches(struct FxGlassSystem *glassSys, unsigned int initialPieceIndex, unsigned int pieceIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_DeleteInitialPiece(unsigned int pieceIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_FindInitialPiece(struct FxGlassSystem *glassSys, struct FindInitialPieceData *data, unsigned int pieceIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_GetPieceIndexForInitialPiece(unsigned int initialPieceIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_DestroyInitialPiece(unsigned int initialPieceIndex, float *impactPos, float *impactDir, struct Glass_BreakData *breakData) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_GetInitialPieceCenter(unsigned int initialPieceIndex, float *center) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_GetInitialPieceAxis(unsigned int initialPieceIndex, float *axis[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_GetInitialPieceAreaX2(unsigned int initialPieceIndex) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_DrawDebugPiece(struct FxGlassSystem *glassSys, const float *playerOrigin, unsigned int pieceIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_DrawDebug(const float *playerOrigin) -> void
{

}

#endif // __UNIMPLEMENTED__
