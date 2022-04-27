//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto FX_GetDobjModelGlobalBoneBase(const struct DObj *obj, int modelIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_fx_marks() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_InitMarksBuffers(int localClientNum, struct FxMarksSystem *system) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_InitMarksSystem(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ClearMarks(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_FreeMarkTriGroups(struct FxMarksSystem *marksSystem, struct FxMark *mark) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_FreeMarkPointGroups(struct FxMarksSystem *marksSystem, struct FxMark *mark) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_FreeMarkFromList(struct FxMarksSystem *marksSystem, struct FxMark *mark, unsigned short *listHead) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_FreeMark(struct FxMarksSystem *marksSystem, struct FxMark *mark) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_FreeRewoundMarks(struct FxMarksSystem *marksSystem, int cutoffTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_FreeLruMark(struct FxMarksSystem *marksSystem) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_AllocMarkTris(struct FxMarksSystem *marksSystem, const struct FxMarkTri *markTris, int triCount) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_AllocMarkPoints(struct FxMarksSystem *marksSystem, int pointCount) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_FindSpotForMark(unsigned short &outSpotMarkPrev, unsigned short *&outSpotHandlePrev, struct FxMarksSystem *marksSystem, unsigned short *head, struct FxMark *mark) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_LinkMarkIntoList(struct FxMarksSystem *marksSystem, unsigned short *head, struct FxMark *mark) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_CopyMarkTris(struct FxMarksSystem *marksSystem, const struct FxMarkTri *srcTris, unsigned short dstGroupHandle, int triCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_CopyMarkPoints(struct FxMarksSystem *marksSystem, const struct FxMarkPoint *srcPoints, unsigned short dstGroupHandle, int pointCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_FindModelHead(struct FxMarksSystem *marksSystem, unsigned short modelIndex, int type) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_MarkContextsCompare(const struct GfxMarkContext *context0, const struct GfxMarkContext *context1) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_CompareMarkTris(const struct FxMarkTri &tri0, const struct FxMarkTri &tri1) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_AllocAndConstructMark(int localClientNum, int triCount, int pointCount, struct Material *material, unsigned char fadeInfo, struct FxMarkTri *markTris, const struct FxMarkPoint *markPoints, const float *origin, float radius, const float *texCoordAxis, const unsigned char *nativeColor, int viewmodelClientIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_ImpactMark_Generate_AddEntityBrush(int localClientNum, struct MarkInfo *markInfo, unsigned int entityIndex, const float *origin, float radius) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_ImpactMark_Generate_AddEntityModel(int localClientNum, struct MarkInfo *markInfo, unsigned int entityIndex, const float *origin, float radius) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_ImpactMark_Generate_AddViewmodel(int localClientNum, struct MarkInfo *markInfo, const float *origin, float radius, int viewmodelClientIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_ImpactMark_Generate_Callback(void *context, int triCount, struct FxMarkTri *tris, int pointCount, struct FxMarkPoint *points, const float *markOrigin, const float *markTexCoordAxis) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_ImpactMark_Generate(struct MarkInfo *markInfo, int localClientNum, enum MarkFragmentsAgainstEnum markAgainst, struct Material *material, unsigned char fadeInfo, const float *origin, const float *axis[0x3], float orientation, const unsigned char *nativeColor, float radius, unsigned int markEntnum, bool markGivenModelsOnly, bool markViewmodel, int viewmodelClientIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_ImpactMark(int localClientNum, struct Material *worldMaterial, struct Material *modelMaterial, unsigned char fadeInfo, const float *origin, const float *quat, float orientation, const unsigned char *nativeColor, float radius, unsigned int markEntnum, bool markGivenModelsOnly, bool markViewmodel, int viewmodelClientIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_BeginMarks(int clientIndex, int serverTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CreateImpactMark(int localClientNum, const struct FxElemDef *elemDef, const struct FxSpatialFrame *spatialFrame, int randomSeed, unsigned int markEntnum, bool markViewmodel, bool markGivenModelsOnly, int viewmodelClientIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_MarkEntDetachAll(int localClientNum, int entnum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_MarkGlassDetachAll(int localClientNum, int glassPieceIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_MarkEntDetachAllOfType(int localClientNum, int entnum, int markType) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_MarkEntUpdateBegin(struct FxMarkDObjUpdateContext *context, struct DObj *obj, bool isBrush, unsigned short brushIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_MarkEntDetachModel(struct FxMarksSystem *marksSystem, int entnum, int oldModelIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_MarkEntUpdateEndDObj(struct FxMarkDObjUpdateContext *context, int localClientNum, int entnum, struct DObj *obj) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_MarkEntUpdateEnd(struct FxMarkDObjUpdateContext *context, int localClientNum, int entnum, struct DObj *obj, bool isBrush, unsigned short brushIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_MoveMarkBetweenLists(struct FxMarksSystem *marksSystem, struct FxMark *mark, unsigned short *listHeadFrom, unsigned short *listHeadTo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_TransferDObjMarksFromEntToEnt(int localClientNum, int entnumFrom, struct DObj *objFrom, int entnumTo, const struct XModel *modelTo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GetMarkViewmodelClientIndex(int localClientNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_ClearViewmodelMarks(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto setTexCoordAndLMap<GfxWorldVertex>(struct GfxWorldVertex *outVert, const float *texCoord, const float *lmapCoord) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_ExpandMarkVerts_GetColor(const struct FxMarksSystem *marksSystem, const struct FxMark *mark, unsigned char *outColor) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_ExpandMarkVert_NoTransform<GfxWorldVertex>(struct GfxWorldVertex *outVert, unsigned char *color, const float texCoordScale, const struct FxMark *mark, const struct FxMarkPoint *markPoint) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_ExpandMarkVert_Transform<GfxWorldVertex>(struct GfxWorldVertex *outVert, unsigned char *color, const float texCoordScale, const struct FxMark *mark, const struct FxMarkPoint *markPoint, const float *matrixTransform[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_ExpandMarkVert_Glass<GfxWorldVertex>(struct GfxWorldVertex *outVert, unsigned char *color, const float *translate, const float normalScale, const float texCoordScale, const struct FxMark *mark, const struct FxMarkPoint *markPoint) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_ExpandMarkVerts_NoTransform<GfxWorldVertex>(struct FxMarksSystem *marksSystem, const struct FxMark *mark, unsigned short baseVertex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_ExpandMarkVerts_Transform<GfxWorldVertex>(struct FxMarksSystem *marksSystem, const struct FxMark *mark, unsigned short baseVertex, const float *matrixTransform[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_ExpandMarkVerts_Glass<GfxWorldVertex>(struct FxMarksSystem *marksSystem, const struct FxMark *mark, unsigned short baseVertex, const float normalScale, const float *translate) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_AddMarkTrisToScene(const struct FxActiveMarkSurf *outSurf) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_EmitMarkTri(struct FxMarksSystem *marksSystem, const unsigned short *indices, unsigned short baseVertex, struct FxActiveMarkSurf *outSurf) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_DrawMarkTris(struct FxMarksSystem *marksSystem, const struct FxMark *mark, unsigned short baseVertex, unsigned short *indices, struct FxActiveMarkSurf *outSurf, unsigned short lighthandleOverride, unsigned char reflectionProbeOverride) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GenerateMarkVertsForMark_Begin(struct FxMarksSystem *marksSystem, struct FxMark *mark, unsigned short markHandle, unsigned int *indexCount, unsigned short *outBaseVertex, struct FxActiveMarkSurf *outDrawSurf, unsigned short lighthandleOverride, unsigned char reflectionProbeOverride) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GenerateMarkVertsForMark_FinishNonAnimated(struct FxMarksSystem *marksSystem, struct FxMark *mark, unsigned short baseVertex, struct FxActiveMarkSurf *drawSurf) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GenerateMarkVertsForMark_FinishAnimated(struct FxMarksSystem *marksSystem, struct FxMark *mark, unsigned short baseVertex, struct FxActiveMarkSurf *drawSurf, const float *transform[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GenerateMarkVertsForMark_FinishGlass(struct FxMarksSystem *marksSystem, struct FxMark *mark, unsigned short baseVertex, struct FxActiveMarkSurf *drawSurf, float normalScale, float *translate) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GenerateMarkVertsForMark_MatrixFromPlacement(const struct GfxPlacement *placement, const float *viewOffset, float *outTransform[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GenerateMarkVertsForMark_MatrixFromScaledPlacement(const struct GfxScaledPlacement *placement, const float *viewOffset, float *outTransform[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GenerateMarkVertsForMark_MatrixFromAnim(struct FxMark *mark, const struct DObj *dobj, const struct DObjAnimMat *boneMtx, const float *viewOffset, float *outTransform[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GenerateMarkVertsForList_EntDObj(struct FxMarksSystem *marksSystem, unsigned short head, const struct FxCamera *camera, unsigned int *indexCount, unsigned short lightHandleOverride, unsigned char reflectionProbeIndexOverride, const struct DObj *dobj, const struct DObjAnimMat *boneMtxList, unsigned int *hidePartBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GenerateMarkVertsForList_EntXModel(struct FxMarksSystem *marksSystem, unsigned short head, const struct FxCamera *camera, unsigned int *indexCount, unsigned short lightHandleOverride, unsigned char reflectionProbeIndexOverride, const struct DObj *dobj, const struct GfxScaledPlacement *placement) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GenerateMarkVertsForList_EntBrush(struct FxMarksSystem *marksSystem, const struct FxCamera *camera, unsigned short head, unsigned int *indexCount, const struct GfxPlacement *placement, unsigned char reflectionProbeIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GenerateMarkVertsForList_WorldXModel(struct FxMarksSystem *marksSystem, unsigned short head, const struct FxCamera *camera, unsigned int *indexCount) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GenerateMarkVertsForList_Glass(struct FxMarksSystem *marksSystem, unsigned short head, const struct FxCamera *camera, unsigned int *indexCount) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GenerateMarkVertsForList_WorldBrush(struct FxMarksSystem *marksSystem, unsigned short head, const struct FxCamera *camera, unsigned int *indexCount) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_BeginGeneratingMarkVerts(struct FxMarksSystem *marksSystem, unsigned int *indexCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_FinishGeneratingMarkVerts(struct FxMarksSystem *marksSystem) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForEntXModel(struct FxMarksSystem *marksSystem, const struct FxCamera *camera, int localClientNum, int entId, unsigned int *indexCount, unsigned short lightHandle, unsigned char reflectionProbeIndex, const struct GfxScaledPlacement *placement, const struct DObj *dobj) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForEntDObj_internal(struct FxMarksSystem *marksSystem, const struct FxCamera *camera, int localClientNum, unsigned int *indexCount, unsigned short lightHandle, unsigned char reflectionProbeIndex, const struct DObj *remoteDObj, unsigned short entMarkListHead) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForEntDObj(struct FxMarksSystem *marksSystem, const struct FxCamera *camera, int localClientNum, int entId, unsigned int *indexCount, unsigned short lightHandle, unsigned char reflectionProbeIndex, const struct DObj *remoteDobj) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForViewmodelDObj(struct FxMarksSystem *marksSystem, const struct FxCamera *camera, int localClientNum, int viewmodelClientIndex, unsigned int *indexCount, unsigned short lightHandle, unsigned char reflectionProbeIndex, const struct DObj *remoteDobj) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForEntBrush(struct FxMarksSystem *marksSystem, const struct FxCamera *camera, int localClientNum, int entId, unsigned int *indexCount, unsigned char reflectionProbeIndex, const struct GfxPlacement *placement) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForStaticModels(struct FxMarksSystem *marksSystem, const struct FxCamera *camera, int localClientNum, int smodelCount, const unsigned char *smodelVisLods, unsigned int *indexCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsForGlass(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateDynMarkVertsCmd(struct FxGenerateModelMarksCmd *cmd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateMarkVertsCmd(struct FxGenerateVertsCmd *cmd) -> void
{

}

#endif // __UNIMPLEMENTED__
