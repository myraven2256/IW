//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Phys_GetSurfaceFlagsFromBrush(const struct cbrush_t *brush, int brushSideIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_TestGeomInBrush(unsigned int brushNum, void *userData) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_ForEachBrushInLeafBrushNode_r(enum PhysWorld worldIndex, struct cLeafBrushNode_s *node, const struct Bounds *bounds, bool testMask, int clipMask, function *f, void *userData) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TestGeomInLeafBrushNode(struct cLeaf_t *leaf, const struct objInfo *input, struct Results *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_CullBox2(const struct objInfo *input, const float *origin, const float *halfSize) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_PositionGeomTestInAabbTree_r(struct CollisionAabbTree *aabbTree, const struct objInfo *input, struct Results *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_MeshTestGeomInLeaf(struct cLeaf_t *leaf, const struct objInfo *input, struct Results *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CM_TestGeomInLeaf(struct cLeaf_t *leaf, const struct objInfo *input, struct Results *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_TestAgainstEntities(const struct objInfo *input, struct Results *results) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_CollideWorldGeomWithInfo(struct objInfo *info, struct Results *results, const struct Bounds *bounds) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_IsHalfSizeTooNarrow(const float *halfSize) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_GetTransformedBounds(struct objInfo *info, const float *localMidpoint, const float *halfSize, struct Bounds *rotatedBounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_GetBoundsBox(struct objInfo *info, struct Bounds *bounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_GetBoundsCylinder(struct objInfo *info, struct Bounds *bounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_CollideWorldWithCollmap(struct dxGeom *o2, struct objInfo *info, struct Results *results) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CollideWorldGeom(struct dxGeom *o1, struct dxGeom *o2, int flags, struct dContactGeom *contact, int skip) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_GetColliderWorld(int classnum) -> function*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_InitWorldCollision() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_GetBrushmodelAABB(struct dxGeom *geom, float *aabb) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_GetCollmapAABB(struct dxGeom *geom, float *aabb) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_GetCylinderAABB(struct dxGeom *geom, float *aabb) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_GetCapsuleAABB(struct dxGeom *geom, float *aabb) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_GetGlassAABB(struct dxGeom *geom, float *aabb) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Phys_GetColliderNull(int classnum) -> function*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_InitBrushmodelGeomClass() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_InitCollmapGeomClass() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_InitCylinderGeomClass() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_InitCapsuleGeomClass() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_InitGlassGeomClass() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CreateBrushmodelGeom(struct dxSpace *space, struct dxBody *body, unsigned short brushModel, const float *centerOfMass) -> struct dxGeom*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CreateCollmapGeom(struct dxSpace *space, struct dxBody *body, const struct PhysCollmap *collmap, const float *centerOfMass) -> struct dxGeom*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CreateCylinderGeom(struct dxSpace *space, struct dxBody *body, const struct GeomStateCylinder *cyl) -> struct dxGeom*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CreateCapsuleGeom(struct dxSpace *space, struct dxBody *body, const struct GeomStateCylinder *cyl) -> struct dxGeom*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CreateGlassGeom(struct dxSpace *space, struct dxBody *body, const struct GeomStateGlass *glass) -> struct dxGeom*
{

}

#endif // __UNIMPLEMENTED__
