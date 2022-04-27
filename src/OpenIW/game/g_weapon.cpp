//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto G_AntiLagRewindClientPos(int gameTime, struct AntilagClientStore *antilagStore) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_AntiLag_RestoreClientPos(struct AntilagClientStore *antilagStore) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Melee_Trace(struct gentity_s *ent, struct weaponParms *wp, int damage, float range, float width, float height, struct trace_t *traceResult, float *hitOrigin) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Weapon_Melee_internal(struct gentity_s *ent, struct weaponParms *wp, float range, float width, float height) -> struct gentity_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Weapon_Melee(struct gentity_s *ent, struct weaponParms *wp, float range, float width, float height, int gametime) -> struct gentity_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto gunrandom(float *x, float *y) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Weapon_Throw_Grenade(struct gentity_s *ent, int grenType, unsigned char grenModel, struct weaponParms *wp) -> struct gentity_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Weapon_GrenadeLauncher_Fire(struct gentity_s *ent, int grenType, unsigned char grenModel, struct weaponParms *wp) -> struct gentity_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MacrossMissiles(struct gentity_s *parent, unsigned int weaponIndex, struct weaponParms *wp, float *start, const float *gunVel, struct lockonFireParms *lockParms) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Weapon_RocketLauncher_Fire(struct gentity_s *ent, unsigned int weaponIndex, float spread, struct weaponParms *wp, const float *gunVel, struct lockonFireParms *lockParms, bool magicBullet) -> struct gentity_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LogAccuracyHit(struct gentity_s *target, struct gentity_s *attacker) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CalcMuzzlePoints(const struct gentity_s *ent, struct weaponParms *wp) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FireWeapon_SendClientEvent(struct gentity_s *attacker, int event, int hitClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FireWeapon(struct gentity_s *ent, int gametime, int event) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_UseOffHand(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FireWeaponMelee(struct gentity_s *ent, int gametime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GivePlayerWeapon(struct playerState_s *ps, int weaponIndex, unsigned char altModelIndex, int dualWield) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetupWeaponDef() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetWeaponIndexForName(const char *name) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SelectWeaponIndex(int clientNum, int iWeaponIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetEquippedOffHand(int clientNum, int offHandIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_RegisterWeaponForKillcamFXRemoval(int clientNum, int weapIdx) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_WorldPointToScreenPos(const float *viewOrigin, const float *viewAngles, float viewFOV, const float *targetPoint, float *outScreenPos) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_InitDefaultViewmodelRumbles() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto G_GetShieldTagName(const struct gentity_s *shieldHolder) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetShieldTagMatrix(const struct gentity_s *shieldHolder, float *resultMatrix[0x3]) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetShieldCosOfAngleToPoint(const struct gentity_s *shieldHolder, const float *point) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetShieldTagNormal(const struct gentity_s *shieldHolder, float *resultNormal) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_TakePlayerWeapon(struct playerState_s *ps, unsigned int weaponIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetShieldBlastDamageProtection(struct gentity_s *ent, const float *blastOrigin) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_AddShieldSplashDamageEvent(struct gentity_s *ent, float originalDamageRawPoints, float originalDamageScale, float shieldProtection) -> void
{

}

#endif // __UNIMPLEMENTED__
