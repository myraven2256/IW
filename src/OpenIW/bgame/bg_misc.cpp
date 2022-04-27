//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto BG_RegisterShockVolumeDvars() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_RegisterDvars() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetEntityTypeName(const int eType) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_FindItemForWeapon(int weapon, int model) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FindItem(const char *pickupName, int model) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerTouchesItem(const struct playerState_s *ps, const struct entityState_s *item, int atTime) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerHasRoomForAmmo(const struct playerState_s *ps, unsigned int weaponIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsScavengerPickup(const unsigned int weapIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_HasRoomForScavengerPickup(const struct playerState_s *ps) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerCanPickUpWeaponOffhandClass(unsigned int weaponIndex, const struct playerState_s *ps) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto WeaponEntCanBeGrabbed(const struct entityState_s *weaponEntState, const struct playerState_s *ps, int touched, unsigned int weapIdx) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ScavengerBagCanBeGrabbed(const struct entityState_s *weaponEntState, const struct playerState_s *ps, int touched, unsigned int weapIdx) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CanItemBeGrabbed(const struct entityState_s *ent, const struct playerState_s *ps, int touched) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerHasRoomForEntAllAmmoTypes(const struct entityState_s *ent, const struct playerState_s *ps) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EvaluateTrajectory(const struct trajectory_t *tr, int atTime, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_EvaluateTrajectoryDelta(const struct trajectory_t *tr, int atTime, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetMarkDir(const float *dir, const float *normal, float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_AddEventInternal<int, unsigned int>(const unsigned int newEvent, const unsigned int eventParm, int *eventSequence, int *events, unsigned int *eventParms, const char addType, const unsigned int eventTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AddPredictableEventToPlayerstate(const unsigned int newEvent, const unsigned int eventParm, struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AddUnPredictableEventToPlayerstate(const unsigned int newEvent, const unsigned int eventParm, struct playerState_s *ps) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_AddEventToEntityState(const unsigned int newEvent, const unsigned int eventParm, struct entityState_s *es, const int eventTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_PlayerToEntity_ShouldAddEvent(const unsigned int event) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_PlayerToEntity_ProcessEventInternal(struct entityState_s *es, const unsigned char handler, const int eventTime, const int *events, const unsigned int *eventParms, const int *eventSequence, int *oldEventSequence) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_PlayerToEntity_ProcessEvents(struct playerState_s *ps, struct entityState_s *es, const unsigned char handler) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_PlayerToEntity_SetFlags(struct playerState_s *ps, struct entityState_s *s) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_PlayerToEntity_SetMisc(struct playerState_s *ps, struct entityState_s *s) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto BG_PlayerToEntity_SetTrajectory(struct playerState_s *ps, struct entityState_s *s, int snap) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_PlayerStateToEntityState(struct playerState_s *ps, struct entityState_s *s, int snap, unsigned char handler) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PM_GetProneFeetDirection(const struct playerState_s *ps) -> enum FeetDirection
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CheckProneValid(int passEntityNum, const float *vPos, const float fSize, const float fHeight, const float fYaw, float *pfTorsoPitch, float *pfWaistPitch, int isAlreadyProne, int isOnGround, int groundIsWalkable, unsigned char handler, enum proneCheckType_t proneCheckType, float prone_feet_dist, enum FeetDirection feetDirection) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetPlayerEyePosition(const struct playerState_s *ps, float *origin, int time) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetPlayerViewDirection(const struct playerState_s *ps, float *forward, float *right, float *up) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ApplyLinkAngles(const float *linkAngles, float *viewangles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CheckProne(int passEntityNum, const float *vPos, const float fSize, const float fHeight, const float fYaw, float *pfTorsoPitch, float *pfWaistPitch, int isAlreadyProne, int isOnGround, int groundIsWalkable, unsigned char handler, enum proneCheckType_t proneCheckType, float prone_feet_dist, enum FeetDirection feetDirection) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LerpFontScale(const struct hudelem_s *elem, int time, float *toScale) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LerpHudColors(const struct hudelem_s *elem, int time, union hudelem_color_t *toColor) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_LoadShellShockDvars(const char *name) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetShellShockParmsFromDvars(struct shellshock_parms_t *parms) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SaveShellShockDvars(const char *name) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetShellshockParms(const int index) -> struct shellshock_parms_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CreateXAnim(struct XAnim_s *anims, unsigned int animIndex, const char *name) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_CheckThread() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetMaxSprintTime(const struct playerState_s *ps) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_NetDataChecksum() -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EncodeShieldPosToSegment(float pos, float min, float max, int segmentCount) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ShieldHitEncode(const float *hitPos, bool fromTheFront) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ShieldHitEncodeRandom(unsigned int *randSeed) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DecodeShieldSegmentToPos(int segment, float min, float max, int segmentCount) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_ShieldHitDecode(unsigned int encoded, float *result, bool *resultHitFront) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_IsThirdPersonMode(const struct playerState_s *ps) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_GetThirdPersonCrosshairOffset(const struct playerState_s *ps) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_UpdateClientControlledMissile(float *angles, const struct usercmd_s *cmd, int msec) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BG_SetPlayerDamageFlinch(struct playerState_s *ps, int damage, const float *damageDir) -> void
{

}

#endif // __UNIMPLEMENTED__
