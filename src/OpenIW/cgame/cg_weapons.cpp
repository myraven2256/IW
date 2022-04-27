//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_RegisterWeaponDvars() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetWeaponAnimRate(int weaponNum, struct XAnim_s *anims, enum weapAnimFiles_t animIndex, int oneHanded) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto StartWeaponAnim(int localClientNum, int weaponNum, enum PlayerHandIndex hand, enum weapAnimFiles_t animIndex, float transitionTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PlayADSAnim(float weaponPosFrac, struct DObj *obj, int animIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_JavelinADS(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsPlayerReloading(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UICheckWeapLockBlink(int localClientNum, float blinkPerSec) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UICheckWeapLockAttackTop(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UICheckWeapLockAttackDirect(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UICheckWeapLocking(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UICheckWeapLocked(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UICheckWeapLockTooClose(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetLockTargetTagPos(int localClientNum, struct playerState_s *ps, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetWeapLockLoc2D(int localClientNum, struct cg_s *cgameGlob, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetWeapLockLoc2DCached(int localClientNum, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UIGetWeapLockLoc2D_X(int localClientNum) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UIGetWeapLockLoc2D_Y(int localClientNum) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetWeaponName(int localClientNum) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto WeaponRunXModelAnims(int localClientNum, const struct playerState_s *ps, enum PlayerHandIndex handIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ResetWeaponAnimTrees(int localClientNum, const struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_WeaponDObjHandle(enum PlayerHandIndex weaponHand) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CheckADSViewAnimIsNotLooping(const struct WeaponDef *weapDef, struct XAnim_s *pAnims, const char *animName, unsigned int animIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_CreateTurretAnims(int weaponNum) -> struct XAnim_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_CreateWeaponViewModelXAnim(struct WeaponDef *weapDef, const char **animArray) -> struct XAnim_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_CreateWeaponViewModelXAnimDefs(int weaponNum, struct weaponStaticInfo_t *weapStaticInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_CreateWeaponViewModelXAnimTree(struct XAnim_s *pAnims) -> struct XAnimTree_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_UpdateViewModelHidePartBits_EMP(const int localClientNum, const int weaponNum, struct DObj *obj) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_UpdateViewModelHidePartBits(int localClientNum, int weaponNum, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RegisterWeapon(int localClientNum, int weaponNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ChangeViewmodelDobj(int localClientNum, const struct playerState_s *ps, unsigned int weaponNum, struct XModel *newHands, bool updateClientInfo, bool recreateAnimTrees) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ViewmodelRocketShouldBeAttached(int localClientNum, struct WeaponDef *weapDef, enum PlayerHandIndex hand) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ViewmodelKnifeShouldBeAttached(int localClientNum, struct WeaponDef *weapDef) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UpdateViewmodelAttachments(int localClientNum, int weaponNum, enum PlayerHandIndex hand) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateWeaponViewmodels(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_UpdateHandViewmodels_Internal(int localClientNum, struct XModel *handModel, const struct playerState_s *ps, unsigned int weaponIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateHandViewmodels(int localClientNum, struct XModel *handModel) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PlayNoteMappedSoundAliases(int localClientNum, const char *noteName, const struct WeaponDef *weapDef) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PlayNoteMappedRumbleAliases(int localClientNum, const char *noteName, const struct WeaponDef *weapDef) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ProcessWeaponNoteTracks(int localClientNum, const struct playerState_s *predictedPlayerState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RegisterItems(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_BuildWeaponState(struct cg_s *cgameGlob, struct weaponState_t *ws) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_SaveWeaponState(const struct weaponState_t *ws, struct cg_s *cgameGlob) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_UpdateWeaponPositionToADS(struct cg_s *cgameGlob, struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_CalculateWeaponMovement_LocalToWorld(const struct cg_s *cgameGlob, float *origin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_CalculateWeaponMovement_Landing(const struct cg_s *cgameGlob, float *origin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_CalculateWeaponMovement_SaveOrigin(struct cg_s *cgameGlob, float *origin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_CalculateWeaponMovement_Debug(const struct cg_s *cgameGlob, float *origin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_CalculateWeaponMovement_SaveAngles(struct cg_s *cgameGlob, float *angles, struct GfxScaledPlacement *placement) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_CalculateWeaponMovement_ClientSpecific(struct cg_s *cgameGlob, struct GfxScaledPlacement *placement, float *angles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_GetPrimaryIfAltIsNotWeapon(const struct centity_s *cent, int weaponNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto WeaponFlash(int localClientNum, int dobjHandle, int weaponNum, int bViewFlash, unsigned int flashTag) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_HoldBreathInit(struct cg_s *cgameGlob) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HoldBreathSoundLerp(int localClientNum, float lerp) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HoldBreathUpdate(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateViewModelPose(const struct DObj *obj, int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateViewModelPoseForHand(const struct DObj *obj, int localClientNum, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_BulletDynEntImpact(const unsigned int localClientNum, const unsigned int sourceEntNum, const struct WeaponDef *weapDef, const bool hasBulletExploded, const float *start, const float *hitPos, const struct trace_t *traceResults) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetClientInfo(const int localClientNum, const struct centity_s *otherClient) -> struct clientInfo_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetPlayerViewOrigin(int localClientNum, const struct playerState_s *ps, float *origin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ShouldIgnoreHitEntity(int attackerNum, int hitEntNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_BulletTrace(int localClientNum, const struct BulletFireParams *bp, const struct WeaponDef *weapDef, const struct centity_s *attackerEnt, struct BulletTraceResults *br, int lastSurfaceType) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_SimulateBulletFire_FakeTrace(const int localClientNum, const struct WeaponDef *weapDef, const struct BulletFireParams *bp, const int knownHitClientNum, struct BulletTraceResults *br) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_IsEntityAPlayer(int localClientNum, int entityNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_SimulateBulletFire_Internal_UseEventBasedHitEffect(int localClientNum, int targetEntityNum, int event) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_SimulateBulletFire_Internal_HitEffect(int localClientNum, int sourceEntityNum, int targetEntityNum, const int knownHitClientNum, int weaponIndex, const float *startPos, const float *position, const float *normal, int surfType, unsigned int meansOfDeath, unsigned char impactEffects, int hitContents) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_SimulateBulletFire_Internal_MissEffect(int localClientNum, int sourceEntityNum, int weaponIndex, const float *startPos, const float *position, int surfType) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_IsBulletWeapon(const struct WeaponDef *weapDef) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RayPlaneIntersection(float *start, float *dir, float len, float *normal, float *out) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_ShouldSimulateBulletFire(int localClientNum, struct BulletFireParams *bp) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_SimulateBulletFire_Internal(int localClientNum, struct BulletFireParams *bp, int weaponIndex, struct centity_s *attackerEnt, const int knownHitClientNum, float *tracerStart, bool drawTracers) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_IsPlayerCrouching(const struct centity_s *cent) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_IsPlayerProne(const struct centity_s *cent) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_IsPlayerADS(const struct centity_s *cent) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GuessSpreadForWeapon(int localClientNum, const struct centity_s *cent, const struct WeaponDef *weapDef, float *minSpread, float *maxSpread) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RandomBulletDir(unsigned int *randSeed, float *x, float *y) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_SimulateBulletFire_EndPos(unsigned int *randSeed, const float spread, const float *start, float *end, float *dir, const float *forwardDir, const float *rightDir, const float *upDir, const float maxRange) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_SimulateBulletFire(int localClientNum, struct centity_s *ent, const int knownHitClientNum, unsigned int weaponIndex, const unsigned short boneName, bool isPlayerView, bool isPlayerWeaponView, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_AddMuzzleFlash(int localClientNum, struct centity_s *cent, int weaponNum, int bViewModel, int bDrawGun) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddPlayerWeapon(int localClientNum, const struct GfxScaledPlacement *placement, const struct playerState_s *ps, struct centity_s *cent, int bDrawGun) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateViewWeaponAnim(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddViewWeapon(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto WeaponCycleAllowed(struct cg_s *cgameGlob) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_NextWeapon_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PrevWeapon_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VerifyPlayerAltModeWeapon(int localClientNum, int weaponIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_OutOfAmmoChange_internal(int localClientNum, bool clipOnly) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_OutOfAmmoChange(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_OutOfAmmoChangeClipOnly(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ForceSwitchToValidWeapon(int localClientNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto NextWeapInCycle(int localClientNum, const struct playerState_s *ps, enum weapInventoryType_t type, unsigned int weaponIndex, bool cycleForward, bool skipEmpties, bool skipHaveNoAlts) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetWeapIdxForAltUsageHistory(struct cg_s *cgameGlob, unsigned int weapIdx) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CycleWeapPrimary(int localClientNum, int cycleForward, int bIgnoreEmpty, int bIgnoreStanceUnusable) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetPrimaryForAltModeWeapon(const struct cg_s *cgameGlob, unsigned int weapIndex) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AltWeaponToggleIndex(int localClientNum, const struct cg_s *cgameGlob, bool selectPrimaryWeapon) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ToggleWeaponAltMode(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ActionSlotUsageAllowed(struct cg_s *cgameGlob, enum ActionSlotType type) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ActionParms(int *slotResult) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ActionSlotDown_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ActionSlotUp_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_EjectWeaponBrass(int localClientNum, const struct entityState_s *ent, int event) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TakeWeaponIfEmpty(int localClientNum, struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_ClientViewLockedOnTurret(int localClientNum, int entnum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_FireWeapon_AddNonPlayerWeaponFlash(int localClientNum, const struct entityState_s *ent, const unsigned short tagName, unsigned int weapon, bool isPlayerView) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_FireWeapon_FireSound(int localClientNum, struct centity_s *cent, int event, const unsigned short tagName, struct DObj *obj, const struct WeaponDef *weaponDef, bool isPlayerView, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_FireWeapon_Rumble(int localClientNum, const struct entityState_s *ent, const struct WeaponDef *weaponDef, bool isPlayerView) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FireWeapon(int localClientNum, struct centity_s *cent, int event, int knownHitClientNum, const unsigned short tagName, unsigned int weapon, bool isPlayerView) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto WhizbySound(int localClientNum, const float *start, const float *end) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetLocalClientGlobalsForEnt(int entityNum) -> struct cg_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetViewDirection(int localClientNum, int entityNum, float *forward, float *right, float *up) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcEyePoint(int localClientNum, int entityNum, float *eyePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcMuzzlePoint(const int localClientNum, const int entityNum, const unsigned int flashTag, float *out_Point) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_BulletTracer_ShouldSpawn_TrajectoryEffects(int localClientNum, struct centity_s *attackerEnt, const struct WeaponDef *weaponDef) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_BulletTrajectoryEffects(int localClientNum, int sourceEntityNum, int weaponIndex, const float *startPos, const float *position, int surfType, int event) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RandomEffectAxis(const float *forward, float *left, float *up) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_OverrideImpactEffectType(const int localClientNum, const int sourceEntityNum, enum ImpactType *fxImpactType) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetImpactEffectForWeapon(int localClientNum, const int sourceEntityNum, const int weaponIndex, const int surfType, const int impactFlags, const struct FxEffectDef **outFx, struct snd_alias_list_t **outSnd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_CullBulletHitEffect_Cell(const struct cg_s *cgameGlob, const float *eyeDir, const float *position, const float *axis[0x3]) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_CullBulletHitEffect_Normal(int localClientNum, const struct cg_s *cgameGlob, int eventType, const float *eyeDir, const float *position, const float *axis[0x3], int targetEntityNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_CullBulletHitEffect(int localClientNum, int eventType, const float *position, const float *axis[0x3], int targetEntityNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetSplatterHeight(int localClientNum, struct centity_s *targetEnt) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BloodSplatterOnShield(int localClientNum, int entityNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_BulletImpactEffects(int localClientNum, int sourceEntityNum, int targetEntityNum, int weaponIndex, const float *position, const float *normal, int surfType, int event, unsigned char impactEffects, int hitContents) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_BulletHitEvent_Internal(int localClientNum, int sourceEntityNum, int targetEntityNum, int weaponIndex, const float *startPos, const float *position, const float *normal, int surfType, int event, unsigned char impactEffects, int hitContents) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_BulletHitEvent(int localClientNum, int sourceEntityNum, int targetEntityNum, int weaponIndex, const float *startPos, const float *position, const float *normal, int surfType, int event, unsigned char impactEffects, int hitContents) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BulletHitClientEventSound(int localClientNum, const float *position, int surfType, int event) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_BulletHitClientEvent(int localClientNum, int sourceEntityNum, int weaponIndex, const float *startPos, const float *position, int surfType, int event, unsigned char impactEffects) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DecodeHitLocToWorldSpace(int localClientNum, struct cg_s *cgameGlob, unsigned int eventParm, float *result, bool *resultHitFront) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CalcViewmodelHitPos(int localClientNum, unsigned int eventParm, float *resultPos, float *resultNormal) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_ViewmodelShieldHitStore(int localClientNum, unsigned int eventParm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ViewmodelShieldHitsProcess(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_BulletHitClientShieldEvent(int localClientNum, int sourceEntityNum, int weaponIndex, int surfType, int event, unsigned int eventParm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ExplosiveImpactOnShieldEvent(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ExplosiveSplashOnShieldEvent(int localClientNum, int originalDamage) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_MeleeBloodEvent(int localClientNum, const struct centity_s *cent, int eventParm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SetupWeaponDef(int localClientNum, unsigned int weapIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ValidLatestPrimaryWeapIdx(struct cg_s *cgameGlob, unsigned int weaponIndex) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetAltUsageFlag(struct cg_s *cgameGlob, unsigned int weaponIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_UpdatePrimaryForAltModeWeapon(struct cg_s *cgameGlob, unsigned int oldWeaponIndex, unsigned int newWeaponIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SelectWeaponIndex(int localClientNum, unsigned int weaponIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ScopeIsOverlayed(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ThermalScopeIsOverlayed(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetWeaponZoom(const struct cg_s *cgameGlob, const struct WeaponDef *weapDef) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayerTurretWeaponIdx(int localClientNum) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayerUsingScopedTurret(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayerUsingThermalTurret(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayerTurret_HeatEnabled(int localClientNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayerTurret_HeatValue(int localClientNum) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayerTurret_HeatOverheated(int localClientNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetIconDimsForPlayer(int localClientNum, const struct centity_s *cent, float *x, float *y, float *w, float *h) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DrawTargetBox(float x, float y, float w, float h, struct Material *icon, float alpha) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetTargetboxAlphaForPlayer(int localClientNum, const struct centity_s *cent) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetIconDimsForVehicle(int localClientNum, const struct DObj *dobj, const float *origin, float *x, float *y, float *w, float *h) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DrawTargetBoxVehicle(int localClientNum, const struct DObj *dobj, const float *origin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DrawTargetBoxVehicles(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DrawTargetBoxPlayers(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DrawTargetBoxSelf(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawFriendOrFoeTargetBoxes(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawRemoteMissileOverlay(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DebugDrawMissileProjectedSound(const struct MissileConeSoundVars *mcv) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetupAndValidateConeVars(const struct centity_s *cent, struct MissileConeSoundVars *mcv) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CalcDistanceFactors(const float *listenerOrigin, const struct MissileConeSoundVars *mcv, float *result_line, float *result_missile) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto NormalizeForMinMax(float original, float min, float max) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayMissileProjectedConeSound(int localClientNum, struct centity_s *cent) -> void
{

}

#endif // __UNIMPLEMENTED__
