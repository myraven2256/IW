//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Glass_ForceRandomSeed(int seed) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_UpdateRandomSeed() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_Random() -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_RandomDvarRange(const struct dvar_t *dvar) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_RandomSmallAngularVelocity(float *avel) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_RandomInt(int count) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_SetCrackEdgeDelta(const struct FxGlassCrackWork *work, struct FxGlassCrackEdge *edge) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_FreeCrackEdge(struct FxGlassCrackWork *work, struct FxGlassCrackEdge *edge) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_GetFreeEdge(struct FxGlassCrackWork *work) -> struct FxGlassCrackEdge*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_AllocCrackEdge(struct FxGlassCrackWork *work, unsigned int i0, unsigned int i1, unsigned int loopIndex, unsigned char edgeType) -> struct FxGlassCrackEdge*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_AllocCrackEdgeTwin(struct FxGlassCrackWork *work, struct FxGlassCrackEdge *twin) -> struct FxGlassCrackEdge*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_FreeLoopEdges(struct FxGlassCrackWork *work, struct FxGlassCrackEdge **loops, unsigned int loopCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_BorderEdgeType(unsigned int supportMask, unsigned int i0) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_UnpackAndAddVertex(struct FxGlassCrackWork *work, struct FxGlassVertex vert) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_GetAngleMetricForDirs(const float *baseDir, const float *testDir) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_FindExistingEdgeBeforeNewEdge(struct FxGlassCrackWork *work, unsigned int i0, unsigned int i1) -> struct FxGlassCrackEdge*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_MakeOuterPieceLoop(struct FxGlassCrackWork *work) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_MakeHolePieceLoops(struct FxGlassCrackWork *work) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_RenumberLoop(struct FxGlassCrackEdge *edgeLoop, unsigned char newLoopIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_MakeCrackPieceLoops(struct FxGlassCrackWork *work) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_CalcLoopBounds(struct FxGlassCrackWork *work, struct FxGlassCrackLoop *loop) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_CalcAllLoopBounds(struct FxGlassCrackWork *work) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_MakePieceLoops(struct FxGlassCrackWork *work) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_InertiaScale(float areaX2) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_SchedulePieceToFall(const struct FxGlassCrackWork *work, const struct FxGlassShard *shard, struct FxGlassPieceDynamics *pieceDynamics) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_GetVertWorldPos(struct FxGlassVertex vert, const float *origin, const float *axis[0x3], float *pos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_AddHingeVert(const float *worldVertPos, float *hingeVertPos[0x3], unsigned int hingeCount) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_ShouldMakeHingeJoint(const float *hingeStart, const float *hingeDir, float hingeLen, const float *centerOfMass) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_CreatePieceJoint(struct FxGlassSystem *glassSys, unsigned int pieceIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_RotatePieceAroundEdge(const struct FxGlassCrackWork *work, const struct FxGlassShard *shard, union FxGlassPiecePlace *piecePlace, const struct FxGlassCrackEdge *pivotEdge) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_SetupPieceFall(struct FxGlassSystem *glassSys, unsigned int pieceIndex, const float *vel, const float *avel) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_StartImmediateFall(const struct FxGlassCrackWork *work, unsigned int newPieceIndex, unsigned int basePieceIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_SetupDynamics(const struct FxGlassCrackWork *work, const struct FxGlassShard *shard, unsigned int newPieceIndex, unsigned int basePieceIndex, const struct FxGlassCrackEdge *pivotEdge) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_StartDelayedFall(struct FxGlassSystem *glassSys, unsigned int pieceIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_ConsiderBreakingPiece(struct FxGlassCrackWork *work, unsigned int pieceIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_FinalizeShard(struct FxGlassCrackWork *work, const struct FxGlassShard *shard) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_AssertDirIsInArc(const float *dir, const float *edge0, const float *edge1) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_PushCrackBranch(struct FxGlassCrackWork *work, struct FxGlassCrackEdge *afterEdge, const float *dir, float len, const float *baseDir, float deflectLimit, float priorCrackLength) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_PopCrackBranch(struct FxGlassCrackWork *work) -> const struct FxGlassCrackBranch*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_ShouldSplitCrack(const struct FxGlassCrackWork *work, unsigned int segmentsSinceSplit) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_CrackLengthScale() -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_DeflectVectorWithSign(float cosMin, float cosMax, float sign, const float *dirIn, float *dirOut) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_DeflectVector(float cosMin, float cosMax, const float *dirIn, float *dirOut) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_DoesSegmentIntersectEitherEdge(const struct FxGlassCrackWork *work, const float *start, const float *end, const struct FxGlassCrackEdge *edgePrev, const struct FxGlassCrackEdge *edge) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_WantToUseDeflection(const struct FxGlassClipSegment *clip, const struct FxGlassCrackEdge *edgeIter, const float *delta, float perpDistClipStartToEdge, float deflectLen) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_UseDeflection(const struct FxGlassCrackWork *work, const struct FxGlassClipSegment *clip, unsigned int snapIndex, const struct FxGlassCrackEdge *edgeIter, const float *delta, float perpDistClipStartToEdge, float deflectLen) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_TraceCrackAgainstEdge(struct FxGlassCrackWork *work, struct FxGlassClipSegment *clip, const float *start, struct FxGlassCrackEdge *edgeIter, struct FxGlassCrackEdge *edgeIterPrev) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_ClipSegmentWithinEdgeLoop(struct FxGlassCrackWork *work, struct FxGlassClipSegment *clip, struct FxGlassCrackEdge *edgeLoop) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_ClipSegment(struct FxGlassCrackWork *work, struct FxGlassClipSegment *clip) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_SplitTwin(struct FxGlassCrackWork *work, struct FxGlassCrackEdge *edge01, struct FxGlassCrackEdge *edge12) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_DoCrackWalk(struct FxGlassCrackWork *work, struct FxGlassCrackWalk *walk) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_MakeFinalPiece(struct FxGlassCrackWork *work) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_MakePiece(struct FxGlassCrackWork *work, struct FxGlassCrackEdge **loops, unsigned int loopCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_IsPointInEdgeLoop(const struct FxGlassCrackWork *work, const float *point, const struct FxGlassCrackEdge *edgeLoop) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_IsEdgeTwinInLoopIndex(const struct FxGlassCrackEdge *edge, unsigned int loopIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_DoesLoopContainLoop(const struct FxGlassCrackWork *work, const struct FxGlassCrackLoop *outerLoop, const struct FxGlassCrackLoop *innerLoop) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_MakePieceForOuterLoop(struct FxGlassCrackWork *work, unsigned int otherPieceLoopIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_SplitLoop(struct FxGlassCrackWork *work, struct FxGlassCrackEdge *edge0, struct FxGlassCrackEdge *edge1, unsigned int loopIndex1) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_ProcessCrack(struct FxGlassCrackWork *work, const struct FxGlassCrackBranch *branch) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_EvaluateSeedDirToEdge(const struct FxGlassCrackWork *work, const struct FxGlassCrackEdge *edgeIter, const float *deltaOrg, float *s, float *distSq) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_SnapSeedDirToEdge(struct FxGlassCrackWork *work, struct FxGlassCrackEdge *hitEdgePrev, float hitEdgeLen, float minDistSq, float *breakOrg, float *seedDir) -> struct FxGlassCrackEdge*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_PickSeedDirForLoop(struct FxGlassCrackWork *work, struct FxGlassCrackEdge *edgeLoop, const float *breakOrg, struct FxGlassSeedDirResults *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_PickSeedDir(struct FxGlassCrackWork *work, float *seedDir) -> struct FxGlassCrackEdge*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_InitialCrackLength() -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_GetDeflectLimit(float cosAngleDelta) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_GetCornerInteriorAngle(const float *delta_p0_p1, const float *delta_p1_p2) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_CreateCracks(struct FxGlassCrackWork *work) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_PrintCrackAssertFloat(float f, const char *suffix) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_PrintCrackAssertArray(const char *headerMsg, unsigned int dataCount, const union FxGlassGeometryData *geoData) -> const union FxGlassGeometryData*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_PrintCrackPieceAssertReproData() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_CrackPiece(struct FxGlassCrackWork *work, struct FxGlassSystem *glassSys, unsigned int pieceIndex, const float *axis[0x3], const struct FxGlassVertex breakOrg, const float *breakDir, float avgCrackLength) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_GetRandomVertex(struct FxGlassSystem *glassSys, unsigned int pieceIndex, float *axis[0x3], struct FxGlassVertex *vertex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_GetVertexForPos(struct FxGlassSystem *glassSys, unsigned int pieceIndex, float *impactPos, float *axis[0x3], int *quantizedPos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_GetVertexForImpact(struct FxGlassSystem *glassSys, unsigned int pieceIndex, float *axis[0x3], struct FxGlassVertex *vertex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_PlaySingleShatterEffect(const struct FxEffectDef *fx, const float *center, const float *axis[0x3], const float *dir, const int *pt) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_PlayShatterEffects(struct FxGlassSystem *glassSys, unsigned int pieceIndex, float *axis[0x3], float *shatterDir, float maxEffects) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CompareFringePieceArea(const unsigned short &index0, const unsigned short &index1) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_DestroyPiece(struct FxGlassSystem *glassSys, unsigned int pieceIndex, float *impactPos, float *impactDir, struct Glass_BreakData *breakData) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_DestroySimplePiece(struct FxGlassSystem *glassSys, unsigned int pieceIndex, float *impactPos, float *impactDir, const float *playerOrigin) -> void
{

}

#endif // __UNIMPLEMENTED__
