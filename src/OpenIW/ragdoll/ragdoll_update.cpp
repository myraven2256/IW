//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_CopyMirrorQuat(const float *src, bool mirror, float *dest) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_CalcPoseForParts(const struct cpose_t *pose, struct DObj *obj, int *partBits) -> struct DObjAnimMat*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_GetDObjBaseBoneMatrix(struct DObj *obj, unsigned char boneIndex, struct DObjAnimMat *outMat) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_GetDObjBaseBoneOrigin(int localClientNum, struct DObj *obj, const float *offset, const float *axis[0x3], unsigned char boneIndex, float *origin) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_GetDObjBaseBoneOriginQuat(int localClientNum, struct DObj *obj, const float *offset, const float *axis[0x3], unsigned char boneIndex, float *origin, float *quat) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_PoseInvAxis(const struct cpose_t *pose, float *invAxis[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_AnimMatToMat43(const struct DObjAnimMat *mat, float *out[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_SnapshotBaseLerpBones(struct RagdollBody *body, struct BoneOrientation *snapshot) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_SnapshotBonePositions(struct RagdollBody *body, struct BoneOrientation *boneSnapshot) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_SnapshotAnimOrientations(struct RagdollBody *body, struct BoneOrientation *snapshot) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_SetCurrentPoseFromSnapshot(struct RagdollBody *body, struct BoneOrientation *snapshot) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_ValidateBodyObj(struct RagdollBody *body) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_CreatePhysObj(struct RagdollBody *body, struct BoneDef *boneDef, struct Bone *bone, float *boneOrigin) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_CreatePhysJoint(struct RagdollBody *body, struct JointDef *jointDef, struct Joint *joint) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_CreatePhysJoints(struct RagdollBody *body) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_SetParentDists(struct RagdollBody *body, float *bonePositions[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_CreatePhysObjs(struct RagdollBody *body) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_DestroyPhysJoints(struct RagdollBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_DestroyPhysObjs(struct RagdollBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_SnapshotBaseLerpOffsets(struct RagdollBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_BodyCenterOfMass(struct RagdollBody *body, float *com) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_UpdateBodyContactCentroids(struct RagdollBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_CreateBodyPhysics(struct RagdollBody *body) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_RemoveBodyPhysics(struct RagdollBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_RebindBody(struct RagdollBody *body) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_ValidatePrecalcBoneDef(struct RagdollDef *def, struct BoneDef *bone) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_ValidatePrecalcJointDef(struct RagdollDef *def, struct JointDef *joint) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_ClosestPointsTwoSegs(float *s0[0x3], float *s1[0x3], float *t0, float *t1, float *direction) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_GenBoneCapsuleSegment(struct Bone *bone, float *seg[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_GenBoneCapsuleSegments(struct RagdollBody *body, unsigned char *bones, float *s0[0x3], float *s1[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_AddSelfContact(struct RagdollBody *body, unsigned char *bones, float radius0, float radius1, float *point0, float *point1) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_GenerateAllSelfCollisionContacts() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_PullJointsTogether(struct RagdollBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_GetTorsoPosition(struct RagdollBody *body, float *center) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_ExplosionEvent(int localClientNum, bool isCylinder, const float *origin, float innerRadius, float outerRadius, const float *impulse, float inScale, int isBullet) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_JitterEvent(int localClientNum, const float *origin, float innerRadius, float outerRadius, float minDisplacement, float maxDisplacement) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_EstimateInitialVelocities(struct RagdollBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_SetInitialVelocities(struct RagdollBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_FindBoneChildren(struct RagdollBody *body, int boneIdx, int *childIndices) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_BoneTrace(struct trace_t *trace, struct trace_t *revTrace, const float *start, const float *end) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_TunnelTest(struct RagdollBody *body) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_PrintTunnelFail(struct RagdollBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_EnterTunnelTest(struct RagdollBody *body, enum BodyState prevState, enum BodyState curState) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_UpdateVelocityCapture(struct RagdollBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_UpdateFriction(struct RagdollBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_IsBodyRootMoving(struct RagdollBody *body) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_CheckIdle(struct RagdollBody *body) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_EnterDead(struct RagdollBody *body, enum BodyState prevState, enum BodyState curState) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_ExitDead(struct RagdollBody *body, enum BodyState prevState, enum BodyState curState) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_ExitDObjWait(struct RagdollBody *body, enum BodyState prevState, enum BodyState curState) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_ExitIdle(struct RagdollBody *body, enum BodyState curState, enum BodyState newState) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_EnterIdle(struct RagdollBody *body, enum BodyState curState, enum BodyState newState) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_EnterRunning(struct RagdollBody *body, enum BodyState curState, enum BodyState newState) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_UpdateDObjWait(struct RagdollBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_FilterBonePositions(struct RagdollBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_UpdateRunning(struct RagdollBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_BodyNewState(struct RagdollBody *body, enum BodyState state) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_BodyUpdate(int msec, struct RagdollBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_SetUpdateTime(int msec) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_Update(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Ragdoll_UpdatePreviousCentroids() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Ragdoll_RunToTime() -> void
{

}

#endif // __UNIMPLEMENTED__
