//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_ClearSoundPlaybackTracking() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_GetClientNumForLocalClient(int clientNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsRagdollTrajectory(const struct trajectory_t *trajectory) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RegisterDvars() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_cg_main() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AllocateClientMemory(int maxLocalClients) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FreeClientMemory() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetGameTime(int localClientNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Frame(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetDObjOrientation(int localClientNum, int dobjHandle, float *axis[0x3], float *origin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_CopyEntityOrientation(int localClientNum, int entIndex, float *origin_out, float *axis_out[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_CopySoundEntityOrientation(int localClientNum, int entIndex, float *origin_out, float *axis_out[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetSoundEntityOrientation(const union SndEntHandle sndEnt, float *origin_out, float *axis_out[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetPredictedPlayerState(int localClientNum) -> const struct playerState_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_IsValidRemoteInputState(int localClientNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GameMessage(int localClientNum, const char *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_BoldGameMessage(int localClientNum, const char *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_GetHelicopterAnims() -> struct XAnim_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_RegisterGraphics(int localClientNum, const char *mapname) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_StartAmbient(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayClientSoundAlias(int localClientNum, struct snd_alias_list_t *aliasList) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayClientSoundAliasByName(int localClientNum, const char *aliasname) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayEntitySoundAlias(int localClientNum, int entitynum, struct snd_alias_list_t *aliasList) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayEntitySoundAliasFootstep(int localClientNum, const struct centity_s *cent, struct snd_alias_list_t *aliasList, bool isPlayerView) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayEntitySoundAliasByName(int localClientNum, int entitynum, const char *aliasname) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_StopSoundAlias(const int localClientNum, const int entitynum, struct snd_alias_list_t *aliasList) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_StopSoundsOnEnt(const int localClientNum, const int entitynum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_StopSoundAliasByName(int localClientNum, int entityNum, const char *aliasName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_StopClientSoundAliasByName(int localClientNum, const char *aliasName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ShouldPlaySoundOnLocalClient(int localClientNum, int entitynum, const float *origin, const char *aliasname) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_SubtitlePrint(int msec, const struct snd_alias_t *alias) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SubtitleSndLengthNotify(int msec, void *lengthNotifyData) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_EntityCustomSndLengthNotify(int msec, void *lengthNotifyData) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddFXSoundAlias(int localClientNum, const float *origin, struct snd_alias_list_t *aliasList, int msecWhenPlayed) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_UpdateSoundPlaybackTracking(const int localClientNum, const int entitynum, const float *origin, const char *aliasname) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlaySoundAliasScaled(int localClientNum, int entitynum, const float *origin, struct snd_alias_list_t *aliasList, float volumeScale, float pitch) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlaySoundAlias(int localClientNum, int entitynum, const float *origin, struct snd_alias_list_t *aliasList) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlaySoundAliasAtTime(int localClientNum, int entitynum, const float *origin, struct snd_alias_list_t *aliasList, int msecWhenPlayed) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlaySoundAliasWithPitch(int localClientNum, int entitynum, const float *origin, struct snd_alias_list_t *aliasList, float pitch) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlaySoundAliasByName(int localClientNum, int entitynum, const float *origin, const char *aliasname) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlaySoundAliasAsMasterByName(int localClientNum, int entitynum, const float *origin, const char *aliasname) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayBoltedFxFromConfigstring(const int localClientNum, const int dobjHandle, const int csIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_StopBoltedFxFromConfigstring(const int localClientNum, const int dobjHandle, const int csIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RestartSmokeGrenades(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_LoadHudMenu(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_InitVote(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_GetXModel(const char *modelName) -> struct XModel*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetWeaponAttachBone(struct clientInfo_t *ci, enum weapType_t weapType, enum PlayerHandIndex hand) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_AttachWeapon(struct DObjModel_s *dobjModels, unsigned short numModels, struct clientInfo_t *ci) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_CreateDObj(struct DObjModel_s *dobjModels, unsigned short numModels, struct XAnimTree_s *tree, int handle, int localClientNum, int otherClientNum) -> struct DObj*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_GetDObj(int handle, int localClientNum) -> struct DObj*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_LoadAnimTreeInstances(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_FreeAnimTreeInstances(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_InitViewDimensions(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetClientNum(int localClientNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetEntityType(int localClientNum, int entNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_InitDof(struct GfxDepthOfField *dof) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Init(int localClientNum, int serverMessageNum, int serverCommandSequence, int clientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FreeWeapons(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Shutdown(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Hunk_AllocXAnimClient(int size) -> void*
{

}

#endif // __UNIMPLEMENTED__
