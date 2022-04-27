//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto GeomFromSpace(struct dxSpace *spaceID) -> struct dxGeom*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto space_geom_collider(void *data, struct dxGeom *o1, struct dxGeom *o2) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto dCollideSpaceGeom(struct dxGeom *o1, struct dxGeom *o2, int flags, struct dContactGeom *contact, int skip) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto setCollider(int i, int j, function *fn) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto setAllColliders(int i, function *fn) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto initColliders() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dCollide(struct dxGeom *o1, struct dxGeom *o2, int flags, struct dContactGeom *contactArray, int skip) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto dxGeom::dxGeom(struct dxSpace *_space, int is_placeable, struct dxBody *newBody) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto dxGeom::bodyRemove() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ODE_BodyGetFirstGeom(struct dxBody *body) -> struct dxGeom*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dGeomGetBodyNext(struct dxGeom *geom) -> struct dxGeom*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ODE_GeomFree(struct dxGeom *g, struct dxWorld *world) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dGeomSetData(struct dxGeom *g, void *data) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dGeomGetData(struct dxGeom *g) -> void*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ODE_GeomDestruct(struct dxGeom *g) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dGeomSetBody(struct dxGeom *g, struct dxBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dGeomGetBody(struct dxGeom *g) -> struct dxBody*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dGeomSetPosition(struct dxGeom *g, float x, float y, float z) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dGeomSetRotation(struct dxGeom *g, const float *R) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dGeomSetQuaternion(struct dxGeom *g, const float *quat) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dGeomGetPosition(struct dxGeom *g) -> const float*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dGeomGetRotation(struct dxGeom *g) -> const float*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dGeomGetQuaternion(struct dxGeom *g, float *quat) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dGeomGetAABB(struct dxGeom *g, float *aabb) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dGeomIsSpace(struct dxGeom *g) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dGeomGetSpace(struct dxGeom *g) -> struct dxSpace*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dGeomGetClass(const struct dxGeom *g) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dGeomSetCategoryBits(struct dxGeom *g, unsigned long bits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dGeomSetCollideBits(struct dxGeom *g, unsigned long bits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dGeomGetCategoryBits(struct dxGeom *g) -> unsigned long
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dGeomGetCollideBits(struct dxGeom *g) -> unsigned long
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dGeomEnable(struct dxGeom *g) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dGeomDisable(struct dxGeom *g) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dGeomIsEnabled(struct dxGeom *g) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto dxUserGeom::dxUserGeom(int class_num, struct dxSpace *space, struct dxBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto dxUserGeom::computeAABB() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto dxUserGeom::AABBTest(struct dxGeom *o, float *aabb) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ODE_GeomGetAAContainedBox(struct dxGeom *geom, struct Bounds *bounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ODE_GeomGetAAContainedBoxInternal(struct dxGeom *geom, struct Bounds *bounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto dCollideUserGeomWithGeom(struct dxGeom *o1, struct dxGeom *o2, int flags, struct dContactGeom *contact, int skip) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dCreateGeomClass(const struct dGeomClass *c) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ODE_GeomGetClassData(struct dxGeom *g) -> void*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_GetWorldGeom() -> struct dxGeom*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ODE_GeomCustomInit(struct dxGeom *const geom, int classnum, struct dxSpace *space, struct dxBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dInitUserGeom(struct dxGeom *geom, int classnum, struct dxSpace *space, struct dxBody *body) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dCloseODE() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ODE_GeomGetFlags(struct dxGeom *geom) -> int
{

}

#endif // __UNIMPLEMENTED__
