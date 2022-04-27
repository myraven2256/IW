//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_com_math() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto random() -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto crandom() -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GaussianRandom(float *f0, float *f1) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RandWithSeed(int *seed) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PointInCircleFromUniformDeviates(float radiusDeviate, float yawDeviate, float *point) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PointOnSphereFromUniformDeviates(float azimuthDeviate, float yawDeviate, float *unitVec) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PointOnHemisphereFromUniformDeviates(float azimuthDeviate, float yawDeviate, float *unitVec) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UniformPointsInCircle(unsigned int pointCount, void *points, unsigned int stride) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UniformPointsOnHemisphere(unsigned int pointCount, void *points, unsigned int stride) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UniformPointsOnSphere(unsigned int pointCount, void *points, unsigned int stride) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LinearTrack(float tgt, float cur, float rate, float deltaTime) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LinearTrackAngle(float tgt, float cur, float rate, float deltaTime) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DiffTrack(float tgt, float cur, float rate, float deltaTime) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DiffTrackAngle(float tgt, float cur, float rate, float deltaTime) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GraphGetValueFromFraction(const int knotCount, const float *knots[0x2], const float fraction) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Q_log2(int val) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Q_acos(const float c) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClampChar(const int i) -> signed char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClampShort(const int i) -> short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DirToByte(const float *dir) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ByteToDir(const int b, float *dir) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VecNCompareCustomEpsilon(const float *v0, const float *v1, float epsilon, int coordCount) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec3DistanceSqToSegment(const float *pt, const float *segStart, const float *segEnd) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec2Distance(const float *v1, const float *v2) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec2DistanceSq(const float *p1, const float *p2) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec3MajorAxis(const float *dir) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec3MinorAxis(const float *dir) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec3ProjectionCoords(const float *dir, int *xCoord, int *yCoord) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec2Normalize(float *v) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec3NormalizeTo(const float *v, float *out) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec2NormalizeTo(const float *v, float *out) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec2Rotate(const float *in, float angle, float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec3Rotate(const float *in, const float *matrix[0x3], float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec3RotateTranspose(const float *in, const float *matrix[0x3], float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RotationMatrix(const float *dir, float radians, float *matrix[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RotatePointAroundVector(float *dst, const float *dir, const float *point, const float degrees) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec3Basis_LeftHanded(const float *forward, float *right, float *up) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec3Basis_RightHanded(const float *forward, float *left, float *up) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto vectoyaw(const float *vec) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto vectosignedyaw(const float *vec) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto vectopitch(const float *vec) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto vectosignedpitch(const float *vec) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto vectoangles(const float *vec, float *angles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UnitQuatToAngles(const float *quat, float *angles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto vectosignedangles(const float *vec, float *angles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto YawVectors(const float yaw, float *forward, float *right) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto YawVectors2D(const float yaw, float *forward, float *right) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PerpendicularVector(const float *src, float *dst) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPerpendicularViewVector(const float *point, const float *p1, const float *p2, float *up) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ProjectPointOntoVector(const float *point, const float *start, const float *end, float *vProj) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ProjectPointOntoVectorDir(const float *point, const float *start, const float *dir, float *result_projectedPoint, float *result_projectedDistanceFromStart) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PointToLineDistSq(const float *point, const float *start, const float *end) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PointToBoxDistSq(const float *pt, const float *mins, const float *maxs) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PointToLineDistSq2D(const float *point, const float *start, const float *end) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PointToLineSegmentDistSq2D(const float *point, const float *start, const float *end) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PointToLineSegmentDistSq(const float *point, const float *start, const float *end) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PointToLineDistSqUsingDir(const float *pt, const float *start, const float *dir) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PointOnLineClosestToPoint(const float *pt, const float *start, const float *dir, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClosestApproachOfTwoLines(const float *p1, const float *dir1, const float *p2, const float *dir2, float *s, float *t) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixIdentity33(float *out[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixIdentity44(float *out[0x4]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixSet44(float *out[0x4], const float *origin, const float *axis[0x3], float scale) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixMultiply(const float *in1[0x3], const float *in2[0x3], float *out[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixMultiplyEquals(const float *in[0x3], float *out[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixMultiply34(const float *in1[0x4], const float *in2[0x4], float *out[0x4]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixMultiply43(const float *in1[0x3], const float *in2[0x3], float *out[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixMultiply44(const float *in1[0x4], const float *in2[0x4], float *out[0x4]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixTranspose(const float *in[0x3], float *out[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixTranspose44(const float *in, float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixInverse(const float *in[0x3], float *out[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixInverseOrthogonal43(const float *in[0x3], float *out[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixInverse44(const float *mat, float *dst) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixTransformVector44(const float *vec, const float *mat[0x4], float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixTransposeTransformVector(const float *in1, const float *in2[0x3], float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixTransformVector43(const float *in1, const float *in2[0x3], float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixTransposeTransformVector43(const float *in1, const float *in2[0x3], float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixTransformVector43Equals(float *out, const float *in) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VectorAngleMultiply(float *vec, float angle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto QuatInverse(const float *in, float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto QuatToAxis(const float *quat, float *axis[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UnitQuatToAxis(const float *quat, float *axis[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UnitQuatToForward(const float *quat, float *forward) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto QuatNlerp(const float *from, const float *to, float frac, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto QuatSlerp(const float *from, const float *to, float frac, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto QuatEigenTrace(float *quat) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AngleEigenTrace(float angle) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto QuatRatioEigenTrace(float *quat1, float *quat2) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RotationToYaw(const float *rot) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixToAngleAxis(const float *matrix[0x3], float *axis, float *angle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AngleAxisToQuat(float angle, const float *axis, float *quat) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixRotationX(float *mat[0x3], float degree) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixRotationY(float *mat[0x3], float degree) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixRotationZ(float *mat[0x3], float degree) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FinitePerspectiveMatrix(float tanHalfFovX, float tanHalfFovY, float zNear, float zFar, float *mtx[0x4]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto InfinitePerspectiveMatrix(float tanHalfFovX, float tanHalfFovY, float zNear, float *mtx[0x4]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto OrthographicMatrix(float width, float height, float depth, float *mtx[0x4]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixForViewer(const float *origin, const float *axis[0x3], float *mtx[0x4]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixForViewerNoOrigin(const float *axis[0x3], float *mtx[0x4]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AnglesSubtract(const float *v1, const float *v2, float *v3) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AngleNormalize360(const float angle) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AngleDelta(const float angle1, const float angle2) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClearBounds2D(float *mins, float *maxs) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddPointToBounds2D(const float *v, float *mins, float *maxs) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PointInBounds2D(const float *v, const float *mins, const float *maxs) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BoundsOverlap2D(const float *mins0, const float *maxs0, const float *mins1, const float *maxs1) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BoundsOverlapEpsilon2D(const float *mins0, const float *maxs0, const float *mins1, const float *maxs1, float epsilon) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ExpandBounds2D(const float *addedmins, const float *addedmaxs, float *mins, float *maxs) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AxisClear(float *axis[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AxisCopy(const float *in[0x3], float *out[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AxisTranspose(const float *in[0x3], float *out[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AxisTransformVector(const float *axes[0x3], const float x, const float y, const float z, float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AxisTransformVec3(const float *axes[0x3], const float *vec, float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto YawToAxis(float yaw, float *axis[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AxisToAngles(const float *axis[0x3], float *angles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AxisToSignedAngles(const float *axis[0x3], float *angles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IntersectPlanes(const float **plane, float *xyz) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SnapPointToIntersectingPlanes(const float **planes, float *xyz, float snapGrid, float snapEpsilon) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SnapPointToPlanes(const float *planes[0x4], int planeCount, float *xyz, float snapGrid, float snapEpsilon) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ProjectedWindingContainsCoplanarPoint(const float *verts[0x3], int vertCount, int x, int y, const float *point) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ProjectedWindingContainsCoplanarPointEpsilon(const float *verts[0x3], int vertCount, int x, int y, const float *point, float epsilon) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ProjectedWindingSegmentFractionToEdge(const float *verts[0x3], int vertCount, int x, int y, const float *point, const float *centroid, float *fracToEdge) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PlaneFromPoints(float *plane, const float *v0, const float *v1, const float *v2) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ProjectPointOnPlane(const float *p, const float *normal, float *dst) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Intersect2DPlanes(const float *dir1, float dist1, const float *dir2, float dist2, float *result) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetPlaneSignbits(struct cplane_s *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsPosInsideArc(const float *pos, float posRadius, const float *arcOrigin, float arcRadius, float arcAngle0, float arcAngle1, float arcHalfHeight) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Q_rint(const float in) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ColorNormalize(const float *in, float *out) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VectorRotateAngles(const float *vIn, const float *vRotation, float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VectorRotateAnglesAroundPoint(const float *vIn, const float *vRotation, const float *vOrigin, float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VectorPolar(float *v, const float radius, const float theta, const float phi) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PitchForYawOnNormal(const float fYaw, const float *normal) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NearestPitchAndYawOnPlane(const float *angles, const float *normal, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetRandSeed() -> unsigned int*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto flrand(float min, float max) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto irand(int min, int max) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixTransformVectorQuatTrans(const float *in, const struct DObjAnimMat *mat, float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AxisToQuat(const float *mat[0x3], float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto QuatLerp(const float *qa, const float *qb, float frac, float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SinCosDeg(float degrees, float *s, float *c) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FudgeFloat(float f, int lsbError, int lsbCount) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SnapFloat(float f, float granularity, float epsilon) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CullBoxFromCone(const float *coneOrg, const float *coneDir, float cosHalfFov, const struct Bounds *bounds) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CullBoxFromSphere(const float *sphereOrg, float radius, const struct Bounds *bounds) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PointInsideCone(const float *coneTip, const float *coneDir, float cosHalfFov, float coneHeight, const float *point) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CullBoxFromConicSectionOfSphere(const float *coneOrg, const float *coneDir, float cosHalfFov, float radius, const struct Bounds *bounds) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CullSphereFromCone(const float *coneOrg, const float *coneDir, float cosHalfFov, const float *sphereCenter, float radius) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DistanceFromConeToPoint(const float *coneOrg, const float *coneDir, float cosHalfFov, const float *point) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DistanceFromConicSectionOfSphereToPoint(const float *coneOrg, const float *coneDir, float cosHalfFov, float radius, const float *point) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClosestPointOnConicSectionOfSphereToPoint(const float *coneOrg, const float *coneDir, float cosHalfFov, float radius, const float *point, float *closestPoint) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TanHalfAngles(float &tanHalfFovX, float &tanHalfFovY, float fovdeg_x, float viewAspect) -> void
{

}

#endif // __UNIMPLEMENTED__
