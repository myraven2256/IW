//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_vehicle() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_GetHandler(struct Vehicle *veh) -> const struct VehicleHandler*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_LoadServerDefAssets(const char *name, int vehDefIndex) -> const struct VehicleDef*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_RegisterServerDef(const char *name) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_ClearServerDefs() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_LoadServerDefs() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_GetServerDef(int vehDefIndex) -> const struct VehicleDef*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_GetServerDefName(int vehDefIndex) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_GetAccelGraph(int vehDefIndex) -> const struct GraphFloat*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_RegisterDvars() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VEH_UpdateSounds(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_PrecacheDefaultDef() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_InitSystem(int restart) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_GetCollMap(const char *modelname) -> struct gentity_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_SetupCollmap(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_SetupSystem() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_ShutdownDevgui() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_ShutdownSystem() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_WriteSaveGame(struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_ReadSaveGame(struct SaveGame *save) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_FreeEntity(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_FreeReferences(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_Get(int vehIndex) -> struct Vehicle*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VEH_DebugLine(float *start, float *end, float r, float g, float b) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VEH_DebugBox(float *pos, float width, float r, float g, float b) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_DebugCapsule(float *pos, float rad, float height, float r, float g, float b) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_GetTagBoneIndex(struct gentity_s *ent, int barrel) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VEH_GetWheelOrigin(const struct gentity_s *ent, int idx, float *origin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_ResetWheels(struct gentity_s *ent, struct vehicle_physic_t *phys) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_SetPosition(struct gentity_s *ent, const float *origin, const float *vel, const float *angles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VEH_DObjHasRequiredTags(struct gentity_s *ent, int vehDefIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VEH_InitModelAndValidateTags(struct gentity_s *ent, int vehDefIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_Impact(int obj, const float *normal, float momentumMag, bool twoBodies) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_InitPhysVeh(struct Vehicle *veh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_JoltBody(struct gentity_s *ent, const float *dir, float intensity, float speedFrac, float decel) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_CalcAccel(struct gentity_s *ent, char *move, float *bodyAccel, float *rotAccel) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VEH_ClipVelocity(const float *in, const float *normal, float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_CorrectAllSolid(struct gentity_s *ent, struct trace_t *trace) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_ClearGround(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VEH_GroundTrace(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VEH_MoveTrace(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_SlideMove(struct gentity_s *ent, int gravity, float frameTime) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VEH_StepSlideMove(struct gentity_s *ent, int gravity, float frameTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VEH_GroundMove(struct gentity_s *ent, float frameTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VEH_AirMove(struct gentity_s *ent, int gravity, float frameTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_GroundPlant(struct gentity_s *ent, struct vehicle_physic_t *phys, int gravity) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VEH_BackupPosition(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VEH_VerifyPosition(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_AttachedStickyMissile(struct gentity_s *ent, struct gentity_s *missile) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_PushAttachedStickyMissile(struct gentity_s *ent, struct gentity_s *missile, float *deltaOrigin, float *deltaAngles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_IsPushedEntityInSolid(struct gentity_s *ent, float *origin) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_UpdatePushedEntityLocation(struct gentity_s *check, struct gentity_s *pusher, float *newOrigin, float *newAngles, float *deltaMat[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_TryPushingEntity(struct gentity_s *check, struct gentity_s *pusher, float *deltaOrigin, float *deltaAngles) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VEH_PushEntity(struct gentity_s *ent, struct gentity_s *target, float *pushDir, float *deltaOrigin, float *deltaAngles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VEH_TouchEntities(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VEH_UpdateAim(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_AccelerateSpeed(float speed, float tgtSpeed, float accel, float dt) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Veh_BoatGetRockingAngles(struct Vehicle *const veh, float *const targetPitch, float *const targetRoll) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VEH_UpdateBody(struct Vehicle *veh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VEH_UpdateSteering(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VEH_UpdatePlayerControlledWeapon(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_UpdatePlayerMove_NonPhysics(struct Vehicle *veh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_UpdatePlayerMove(struct Vehicle *veh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_CalcPhysVelFromPrevState(struct Vehicle *veh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_UpdateRotateToYaw(struct Vehicle *veh, const struct VehicleDef *vehDef) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_UpdatePathMove_NonPhysics(struct Vehicle *veh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_UpdatePathConstrainedMove(struct Vehicle *veh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_UpdatePathFollowMove(struct Vehicle *veh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_UpdateDefaultMove_NonPhysics(struct Vehicle *veh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_UpdateDefaultMove(struct Vehicle *veh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VEH_LinkCommonChecks(struct gentity_s *vehEnt, struct gentity_s *player) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_LinkPlayerTurretControlOnly(struct gentity_s *vehEnt, struct gentity_s *player) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VEH_LinkPlayer(struct gentity_s *vehEnt, struct gentity_s *player) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UnlinkPlayer(struct gentity_s *vehEnt, struct gentity_s *player) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_MyChanges() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_InitBoneTags(struct Vehicle *veh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_InitPhysics(struct Vehicle *veh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_Allocate() -> struct Vehicle*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_Create(struct gentity_s *ent, const char *typeName, const struct gentity_s *player, int load) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_IsVehicleUsable(struct gentity_s *ent, struct gentity_s *player) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_IsVehicleUnusable(const struct gentity_s *player) -> struct gentity_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetPlayerVehicle(const struct gentity_s *player) -> struct gentity_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_IsImmune(struct gentity_s *ent, int mod, int damageFlags, int weapon) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_Damage(struct gentity_s *targ, const struct gentity_s *inflictor, struct gentity_s *attacker, const float *dir, const float *point, int damage, int dFlags, int mod, int weapIndex, enum hitLocation_t hitLoc, unsigned int modelIndex, unsigned int partName, int timeOffset) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_FinishDamage(struct gentity_s *targ, const struct gentity_s *inflictor, struct gentity_s *attacker, const float *dir, const float *point, int damage, int dFlags, int mod, int weapIndex, enum hitLocation_t hitLoc, unsigned int modelIndex, unsigned int partName, int timeOffset) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_IsPlayerProtected(const struct gentity_s *player) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_Controller(const struct gentity_s *pSelf, int *partBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_UpdateCameraState(struct Vehicle *veh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_PreThink(struct gentity_s *pSelf) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_RunPreThinkForAllVehicles() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_SpeedboatBouncing(struct Vehicle *veh, float timestep) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_CollideWheels(struct gentity_s *pSelf, float timestep) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_CollideVehicleWithVehicle(struct gentity_s *ent1, struct gentity_s *ent2, float timeStep) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_CollideAllVehicles(float stepSize) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_Think(struct gentity_s *pSelf) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_Pain(struct gentity_s *pSelf, struct gentity_s *pAttacker, int damage, const float *point, const int mod, const float *dir, const enum hitLocation_t hitLoc, const int weaponIdx) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_Touch(struct gentity_s *pSelf, struct gentity_s *pOther, int bTouched) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_Use(struct gentity_s *pEnt, struct gentity_s *pOther, struct gentity_s *pActivator) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_Die(struct gentity_s *pSelf, const struct gentity_s *pInflictor, struct gentity_s *pAttacker, const int damage, const int mod, const int weapon, const float *dir, const enum hitLocation_t hitLoc, int psTimeOffset) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_SpawnEntity(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_SpawnCollmapEntity(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_TrophyTestMissile(struct gentity_s *missileEnt, const float *start, float *end) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_UpdateAnimScriptedMove(struct Vehicle *veh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Vehicle_UpdateAiMove(struct Vehicle *veh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_Knockback(struct Vehicle *veh, const float *dir, enum meansOfDeath_t mod, float forceScale, const float *origin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vehicle_ExplosionEvent(const float *origin, float innerRadius, float outerRadius, bool isCylinder, float forceScale, const float *impulse) -> void
{

}

#endif // __UNIMPLEMENTED__
