//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto CG_CalcLightingOrigin(const struct centity_s *cent, const struct DObj *obj, float *lightingOrigin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_LockLightingOrigin(struct centity_s *cent, const struct DObj *obj, float *lightingOrigin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PreProcess_GetDObj_General(int localClientNum, struct centity_s *cent) -> struct DObj*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_General(int localClientNum, struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_Item(int localClientNum, struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_AddEntityLoopSound(int localClientNum, const struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Player_PreControllers(struct DObj *obj, struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Turret_PreControllers(struct DObj *obj, struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_Turret(int localClientNum, struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto JavelinSoftLaunch(struct WeaponDef *weapDef, struct entityState_s *s1, int time) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_Missile(int localClientNum, struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateBModelWorldBounds(int localClientNum, struct centity_s *cent, int forceFilter) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AnyLocalPlayersIsWeaponLinkedToEnt(struct centity_s *cent) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_ScriptMover(int localClientNum, struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AdjustPositionForMover(int localClientNum, const float *in, int moverNum, int fromTime, int toTime, float *out, float *outDeltaAngles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetFrameInterpolation(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ProcessClientNoteTracks(struct cg_s *cgameGlob, int clientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_UpdateClientDobjPartBits(struct centity_s *cent, int entnum, int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_CalcParentLinkPositions(int localClientNum, int entnum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddPacketEntity(int localClientNum, int entnum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_AddPacketFxEntity(int localClientNum, int entnum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_ShouldDelayEntityPacketPostPS(int localClientNum, struct centity_s *cent) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CEUpdatedThisFrame(struct centity_s *cent, bool contextKey) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CESetUpdateFlagEnabled(bool contextKey, struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UpdatePacketEnt(int localClientNum, int entnum, int timeNow, int *postPSEntNum, bool contextKey) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DelayListInit(struct DelayListInfo *listInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DelayListAdd(struct DelayListInfo *listInfo, struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DelayListRemove(struct DelayListInfo *listInfo, struct centity_s *cent, struct centity_s *centPrev) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_EntGetLinkToParent(int localClientNum, struct centity_s *cent) -> struct centity_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EntPacketUpdateNeedsDelayed(int localClientNum, struct centity_s *cent, bool contextKey) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UpdateDelayedPacketEnts(int localClientNum, struct DelayListInfo *delayList, int *postPSEntNum, bool contextKey) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddPacketEntities(int localClientNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DObjUpdateInfo(const struct cg_s *cgameGlob, struct DObj *obj, bool notify) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_DObjGetLocalBoneMatrix(const struct cpose_t *pose, struct DObj *obj, int boneIndex) -> struct DObjAnimMat*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_DObjGetLocalTagMatrix(const struct cpose_t *pose, struct DObj *obj, unsigned int tagName) -> struct DObjAnimMat*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DObjGetWorldBoneMatrix(const struct cpose_t *pose, struct DObj *obj, int boneIndex, float *tagMat[0x3], float *origin) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DObjGetWorldBoneBindMatrix(const struct cpose_t *pose, struct DObj *obj, int boneIndex, float *tagMat[0x3], float *origin) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DObjGetWorldTagMatrix(const struct cpose_t *pose, struct DObj *obj, unsigned int tagName, float *tagMat[0x3], float *origin) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DObjGetWorldTagPos(const struct cpose_t *pose, struct DObj *obj, unsigned int tagName, float *pos) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetPose(int localClientNum, int handle) -> const struct cpose_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_SoundBlend(int localClientNum, struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_StartFx(int localClientNum, struct centity_s *cent, int startAtTime) -> struct FxEffect*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_Fx(int localClientNum, struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_LoopFx(int localClientNum, struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_ClampPrimaryLightOrigin(struct GfxLight *light, const struct ComPrimaryLight *refLight) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_ClampPrimaryLightDir(struct GfxLight *light, const struct ComPrimaryLight *refLight) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_PrimaryLight(int localClientNum, struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_InterpolateEntityPosition(struct cg_s *cgameGlob, struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_CreatePhysicsObject(int localClientNum, struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_UpdatePhysicsPose(struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_ExpiredLaunch(int localClientNum, struct centity_s *cent) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_CalcEntityPhysicsPositions(int localClientNum, struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_AnyOtherLocalPlayersInKillCam(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_CreateRagdollObject(int localClientNum, struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_UpdateRagdollPose(struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_CalcEntityRagdollPositions(int localClientNum, struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GrenadeBouncedThisFrame(const struct trajectory_t *prevPos, const struct trajectory_t *nextPos) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcEntityLerpPositions(int localClientNum, struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_CalcFxEntityLerpPositions(struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_GetAnimations(int localClientNum, int entIndex, int entType) -> struct XAnim_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PreProcess_GetDObj(int localClientNum, int entIndex, int entType, struct XModel *model, bool *createdNew) -> struct DObj*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DObjCalcBone(const struct cpose_t *pose, struct DObj *obj, int boneIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ProcessEntity(int localClientNum, struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_ProcessFxEntity(int localClientNum, struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetPoseOrigin(const struct cpose_t *pose, float *origin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetPoseAngles(const struct cpose_t *pose, float *angles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetEntityOrigin(int localClientNum, unsigned int entnum) -> const float*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdatePoseSceneUse(const struct cpose_t *pose, unsigned int sceneUse) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetPoseSceneUse(const struct cpose_t *pose) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ResetPoseSceneUse(const struct cpose_t *pose) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PredictiveSkinCEntity(struct GfxSceneEntity *sceneEnt) -> void
{

}

#endif // __UNIMPLEMENTED__
