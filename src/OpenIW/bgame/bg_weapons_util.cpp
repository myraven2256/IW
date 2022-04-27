//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto BG_AdvanceTrace(struct BulletFireParams *bp, struct BulletTraceResults *br, float dist) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetFirstAvailableOffhand(const struct playerState_s *ps, int offhandClass) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetFirstEquippedOffhand(const struct playerState_s *ps, int offhandClass) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_OneHandedViewModelAnimsValid(const struct WeaponDef *weapDef) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ViewModelAnimExists(const struct playerState_s *ps, unsigned int weaponIndex, enum weapAnimFiles_t anim, enum PlayerHandIndex hand) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_UsingSniperScope(const struct playerState_s *ps) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CanHoldBreath(const struct playerState_s *ps) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsAimDownSightWeapon(const struct playerState_s *ps, unsigned int weaponIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CanPlayerHaveWeapon(unsigned int weaponIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ValidateWeaponNumber(unsigned int weaponIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ValidateWeaponNumberOffhand(unsigned int weaponIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponNeedsToBeRechambered(struct playerState_s *ps, unsigned int weaponIndex, const int hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponDoesNotNeedToBeRechambered(struct playerState_s *ps, unsigned int weaponIndex, const int hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponModel(const struct playerState_s *ps, unsigned int weaponIndex) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsWeaponValid(const struct playerState_s *ps, unsigned int weaponIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponBlocksProne(unsigned int weapIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsWeaponUsableInState(const struct playerState_s *ps, unsigned int weaponIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_RemoveWeaponFromEquippedList(struct playerState_s *ps, unsigned int weaponIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_TakePlayerWeapon(struct playerState_s *ps, unsigned int weaponIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponFireRecoil(const struct playerState_s *ps, float *recoilSpeed, float *kickAVel, unsigned int *holdrand, enum PlayerHandIndex hand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetSpreadForWeapon(const struct playerState_s *ps, const struct WeaponDef *weapDef, float *minSpread, float *maxSpread) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerWeaponCountPrimaryTypes(const struct playerState_s *ps) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerWeaponsFull_Primaries(const struct playerState_s *ps) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerHasCompatibleWeapon(const struct playerState_s *ps, unsigned int weaponIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerDualWieldingCompatibleWeapon(const struct playerState_s *ps, unsigned int weaponIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ThrowingBackGrenade(const struct playerState_s *ps) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AssertOffhandIndexOrNone(int offHandIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_UpdateWeaponHidePartBitsForDObj(struct DObj *obj, int weaponNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_GetExtendedClipAmmoForWeapon(int weaponIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetClipSize(const struct playerState_s *ps, int weaponIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerLastWeaponHandForViewWeapon(const struct playerState_s *ps) -> enum PlayerHandIndex
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerLastWeaponHand(const struct playerState_s *ps) -> enum PlayerHandIndex
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetHandFromWeaponEvent(int event) -> enum PlayerHandIndex
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsLastShotWeaponEvent(int event) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponBulletFire_GetMethodOfDeath(const unsigned int *perks, const struct WeaponDef *weapDef) -> enum meansOfDeath_t
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponBulletFire_GetHitEvent(unsigned int meansOfDeath) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponBulletFire_GetClientHitEvent(unsigned int meansOfDeath) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponBulletFire_ExplodeOnImpact(const unsigned int *perks, const struct WeaponDef *weapDef) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponBulletFire_OverrideImpactType(const unsigned int *perks, enum ImpactType *overrideFx) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponBulletFire_ShouldSpread(const unsigned int *perks, const struct WeaponDef *weapDef) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponBulletFire_ShouldPenetrate(const unsigned int *perks, const struct WeaponDef *weapDef) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponBulletFire_GetExplDmg(const struct WeaponDef *weapDef) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_WeaponBulletFire_GetExplRadius(const struct WeaponDef *weapDef) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponFlashTagnameByDef(const struct WeaponDef *weapDef) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetWeaponFlashTagname(unsigned int weapIdx) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerSwitchingToRiotShield(const struct playerState_s *ps) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_FindGlobalAmmoSlot(struct playerState_s *ps) -> struct GlobalAmmo*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetGlobalAmmoForAmmoType(struct playerState_s *ps, unsigned int ammoType, int ammoCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetGlobalAmmo(struct playerState_s *ps, unsigned int weaponIndex, int ammoCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AddGlobalAmmoForAmmoType(struct playerState_s *ps, unsigned int ammoType, int ammoCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_InitEquippedWeaponSlot(struct playerState_s *ps, const int equipIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_GetFreeEquipSlot(const struct playerState_s *ps) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EquipWeaponAtSlot(struct playerState_s *ps, int weaponIndex, int equipIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EquipWeapon(struct playerState_s *ps, int weaponIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
