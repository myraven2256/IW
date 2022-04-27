//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_g_utils() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ClearCachedModels() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FindConfigstringIndex(const char *name, int start, int max, int create, const char *errormsg) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_LocalizedStringIndex(const char *string) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_MaterialIndex(const char *name) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ModelIndex(const char *name) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ReloadCachedModels() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SaveFreeEntityPointer(struct gentity_s *ent, unsigned char *buf, int pos) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LoadFreeEntityPointer(struct gentity_s **ent, unsigned char *buf, int pos) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SaveFreeEntities(unsigned char *buf) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_LoadFreeEntities(unsigned char *buf) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetModel(int index) -> struct XModel*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetModelBounds(int index, struct Bounds *outBounds) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetModelCollmap(int index) -> const struct PhysCollmap*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_XModelBad(int index) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ModelName(int index) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntityCentroidWithBounds(const struct gentity_s *ent, const struct Bounds *bounds, float *centroid) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntityCentroid(const struct gentity_s *ent, float *centroid) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetEntityBoundsPoint(const struct gentity_s *ent, float ratioFromCenterX, float ratioFromCenterY, float ratioFromCenterZ, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_TagIndex(const char *name) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EffectIndex(const char *name) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ShellShockIndex(const char *name) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SoundAliasIndex(const char *name) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_RumbleIndex(const char *name) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto G_UpdateTags(struct gentity_s *ent, int bHasDObj) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto G_ClientDObjUpdate(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto G_PlayerCorpseDObjUpdate(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto G_DObjUpdate_Internal(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DObjUpdate(struct gentity_s *ent, int link) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DObjLoad(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetModel(struct gentity_s *ent, const char *modelName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto G_ReplaceModel_FastFile(const char *originalName, const char *replacementName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_OverrideModel(int modelIndex, const char *defaultModelName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntityStateSetPartBits(struct gentity_s *ent, const unsigned int *partBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntAttach(struct gentity_s *ent, const char *modelName, unsigned int tagName, int ignoreCollision) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntDetach(struct gentity_s *ent, const char *modelName, unsigned int tagName) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntChangeAttachTag(struct gentity_s *ent, const char *modelName, unsigned int tagNameFrom, unsigned int tagNameTo) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntDetachAll(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SafeDObjFree(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DObjUpdateServerTime(struct gentity_s *ent, int bNotify) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DObjCalcPose(struct gentity_s *ent, int *partBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DObjCalcBone(const struct gentity_s *ent, int boneIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DObjGetLocalTagMatrix(const struct gentity_s *ent, unsigned int tagName) -> struct DObjAnimMat*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DObjGetWorldTagMatrix(const struct gentity_s *ent, unsigned int tagName, float *tagMat[0x3]) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DObjGetWorldTagPos(const struct gentity_s *ent, unsigned int tagName, float *pos) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DObjGetWorldTagPos_CheckTagExists(const struct gentity_s *ent, unsigned int tagName, float *pos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DObjGetLocalBoneIndexMatrix(const struct gentity_s *ent, int boneIndex) -> struct DObjAnimMat*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DObjGetWorldBoneIndexPos(struct gentity_s *ent, int boneIndex, float *pos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DObjGetWorldBoneIndexMatrix(struct gentity_s *ent, int boneIndex, float *tagMat[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_Find(struct gentity_s *from, int fieldofs, unsigned short match) -> struct gentity_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FindStr(struct gentity_s *from, int fieldofs, const char *match) -> struct gentity_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_InitGentity(struct gentity_s *e) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_PrintEntities() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto G_MaySpawnEntity(struct gentity_s *e) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_Spawn() -> struct gentity_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SpawnPlayerClone() -> struct gentity_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FreeEntityRefs(struct gentity_s *ed) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FreeEntity(struct gentity_s *ed) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FreeEntityDelay(struct gentity_s *ed) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_FreeEntityAfterEvent(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_TempEntity(const float *origin, int event) -> struct gentity_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_AddPredictableEvent(struct gentity_s *ent, unsigned int event, unsigned int eventParm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_AddEvent(struct gentity_s *ent, unsigned int event, unsigned int eventParm) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_PlaySoundAliasAtPoint(const float *origin, unsigned char index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_PlaySoundAlias(struct gentity_s *ent, unsigned char index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetOrigin(struct gentity_s *ent, const float *origin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetAngle(struct gentity_s *ent, const float *angle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto infront(struct gentity_s *self, struct gentity_s *other) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DebugLine(float *start, float *end, int color) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetConstString(unsigned short *to, const char *from) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetEntityTypeName(const struct gentity_s *ent) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_TeamFromString(unsigned int team) -> enum team_t
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_srand(unsigned int seed) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetRandomSeed() -> unsigned int*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_rand() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_flrand(float min, float max) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_irand(int min, int max) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_random() -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_crandom() -> float
{

}

#endif // __UNIMPLEMENTED__
