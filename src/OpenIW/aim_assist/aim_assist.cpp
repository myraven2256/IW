//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_aim_assist() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_LerpDvars(const struct dvar_t *from, const struct dvar_t *to, float frac) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_GetClipWidthFromVirtualWidth(int localClientNum, const struct ScreenPlacement *scrPlace, float virtualWidth) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_GetClipHeightFromVirtualHeight(int localClientNum, const struct ScreenPlacement *scrPlace, float virtualHeight) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_UpdateTweakables(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_UpdateAdsLerp(const struct AimInput *input) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_RegisterDvars() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_Init(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_Setup(int localClientNum, const struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_BackupPlayerState(int localClientNum, const struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_FovScale(struct AimAssistGlobals *aaGlob, float tanHalfFovY) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_CreateScreenMatrix(int localClientNum, struct AimAssistGlobals *aaGlob, float tanHalfFovX, float tanHalfFovY) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_XfmWorldPointToClipSpace(const struct AimAssistGlobals *aaGlob, const float *in, float *out) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_ConvertToClipBounds(const struct AimAssistGlobals *aaGlob, const struct Bounds *bounds, const float *mtx[0x3], struct ExtentBounds *clipBounds) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_GetCrosshairDistSqr(const float *clipMins, const float *clipMaxs) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_DoBoundsIntersectCenterBox(const float *clipMins, const float *clipMaxs, float clipHalfWidth, float clipHalfHeight) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_GetAimAssistRange(int weapIndex, float adsLerp) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_GetAutoAimRange(int weapIndex) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_CompareTargets(const struct AimScreenTarget *screenTargetA, const struct AimScreenTarget *screenTargetB) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_AddToTargetList(struct AimAssistGlobals *aaGlob, const struct AimScreenTarget *screenTarget) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_GetTagPos(int localClientNum, const struct centity_s *cent, unsigned int tagName, float *pos) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_CalcAimPos(int localClientNum, const struct centity_s *targetEnt, const struct AimTarget *target, float *aimPos) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_UpdateScreenTargets(int localClientNum, const float *eyeOrg, const float *viewOrg, const float *viewAngles, float tanHalfFovX, float tanHalfFovY) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_GetScreenTargetCount(int localClientNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_GetScreenTargetEntity(int localClientNum, int targetIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_ClearEntityReference(int localClientNum, int entIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_GetTargetFromEntity(const struct AimAssistGlobals *aaGlob, int entIndex) -> const struct AimScreenTarget*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_GetBestTarget(const struct AimAssistGlobals *aaGlob, float range, float regionWidth, float regionHeight) -> const struct AimScreenTarget*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_GetPrevOrBestTarget(const struct AimAssistGlobals *aaGlob, float range, float regionWidth, float regionHeight, int prevTargetEnt) -> const struct AimScreenTarget*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_CalcAdjustedAxis(const struct AimInput *input, float *pitchAxis, float *yawAxis) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_IsPlayerStunned(const struct AimAssistPlayerState *ps) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_IsPlayerUsingOffhand(const struct AimAssistPlayerState *ps) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_IsSlowdownActive(const struct AimAssistPlayerState *ps) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_CalcSlowdown(const struct AimInput *input, float *pitchScale, float *yawScale) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_ApplyTurnRates(const struct AimInput *input, struct AimOutput *output) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_ClearAutoAimTarget(struct AimAssistGlobals *aaGlob) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_UpdateAutoAimTarget(struct AimAssistGlobals *aaGlob) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_SetAutoAimTarget(struct AimAssistGlobals *aaGlob, const struct AimScreenTarget *screenTarget) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_ApplyAutoAim(const struct AimInput *input, struct AimOutput *output) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_ClearAutoMeleeTarget(struct AimAssistGlobals *aaGlob) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_SetAutoMeleeTarget(struct AimAssistGlobals *aaGlob, const struct AimScreenTarget *screenTarget) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_UpdateAutoMeleeTarget(struct AimAssistGlobals *aaGlob, const struct AimInput *input) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_ApplyAutoMelee(const struct AimInput *input, struct AimOutput *output) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_ApplyLockOn(const struct AimInput *input, struct AimOutput *output) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_UpdateGamePadInput(const struct AimInput *input, struct AimOutput *output) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_DrawCenterBox(const struct AimAssistGlobals *aaGlob, float verticalOffset, float clipHalfWidth, float clipHalfHeight, const float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AimAssist_DrawTargets(int localClientNum, const struct playerState_s *ps, const float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AimAssist_DrawDebugOverlay(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
