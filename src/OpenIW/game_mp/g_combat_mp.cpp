//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_g_combat() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto G_HitLocStrcpy(unsigned char *pMember, const char *pszKeyValue) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ParseHitLocDmgTable() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddScore(struct gentity_s *ent, int score) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LookAtKiller(struct gentity_s *self, const struct gentity_s *inflictor, struct gentity_s *attacker) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_MeansOfDeathFromScriptParam(int scrParam) -> enum meansOfDeath_t
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_HitLocFromScriptParam(int scrParam) -> enum hitLocation_t
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DeathGrenadeDrop(struct gentity_s *self, int meansOfDeath) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetDeathAnimDamageTypeCondition(struct gentity_s *self, const struct gentity_s *inflictor, int meansOfDeath, int weapon) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetDeathAnimHitLocationCondition(struct gentity_s *self, const enum hitLocation_t hitLoc) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetDeathAnimHitDirectionCondition(struct gentity_s *self, const float *vDir) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DeathAnimForScript(struct gentity_s *self, const struct gentity_s *inflictor, int meansOfDeath, int weapon, enum hitLocation_t hitLoc, const float *direction) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto player_die(struct gentity_s *self, const struct gentity_s *inflictor, struct gentity_s *attacker, int damage, int meansOfDeath, int iWeapon, const float *vDir, const enum hitLocation_t hitLoc, int psTimeOffset) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetWeaponHitLocationMultiplier(enum hitLocation_t hitLoc, int weapon) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto G_GetWeaponIndexForEntity(const struct gentity_s *ent) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto G_DamageClient(struct gentity_s *targ, const struct gentity_s *inflictor, struct gentity_s *attacker, const float *dir, const float *point, int damage, int dflags, int mod, int weapon, enum hitLocation_t hitLoc, int timeOffset) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DamageNotify(unsigned short notify, struct gentity_s *targ, struct gentity_s *attacker, const float *dir, const float *point, int damage, int mod, int dFlags, unsigned int modelIndex, unsigned int partName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_Damage(struct gentity_s *targ, const struct gentity_s *inflictor, struct gentity_s *attacker, const float *dir, const float *point, int damage, int dFlags, int mod, int weapon, enum hitLocation_t hitLoc, unsigned int modelIndex, unsigned int partName, int timeOffset) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ShieldNotifyAndDamage(struct gentity_s *targ, const struct gentity_s *inflictor, struct gentity_s *attacker, const float *dir, const float *point, int damage, int dFlags, int mod, int weapon, int timeOffset) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CanDamage(struct gentity_s *targ, struct gentity_s *inflictor, const float *centerPos, float coneAngleCos, float *coneDirection, int contentMask) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EntDistToPoint(const float *origin, struct gentity_s *ent) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetEntListForRadius(const float *origin, float radius_max, float radius_min, int *entList, int *entListCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AddScrTeamName(enum team_t team) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FlashbangBlastEnt(struct gentity_s *ent, const float *blastOrigin, float radius_max, float radius_min, struct gentity_s *attacker, enum team_t team) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FlashbangBlast(const float *origin, float radius_max, float radius_min, struct gentity_s *attacker, enum team_t team) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_WithinDamageRadius(const float *damageOrigin, float radiusSquared, struct gentity_s *ent) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_RadiusDamage(const float *origin, struct gentity_s *inflictor, struct gentity_s *attacker, float fInnerDamage, float fOuterDamage, float radius, float coneAngleCos, float *coneDirection, struct gentity_s *ignore, enum meansOfDeath_t mod, int weapon) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetHitLocationString(enum hitLocation_t hitLoc) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetHitLocationIndexFromString(unsigned short sString) -> enum hitLocation_t
{

}

#endif // __UNIMPLEMENTED__
