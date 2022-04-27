//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto dBodyAddTorque(struct dxBody *b, float fx, float fy, float fz) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto dBodyAddForce(struct dxBody *b, float fx, float fy, float fz) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto setBall(const struct dxJoint *joint, struct dxJoint::Info2 *info, const float *anchor1, const float *anchor2) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto setFixedOrientation(const struct dxJoint *joint, struct dxJoint::Info2 *info, const float *qrel, int start_row) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto setAnchors(struct dxJoint *j, float x, float y, float z, float *anchor1, float *anchor2) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto setAxes(struct dxJoint *j, float x, float y, float z, float *axis1, float *axis2) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto getAnchor(struct dxJoint *j, float *result, float *anchor1) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto getAnchor2(struct dxJoint *j, float *result, float *anchor2) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto getAxis(struct dxJoint *j, float *result, float *axis1) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto getAxis2(struct dxJoint *j, float *result, float *axis2) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto getHingeAngleFromRelativeQuat(const float *qrel, const float *axis) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto getHingeAngle(const struct dxBody *body1, const struct dxBody *body2, const float *axis, const float *q_initial) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto dxJointLimitMotor::init(struct dxWorld *world) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto dxJointLimitMotor::set(int num, float value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto dxJointLimitMotor::get(int num) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto dxJointLimitMotor::testRotationalLimit(float angle) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto dxJointLimitMotor::addLimot(const struct dxJoint *joint, struct dxJoint::Info2 *info, int row, const float *ax1, int rotational) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ballInit(struct dxJointBall *j) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ballGetInfo1(const struct dxJointBall *__formal, struct dxJoint::Info1 *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ballGetInfo2(const struct dxJointBall *joint, const struct dxWorldStepInfo *stepInfo, struct dxJoint::Info2 *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointSetBallAnchor(struct dxJointBall *joint, float x, float y, float z) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetBallAnchor(struct dxJointBall *joint, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetBallAnchor2(struct dxJointBall *joint, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto hingeInit(struct dxJointHinge *j) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto hingeGetInfo1(const struct dxJointHinge *j, struct dxJoint::Info1 *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto hingeGetInfo2(const struct dxJointHinge *joint, const struct dxWorldStepInfo *stepInfo, struct dxJoint::Info2 *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto hingeComputeInitialRelativeRotation(struct dxJointHinge *joint) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointSetHingeAnchor(struct dxJointHinge *joint, float x, float y, float z) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointSetHingeAxis(struct dxJointHinge *joint, float x, float y, float z) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetHingeAnchor(struct dxJointHinge *joint, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetHingeAnchor2(struct dxJointHinge *joint, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetHingeAxis(struct dxJointHinge *joint, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointSetHingeParam(struct dxJointHinge *joint, int parameter, float value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetHingeParam(struct dxJointHinge *joint, int parameter) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetHingeAngle(struct dxJointHinge *joint) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetHingeAngleRate(struct dxJointHinge *joint) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointAddHingeTorque(struct dxJointHinge *joint, float torque) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ODE_OrientationGetInfo1(const struct JointOrientation *joint, struct dxJoint::Info1 *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ODE_OrientationGetInfo2(const struct JointOrientation *joint, const struct dxWorldStepInfo *stepInfo, struct dxJoint::Info2 *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ODE_PathConstraintGetInfo1(const struct JointPath *joint, struct dxJoint::Info1 *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ODE_PathConstraintGetInfo2(const struct JointPath *joint, const struct dxWorldStepInfo *stepInfo, struct dxJoint::Info2 *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto sliderInit(struct dxJointSlider *j) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto dJointGetSliderPosition(const struct dxJointSlider *joint) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetSliderPositionRate(struct dxJointSlider *joint) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto sliderGetInfo1(const struct dxJointSlider *j, struct dxJoint::Info1 *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto sliderGetInfo2(const struct dxJointSlider *joint, const struct dxWorldStepInfo *stepInfo, struct dxJoint::Info2 *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointSetSliderAxis(struct dxJointSlider *joint, float x, float y, float z) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetSliderAxis(struct dxJointSlider *joint, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointSetSliderParam(struct dxJointSlider *joint, int parameter, float value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetSliderParam(struct dxJointSlider *joint, int parameter) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointAddSliderForce(struct dxJointSlider *joint, float force) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ContactGetInfo1(const struct dxJointContact *j, struct dxJoint::Info1 *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto pr(const char *txt) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto dumpJointInfo2(const struct dxJointContact *j, struct dxJoint::Info2 *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ContactGetInfo2(const struct dxJointContact *joint, const struct dxWorldStepInfo *stepInfo, struct dxJoint::Info2 *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto universalInit(struct dxJointUniversal *j) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto getUniversalAxes(const struct dxJointUniversal *joint, float *ax1, float *ax2) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto getUniversalAngle1(const struct dxJointUniversal *joint) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto getUniversalAngle2(const struct dxJointUniversal *joint) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto universalGetInfo1(const struct dxJointUniversal *j, struct dxJoint::Info1 *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto universalGetInfo2(const struct dxJointUniversal *joint, const struct dxWorldStepInfo *stepInfo, struct dxJoint::Info2 *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto universalComputeInitialRelativeRotations(struct dxJointUniversal *joint) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointSetUniversalAnchor(struct dxJointUniversal *joint, float x, float y, float z) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointSetUniversalAxis1(struct dxJointUniversal *joint, float x, float y, float z) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointSetUniversalAxis2(struct dxJointUniversal *joint, float x, float y, float z) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetUniversalAnchor(struct dxJointUniversal *joint, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetUniversalAnchor2(struct dxJointUniversal *joint, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetUniversalAxis1(struct dxJointUniversal *joint, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetUniversalAxis2(struct dxJointUniversal *joint, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointSetUniversalParam(struct dxJointUniversal *joint, int parameter, float value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetUniversalParam(struct dxJointUniversal *joint, int parameter) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetUniversalAngle1(struct dxJointUniversal *joint) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetUniversalAngle2(struct dxJointUniversal *joint) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetUniversalAngle1Rate(struct dxJointUniversal *joint) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetUniversalAngle2Rate(struct dxJointUniversal *joint) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointAddUniversalTorques(struct dxJointUniversal *joint, float torque1, float torque2) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto amotorInit(struct dxJointAMotor *j) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto amotorComputeGlobalAxes(const struct dxJointAMotor *joint, float *ax[0x4]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto amotorComputeEulerAngles(const struct dxJointAMotor *joint, float *ax[0x4], float *angle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto amotorSetEulerReferenceVectors(struct dxJointAMotor *j) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto amotorGetInfo1(const struct dxJointAMotor *j, struct dxJoint::Info1 *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto amotorGetInfo2(const struct dxJointAMotor *joint, const struct dxWorldStepInfo *stepInfo, struct dxJoint::Info2 *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointSetAMotorNumAxes(struct dxJointAMotor *joint, int num) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointSetAMotorAxis(struct dxJointAMotor *joint, int anum, int rel, float x, float y, float z) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointSetAMotorParam(struct dxJointAMotor *joint, int parameter, float value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointSetAMotorMode(struct dxJointAMotor *joint, int mode) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetAMotorNumAxes(struct dxJointAMotor *joint) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetAMotorAxis(struct dxJointAMotor *joint, int anum, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetAMotorAxisRel(struct dxJointAMotor *joint, int anum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetAMotorAngleRate(struct dxJointAMotor *__formal, int __formal) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetAMotorParam(struct dxJointAMotor *joint, int parameter) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointGetAMotorMode(struct dxJointAMotor *joint) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointAddAMotorTorques(struct dxJointAMotor *joint, float torque1, float torque2, float torque3) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto fixedInit(struct dxJointFixed *j) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto fixedGetInfo1(const struct dxJointFixed *__formal, struct dxJoint::Info1 *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto fixedGetInfo2(const struct dxJointFixed *joint, const struct dxWorldStepInfo *stepInfo, struct dxJoint::Info2 *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dJointSetFixed(struct dxJointFixed *joint) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto nullGetInfo1(const struct dxJointNull *__formal, struct dxJoint::Info1 *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto nullGetInfo2(const struct dxJointNull *__formal, const struct dxWorldStepInfo *stepInfo, struct dxJoint::Info2 *__formal) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto jointInit(struct dxJoint *joint) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto jointGetInfo1(const struct dxJoint *joint, struct dxJoint::Info1 *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto jointGetInfo2(const struct dxJoint *joint, const struct dxWorldStepInfo *stepInfo, struct dxJoint::Info2 *info) -> void
{

}

#endif // __UNIMPLEMENTED__
