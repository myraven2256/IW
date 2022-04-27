//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto PM_trace(struct pmove_t *pm, struct trace_t *results, const float *start, const float *end, const struct Bounds *bounds, int passEntityNum, int contentMask) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_traceHandler(unsigned char handler, struct trace_t *results, const float *start, const float *end, const struct Bounds *bounds, int passEntityNum, int contentMask) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_playerTrace(struct pmove_t *pm, struct trace_t *results, const float *start, const float *end, const struct Bounds *bounds, int passEntityNum, int contentMask) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_debugLine(const unsigned char handler, const float *start, const float *end, const float *color, int depthTest, int duration) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_AddEvent(struct playerState_s *ps, unsigned int newEvent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_AddTouchEnt(struct pmove_t *pm, int entityNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_ClipVelocity(const float *in, const float *normal, float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_ProjectVelocity(const float *velIn, const float *normal, float *velOut) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_GetEffectiveStance(const struct playerState_s *ps) -> enum EffectiveStance
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_GetStanceEx(enum EffectiveStance stance, int backward) -> enum PmStanceFrontBack
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_GetSprintLeft(const struct playerState_s *ps, const int gametime) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_GetSprintLeftLastTime(const struct playerState_s *ps) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_IsSprinting(const struct playerState_s *ps) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_StartSprint(struct playerState_s *ps, struct pmove_t *pm, const struct pml_t *pml, int sprintLeft) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_EndSprint(struct playerState_s *ps, struct pmove_t *pm, const struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_SprintStartInterferingButtons(const struct playerState_s *ps, const int forwardSpeed, const int buttons) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_SprintEndingButtons(const struct playerState_s *ps, const int forwardSpeed, const int buttons) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_CanStand(struct playerState_s *ps, struct pmove_t *pm) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_UpdateSprint(struct pmove_t *pm, const struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Friction(struct playerState_s *ps, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Accelerate(struct playerState_s *ps, const struct pml_t *pml, const float *wishdir, float wishspeed, float accel) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_MoveScale(struct playerState_s *ps, float fmove, float rmove, float umove) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_CmdScale(struct playerState_s *ps, struct usercmd_s *cmd) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_CmdScaleForStance(const struct pmove_t *pm) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_CmdScale_Walk(struct pmove_t *pm, struct usercmd_s *cmd) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_DamageScale_Walk(int damage_timer) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_SetMovementDir(struct pmove_t *pm, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_GroundSurfaceType(struct pml_t *pml) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_FlyMove(struct pmove_t *pm, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_AirMove(struct pmove_t *pm, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_WalkMove(struct pmove_t *pm, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_DeadMove(struct playerState_s *ps, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_NoclipMove(struct pmove_t *pm, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_UFOMove(struct pmove_t *pm, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_ModelPreviewerMove(struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_FootstepType(struct pmove_t *pm, struct pml_t *pml) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_LightLandingForSurface(struct pml_t *pml) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_MediumLandingForSurface(struct pml_t *pml) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_HardLandingForSurface(struct pml_t *pml) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_DamageLandingForSurface(struct pml_t *pml) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ComputeFallDamage_Internal(struct playerState_s *ps, struct pml_t *pml, float fallHeight, const struct dvar_t *minHeight, const struct dvar_t *maxHeight, int maxDamage) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ComputeFallDamage(struct playerState_s *ps, struct pml_t *pml, float fallHeight) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetViewDip(float fallHeight) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_CrashLand(struct playerState_s *ps, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_CorrectAllSolid(struct pmove_t *pm, struct pml_t *pml, struct trace_t *trace) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_GroundTraceMissed(struct pmove_t *pm, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_GroundTrace(struct pmove_t *pm, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_GetViewHeightLerpTime(const struct playerState_s *ps, int iTarget, int bDown) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_ViewHeightTableLerp(int iFrac, struct viewLerpWaypoint_s *pTable, float *pfPosOfs) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_GetViewHeightLerp(const struct pmove_t *pm, int iFromHeight, int iToHeight) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_ViewHeightAdjust(struct pmove_t *pm, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PlayerPronePossible(struct pmove_t *pm) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PlayerProneAllowed(struct pmove_t *pm) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_IsPlayerFrozenByWeapon(const struct playerState_s *ps) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_CheckDuck_InitProne(struct pmove_t *pm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_CheckDuck(struct pmove_t *pm, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_GetLadderBounds(const struct pmove_t *pm, struct Bounds *bounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_FootstepEvent(struct pmove_t *pm, struct pml_t *pml, int iOldBobCycle, int iNewBobCycle, int bFootStep) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_ShouldMakeFootsteps(struct pmove_t *pm) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_GetFlinchAnim(int flinchAnimDir) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Footsteps_TurnAnim(struct clientInfo_t *ci) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_GetNotMovingAnim(enum EffectiveStance stance, int turnAdjust) -> enum scriptAnimMoveTypes_t
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_ShouldFlinch(struct playerState_s *ps) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Footstep_LadderMove(struct pmove_t *pm, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Footsteps_NotMoving(struct pmove_t *pm, enum EffectiveStance effStance) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_GetMaxSpeed(struct pmove_t *pm, int walking, int sprinting) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_GetBobMove(enum PmStanceFrontBack stance, float xyspeed, float fMaxSpeed, int walking, int sprinting) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_GetMoveAnim(struct playerState_s *ps, enum PmStanceFrontBack stance, int walking, int sprinting) -> enum scriptAnimMoveTypes_t
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_SetStrafeCondition(struct pmove_t *pm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Footstep_NotTryingToMove(struct pmove_t *pm, enum EffectiveStance effStance) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_IsInAir(struct pmove_t *pm, struct pml_t *pml) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_Footsteps(struct pmove_t *pm, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_FoliageSounds(struct pmove_t *pm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_DropTimers(struct playerState_s *ps, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdateLean(struct playerState_s *ps, float msec, struct usercmd_s *cmd, function *capsuleTrace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_CheckProneTurned(struct pmove_t *pm, struct playerState_s *ps, float newProneYaw, unsigned char handler) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_UpdateViewAngles_Clamp(struct playerState_s *ps, struct usercmd_s *cmd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_UpdateViewAngles_RangeLimited(struct playerState_s *ps, const float oldYaw) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_UpdateViewAngles_LadderClamp(struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_UpdateViewAngles_ProneYawClamp(struct playerState_s *ps, float delta, int proneBlocked, float oldViewYaw, float newViewYaw) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_UpdateViewAngles_PronePitchClamp(struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_UpdateViewAngles_Prone(struct pmove_t *pm, struct playerState_s *ps, float msec, struct usercmd_s *cmd, unsigned char handler, float oldViewYaw) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_UpdateViewAngles(struct pmove_t *pm, struct playerState_s *ps, float msec, struct usercmd_s *cmd, unsigned char handler) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_UpdatePronePitch(struct pmove_t *pm, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_SetProneMovementOverride(struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_UpdatePlayerWalkingFlag(struct pmove_t *pm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_SetLadderFlag(struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_ClearLadderFlag(struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_CheckLadderMove(struct pmove_t *pm, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_LadderMove(struct pmove_t *pm, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_MeleeChargeClear(struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_MeleeChargeStart(struct pmove_t *pm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_MeleeChargeCheck(struct pmove_t *pm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_MeleeChargeMove(struct pmove_t *pm, struct pml_t *pml) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TurretNVGTrigger(struct pmove_t *pm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IsFiringWeapon(struct pmove_t *pm) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto WeaponStateProneAllowed(int state) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto WeaponStateReadyOrFiring(int state) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PmoveSingle(struct pmove_t *pm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PM_SetPitchValues(const struct playerState_s *ps, struct pmove_t *pm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Pmove(struct pmove_t *pm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetSpeed(const struct playerState_s *ps, const int time) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_srand(unsigned int *pHoldrand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_rand(unsigned int *pHoldrand) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_flrand(float min, float max, unsigned int *pHoldrand) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_irand(int min, int max, unsigned int *pHoldrand) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_random(unsigned int *pHoldrand) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_crandom(unsigned int *pHoldrand) -> float
{

}

#endif // __UNIMPLEMENTED__
