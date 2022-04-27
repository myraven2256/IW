//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_bg_animation_mp() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_StringHashValue(const char *fname) -> long
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_AnimParseError(const char *msg, <NoType> ) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_AnimationIndexForString(const char *string) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_IndexForString(const char *token, struct animStringItem_t *strings, int allowFail) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_CopyStringIntoBuffer(const char *string, char *buffer, unsigned int bufSize, unsigned int *offset) -> char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_InitWeaponString(int index, const char *name) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_InitWeaponStrings() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_LoadAnimForAnimIndex(int iAnimIndex) -> struct loadAnim_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_SetupAnimNoteTypes(struct animScriptData_t *scriptData) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_FinalizePlayerAnims() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_ParseConditionBits(const char **text_pp, struct animStringItem_t *stringTable, int condIndex, unsigned int *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_ParseConditions(const char **text_pp, struct animScriptItem_t *scriptItem) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_ParseCommands(const char **input, struct animScriptItem_t *scriptItem, struct animScriptData_t *scriptData) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AnimParseAnimScript(struct animScriptData_t *scriptData, struct loadAnim_t *pLoadAnims, unsigned int *piNumAnims) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetMoveTypeName(int type) -> char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetWeaponTypeName(int type) -> char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetValueForBitfield(unsigned int bitfield) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_EvaluateConditions(struct clientInfo_t *ci, struct animScriptItem_t *scriptItem) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetBodyPart(int bodypart) -> char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_FirstValidItem(int client, struct animScript_t *script) -> struct animScriptItem_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayAnim(struct playerState_s *ps, int animNum, enum animBodyPart_t bodyPart, int forceDuration, int setTimer, int isContinue, int force) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_ExecuteCommand(struct playerState_s *ps, struct animScriptCommand_t *scriptCommand, int setTimer, int isContinue, int force) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AnimScriptAnimation(struct playerState_s *ps, enum aistateEnum_t state, enum scriptAnimMoveTypes_t movetype, int force) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AnimScriptEvent(struct playerState_s *ps, enum scriptAnimEventTypes_t event, int isContinue, int force, unsigned int *holdrand) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_GetConditionString(int condition, int value) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetConditionValue(int client, int condition, unsigned __int64 value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetConditionBit(int client, int condition, int value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_GetConditionValue(const struct clientInfo_t *ci, const int condition) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_GetConditionBit(const struct clientInfo_t *ci, const int condition) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_GetAnimationForIndex(int index) -> struct animation_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AnimUpdatePlayerStateConditions(struct pmove_t *pmove) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsCrouchingAnim(int animNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsAds(int animNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsProneAnim(int animNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsKnifeMeleeAnim(int animNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_SetNewAnimation(int localClientNum, struct clientInfo_t *ci, struct lerpFrame_t *lf, int newAnimation, const struct entityState_s *es) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SmoothAnimSpeedScale(const float oldAnimSpeedScale, const float newAnimSpeedScale) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_RunLerpFrameRate(int localClientNum, struct clientInfo_t *ci, struct lerpFrame_t *lf, int newAnimation, const struct entityState_s *es) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_PlayerAnimation_VerifyAnim(struct XAnimTree_s *pAnimTree, struct lerpFrame_t *lf) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_SwingAngles(float destination, float swingTolerance, float clampTolerance, float speed, float *angle, int *swinging) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_PlayerAngles(const struct entityState_s *es, struct clientInfo_t *ci) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_AnimPlayerConditions(const struct entityState_s *es, struct clientInfo_t *ci) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Player_DoControllersInternal(const struct entityState_s *es, const struct clientInfo_t *ci, struct clientControllers_t *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_LerpAngles(float *angles_goal, float maxAngleChange, float *angles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_LerpOffset(float *offset_goal, float maxOffsetChange, float *offset) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Player_DoControllersSetup(const struct entityState_s *es, struct clientInfo_t *ci, int frametime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerAnimation(int localClientNum, const struct entityState_s *es, struct clientInfo_t *ci) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_UpdateWeaponHidePartBitsForModel(unsigned int weaponNum, const struct XModel *model, unsigned int *partBits, int boneOffset) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_UpdatePlayerDObj(int localClientNum, struct DObj *pDObj, struct entityState_s *es, struct clientInfo_t *ci, int attachIgnoreCollision) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_FindAnims() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_FindAnimTree(const char *filename, int bEnforceExists) -> struct scr_animtree_t
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_FindAnimTrees() -> void
{

}

#endif // __UNIMPLEMENTED__
