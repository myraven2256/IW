//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_phys_vehicle() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IsFrontWheel(unsigned int wheelIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IsRightWheel(unsigned int wheelIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjGetInvMass(int obj) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjGetMass(int obj) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_ComparePhysObj(struct PhysVehicle *physVeh, int obj) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_RemoveStability(struct PhysVehicle *physVeh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_IsWrecked(const struct PhysVehicle *physVeh) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_Crash(struct PhysVehicle *physVeh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_Launch(struct PhysVehicle *physVeh, const float *launchVelocity, float spinFactor) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_Impact(struct PhysVehicle *physVeh, const float *normal) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_Init() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_LeakCheck() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_Create(const float *position, const float *angles, int modelIndex, int passEntityNum, const struct VehiclePhysDef *def, const struct GraphFloat *accelGraph) -> struct PhysVehicle*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_WheelEnable(struct PhysVehicle *physVeh, int wheelIndex, const float *originLocal) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PhysVeh_WheelSetFlags(struct PhysVehicle *physVeh, int wheelIndex, unsigned int flags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_FinalizeWheels(struct PhysVehicle *physVeh) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_Destroy(struct PhysVehicle *physVeh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_InitDef(struct PhysVehicle *physVeh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_Save(struct PhysVehicle *physVeh, struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_Load(struct SaveGame *save, const struct VehiclePhysDef *def, const struct GraphFloat *accelGraph) -> struct PhysVehicle*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_SetVelocity(struct PhysVehicle *physVeh, const float *velocity) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_SetSpeed(const struct PhysVehicle *physVeh, float speed) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_SetState(struct PhysVehicle *physVeh, const float *position, const float *angles, const float *linearVelocity, const float *angularVelocity) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_GetCenterOfMass(const struct PhysVehicle *physVeh, float *centerOfMass) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_GetState(const struct PhysVehicle *physVeh, float *position, float *angles, float *velocity, bool clampVelocity) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_GetForwardDir(const struct PhysVehicle *physVeh, float *dir) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_GetWorldVelocity(const struct PhysVehicle *physVeh, float *vel) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_GetLocalVelocity(const struct PhysVehicle *physVeh, float *localVelocity) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_GetWorldAcceleration(const struct PhysVehicle *physVeh, float *accel) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_GetLocalAcceleration(const struct PhysVehicle *physVeh, float *accel) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_GetWheelsOnGround(const struct PhysVehicle *physVeh) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_IsReversing(const struct PhysVehicle *physVeh) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_CalcSpringParms(float timeStepSize, float invMass, float springConstant, float damping, float *erp, float *cfm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PhysVeh_TorqueMove(struct PhysVehicle *physVeh, float yawTorque, float pitchTorque) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PhysVeh_WheelIsBeingDriven(const struct PhysVehicle *physVeh, const struct PhysVehicleWheel *wheel) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PhysVeh_CalcWheelFriction(unsigned int wheelIndex, const struct PhysVehicle *physVeh, struct PhysVehicleWheel *wheel, const float *normal, const float *frictionFwdDir, float timeStepSize, struct dSurfaceParameters *surfParms) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PhysVeh_HighCenteredMove(struct PhysVehicle *physVeh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_CollideWheels(struct PhysVehicle *physVeh, float timeStepSize, int *wheelSurfTypes, float *wheelCompressions) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_CollideVehicleWithVehicle(struct PhysVehicle *physVeh1, bool veh1DontAffect, struct PhysVehicle *physVeh2, bool veh2DontAffect, float timeStep) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PhysVeh_UpdateTankSteering(struct PhysVehicle *physVeh, float steeringAngle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PhysVeh_SetSteeringAngle(struct PhysVehicle *physVeh, float steeringAngle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_GetFrontWheelCenter(const struct PhysVehicle *physVeh, float *origin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_GetRearWheelCenter(const struct PhysVehicle *physVeh, float *origin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_GetFrontWheelDist(const struct PhysVehicle *physVeh) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_GetRearWheelDist(const struct PhysVehicle *physVeh) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_GetSteeringPoint(const struct PhysVehicle *physVeh, float *origin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_GetSteeringPointDist(const struct PhysVehicle *physVeh) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_GetWheelBaseHalfWidth(const struct PhysVehicle *physVeh) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PhysVeh_CheckForJolt(struct PhysVehicle *physVeh, float invTimestep) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_UpdateControls(struct PhysVehicle *physVeh, const struct PhysVehicleControl *control) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_PostThink(struct PhysVehicle *physVeh, float invTimestep) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_AreFrontWheelsOffGround(const struct PhysVehicle *physVeh) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_DebugText(struct PhysVehicle *physVeh, unsigned int *flags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_DisableCrashing(struct PhysVehicle *physVeh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_EnableCrashing(struct PhysVehicle *physVeh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_IsCrashingDisabled(const struct PhysVehicle *physVeh) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_SetTankSteering(struct PhysVehicle *physVeh, float maxYawSpeed, float yawAccel) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_SetPathConstraintState(struct PhysVehicle *physVeh, const float *pos, const float *vel, float yaw, float yawVel) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_DisablePathConstraint(struct PhysVehicle *physVeh) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_AddForce(struct PhysVehicle *physVeh, const float *force, const float *origin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_AddImpulse(struct PhysVehicle *physVeh, const float *impulse, const float *origin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_SetConveyorBelt(struct PhysVehicle *physVeh, const float *velocity) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_SetTopSpeed(struct PhysVehicle *physVeh, float speed) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_GetTopSpeed(const struct PhysVehicle *physVeh) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_GetReverseSpeed(const struct PhysVehicle *physVeh) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysVeh_IsAwake(const struct PhysVehicle *physVeh) -> int
{

}

#endif // __UNIMPLEMENTED__
