//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto DObjInit() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjShutdown() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjDumpInfo(const struct DObj *obj) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjIgnoreCollision(const struct DObj *obj, int modelIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DObjDumpCreationInfo(struct DObjModel_s *dobjModels, unsigned int numModels) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DObjCreateDuplicateParts(struct DObj *obj, struct DObjModel_s *dobjModels, unsigned int numModels, unsigned char *modelHierarchy) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetHierarchyBits(const struct DObj *obj, int boneIndex, int *partBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetTree(struct DObj *obj, struct XAnimTree_s *tree) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DObjComputeBounds(struct DObj *obj, unsigned char *modelHierarchy) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjCreate(struct DObjModel_s *dobjModels, unsigned int numModels, struct XAnimTree_s *tree, char *buf, unsigned int entnum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjClone(const struct DObj *from, char *buf) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjFree(struct DObj *obj) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetCreateParms(const struct DObj *obj, struct DObjModel_s *dobjModels, unsigned short *numModels, struct XAnimTree_s **tree, unsigned short *entnum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjArchive(struct DObj *obj) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjUnarchive(struct DObj *obj) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSkelExistsConst(const struct DObj *obj, int timeStamp) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSkelClear(const struct DObj *obj) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSkelReset(const struct DObj *obj) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetBounds(const struct DObj *obj, struct Bounds *bounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjPhysicsGetBounds(const struct DObj *obj, struct Bounds *bounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetFirstModel(const struct DObj *obj) -> const struct XModel*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetVisibleBounds(const struct DObj *obj, struct Bounds *bounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetRadius(const struct DObj *obj) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetPhysPreset(const struct DObj *obj) -> struct PhysPreset*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetName(const struct DObj *obj) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetNumSurfaces(const struct DObj *obj, char *lods) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetBoneName(const struct DObj *obj, int boneIndex) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetModelParentBoneName(const struct DObj *obj, int modelIndex) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetTree(const struct DObj *obj) -> struct XAnimTree_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LocalInvMatrixTransformVectorQuatTrans(const float *in, const struct DObjAnimMat *mat, float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjTraceline(struct DObj *obj, const float *start, const float *end, const unsigned char *priorityMap, struct DObjTrace_s *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjTracelinePartBits(struct DObj *obj, int *partBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGeomTraceline(struct DObj *obj, const float *localStart, const float *localEnd, int contentmask, struct DObjTrace_s *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGeomTracelinePartBits(struct DObj *obj, int contentmask, int *partBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjHasContents(struct DObj *obj, int contentmask) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetContents(const struct DObj *obj) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetLocalBoneIndex(struct DObj *obj, int *partBits, int boneIndex, const float *trans, const float *angles) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetBoneIndex(const struct DObj *obj, unsigned int name, unsigned char *index) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetNextChildBoneIndex(const struct DObj *obj, unsigned char parentIndex, unsigned char *childIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetReverseBoneIndex(const struct DObj *obj, unsigned int name) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetModelBoneIndex(const struct DObj *obj, const char *modelName, unsigned int name, unsigned char *index) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetReverseModelBoneIndex(const struct DObj *obj, const char *modelName, unsigned int name) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetModelRootBoneIndex(const struct DObj *obj, int modelIndex) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetBasePoseMatrix(const struct DObj *obj, unsigned char boneIndex, struct DObjAnimMat *outMat) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DoesDObjHaveDistortion(const struct DObj *obj) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetHidePartBits(struct DObj *obj, const unsigned int *partBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetSurfaceData(const struct DObj *obj, const float *origin, char *lods, unsigned int usedInScene) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjTouchXModelsBase(const struct DObj *obj) -> void
{

}

#endif // __UNIMPLEMENTED__
