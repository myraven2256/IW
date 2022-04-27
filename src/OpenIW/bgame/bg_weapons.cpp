//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto PM_StartWeaponAnim(struct playerState_s *ps, enum WeaponAnimNumber anim, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_StartWeaponAnimBothHands(struct playerState_s *ps, enum WeaponAnimNumber anim) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_ContinueWeaponAnim(struct playerState_s *ps, enum WeaponAnimNumber anim, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_IsAdsAllowed(struct playerState_s *ps, struct pml_t *pml) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdateAimDownSightFlag(struct pmove_t *pm, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_ExitAimDownSight(struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdateAimDownSightLerp(struct pmove_t *pm, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_StartHoldBreath(struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_EndHoldBreath(struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_HoldBreathFire(struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_UpdateHoldBreath(struct pmove_t *pm, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto WeaponStateProneMoveAllowed(int state) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto WeaponStateNotProneMoveInterruptable(int state) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_InteruptWeaponWithProneMove(struct playerState_s *ps) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_AdjustAimSpreadScale(struct pmove_t *pm, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_IsBulletClipEmpty(struct playerState_s *ps, struct WeaponDef *weapDef, enum PlayerHandIndex hand) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_FinishRechamber(struct playerState_s *ps, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_CheckForRechamber(struct playerState_s *ps, int delayedAction, enum PlayerHandIndex hand) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_SetWeaponReloadAddAmmoDelay(struct playerState_s *ps, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_SetReloadingState(struct playerState_s *ps, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_BeginWeaponReload(struct playerState_s *ps, unsigned int *holdrand, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsAltSwitch(struct playerState_s *ps, unsigned int weaponIndexFrom, unsigned int weaponIndexTo) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_BeginWeaponChange(struct pmove_t *pm, unsigned int newweapon, bool quick, unsigned int *holdrand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_BeginWeaponRaise(struct playerState_s *ps, enum WeaponAnimNumber anim, unsigned int time, float aim, int altSwitch, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ShouldTakeWeaponWhenEmpty(int weaponIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_TakeWeaponIfEmpty(struct playerState_s *ps, int weaponIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_SwitchWeaponsIfEmpty(struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_FinishWeaponChange(struct pmove_t *pm, int previousWeaponState, unsigned int *holdrand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_FinishWeaponRaise(struct playerState_s *ps, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_AllowReload(struct playerState_s *ps, enum PlayerHandIndex hand) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_ReloadDelayedAction(struct playerState_s *ps, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_FinishReloadStart(struct pmove_t *pm, int delayedAction, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_FinishReload(struct pmove_t *pm, int delayedAction, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_FinishReloadEnd(struct playerState_s *ps, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_CheckForReload(struct pmove_t *pm, unsigned int *holdrand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ShotLimitReached(struct playerState_s *ps, struct WeaponDef *weapDef, enum PlayerHandIndex hand) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BurstFirePending(struct playerState_s *ps, enum PlayerHandIndex hand) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto WeaponUsesBurstCooldown(unsigned int weaponIdx) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UpdatePendingTriggerPull(struct pmove_t *pm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto WeaponTimeModifiers(struct playerState_s *ps, int msec, enum PlayerHandIndex hand) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_UseLTriggerForDoubleBarrel(const struct playerState_s *ps, struct WeaponDef *weapDef) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_WeaponTimeAdjust(struct pmove_t *pm, struct pml_t *pml, enum PlayerHandIndex hand) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_CheckForChangeWeapon(struct pmove_t *pm, unsigned int *holdrand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_GetWeaponFireButton(unsigned int weapon, enum PlayerHandIndex hand) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_ShouldBeFiring(struct pmove_t *pm, int delayedAction, enum PlayerHandIndex hand) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_StartFiring(struct playerState_s *ps, int delayedAction, unsigned int *holdrand, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_CheckFiringAmmo(struct playerState_s *ps, unsigned int *holdrand, enum PlayerHandIndex hand) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_SetFPSFireAnim(struct playerState_s *ps, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_AddFiringAimSpreadScale(struct playerState_s *ps, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_FireWeapon_SendFireWeaponEvent(struct playerState_s *ps, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_FireWeapon(struct pmove_t *pm, int delayedAction, unsigned int *holdrand, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_DoubleBarrelFire(struct pmove_t *pm, int delayedAction, unsigned int *holdrand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_WeaponHasChargeMelee(struct playerState_s *ps) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_MeleeEnd(struct playerState_s *ps, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_MeleeFire(struct playerState_s *ps, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_MeleeInit(struct pmove_t *pm, struct pml_t *pml, struct playerState_s *ps, unsigned int *holdrand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_CheckForMelee(struct pmove_t *pm, struct pml_t *pml, int delayedAction, unsigned int *holdrand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_Idle(struct playerState_s *ps, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_OffHandInit(struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_OffHandPrepare(struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_OffHandHold(struct playerState_s *ps, unsigned int *holdrand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_OffHandStart(struct pmove_t *pm, unsigned int *holdrand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_OffHand(struct pmove_t *pm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_OffHandDetonate(struct pmove_t *pm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_OffHandEnd(struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_SendEmptyOffhandEvent(struct playerState_s *ps, enum OffhandClass offhandClass) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_IsHoldingGrenade(struct pmove_t *pm) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CheckForGrenadeThrowbackAndExecute(struct pmove_t *pm) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_CheckForOffHand(struct pmove_t *pm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_UpdateGrenadeThrow(struct playerState_s *ps, struct pml_t *pml) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_CheckGrenadeHold(struct pmove_t *pm, int delayedAction) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_CheckForDetonation(struct pmove_t *pm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_CheckForGrenadeThrowCancel(struct pmove_t *pm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Detonate(struct playerState_s *ps, int delayedAction) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_CheckForNightVision(struct pmove_t *pm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_FinishNightVisionWear(struct playerState_s *ps, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_FinishNightVisionRemove(struct playerState_s *ps, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Sprint_State_Raise(struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Sprint_State_Loop(struct playerState_s *ps, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetSprintOutTime(struct playerState_s *ps, struct WeaponDef *weapDef) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Sprint_State_Drop(struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_CheckForSprint(struct pmove_t *pm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetStunnedState_Begin(struct playerState_s *ps, unsigned int *holdrand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetStunnedState_Loop(struct playerState_s *ps, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetStunnedState_End(struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_CheckForStunned(struct pmove_t *pm, unsigned int *holdrand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ViewModelOverride(struct playerState_s *ps, struct pml_t *pml) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Weapon_Allowed(struct playerState_s *ps, struct pml_t *pml) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_WeaponProcessState(struct pmove_t *pm, struct pml_t *pml, int delayedAction, enum PlayerHandIndex hand) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_WeaponProcessHand(struct pmove_t *pm, struct pml_t *pml, int delayedAction, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UpdateRiotShieldSwitchingFlag(struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_Weapon(struct pmove_t *pm, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_ResetWeaponState(struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Turret_ComputeBarrelSpinRate(const struct WeaponDef *weaponDef, const struct LerpEntityStateTurret *turretLerp, const int curTime) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_Turret_ComputeHeatLevel(const struct WeaponDef *weaponDef, const struct LerpEntityStateTurret *turretLerp, const int curTime) -> float
{

}

#endif // __UNIMPLEMENTED__
