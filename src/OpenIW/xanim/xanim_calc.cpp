//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto XAnim_SetTime(const float time, const int frameCount, struct XAnimTime *animTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnim_GetTimeIndex<unsigned char>(const struct XAnimTime *animTime, const unsigned char *indices, const int tableSize, int *keyFrameIndex, float *keyFrameLerpFrac) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IsInfoAdditive(const struct XAnimInfo *info) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimClearRotTransArray(const struct DObj *obj, struct DObjAnimMat *rotTransArray, struct XAnimCalcAnimInfo *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimWeightedAccumLerpedRot(const struct __vector4 &fromVec, const struct __vector4 &toVec, float keyFrameLerpFrac, float weightScale, struct DObjAnimMat *totalRotTrans) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimWeightedAccumRot(const struct __vector4 frameVec, float weightScale, struct DObjAnimMat *totalRotTrans) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimWeightedAccumLerpedTrans(const struct __vector4 fromVec, const struct __vector4 toVec, float keyFrameLerpFrac, float weightScale, int *dataInt, struct DObjAnimMat *totalRotTrans) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimWeightedAccumTrans(float weightScale, int *dataInt, struct DObjAnimMat *totalRotTrans) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimMovePastFrameIndices(unsigned int tableSize, unsigned char **dataByte, short **dataShort, int useSmallIndices) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimCalcNonLoopEnd(const struct XAnimParts *parts, const unsigned char *animToModel, float weightScale, struct DObjAnimMat *rotTransArray, const class bitarray<160> *ignorePartBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetKeyFrame<unsigned char>(const class bitarray<160> *ignorePartBits, int modelPartIndex, int tableSize, struct XAnimTime *animTime, unsigned char **dataByte, short **dataShort, unsigned char **indices, int *keyFrameIndex, float *keyFrameLerpFrac) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetKeyFrame<unsigned short>(const class bitarray<160> *ignorePartBits, int modelPartIndex, int tableSize, struct XAnimTime *animTime, unsigned char **dataByte, short **dataShort, unsigned short **indices, int *keyFrameIndex, float *keyFrameLerpFrac) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimCalcParts<unsigned char>(const struct XAnimParts *parts, const unsigned char *animToModel, const float time, const float weightScale, struct DObjAnimMat *rotTransArray, const class bitarray<160> *ignorePartBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimCalcLeaf(struct XAnimInfo *info, float weightScale, struct DObjAnimMat *rotTransArray, struct XAnimCalcAnimInfo *animInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimGetCalcBuffer(struct XAnimCalcAnimInfo *info, const struct DObj *obj, int *rotTransArrayIndex) -> struct DObjAnimMat*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimScaleRotTransArray(int numBones, const struct XAnimCalcAnimInfo *info, struct DObjAnimMat *rotTransArray) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimNormalizeRotScaleTransArray(int numBones, const struct XAnimCalcAnimInfo *info, float weightScale, struct DObjAnimMat *rotTransArray) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimMadRotTransArray(int numBones, const struct XAnimCalcAnimInfo *info, float weightScale, const struct DObjAnimMat *rotTrans, struct DObjAnimMat *totalRotTrans) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimApplyAdditives(struct DObjAnimMat *rotTransArray, struct DObjAnimMat *additiveArray, float weight, int boneCount, struct XAnimCalcAnimInfo *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimCalc(const struct DObj *obj, struct XAnimInfo *info, float weightScale, bool bClear, bool bNormQuat, struct XAnimCalcAnimInfo *animInfo, int rotTransArrayIndex, struct DObjAnimMat *rotTransArray) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjCalcAnim(const struct DObj *obj, int *partBits, struct XAnimCalcAnimInfo *animInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnim_CalcRotDeltaDuring<unsigned char>(const struct XAnimDeltaPart *animDelta, const float time, const int frameCount, float *rotDelta) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnim_CalcRotDelta3DDuring<unsigned char>(const struct XAnimDeltaPart *animDelta, const float time, const int frameCount, float *rotDelta) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnim_CalcPosDeltaDuring<unsigned char>(const struct XAnimDeltaPart *animDelta, const float time, const int frameCount, struct __vector4 &posDelta) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnim_CalcRotDeltaEntire(const struct XAnimDeltaPart *animDelta, float *rotDelta) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnim_CalcRotDelta3DEntire(const struct XAnimDeltaPart *animDelta, float *rotDelta) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnim_CalcPosDeltaEntire(const struct XAnimDeltaPart *animDelta, struct __vector4 &posDelta) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnim_CalcDeltaForTime(const struct XAnimParts *anim, const float time, float *rotDelta, struct __vector4 &posDelta) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnim_CalcDelta3DForTime(const struct XAnimParts *anim, const float time, float *rotDelta, struct __vector4 &posDelta) -> void
{

}

#endif // __UNIMPLEMENTED__
