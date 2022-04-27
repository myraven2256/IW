//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_turret() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_InitTurrets() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FreeTurret(struct gentity_s *self) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_FillWeaponParms(const struct gentity_s *ent, const struct gentity_s *activator, struct weaponParms *wp) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_GetRemainingConvergenceTime(const struct Turret *turret, int type) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_FireLead(struct gentity_s *ent, struct gentity_s *activator, bool bUseAccuracy) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_ClientAim(struct gentity_s *self, struct gentity_s *other) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_CanShoot(struct gentity_s *self) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_Shoot_internal(struct gentity_s *self, struct gentity_s *other) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_Shoot(struct gentity_s *self) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto G_PlayerTurretPositionAndBlend(struct gentity_s *playerEnt, struct gentity_s *turretEnt) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_UpdateBarrelRotation(struct gentity_s *self, struct gentity_s *owner) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_UpdateHeat(struct gentity_s *self) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_Track(struct gentity_s *self, struct gentity_s *other) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_UpdateSound(struct gentity_s *self) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ClientStopUsingTurret(struct gentity_s *self) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_Think_Client(struct gentity_s *self) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_ScanStart(struct Turret *turret, struct WeaponDef *weapDef, float deltaYaw) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_ScanStop(struct Turret *turret) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_ScanForEnemies(struct gentity_s *self) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_CalculateConvergenceAngularVelocity(const struct gentity_s *self, const float *desiredAngles, float *angularVelocity) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_UpdateTargetAngles(struct gentity_s *self, const float *desiredAngles, const bool bManned) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_IsFiringInternal(int state) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_IsFiring(struct gentity_s *self) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_SetState(struct gentity_s *self, int state) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_ClearTargetEnt(struct gentity_s *self) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_ReturnToDefaultPos(struct gentity_s *self, bool bManned) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_SetDefaultDropPitch(struct gentity_s *self, float pitch) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_RestoreDefaultDropPitch(struct gentity_s *self) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_Think_Init(struct gentity_s *self) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_CanTargetPoint(const struct gentity_s *self, const float *vPoint, float *out_sourcePosition, float *out_localAngles) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_GetTargetEyePosition(const struct gentity_s *target, float *eyePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_CanTargetSentient_GetTargetPosInternal(const struct gentity_s *targetEnt, const float *targetEntOffset, const float *turretAxis[0x3], const int targetHead, float *out_targetPosition, float *out_localAngles) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_CanTargetSentient(const struct gentity_s *turretEnt, const struct gentity_s *targetEnt, const float *targetEntOffset, float *out_targetPosition, float *out_sourcePosition, float *out_localAngles) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_UpdateShootingState(struct gentity_s *self, const int bShoot, const float *desiredAngles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_AimAtVector_Internal(struct gentity_s *self, const float *origin, int bShoot, const float *localTargetAngles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_AimAtVector(struct gentity_s *self, const float *origin, const int bShoot, float *out_localTargetAngles) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_SetTargetEnt(struct gentity_s *self, const struct gentity_s *ent, const float *entOffset) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_AimAtSentient_Internal(struct gentity_s *self, struct gentity_s *enemy, const float *enemyOffset, int bShoot, int missTime, float *out_localTargetAngles) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_AimAtSentient(struct gentity_s *self, struct gentity_s *enemy, const float *enemyOffset, int bShoot, int missTime) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_AimAtEntity(struct gentity_s *self, const struct gentity_s *ent, const float *entOffset, const int bShoot) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_SightTrace(const float *start, const float *end, int passEnt1, int passEnt2) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_IsTargetVisible(struct gentity_s *self, const struct gentity_s *target, const float *targetOffset, float *distSqr) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_GetEnemyTeamFlags(const struct Turret *turret) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_NextTarget(struct gentity_s *self) -> struct gentity_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_FindBestTarget(struct gentity_s *self, float *out_targetOffset) -> struct gentity_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_ModeChangeClear(struct gentity_s *self) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_ModeChangeNotify(struct gentity_s *self) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_ModeChangeWait(struct gentity_s *self) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_Think_Auto_NonAI(struct gentity_s *self) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_Think_Manual(struct gentity_s *self) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_Think(struct gentity_s *self) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_IsOperable(struct gentity_s *self) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_Controller(const struct gentity_s *self, int *partBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_IsBehind(struct gentity_s *self, struct gentity_s *other) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_IsSentryUsageRestricted(struct gentity_s *self, struct gentity_s *other) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_IsTurretUsable(struct gentity_s *self, struct gentity_s *owner) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DeactivateTurret(struct gentity_s *self) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_SetSentryOwner(struct gentity_s *self, struct gentity_s *owner) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_SetSentryCarried(struct gentity_s *self, int carried) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_SetMode(struct gentity_s *self, int flags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_SetAutoRotationStopDelay(struct gentity_s *self, int delayMS) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_SetManualSpinning(struct gentity_s *self, int spinning) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_GetBarrelSpinRate(struct gentity_s *self) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Turret_Use(struct gentity_s *self, struct gentity_s *owner, struct gentity_s *activator) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_CanSpawnTurret() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Turret_SoundAliasIndex(const char *name) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SpawnTurret(struct gentity_s *self, const char *weaponinfoname, const int useDropPitch) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SP_turret(struct gentity_s *self) -> void
{

}

#endif // __UNIMPLEMENTED__
