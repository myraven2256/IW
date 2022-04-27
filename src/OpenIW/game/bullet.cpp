//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto Bullet_RandomDir(unsigned int *randSeed, float *x, float *y) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bullet_Endpos(unsigned int *randSeed, float spread, float *end, float *dir, const struct weaponParms *wp, float maxRange) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Bullet_GetDamage(const struct BulletFireParams *bp, const struct BulletTraceResults *br, const struct WeaponDef *weapDef, struct gentity_s *attacker) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Bullet_GetMethodOfDeath(struct gentity_s *attacker, const struct weaponParms *wp) -> enum meansOfDeath_t
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Bullet_ImpactExplosion_ComputeImpactLocation(const struct BulletFireParams *bp, const struct BulletTraceResults *br, float *outLocation) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Bullet_ImpactExplosion(struct BulletFireParams *bp, struct BulletTraceResults *br, const struct WeaponDef *weapDef, struct gentity_s *attacker) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Bullet_ImpactEffect_SetAdditionalFlags(struct gentity_s *hitEffectEnt, int impactEffectFlags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetTempEventEntNormal(struct gentity_s *ent, const float *normal) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BroadcastShieldHitEvent(const float *hitPos, const float *hitNormal, const float *startPos, unsigned int weaponIndex, int attackerEntNum, int victimEntNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EncodeShieldHitPos(int entNum, const float *hitPos, const float *startPos) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BroadcastShieldHitEventToVictim(unsigned int *randSeed, const float *hitPos, const float *hitNormal, const float *startPos, unsigned int weaponIndex, int attackerEntNum, int victimEntNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Bullet_ImpactEffect(unsigned int *randSeed, const struct BulletFireParams *bp, const struct BulletTraceResults *br, const float *normal, unsigned int weaponIndex, struct gentity_s *attacker, int impactEffectFlags, struct gentity_s **outHitEffectEnt) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Bullet_DamageGlass(const struct BulletFireParams *bp, const struct BulletTraceResults *br, const struct WeaponDef *weapDef, struct gentity_s *attacker) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Bullet_IgnoreHitEntity(const struct BulletFireParams *bp, const struct BulletTraceResults *br, struct gentity_s *attacker) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Bullet_Trace(const struct BulletFireParams *bp, const struct WeaponDef *weapDef, struct gentity_s *attacker, struct BulletTraceResults *br, int lastSurfaceType) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Bullet_HitNothing(unsigned int *randSeed, struct BulletFireParams *bp, struct BulletTraceResults *br, unsigned int weaponIndex, struct gentity_s *attacker) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CalcRicochet(const float *incoming, const float *normal, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto G_GetPrimaryIfAltIsNotWeapon(const struct gentity_s *attacker, unsigned int weaponIndex) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BulletRicochet(unsigned int *randSeed, struct gentity_s *hitEnt, struct gentity_s *attacker, unsigned int weaponIndex, const float *contactPoint, const float *surfaceNormal, const float *incomingNormal, int gameTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Bullet_ProcessShieldHit(unsigned int *randSeed, struct BulletFireParams *bp, struct BulletTraceResults *br, unsigned int weaponIndex, struct gentity_s *attacker, int gameTime) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Bullet_Process(unsigned int *randSeed, struct BulletFireParams *bp, struct BulletTraceResults *br, unsigned int weaponIndex, struct gentity_s *attacker, int dFlags, int gameTime, int *outImpactFlags, bool processFx) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Bullet_FireExtended(unsigned int *randSeed, struct BulletFireParams *bp, struct BulletTraceResults *br, unsigned int weaponIndex, struct gentity_s *attacker, int gameTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Bullet_FirePenetrate(unsigned int *randSeed, struct BulletFireParams *bp, struct BulletTraceResults *br, unsigned int weaponIndex, struct gentity_s *attacker, int gameTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Bullet_CheckSpreadFireAtPos(struct gentity_s *attacker, struct gentity_s *target, struct BulletFireParams *bp, const struct weaponParms *wp, const struct gentity_s *weaponEnt, enum hitLocation_t hitLoc) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Bullet_SpreadFire_NextTarget(struct gentity_s *attacker, int *targetIndex) -> struct gentity_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Bullet_SpreadFireTargets(struct gentity_s *attacker, int shotCount, float range, float spread, const struct weaponParms *wp, const struct gentity_s *weaponEnt, int gameTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Bullet_Fire(struct gentity_s *attacker, float spread, const struct weaponParms *wp, const struct gentity_s *weaponEnt, enum PlayerHandIndex hand, int gameTime) -> int
{

}

#endif // __UNIMPLEMENTED__
