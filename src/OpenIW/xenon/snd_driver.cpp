//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto XA_GetSpeakerCount() -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_IsMultiChannel() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_snd_driver() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XAStream_Release(const int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_CalcTotalSamples(int totalMsec, int sampleRate) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_CalcXAudioPitch(int playbackRate, unsigned long sampleRate) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_GetSampleIndexFromMsec(const int msec, const int sampleRate) -> unsigned long
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_CalcAndAlignDesiredSampleIndex(const struct XAUDIOSOURCEFORMAT *format, const int startMsec, const int totalMsec, int *desiredSampleIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_GetDryLevel(const struct snd_alias_t *pAlias) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_GetWetLevel(const struct snd_alias_t *pAlias) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_GetStreamPacket(struct XaStreamReadInfo *streamReadInfo, int offset) -> struct PktCacheEntry*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_GetNewStreamPacket(struct XaStreamReadInfo *streamReadInfo, int offset, int packetLen) -> struct PktCacheEntry*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_SetStreamPacket(struct XaStreamReadInfo *streamReadInfo, int offset, unsigned char *buf, int bufLen) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_SetStreamPacketPosition(struct IXAudioSourceVoice *sourceVoice, struct XaStreamReadInfo *streamReadInfo, struct XAUDIOPACKET *packet) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_SubmitStreamPackets(struct IXAudioSourceVoice *sourceVoice, struct XaStreamReadInfo *streamReadInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_CalculateStreamStartOffset(int streamIndex, struct XaStreamReadInfo *streamReadInfo, unsigned char *buffer) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_StreamSoundFileDataOffset(struct XaStreamReadInfo *streamReadInfo, unsigned char *buffer) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_ProcessStreamSoundFile(int streamIndex, struct XaStreamReadInfo *streamReadInfo, unsigned char *buffer) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_ReadStreamPacketData(int streamIndex, struct XaStreamReadInfo *streamReadInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_ExecuteStreamRead(int streamIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_StreamPacketCallback(struct XAUDIOVOICEPACKETCALLBACK *packetResult) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_Init2D() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_Init3D() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_InitChannels() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_InitSpatializationCurves() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_UpdateXAudioListener(const float *origin) -> struct snd_listener*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_InitSpatializationParams() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto QueryDSPEffectSize(const struct XAUDIOFXINIT *pInit, unsigned long *pEffectSize) -> HRESULT
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CreateDSPEffect(const struct XAUDIOFXINIT *init, struct IXAudioBatchAllocator *allocator, struct IXAudioEffect **effect) -> HRESULT
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_InitEq() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_SetVoiceEqParams(struct IXAudioVoice *voice, unsigned char effectIndex, int eqIndex, int band, int entchannel, int entityUseEq) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_AnyEqEnabled(int entchannel, int sndEntUseEq) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_InitVoiceOutputAndBaseVolumesForReverb(int index, int srcChannelCount, bool on3DChannel, struct XAUDIOCHANNELMAP *masteringMap) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_VoiceDirty(int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_GetNewSourceVoice(int index, struct XAUDIOSOURCEFORMAT *format) -> struct IXAudioSourceVoice*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_InitializeStreamVoice(int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_ShutdownChannels() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_SetSpatializationCurves(int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_CalcOmnidirectionalPercentage(const struct snd_alias_t *alias) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_ApplyOmnidirectionality(float **speakers, float omniPercentage) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_51_SpecificVolumeCoefficientAdjustments(float lfePercentage, float centerPercentage, float omniPercentage) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_SpatializeChannel(int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetEqLerp(float lerp) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetEqParams(int entchannel, int eqIndex, int band, enum SND_EQTYPE type, float gain, float freq, float q) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetEqType(int entchannel, int eqIndex, int band, enum SND_EQTYPE type) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetEqFreq(int entchannel, int eqIndex, int band, float freq) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetEqGain(int entchannel, int eqIndex, int band, float gain) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetEqQ(int entchannel, int eqIndex, int band, float q) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DisableEq(int entchannel, int eqIndex, int band) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SaveEq(struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_RestoreEq(struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PrintEqParams() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetSoundEqOverlay(struct snd_eqoverlay_info_t *info, int maxcount) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_InitMemory() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_InitDriver() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetRoomtype(int roomtype) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_ShutdownDriver() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_StopChannel(int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_PauseChannel(int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_UnpauseChannel(int index, int timeshift) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Set3DPosition(int index, const float *org) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Stop2DChannel(int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Pause2DChannel(int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Unpause2DChannel(int index, int timeshift) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Is2DChannelFree(int index) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Stop3DChannel(int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Pause3DChannel(int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Unpause3DChannel(int index, int timeshift) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Is3DChannelFree(int index) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_StopStreamChannel(int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PauseStreamChannel(int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_UnpauseStreamChannel(int index, int timeshift) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_IsStreamChannelFree(int index) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto XA_StartAliasSample(struct SndStartAliasInfo *startAliasInfo, int *pIndex, int *pTotalMsec, function *findFreeChannel, function *stopChannel) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_StartAlias2DSample(struct SndStartAliasInfo *startAliasInfo, int *pChannel) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_StartAlias3DSample(struct SndStartAliasInfo *startAliasInfo, int *pChannel) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_StartAliasStreamOnChannel(struct SndStartAliasInfo *startAliasInfo, int index) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Get2DChannelVolume(int index) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_Set2DChannelVolume(int index, float volume) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Get3DChannelVolume(int index) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_Set3DChannelVolume(int index, float volume) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetStreamChannelVolume(int index) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_SetStreamChannelVolume(int index, float volume) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Get2DChannelPlaybackRate(int index) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Set2DChannelPlaybackRate(int index, int rate) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Get3DChannelPlaybackRate(int index) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Set3DChannelPlaybackRate(int index, int rate) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetStreamChannelPlaybackRate(int index) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetStreamChannelPlaybackRate(int index, int rate) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_UpdateChannelReverb(int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Update2DChannelReverb(int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Update3DChannelReverb(int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_UpdateStreamChannelReverb(int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_UpdateEqs() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Get2DChannelLength(int index) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Get3DChannelLength(int index) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetStreamChannelLength(int index) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Get2DChannelSaveInfo(int index, struct snd_save_2D_sample_t *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Set2DChannelFromSaveInfo(int index, struct snd_save_2D_sample_t *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Get3DChannelSaveInfo(int index, struct snd_save_3D_sample_t *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetStreamChannelSaveInfo(int index, struct snd_save_stream_t *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetStreamChannelFromSaveInfo(int index, struct snd_save_stream_t *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DriverPreUpdate(int frametime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DriverPostUpdate(int frametime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Update2DChannel(int i, int frametime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Update3DChannel(int i, int frametime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SND_UpdateStreamSourceChannel(int i, int frametime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_UpdateStreamChannel(int i, int frametime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetDriverCPUPercentage() -> int
{

}

#endif // __UNIMPLEMENTED__
