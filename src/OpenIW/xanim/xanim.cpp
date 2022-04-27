//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto IsLeafNode(const struct XAnimEntry *anim) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IsNodeAdditive(const struct XAnimEntry *node) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetTreeHighMemUsage() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetTreeMemUsage() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_xanim() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetTreeMaxMemUsage() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimInit() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimShutdown() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimFindData_FastFile(const char *name) -> struct XAnimParts*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimFindData(const char *name) -> struct XAnimParts*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCreate(struct XAnim_s *anims, unsigned int animIndex, const char *name) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimBlend(struct XAnim_s *anims, unsigned int animIndex, const char *name, unsigned int children, unsigned int num, unsigned int flags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCreateAnims(const char *debugName, int size, function *Alloc) -> struct XAnim_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimDisableLeakCheck() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCreateTree(struct XAnim_s *anims, function *Alloc) -> struct XAnimTree_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimFreeTree(struct XAnimTree_s *tree, function *Free) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCreateSimpleTree(const char *name) -> struct XAnimTree_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimFreeSimpleTree(struct XAnimTree_s *tree) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimPlaySimpleTreeAnim(struct DObj *obj, float animTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimCheckTreeLeak() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetAnims(const struct XAnimTree_s *tree) -> struct XAnim_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimInitModelMap(struct XModel *const*models, unsigned int numModels, struct XModelNameMap *modelMap) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimGetAnimMap(const struct XAnimParts *parts, const struct XModelNameMap *modelMap) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TransformToQuatRefFrame(const float *rot, float *trans) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimCalcRelDeltaParts(const struct XAnimParts *parts, const float weightScale, const float time1, const float time2, struct XAnimRotPos *rotPos, int quatIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimCalcAbsDeltaParts(const struct XAnimParts *parts, const float weightScale, const float time, struct XAnimRotPos *rotPos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimClearServerNotify(struct XAnimInfo *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimFreeInfo(struct XAnimTree_s *tree, unsigned int infoIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimCheckFreeInfo(struct XAnimTree_s *tree, unsigned int infoIndex, int hasWeight) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimGetAverageRateFrequency(const struct XAnimTree_s *tree, unsigned int infoIndex) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimGetNextNotifyIndex(const struct XAnimParts *parts, float time) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimGetNotifyFracLeaf(const struct XAnimState *state, const struct XAnimState *nextState, float time, float dtime) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimGetParts(const struct XAnimTree_s *tree, struct XAnimInfo *info) -> struct XAnimParts*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimGetNextServerNotifyFrac(const struct DObj *obj, struct XAnimInfo *info, const struct XAnimState *syncState, const struct XAnimState *nextSyncState, float dtime) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimAddClientNotify(unsigned int notetrackName, float frac, unsigned int notifyType) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimProcessClientNotify(struct XAnimInfo *info, float dtime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimUpdateInfoSync(const struct DObj *obj, unsigned int infoIndex, bool bNotify, struct XAnimState *syncState, float dtime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimUpdateTimeAndNotetrackLeaf(const struct DObj *obj, const struct XAnimParts *parts, unsigned int infoIndex, float dtime, bool bNotify) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimUpdateTimeAndNotetrackSyncSubTree(const struct DObj *obj, unsigned int infoIndex, float dtime, bool bNotify) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimUpdateTimeAndNotetrack(const struct DObj *obj, unsigned int infoIndex, float dtime, bool bNotify) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimInitInfo(struct XAnimInfo *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimResetTimeInternal(unsigned int infoIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimResetTime(unsigned int infoIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimCloneInitTime(struct XAnimTree_s *tree, unsigned int infoIndex, unsigned int parentIndex) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimInitTime(struct XAnimTree_s *tree, unsigned int infoIndex, float goalTime) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimUpdateOldTime(struct DObj *obj, unsigned int infoIndex, struct XAnimState *syncState, float dtime, bool parentHasWeight, bool *childHasTimeForParent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto NotifyServerNotetrack(const struct DObj *obj, unsigned int notifyName, unsigned int notetrackName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimGetServerNotifyFracSyncTotal(const struct DObj *obj, struct XAnimInfo *info, const struct XAnimState *syncState, const struct XAnimState *nextSyncState, float dtime) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimFindServerNoteTrackLeafNode(const struct DObj *obj, struct XAnimInfo *info, float dtime) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimFindServerNoteTrackSyncSubTree(const struct DObj *obj, struct XAnimInfo *info, float dtime) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimFindServerNoteTrack(const struct DObj *obj, unsigned int infoIndex, float dtime) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimProcessServerNotify(const struct DObj *obj, struct XAnimInfo *info, float time) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimResetAnimMapLeaf(const struct XModelNameMap *modelMap, unsigned int infoIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimResetAnimMap_r(struct XModelNameMap *modelMap, unsigned int infoIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimResetAnimMap(const struct DObj *obj, unsigned int infoIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimDisplay(const struct XAnimTree_s *tree, unsigned int infoIndex, int depth, char *buffer, int bufferSize, int *bufferPos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimCalcDeltaTree(const struct DObj *obj, const unsigned int infoIndex, const float weightScale, const struct XAnimDeltaInfo deltaInfo, struct XAnimRotPos *rotPos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetLength(const struct XAnim_s *anims, unsigned int animIndex) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetLengthMsec(const struct XAnim_s *anims, unsigned int anim) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimGetInfoIndex_r(const struct XAnimTree_s *tree, unsigned int animIndex, unsigned int infoIndex) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimGetInfoIndex(const struct XAnimTree_s *tree, unsigned int animIndex) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetTime(const struct XAnimTree_s *tree, unsigned int animIndex) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetWeight(const struct XAnimTree_s *tree, unsigned int animIndex) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimHasFinished(const struct XAnimTree_s *tree, unsigned int animIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetNumChildren(const struct XAnim_s *anims, unsigned int animIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetChildAt(const struct XAnim_s *anims, unsigned int animIndex, unsigned int childIndex) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetAnimName(const struct XAnim_s *anims, unsigned int animIndex) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimIsDefault(struct XAnimParts *animParts) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetAnimDebugName(const struct XAnim_s *anims, unsigned int animIndex) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetAnimTreeDebugName(const struct XAnim_s *anims) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetAnimTreeSize(const struct XAnim_s *anims) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjInitServerTime(struct DObj *obj, float dtime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjUpdateClientInfo(struct DObj *obj, float dtime, bool notify) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjUpdateServerInfo(struct DObj *obj, float dtime, int bNotify) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjGetClientNotifyList(struct XAnimNotify_s **notifyList) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjDisplayAnimToBuffer(const struct DObj *obj, const char *header, char *buffer, int bufferSize) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DObjDisplayAnim(const struct DObj *obj, const char *header) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCalcDelta(struct DObj *obj, unsigned int animIndex, float *rot, float *trans, bool bUseGoalWeight) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCalcAbsDelta(struct DObj *obj, unsigned int animIndex, float *rot, float *trans) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetRelDelta(const struct XAnim_s *anims, unsigned int animIndex, float *rot, float *trans, float time1, float time2) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetAbsDelta(const struct XAnim_s *anims, unsigned int animIndex, float *rot, float *trans, float time) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimAllocInfoWithParent(struct XAnimTree_s *tree, unsigned int animToModel, unsigned int animIndex, unsigned int parentInfoIndex, int after) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimEnsureGoalWeightParent(struct DObj *obj, unsigned int animIndex) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimAllocInfoIndex(struct DObj *obj, unsigned int animIndex, int after) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimAllocInfo(struct DObj *obj, unsigned int animIndex, int after) -> struct XAnimInfo*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimClearGoalWeightInternal(struct XAnimTree_s *tree, unsigned int infoIndex, float blendTime, int forceBlendTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimClearGoalWeight(struct XAnimTree_s *tree, unsigned int animIndex, float blendTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimClearTreeGoalWeightsInternal(struct XAnimTree_s *tree, unsigned int infoIndex, float blendTime, int forceBlendTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimClearTreeGoalWeights(struct XAnimTree_s *tree, unsigned int animIndex, float blendTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimClearTreeGoalWeightsStrict(struct XAnimTree_s *tree, unsigned int animIndex, float blendTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimClearGoalWeightKnobInternal(struct XAnimTree_s *tree, unsigned int infoIndex, float goalWeight, float goalTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimSetCompleteGoalWeightNode(struct XAnimTree_s *tree, unsigned int infoIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, unsigned int notifyType) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimSetCompleteGoalWeightNodeRel(struct XAnimTree_s *tree, unsigned int infoIndex, unsigned int rootIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, unsigned int notifyType) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetCompleteGoalWeightKnob(struct DObj *obj, unsigned int animIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, int bRestart) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetGoalWeightKnobAll(struct DObj *obj, unsigned int animIndex, unsigned int rootIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, int bRestart) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetCompleteGoalWeightKnobAll(struct DObj *obj, unsigned int animIndex, unsigned int rootIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, int bRestart) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetGoalWeightKnob(struct DObj *obj, unsigned int animIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, int bRestart) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimClearChildGoalWeights(struct XAnimTree_s *tree, unsigned int animIndex, float blendTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimClearTree(struct XAnimTree_s *tree) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimGetDescendantWithGreatestWeight(const struct XAnimTree_s *tree, unsigned int infoIndex) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimSetGoalWeightNode(struct XAnimTree_s *tree, unsigned int infoIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, unsigned int notifyType) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimFillInSyncNodes_r(struct XAnim_s *anims, unsigned int animIndex, bool bLoop) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimSetupSyncNodes_r(struct XAnim_s *anims, unsigned int animIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetupSyncNodes(struct XAnim_s *anims) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimHasTime(const struct XAnim_s *anims, unsigned int animIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimIsPrimitive(struct XAnim_s *anims, unsigned int animIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetTime(struct XAnimTree_s *tree, unsigned int animIndex, float time) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetAssetType(struct XAnimTree_s *tree, unsigned int index) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimUpdateServerNotifyIndex(struct XAnimInfo *info, const struct XAnimParts *parts) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimRestart(struct XAnimTree_s *tree, unsigned int infoIndex, float goalTime) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetGoalWeight(struct DObj *obj, unsigned int animIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, unsigned int notifyType, int bRestart) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetAnimRate(struct XAnimTree_s *tree, unsigned int animIndex, float rate) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimIsLooped(const struct XAnim_s *anims, unsigned int animIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimIsLeafNode(const struct XAnim_s *anims, unsigned int animIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimNotetrackExists(const struct XAnim_s *anims, unsigned int animIndex, unsigned int name) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimAddNotetrackTimesToScriptArray(const struct XAnim_s *anims, unsigned int animIndex, unsigned int name) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetCompleteGoalWeight(struct DObj *obj, unsigned int animIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, unsigned int notifyType, int bRestart) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimSetCompleteGoalWeightRel(struct DObj *obj, unsigned int animIndex, unsigned int rootIndex, float goalWeight, float goalTime, float rate, unsigned int notifyName, unsigned int notifyType, int bRestart) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimCloneAnimInfo(const struct XAnimInfo *from, struct XAnimInfo *to) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimCloneAnimTree_r(const struct XAnimTree_s *from, struct XAnimTree_s *to, unsigned int fromInfoIndex, unsigned int toInfoParentIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCloneAnimTree(const struct XAnimTree_s *from, struct XAnimTree_s *to) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimCloneClientAnimInfo(const struct XAnimInfo *from, struct XAnimInfo *to) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAnimCloneClientAnimTree_r(const struct XAnimTree_s *from, struct XAnimTree_s *to, unsigned int fromInfoIndex, unsigned int toInfoParentIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCloneClientAnimTree(const struct XAnimTree_s *from, struct XAnimTree_s *to) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetAnimInfo(int infoIndex) -> struct XAnimInfo*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetAnimInfoBase() -> struct XAnimInfo*
{

}

#endif // __UNIMPLEMENTED__
