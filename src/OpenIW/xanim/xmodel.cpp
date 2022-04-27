//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto XModelBad(const struct XModel *model) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_xmodel() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XModelPrecache_FastFile(const char *name, function *Alloc, function *AllocColl) -> struct XModel*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelPrecache(const char *name, function *Alloc, function *AllocColl) -> struct XModel*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelBoneNames(struct XModel *model) -> unsigned short*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetRadius(const struct XModel *model) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetBounds(const struct XModel *model, struct Bounds *bounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LocalMatrixTransformVector(const float *in, const float *mat[0x3], float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LocalMatrixTransposeTransformVector(const float *in1, const float *in2[0x3], float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetMemUsage(const struct XModel *model) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelTraceLine(const struct XModel *model, struct trace_t *results, const float *localStart, const float *localEnd, int contentmask) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelTraceLineAnimated(const struct DObj *obj, unsigned int modelIndex, int baseBoneIndex, struct trace_t *results, const struct DObjAnimMat *boneMtxList, const float *localStart, const float *localEnd, int contentmask) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelTraceLineAnimatedPartBits(const struct DObj *obj, unsigned int modelIndex, int baseBoneIndex, int contentmask, int *partBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XSurfaceVisitTrianglesInAabb_ConvertAabb(const struct XSurfaceCollisionTree *tree, const float *aabbMins, const float *aabbMaxs, int *mins, int *maxs) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PrefetchArray<GfxPackedVertex>(const struct GfxPackedVertex *mem, unsigned int elementCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XSurfaceVisitTrianglesInAabb_ProcessVertices(struct XSurfaceGetTriCandidatesLocals &locals) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XSurfaceVisitTrianglesInAabb_ProcessTriangles(struct XSurfaceGetTriCandidatesLocals &locals) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XSurfaceVisitTrianglesInAabb_ProcessLeaf(struct XSurfaceGetTriCandidatesLocals &locals) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XSurfaceVisitTrianglesInAabb_ProcessNode(struct XSurfaceGetTriCandidatesLocals &locals) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XSurfaceVisitTrianglesInAabb(const struct XSurface *surface, unsigned int vertListIndex, const float *aabbMins, const float *aabbMaxs, function *visitorFunc, void *visitorContext) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetBoneIndex(const struct XModel *model, unsigned int name, unsigned int offset, unsigned char *index) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XModelHasParentBone(const struct XModel *model, unsigned char goalParentIndex, unsigned int childIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelGetNextChildBoneIndex(const struct XModel *model, unsigned char parentIndex, unsigned int offset, unsigned char *childIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XModelWriteInfoHeader(void *fileHandle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XModelWriteInfo(union XAssetHeader header, void *data) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelDumpInfo() -> void
{

}

#endif // __UNIMPLEMENTED__
