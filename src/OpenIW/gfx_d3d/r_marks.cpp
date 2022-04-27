//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_r_marks() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_RegisterMarkDvars() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_LerpModelMarkPoints(const struct FxModelMarkPoint *from, const struct FxModelMarkPoint *to, float lerp, struct FxModelMarkPoint *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ChopPolyBehindPlane(int inPointCount, const struct FxModelMarkPoint *inPoints, struct FxModelMarkPoint *outPoints, const float *plane) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_LerpWorldMarkPoints(const struct FxWorldMarkPoint *from, const struct FxWorldMarkPoint *to, float lerp, struct FxWorldMarkPoint *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ChopWorldPolyBehindPlane(int inPointCount, const struct FxWorldMarkPoint *inPoints, struct FxWorldMarkPoint *outPoints, const float *plane) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_Mark_MaterialAllowsMarks(const struct Material *markReceiverMaterialHandle, const struct Material *markMaterialHandle) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AllowMarks(int surfIndex, void *markMaterialAsVoid) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AllowSmodelMarks(int smodelIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddMarkFragment<1>(struct FxModelMarkPoint *clipPoints[0x9], const float *planes[0x4], const struct GfxMarkContext *markContext, int baseIndex, int maxTris, struct FxMarkTri *tris, int maxPoints, const struct GfxPackedVertex **triVerts, const float *transformNormalMatrix[0x3], struct FxMarkPoint *points) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetMarkFragmentClipPlanes(const struct Sphere *sphere, const float *axis[0x3], float *planes[0x4]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_MarkFragment_IsTriangleRejected(const float *markNormal, const float *xyz0, const float *xyz1, const float *xyz2) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_MarkFragment_SetupWorldClipPoints(const struct GfxWorldVertex *triVerts0, const unsigned short *indices, struct FxWorldMarkPoint *clipPoints[0x9]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_MarkFragment_DoTriangle<1>(struct MarkInfo *markInfo, const float *clipPlanes[0x4], const struct GfxMarkContext *markContext, const struct GfxPackedVertex **triVerts, const float *transformNormalMatrix[0x3], struct FxModelMarkPoint *clipPoints[0x9]) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_MarkFragments_WorldBrushReflectionCompatible(struct MarkInfo *markInfo, const struct GfxSurface *surface) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_MarkFragments_BrushSurface(struct MarkInfo *markInfo, struct GfxMarkContext *markContext, const float *clipPlanes[0x4], const float *markDir, const struct GfxSurface *surface, bool *anyMarks) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_MarkFragments_WorldBrushes(struct MarkInfo *markInfo) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_MarkFragment_SetupGlassClipPoints(const float *triVerts[0x3], const unsigned short *indices, struct FxWorldMarkPoint *clipPoints[0x9]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_MarkFragments_Glass(struct MarkInfo *markInfo) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_Mark_TransformClipPlanes(const float *inClipPlanes[0x4], float *matrix[0x3], float *outClipPlanes[0x4]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_MarkFragments_EntBrushes(struct MarkInfo *markInfo) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_MarkFragments_Brushes(struct MarkInfo *markInfo) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_MarkModelCoreCallback<1>(void *contextAsVoid, const struct GfxPackedVertex **triVerts0, const struct GfxPackedVertex **triVerts1) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_MarkFragments_XModelSurface_Basic(struct MarkInfo *markInfo, const struct XSurface *surface, const float *modelAxis[0x3], const float *modelOrigin, float modelScale, struct GfxMarkContext *markContext) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_MarkFragments_EntirelyRigidXModel(struct MarkInfo *markInfo, const struct XModel *xmodel, const float *modelAxis[0x3], const float *modelOrigin, float modelScale, struct GfxMarkContext *markContext) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_MarkFragments_AnimatedXModel_VertList(struct MarkInfo *markInfo, int vertListIndex, const struct DObjAnimMat *poseBone, const struct DObjAnimMat *baseBone, struct GfxMarkContext *markContext, struct XSurface *surface) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_MarkFragments_AnimatedXModel(struct MarkInfo *markInfo, const struct XModel *model, const unsigned int *hidePartBits, int boneIndex, const struct DObjAnimMat *boneMtxList, int boneCount, struct GfxMarkContext *markContext) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkUtil_GetDObjAnimMatAndHideParts(const struct DObj *dobj, const struct cpose_t *pose, const struct DObjAnimMat **outBoneMtxList, unsigned int *outHidePartBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_MarkFragments_SceneDObjs(struct MarkInfo *markInfo) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_MarkFragments_ViewmodelDObjs(struct MarkInfo *markInfo) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_MarkFragments_StaticModels(struct MarkInfo *markInfo) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_MarkFragments_Models(struct MarkInfo *markInfo) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragments_Begin(struct MarkInfo *markInfo, enum MarkFragmentsAgainstEnum markAgainst, const float *axis[0x3], const float *viewOffset, struct Material *material, bool markGivenModelsOnly, int viewmodelClientIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragments_AddDObj(struct MarkInfo *markInfo, struct DObj *dObj, struct cpose_t *pose, unsigned short entityIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragments_AddViewModelDObj(struct MarkInfo *markInfo, struct DObj *dObj, struct cpose_t *pose) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragments_AddBModel(struct MarkInfo *markInfo, struct GfxBrushModel *brushModel, struct cpose_t *pose, unsigned short entityIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_MarkFragments_Go(struct MarkInfo *markInfo, function *callback, void *callbackContext, int maxTris, struct FxMarkTri *tris, int maxPoints, struct FxMarkPoint *points) -> void
{

}

#endif // __UNIMPLEMENTED__
