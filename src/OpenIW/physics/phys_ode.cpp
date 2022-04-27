//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static void `dynamic initializer for 'physGlob''()
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_phys() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ODE_ForEachBody<void (__cdecl*)(dxBody *)>(struct dxWorld *world, function *func) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_GeomAlloc(enum PhysWorld worldIndex) -> struct dxGeom*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_GeomFree(struct dxGeom *const geom, const struct dxWorld *const world) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_BodyAlloc(enum PhysWorld worldIndex) -> struct dxBody*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_BodyFree(struct dxBody *const body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_UserDataAlloc(enum PhysWorld worldIndex) -> struct PhysObjUserData*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_UserDataFree(struct PhysObjUserData *const data, enum PhysWorld worldIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_BodyGetRotation(struct dxBody *body, float *outRotation[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjGetRotation(int obj, float *outRotation[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_BodyGetCenterOfMass(struct dxBody *body, float *outPosition) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_InitJoints() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_InitCommon() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ShutdownCommon() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_InitWorld(enum PhysWorld worldIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_ShutdownWorld(enum PhysWorld worldIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_InitClient() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ShutdownClient() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_InitServer() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ShutdownServer(bool error) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_GetStateFromBody(struct dxBody *body, struct BodyState *state) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_ObjGetPositionFromCenterOfMass(struct dxBody *body, const float *rotation[0x3], const float *centerOfGravity, float *objPos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjGetCenterOfMassFromObjOrigin(int obj, const float *objOrigin, float *centerOfMass) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_ObjUpdateTunnelTracePos(int obj, const float *newCenterOfMass, const float *rotation[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_AdjustForNewCenterOfMass(struct dxBody *body, const float *newRelCenterOfMass, bool loadingSavegame) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_MassSetBrushTotal(struct dMass *m, float totalMass, const float *momentsOfInertia, const float *productsOfInertia) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_MassSetGlassTotal(struct dMass *m, float totalMass, const struct GeomStateGlass *glassState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_BodyAddGeomAndSetMass(enum PhysWorld worldIndex, struct dxBody *body, float totalMass, const struct GeomState *geomState, const float *centerOfMass, bool loadingSavegame) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_CreateBodyFromState(enum PhysWorld worldIndex, const struct BodyState *state) -> struct dxBody*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjCreateAngles(enum PhysWorld worldIndex, const float *position, const float *angles, const float *velocity, const struct PhysPreset *physPreset) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjCreateAxis(enum PhysWorld worldIndex, const float *position, const float *axis[0x3], const float *velocity, const struct PhysPreset *physPreset) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjCreate(enum PhysWorld worldIndex, const float *position, const float *quat, const float *velocity, const struct PhysPreset *physPreset) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjSetOrientation(int id, const float *newPosition, const float *newRotation[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjSetPosition(int id, const float *newPosition) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjAddGeomBox(enum PhysWorld worldIndex, int id, const struct Bounds *bounds, bool loadingSavegame) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjAddGeomBoxRotated(enum PhysWorld worldIndex, int id, const struct Bounds *bounds, const float *orientation[0x3], bool loadingSavegame) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjAddGeomBrushModel(enum PhysWorld worldIndex, int id, unsigned short brushModel, const struct PhysMass *physMass, bool loadingSavegame) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_ObjSetInertialTensor(int id, const struct PhysMass *physMass, float scaleCenterOfMassZ, bool loadingSavegame) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjAddGeomCollmap(enum PhysWorld worldIndex, int id, const struct PhysCollmap *collmap, float scaleCenterOfMassZ, bool loadingSavegame) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjAddGeomCylinder(enum PhysWorld worldIndex, int id, const struct Bounds *bounds, bool loadingSavegame) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjAddGeomCylinderDirection(enum PhysWorld worldIndex, int id, const int direction, const float radius, const float halfHeight, const float *centerOfMass, bool loadingSavegame) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjAddGeomCylinderRotated(enum PhysWorld worldIndex, int id, const int direction, const float radius, const float halfHeight, const float *center, const float *orientation[0x3], bool loadingSavegame) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjAddGeomCapsule(enum PhysWorld worldIndex, int id, const int direction, const float radius, const float halfHeight, const float *centerOfMass, bool loadingSavegame) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjAddGeomGlass(enum PhysWorld worldIndex, int id, const struct FxGlassSystem *glassSys, unsigned int pieceIndex, bool loadingSavegame) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjSetCollisionFromXModel(const struct XModel *model, enum PhysWorld worldIndex, int physId, bool loadingSavegame) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjSetCollisionFromDObj(const struct DObj *obj, enum PhysWorld worldIndex, int physId, bool loadingSavegame) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_GetCenterOfMassFromDObj(const struct DObj *obj, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_PhysObjSetCollisionFromModelIndex(int index, enum PhysWorld worldIndex, int physId, float scaleCenterOfMassZ, bool loadingSavegame) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjGetAngularVelocityRaw(int id, float *outAngularVelocity) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjSetAngularVelocity(int id, const float *angularVel) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjSetAngularVelocityRaw(int id, const float *angularVel) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjSetVelocity(int id, const float *velocity) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjGetVelocity(int id, float *velocity) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjGetPosition(int id, float *outPosition, float *outRotation[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjGetCenterOfMass(int id, float *outPosition) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjDestroy(enum PhysWorld worldIndex, int id) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjAddRelativeTorque(int id, const float *torqueRelativeToBody) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjAddForce(int id, const float *worldPos, const float *force) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjAddImpulse(enum PhysWorld worldIndex, int id, const float *worldPos, const float *impulse) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_TweakBulletImpact(float *worldPos, float *bulletDir, const float *centerOfMass) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjBulletImpact(enum PhysWorld worldIndex, int id, const float *worldPosRaw, const float *bulletDirRaw, float bulletSpeed, float scale) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjGetEffectiveInverseMassAtPoint(int obj, const float *worldPos, const float *dir) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_ObjGetMomentumAtPoint(int obj, const float *worldPos, const float *dir) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_ObjGet2BodyImpulseAtPoint(int obj1, int obj2, const float *worldPos, const float *dir) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_GetContactCFM(unsigned int worldIndex, float objInvMass, struct dxBody *body0, struct dxBody *body1) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_GetContactERP(unsigned int worldIndex, float timestep, struct dxBody *body0, struct dxBody *body1) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_GetContactMCV(unsigned int worldIndex, float timestep) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_NearCallback(void *userData, struct dxGeom *geom1, struct dxGeom *geom2) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_DebugDrawCylinder(float radius, float halfHeight, const float *origin, const float *rotation[0x3], unsigned int cylAxis) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_DebugDrawCollmap(enum PhysWorld worldIndex, struct dxGeom *geom, const float *bodyRotation[0x3], const float *bodyOrigin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_ObjDraw(struct dxBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_CheckIfAliveTooLong(struct dxBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_DrawDebugTextForWorld(enum PhysWorld worldIndex, const char *worldText, float *x, float *y, float charHeight, const struct ScreenPlacement *scrPlace) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_DrawDebugText(const struct ScreenPlacement *scrPlace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_DoBodyOncePerFrame(unsigned int worldIndex, struct dxBody *body, float deltaT) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_ContactEffects(struct dxWorld *world) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_RunFrame(enum PhysWorld worldIndex, float seconds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dxPostProcessIslands(enum PhysWorld worldIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_BodyGrabSnapshot(struct dxBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_GeomUserGetAAContainedBox(struct dxGeom *geom, struct Bounds *bounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_ObjTunnelTrace(struct dxBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_DoBodyOncePerRun(struct dxBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_GetSnapshotTime(enum PhysWorld worldIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_GetCurrentTime(enum PhysWorld worldIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjGetSnapshot(enum PhysWorld worldIndex, int id, float *outPos, float *outMat[0x3]) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_RewindCurrentTime(enum PhysWorld worldIndex, int timeNow) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_GetPerformance(float *average, int *mintime, int *maxtime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_PerformanceEndFrame() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_PerformanceAddTime(int time) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_RunServerFrame(float timestep) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_LockWorld(enum PhysWorld worldIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_UnlockWorld(enum PhysWorld worldIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_RunToTime(enum PhysWorld worldIndex, int timeNow) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_RunToTimeDelayed(enum PhysWorld worldIndex, int timeNow) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_RunToTimeCmd(struct PhysicsCmd *cmd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_EndFrame() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjGetInterpolatedState(enum PhysWorld worldIndex, int id, float *outPos, float *outQuat) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjSetMass(int id, float totalMass) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjSetFriction(int id, float friction) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjSetBounce(int id, float bounce) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjIsAsleep(int id) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjSave(int id, struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjLoad(enum PhysWorld worldIndex, struct MemoryFile *memFile) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_BodyGetPrev(struct dxBody *body) -> struct dxBody*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_SaveAllObjsInWorld(enum PhysWorld worldIndex, struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_LoadAllObjsInWorld(enum PhysWorld worldIndex, struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ArchiveState(struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjGetSaveIndex(int obj) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjFromSaveIndex(enum PhysWorld worldIndex, unsigned int objSaveIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_SetHingeParams(enum PhysWorld worldIndex, int id, float motorSpeed, float motorMaxForce, float lowStop, float highStop) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CreateHinge(enum PhysWorld worldIndex, int obj1, int obj2, const float *anchor, const float *axis, float motorSpeed, float motorMaxForce, float lowStop, float highStop) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CreateBallAndSocket(enum PhysWorld worldIndex, int obj1, int obj2, const float *anchor) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_SetAngularMotorParams(enum PhysWorld worldIndex, int id, const float *motorSpeeds, const float *motorFMaxs, const float *lowStops, const float *highStops) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CreateAngularMotor(enum PhysWorld worldIndex, int obj1, int obj2, int numAxes, const float *axes[0x3], const float *motorSpeeds, const float *motorFMaxs, const float *lowStops, const float *highStops) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CreateOrientationConstraint(enum PhysWorld worldIndex, int obj, struct dxJoint *allocatedSpace) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CreatePathConstraint(enum PhysWorld worldIndex, int obj, struct dxJoint *allocatedSpace) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_JointDestroy(enum PhysWorld worldIndex, int id) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_SetCollisionCallback(enum PhysWorld worldIndex, function *callback) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_SetPostFrameCallback(enum PhysWorld worldIndex, function *callback) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_SetImpactCallback(enum PhysWorld worldIndex, function *callback) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_SetGlassCallback(enum PhysWorld worldIndex, function *callback) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_JointGetLimitAxis(enum PhysWorld worldIndex, int id, float *axis[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_AddJitterRegion(enum PhysWorld worldIndex, const float *origin, float innerRadius, float outerRadius, float minDisplacement, float maxDisplacement) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjSetContactCentroid(int id, const float *worldPos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_SetWorldUsesContactCentroids(enum PhysWorld world, bool useCentroids) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_GetWorldUsesContactCentroids(enum PhysWorld world) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_SetWorldClipMask(enum PhysWorld worldIndex, int clipMask) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_GetWorldClipMask(enum PhysWorld worldIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjGetFlags(int id) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjSetFlags(int id, unsigned int newFlags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjSetState(int id, enum physStuckState_t state) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjGetState(int id) -> enum physStuckState_t
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjGetPreviousCenterOfMass(int id, float *outPosition) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjGetWorld(int obj) -> enum PhysWorld
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjSetDebugContacts(int id, bool debug) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_SetGravityDirClientWorlds(const float *down) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_SetGravityDirServerWorlds(const float *down) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjDisable(int obj) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_PullJointTogether(int physJoint) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjSetAutoDisableFaster(int obj) -> void
{

}

#endif // __UNIMPLEMENTED__
