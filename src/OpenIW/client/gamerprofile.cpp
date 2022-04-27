//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_xenon_gamerprofile() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_GetProfileSettings(int controllerIndex) -> const struct GamerSettingState*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_IsProfileLoggedIn(int controllerIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_WasErrorOnRead(int controllerIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_CheckForErrors(unsigned long error, int controllerIndex, char *ioMode) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DebugReportProfileDVars(const char *headerMsg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_ReadShort(const char **const buf, unsigned int *const size) -> short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_WriteShort(char **const buf, unsigned int *const size, const short value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_ReadString(char *const dest, const unsigned int maxDestSize, const char **srcBuf, unsigned int *const srcSize) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_WriteString(const char *const src, char **const destBuf, unsigned int *const destSize) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_ParseBinaryProfile<GamerSettingExeConfig, GamerSettingExeConfigStrings>(int controllerIndex, const char *settingBuf, unsigned int size, struct GamerSettingExeConfig *config, struct GamerSettingExeConfigStrings *strings, const struct gpfield_t *stringFields, unsigned int fieldCount) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_ParseBinaryExeProfile(int controllerIndex, const char *settingBuf, unsigned int size) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_ParseBinaryCommonProfile(int controllerIndex, const char *settingBuf, unsigned int size) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_CreateBindingsConfigEx(int controllerIndex, char *destBuf, unsigned int destSize, const void *const config, const unsigned int structSize, const void *strings, const struct gpfield_t *stringFields, unsigned int fieldCount) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_CreateExeBindingsConfig(int controllerIndex, char *buf, unsigned int size) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_CreateCommonBindingsConfig(int controllerIndex, char *buf, unsigned int size) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_WriteSettings(int controllerIndex, const char *commonBuffer, unsigned int commonSize, const char *exeBuffer, unsigned int exeSize) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_SaveProfile(int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_ResetDvarsFromList(const struct GamerProfileSetting *gamerProfileSettingsList) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_ResetCommonDvars() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_ResetXProfileDvars() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_ResetMPDvars() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_GetPlaylistNum(int controllerIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_SetPlaylistNum(int controllerIndex, int playlistNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_ExecControllerBindings(int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_UpdateDvarsFromProfile(int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_UpdateProfilePlayTime(int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_GetPlayTimeSP(int controllerIndex) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_GetPlayTimeSO(int controllerIndex) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_GetPlayTimeMP(int controllerIndex) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_UpdateProfileFromDvars(int controllerIndex, enum profileWriteState_t profileWriteState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_UpdateCommand(int controllerIndex, bool force) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_SetPlayerHasPlayedBefore(int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_ApplySettingToProfile(int controllerIndex, unsigned long settingID, struct _XUSER_PROFILE_SETTING *profileSetting) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_UpdateMotd(int controllerIndex, const char *motd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_GetClanName(int controllerIndex) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_ProcessReadResults(int controllerIndex, struct _XUSER_READ_PROFILE_SETTING_RESULT *readResults) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_ReadDelayedXProfileSettings(int controllerIndex, unsigned long *bytesRead, struct _XUSER_READ_PROFILE_SETTING_RESULT *readResults) -> unsigned long
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_ReadXProfileSettings(int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_LoadSettings(int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_ResetProfileDvars(int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_InitAllProfiles() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_LogInProfile(int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_LogOutProfile(int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GamerProfile_GetDvarValueFromList(const char *fieldName, const struct GamerProfileSetting *list) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_GetDvarSettingByName(const char *settingName) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_GetDataType(int dataIndex) -> enum GamerProfileDataType
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_GetDataIndexByName(const char *settingName) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_GetDataByName(const int controllerIndex, const char *settingName) -> struct GamerProfileData
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_SetData(const int controllerIndex, int dataIndex, struct GamerProfileData data) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_DebugDrawFullscreenInfo() -> void
{

}

#endif // __UNIMPLEMENTED__
