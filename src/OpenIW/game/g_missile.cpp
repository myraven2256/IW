//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto G_RegisterMissileDvars() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_RegisterMissileDebugDvars() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Missile_IsGrenade(const struct gentity_s *ent) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CalcMissileNoDrawTime(float speed) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TraceHitCharacter(const struct trace_t *trace) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MissileLandAngles(struct gentity_s *ent, struct trace_t *trace, float *vAngles, int bForceAlign) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MissileLandAnglesFlat(struct gentity_s *ent, struct trace_t *trace, float *angles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MissileLandAnglesKnife(struct gentity_s *ent, struct WeaponDef *weapDef, struct trace_t *trace, float *angles, float *origin) -> enum BounceMissileResult
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MissileLandAnglesFlatMaintainingDirection(struct gentity_s *ent, struct trace_t *trace, float *angles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CheckCrumpleMissile(struct gentity_s *ent, struct trace_t *trace) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CheckGrenadeDanger(struct gentity_s *grenadeEnt) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_MissileTrace(struct trace_t *results, const float *start, const float *end, int passEntityNum, int contentmask) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GrenadeBounceMirrorVelocity(const float *velocity, const float *normal, struct WeaponDef *weapDef, float *result) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GrenadeBounceVelocity(const float *preBounceVelocity, float dot, const float *normal, int surfType, const struct WeaponDef *weapDef, struct trajectory_t *pos, float *rollSlideSpeed, float *rollSlideDir) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MissileShouldStopAtImpact(const struct WeaponDef *weapDef, const struct trace_t *trace, const float *velocity) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BounceMissile(struct gentity_s *ent, struct trace_t *trace) -> enum BounceMissileResult
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GrenadeDud(struct gentity_s *ent, struct WeaponDef *weapDef) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto JavelinProjectile(struct gentity_s *ent, struct WeaponDef *weapDef) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto JavelinDud(struct gentity_s *ent, struct WeaponDef *weapDef) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetSplashMethodOfDeath(struct gentity_s *ent) -> enum meansOfDeath_t
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MissileImpact(struct gentity_s *ent, struct trace_t *trace, float *dir, float *endpos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_TimedObjectThink(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ExplodeMissileInternal(struct gentity_s *ent, enum ExplosionType explosionType, const float *normalOverride, const struct gentity_s *otherEnt) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ExplodeMissile(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Missile_PenetrateGlass(struct trace_t *results, const struct gentity_s *ent, const float *start, const float *end, int damage, bool predicted) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DrawMissileDebug(float *start, float *end, const float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DrawAttractorDebug() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RunMissile_GetPerturbation(float destabilizationCurvatureMax) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_missile_attractors() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Missile_InitAttractors() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Missile_FreeAttractorRefs(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Missile_SaveAttractors(struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Missile_LoadAttractors(struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Missile_GetFreeAttractor() -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_MissileCreateAttractorEnt() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_MissileCreateAttractorOrigin() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_MissileCreateRepulsorEnt() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_MissileCreateRepulsorOrigin() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_MissileDeleteAttractor() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Missile_ApplyAttractorsRepulsors(struct gentity_s *missile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RunMissile_Destabilize(struct gentity_s *missile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RunMissile_CreateWaterSplash(const struct gentity_s *missile, const struct trace_t *trace, const float *endPos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IsMissileLockedOn(const struct gentity_s *missileEnt) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MissileHorzSteerToTarget(struct gentity_s *ent, const float *currentRight, const float *toTargetRelative, float currentHorzSpeed, float *steer) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MissileVerticalSteerToTarget(struct gentity_s *ent, const float *toTargetHorzRelDir, float horzDistToTarg, float vertDistToTarg, float currentHorzSpeed, float *steer) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MissileVerticalSteering(struct gentity_s *ent, const float *toTargetRelative, float currentHorzSpeed, float *steer) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MissileIsReadyForSteering(struct gentity_s *ent) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CalcTargetPosition(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto JavelinClimbExceededAngle(struct gentity_s *ent, const float *targetPos) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto JavelinClimbWithin2DDistance(struct gentity_s *ent, const float *targetPos) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto JavelinClimbOffset(struct gentity_s *ent, float *targetPos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto JavelinMaxDPS(struct gentity_s *ent) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VecToQuat(const float *vec, float *quat) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto JavelinRotateDir(struct gentity_s *ent, const float *currentDir, const float *targetDir, float *resultDir) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto JavelinRotateVelocity(struct gentity_s *ent, const float *currentVel, const float *targetDir, float *resultVel) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto JavelinClimbCeiling(struct gentity_s *ent) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto JavelinClimbIsAboveCeiling(struct gentity_s *ent, const float *targetPos) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto JavelinClimbEnd(struct gentity_s *ent, const float *targetPos) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto JavelinSteering(struct gentity_s *ent, struct WeaponDef *weapDef) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MissilePassedTarget(struct gentity_s *misEnt) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GuidedMissileSteering(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MissileTrajectoryClientControlled(struct gentity_s *ent, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MissileTrajectory(struct gentity_s *ent, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_MakeMissilePickupItem(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto G_GetGrenadeTrType(struct gentity_s *grenade) -> enum trType_t
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto G_RunMissileInternal(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_RunMissile(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_InitGrenadeEntity(struct gentity_s *parent, struct gentity_s *grenade) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_InitGrenadeMovement(struct gentity_s *grenade, const float *start, const float *dir, const struct WeaponDef *weapDef, int rotate) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto InitGrenadeTimer(const struct gentity_s *parent, struct gentity_s *grenade, const struct WeaponDef *weapDef, int time) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FireGrenade(struct gentity_s *parent, float *start, float *dir, int grenadeWPID, unsigned char grenModel, int rotate, int time) -> struct gentity_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto InitRocketTimer(struct gentity_s *bolt, struct WeaponDef *weapDef) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FireRocket(struct gentity_s *parent, unsigned int weaponIndex, float *start, float *dir, const float *gunVel, struct lockonFireParms *lockParms) -> struct gentity_s*
{

}

#endif // __UNIMPLEMENTED__
