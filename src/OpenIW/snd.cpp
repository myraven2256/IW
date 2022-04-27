//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_snd() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DebugAliasPrint(bool condition, const struct snd_alias_t *alias, const char *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetEntChannelCount() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_HasFreeVoice(int entchannel) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_AddVoice(int entchannel) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_RemoveVoice(int entchannel) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetPriority(int entchannel) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_IsRestricted(int entchannel) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_IsAliasChannel3D(int entchannel) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_IsPausable(int entchannel) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetTimescaleLerp(const int entchannel) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetEntChannelName(int entchannel) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetEntChannelFromName(const char *channelName) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_ValidateEnvEffectsPriorityValue(const char *priorityName, int *priority) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_RoomtypeFromString(const char *string) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetEnvironmentEffects_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DeactivateEnvironmentEffects_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_EqTypeFromString(const char *typeString) -> enum SND_EQTYPE
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_ParseChannelAndBand_f(int *entchannel, int *eqIndex, int *band) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetEq_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetEqFreq_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetEqType_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetEqGain_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetEqQ_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DeactivateEq_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DumpTimeScale_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_AnyActiveListeners() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DistSqToNearestListener(const float *origin) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetListenerIndexNearestToOrigin(const float *origin) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DisconnectListener(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetListener(int localClientNum, int clientNum, const float *origin, const float *axis[0x3], const float *velocity) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SaveListeners(struct snd_listener *listeners) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_RestoreListeners(struct snd_listener *listeners) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetPlaybackIdNotPlayed(int index) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_AcquirePlaybackId(int index, int totalMsec) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DoLengthNotify(int msec, void *lengthNotifyData, enum SndLengthId id, unsigned char index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_AddLengthNotify(int playbackId, void *lengthNotifyData, enum SndLengthId id, unsigned char index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetKnownLength(int playbackId, int *msec) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_LengthNotify(int index, int totalMsec) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetLerpedSlavePercentage(const struct snd_alias_t *alias) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetChannelBaseVolume(const struct snd_channel_info_t *chaninfo) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Attenuate(struct SndCurve *volumeFalloffCurve, float radius, float mindist, float maxdist) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetCurrent3DPosition(union SndEntHandle sndEnt, const float *offset, float *pos_out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_ResetChannelInfo(int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetChannelStartInfo(int index, struct SndStartAliasInfo *SndStartAliasInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetSoundFileChannelInfo(int index, int srcChannelCount, int baserate, enum SndFileLoadingState loadingState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ReplaceableChannelMetric(struct snd_channel_info_t *chaninfo, bool is3d) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_FindReplaceableChannel(struct SndStartAliasInfo *startAliasInfo, int entchannel, int first, int count) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_FindFree2DChannel(struct SndStartAliasInfo *startAliasInfo, int entchannel) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_FindFree3DChannel(struct SndStartAliasInfo *startAliasInfo, int entchannel) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_FindFreeStreamChannel(struct SndStartAliasInfo *startAliasInfo, int entchannel) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_StopEntityChannel(union SndEntHandle sndEnt, int entchannel) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_StartAliasSample(struct SndStartAliasInfo *startAliasInfo, int *pChannel) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_StartAliasStream(struct SndStartAliasInfo *startAliasInfo, int *pChannel) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_StartAliasVoiced(struct SndStartAliasInfo *startAliasInfo, int *pChannel) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_Archive(struct snd_channel_info_t *chaninfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_Unarchive(struct snd_channel_info_t *chaninfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_SaveSounds() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DB_LoadSounds() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_ChoosePitchAndVolume(const struct snd_alias_t *alias0, const struct snd_alias_t *alias1, float lerp, float volumeScale, float *volume, float *pitch) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_ContinueLoopingSound_Internal(int chanIndex, float lerp, float volumeScale, float pitch, int *pChannel, function *setPlaybackRateFunc) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_ContinueLoopingSound(const struct snd_alias_t *alias0, const struct snd_alias_t *alias1, float lerp, float volumeScale, float pitch, union SndEntHandle sndEnt, const float *org, int *pChannel) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_IsNullSoundFile(const struct SoundFile *soundFile) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto InRange(const struct snd_alias_t *alias0, const struct snd_alias_t *alias1, float lerp, const float *org) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_PlaySecondaryAlias(const struct snd_alias_t *alias, float lerp, float volumeScale, float pitch, union SndEntHandle sndEnt, const float *org, int timeshift, bool treatAsMaster, float timescaleLerp, enum snd_alias_system_t system, const int recursionDepth) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_PlaySoundAlias_Internal(const struct snd_alias_t *alias0, const struct snd_alias_t *alias1, float lerp, float volumeScale, float pitch, union SndEntHandle sndEnt, const float *org, int *pChannel, int timeshift, bool treatAsMaster, float timescaleLerp, enum snd_alias_system_t system, const int recursionDepth) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_StopSoundsInternal(union SndEntHandle sndEnt, const char *aliasName, const int entChannel) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_StopSoundAliasOnEnt(union SndEntHandle sndEnt, const char *aliasName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_StopSoundChannelOnEnt(union SndEntHandle sndEnt, int channelNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_StopSoundsOnEnt(union SndEntHandle sndEnt) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_InitFXSounds() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_AddPlayFXSoundAlias(struct snd_alias_t *alias, union SndEntHandle sndEnt, const float *origin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_AssertAliasValid(struct snd_alias_t *alias) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PlayFXSounds() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PlaySoundAlias(const struct snd_alias_t *alias, union SndEntHandle sndEnt, const float *org, int timeshift, enum snd_alias_system_t system) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PlayScaledSoundAlias(const struct snd_alias_t *alias, float volumeScale, float pitch, union SndEntHandle sndEnt, const float *org, int timeshift, enum snd_alias_system_t system) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PlaySoundAliasWithPitch(const struct snd_alias_t *alias, float pitch, union SndEntHandle sndEnt, const float *org, int timeshift, enum snd_alias_system_t system) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PlaySoundAliasAsMaster(const struct snd_alias_t *alias, union SndEntHandle sndEnt, const float *org, int timeshift, enum snd_alias_system_t system) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_ValidateSoundAliasBlend(const struct snd_alias_t *alias0, const struct snd_alias_t *alias1, bool throwErrorIfInvalid) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PlayBlendedSoundAliases(const struct snd_alias_t *alias0, const struct snd_alias_t *alias1, float lerp, float volumeScale, union SndEntHandle sndEnt, const float *org, int timeshift, enum snd_alias_system_t system) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PlayBlendedSoundAliasesWithPitch(const struct snd_alias_t *alias0, const struct snd_alias_t *alias1, float lerp, float volumeScale, float pitch, union SndEntHandle sndEnt, const float *org, int timeshift, enum snd_alias_system_t system) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_PlayLocalSoundAlias(int localClientNum, const struct snd_alias_t *alias, enum snd_alias_system_t system) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PlayLocalSoundAliasFromList(int localClientNum, struct snd_alias_list_t *aliasList, enum snd_alias_system_t system) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PlayLocalSoundAliasByName(int localClientNum, const char *aliasname, enum snd_alias_system_t system) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetPauseSettings(unsigned int *pauseSettings) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetTimeScaleLerp(const int entchannel, const float lerp) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_ResetTimeScaleDefaults() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_ResetPauseDefaults() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_PauseSounds() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_UnpauseSounds() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_UpdatePause() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_StartBackground(int localClientNum, int track, const struct snd_alias_t *alias, int fadetime, float fraction, float timescaleLerp, enum snd_alias_system_t system) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_StopBackground(int track, int fadetime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PlayMusicAlias(int localClientNum, const struct snd_alias_t *alias, float timescaleLerp, enum snd_alias_system_t system) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_StopMusic(int fadetime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PlayAmbientAlias(int localClientNum, const struct snd_alias_t *alias, int fadetime, enum snd_alias_system_t system) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_StopAmbient(int localClientNum, int fadetime, enum snd_alias_system_t system) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_FadeAllSounds(float volume, int fadetime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetChannelVolumes(int priority, const float *channelvolume, int fademsec) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DeactivateChannelVolumes(int priority, int fademsec) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_UpdateLoopingSounds() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_UpdateBackgroundVolume(int track, int frametime) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_UpdateVolume(struct snd_volume_info_t *volinfo, int frametime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_UpdateMasterVolumes(int frametime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_Is2DChannelPlaying(int index) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_Is3DChannelPlaying(int index) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_IsStreamChannelPlaying(int index) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UpdateChannelSlaveLerp(const int first, const int last, function *isPlayingFunc, float *masterPercentage) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_UpdateSlaveLerp(int frametime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_UpdateAllChannels(int frametime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetEnvironmentEffects(int priority, const char *roomstring, float drylevel, float wetlevel, int fademsec) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DeactivateEnvironmentEffects(int priority, int fademsec) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_UpdateReverbs() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_UpdateRoomEffects(int frametime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetEqForChannel(int entchannel, int eqIndex, int band, enum SND_EQTYPE type, float gain, float freq, float q) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetEq(const char *channelName, int eqIndex, int band, enum SND_EQTYPE type, float gain, float freq, float q) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DeactivateAllEq(int eqIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DeactivateChannelEq(const char *channelName, int eqIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DeactivateEqForChannel(int entchannel, int eqIndex, int band) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DeactivateEq(const char *channelName, int eqIndex, int band) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_UpdateTimeScale() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FontSizeForDistance(float distance) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DebugDrawWorldSound3D(int idx, int debugDrawStyle, int *offsets, int *closestId, float *closestIdDotProd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DebugDrawWorldSounds(int debugDrawStyle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_UpdatePhysics() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_ShouldGiveCpuWarning() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Update() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_IsAmbientChannel(int chan) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_StopSounds(enum snd_stopsounds_arg_t which) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RelativeToListener(const struct snd_listener *listener, float yaw, float pitch, float dist, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_PlayLocal_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_BooleanFromString(const char *value, const char *trueValue, const char *falseValue, bool defaultValue) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_ParseEntChannelFile(const char *buffer) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_InitEntChannels() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_MapInit() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Init() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Shutdown() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_ShutdownChannels() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_ErrorCleanup() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_SaveSoundAlias(const struct snd_alias_t *alias, struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_RestoreSoundAlias(struct MemoryFile *memFile) -> struct snd_alias_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_SaveLengthNotifyInfo(const struct sndLengthNotifyInfo *info, struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_RestoreLengthNotifyInfo(struct MemoryFile *memFile, struct sndLengthNotifyInfo *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_CopySndLengthInfo(const struct sndLengthNotifyInfo *from, struct sndLengthNotifyInfo *to) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_SaveChanInfo(const struct snd_channel_info_t *chaninfo, struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_RestoreChanInfo(struct snd_channel_info_t *chaninfo, struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_Save3DChannel(int chanIndex, struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_Restore3DChannel(struct MemoryFile *memFile) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_Save2DChannel(int chanIndex, struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_Restore2DChannel(struct MemoryFile *memFile) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_SaveStreamChannel(int chanIndex, struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_RestoreStreamChannel(int channel, struct MemoryFile *memFile) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Save(struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Restore(struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_RestoreEventually(struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_GetSoundOverlay2D(struct snd_overlay_info_t *info, int maxcount) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_GetSoundOverlay3D(struct snd_overlay_info_t *info, int maxcount) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_GetSoundOverlayStream(struct snd_overlay_info_t *info, int maxcount) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetSoundOverlay(enum snd_overlay_type_t type, struct snd_overlay_info_t *info, int maxcount, int *cpu) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto StopChannel(int chanId) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_StopChannelAndPlayChainAlias(int chanId) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_StopChannelAndPlayChainAliasIfTimeExpired(int chanId) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_AddPhysicsSound(struct snd_alias_list_t *aliasList, const float *org) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Amplify(const float *org, const int min_r, const int max_r, const float min_vol, const float max_vol, const float falloff) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_StopAmplify() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_CalcAmplifyFactor(const float *origin) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetVolume() -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetVolumeNormalized() -> float
{

}

#endif // __UNIMPLEMENTED__
