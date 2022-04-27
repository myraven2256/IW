//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto DObjGetRotTransArray(const struct DObj *obj) -> struct DObjAnimMat*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetNumModels(const struct DObj *obj) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetNumBones(const struct DObj *obj) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetSurfaces(const struct DObj *obj, int *partBits, const char *lods) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetBoneInfo(const struct DObj *obj, struct XBoneInfo **boneInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjNumBones(const struct DObj *obj) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetThermalRender(struct DObj *obj, bool enabled) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjThermalRenderIsEnabled(const struct DObj *obj) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetSetBones(const struct DObj *obj, int *setPartBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjIsBoneSet(const struct DObj *obj, int boneIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjClearBoneSetBit(const struct DObj *obj, int boneIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetRootBoneCount(const struct DObj *obj) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetRotTransIndex(const struct DObj *obj, const int *partBits, int boneIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetSkelRotTransIndex(const struct DObj *obj, const int *partBits, int boneIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetControlTagAngles(const struct DObj *obj, int *partBits, unsigned int boneIndex, float *angles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetWorldControlTag(const struct DObj *obj, int *partBits, unsigned int boneIndex, const float *trans, const float *quat) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetModel(const struct DObj *obj, int modelIndex) -> struct XModel*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetLocalTag(const struct DObj *obj, int *partBits, unsigned int boneIndex, const float *trans, const float *angles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetLocalTagInternal(const struct DObj *obj, const float *trans, const float *angles, int boneIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetAngles(struct DObjAnimMat *rotTrans, const float *angles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjClearAngles(struct DObjAnimMat *rotTrans) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetTrans(struct DObjAnimMat *rotTrans, const float *trans) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjCompleteHierarchyBits(const struct DObj *obj, int *partBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetControlRotTransIndex(const struct DObj *obj, const int *partBits, int boneIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSetWorldControlRotTransIndex(const struct DObj *obj, const int *partBits, int boneIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSkelExists(const struct DObj *obj, int timeStamp) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjClearSkel(const struct DObj *obj) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSkelIsBoneUpToDate(const struct DObj *obj, int boneIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjSkelAreBonesUpToDate(const struct DObj *obj, int *partBits) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetAllocSkelSize(const struct DObj *obj) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjCreateSkel(const struct DObj *obj, char *buf, int timeStamp) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto I_dmaGetDObjSkel(const struct DObj *obj) -> struct DObjAnimMat*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetHidePartBits(const struct DObj *obj, unsigned int *partBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjLock(const struct DObj *obj) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjUnlock(const struct DObj *obj) -> void
{

}

#endif // __UNIMPLEMENTED__
