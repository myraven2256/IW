//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Glass_IsEdgeLoopBackwards(const struct FxGlassCrackWork *work, const struct FxGlassCrackEdge *edgeLoop) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_HasShardTriangleEdge(const struct FxGlassShardTriangulate *triang, unsigned char i0, unsigned char i1) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_ShouldKeepFanVert(const struct FxGlassCrackWork *work, const struct FxGlassShardTriangulate *triang, unsigned char i0, unsigned char i1, unsigned char i2, unsigned char pivot) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_SimplifyTriangleFan(const struct FxGlassCrackWork *work, struct FxGlassShardTriangulate *triang, unsigned int fanVertCount) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_SetupAngleMetric(const struct FxGlassVertex *v0, const struct FxGlassVertex *v1, struct FxGlassCrackAngleEval *angleEval) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_EvaluateEdgeEquationAtPoint(const struct FxGlassShardSeenEdge *seenEdge, const struct FxGlassVertex *point) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_EvaluatePointVersusBaseEdge(const struct FxGlassCrackWork *work, struct FxGlassShardTriangulate *triang, const struct FxGlassCrackAngleEval *angleEval, unsigned int i) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_CompareEvaluatedPoints(const unsigned int i0, const unsigned int i1) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_AreEvaluatedPointsColinear(const struct FxGlassShardPointMetric *metric0, const struct FxGlassShardPointMetric *metric1) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_RemovePointsBehindEdge(const struct FxGlassCrackWork *work, const struct FxGlassShardSeenEdge *seenEdge, unsigned int beginIndex, unsigned int endIndex, unsigned int *pts) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_GetShardTriangleFanForBaseEdge(const struct FxGlassCrackWork *work, struct FxGlassShardTriangulate *triang, unsigned char evalTime, unsigned int baseEdge) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_PickShardTriangleFanBaseEdge(const struct FxGlassCrackWork *work, struct FxGlassShardTriangulate *triang, unsigned char evalTime) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_GetShardTriangleFan(const struct FxGlassCrackWork *work, struct FxGlassShardTriangulate *triang, unsigned char evalTime) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_RemoveShardTriangleEdge(struct FxGlassShardTriangulate *triang, unsigned char i0, unsigned char i1) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_AddShardTriangleEdge(struct FxGlassShardTriangulate *triang, unsigned char i0, unsigned char i1) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_UpdateShardTriangleEdgesForFan(struct FxGlassShardTriangulate *triang, unsigned int fanVertCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_AddEdgesForLoop(const struct FxGlassCrackWork *work, struct FxGlassCrackEdge *edgeLoop, struct FxGlassShardTriangulate *triang, bool isGoodPivotLoop) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_SetupTriangulateShard(const struct FxGlassCrackWork *work, struct FxGlassShard *shard, struct FxGlassShardTriangulate *triang) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_RotateBorderVerts(struct FxGlassShard *shard, unsigned int newZeroIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_TriangulateShard(const struct FxGlassCrackWork *work, struct FxGlassShard *shard) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_AreaX2AndScaledCentroidForEdgeLoop(const struct FxGlassCrackWork *work, const struct FxGlassCrackEdge *edgeLoop, double *scaledCentroid) -> double
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_UpdateLoopDependency(struct FxGlassShard *shard, unsigned int firstLoopIndex, unsigned int ptIndex, const unsigned char *isLoopStart) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_ReverseLoopsStartingAt(struct FxGlassShard *shard, unsigned int firstLoopIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_ExtractHoleEdge(struct FxGlassCrackEdge *holeEdge, struct FxGlassCrackEdge *nextHoleEdge, unsigned char *emitAtIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_ExtractCracksAndHolesFromLoop(const struct FxGlassCrackWork *work, struct FxGlassShard *shard, struct FxGlassCrackEdge *edgeLoop) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_ExtractShardCracksAndHoles(struct FxGlassCrackWork *work, struct FxGlassShard *shard, struct FxGlassCrackEdge *const*inLoops, unsigned int inLoopCount) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_AssertValidLoopOrder(const struct FxGlassShard *shard) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_RotateLoops(struct FxGlassShard *shard, unsigned int i0, unsigned int i1) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_SwapLoopParentChildRelationship_r(struct FxGlassShard *shard, unsigned int childIndex) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_ReorderLoops(struct FxGlassShard *shard, unsigned int outerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_SetupShard(const struct FxGlassCrackWork *work, struct FxGlassShard *shard) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_EmitShardVertex(const struct FxGlassCrackWork *work, struct FxGlassShard *shard, unsigned int ptIndex, struct FxGlassVertex *vert) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_PackShardBorder(const struct FxGlassCrackWork *work, struct FxGlassShard *shard) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_PackShardHoles(const struct FxGlassCrackWork *work, struct FxGlassShard *shard) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Glass_PackShardCracks(const struct FxGlassCrackWork *work, struct FxGlassShard *shard) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Glass_ConvertLoopsToPiece(struct FxGlassCrackWork *work, struct FxGlassCrackEdge *const*inLoops, unsigned int inLoopCount) -> void
{

}

#endif // __UNIMPLEMENTED__
