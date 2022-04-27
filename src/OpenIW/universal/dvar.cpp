//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_dvar() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_CompareNames(const struct dvar_t *dvar0, const struct dvar_t *dvar1) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_Sort() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ForEach(function *callback, void *userData) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ForEachName(function *callback) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ForEachName_UNSAFE_LockBegin() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ForEachName_UNSAFE(function *callback) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ForEachName_UNSAFE_LockEnd() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ErrorCleanup() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetAtIndex(int index) -> const struct dvar_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetInAutoExec(bool inAutoExec) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_IsSystemActive() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto generateHashValue(const char *fname) -> long
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_IsValidName(const char *dvarName) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_AllocNameString(const char *name) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_FreeNameString(const char *name) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_CopyString(const char *string, union DvarValue *value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_WeakCopyString(const char *string, union DvarValue *value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_ShouldFreeCurrentString(struct dvar_t *dvar) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_ShouldFreeLatchedString(struct dvar_t *dvar) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_ShouldFreeResetString(struct dvar_t *dvar) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_FreeString(union DvarValue *value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_AssignCurrentStringValue(struct dvar_t *dvar, union DvarValue *dest, const char *string) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_AssignLatchedStringValue(struct dvar_t *dvar, union DvarValue *dest, const char *string) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_AssignResetStringValue(struct dvar_t *dvar, union DvarValue *dest, const char *string) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_EnumToString(const struct dvar_t *dvar) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_IndexStringToEnumString(const struct dvar_t *dvar, const char *indexString) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ValueToString(const struct dvar_t *dvar, union DvarValue value) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_StringToBool(const char *string) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_StringToInt(const char *string) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_StringToFloat(const char *string) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_StringToVec2(const char *string, float *vector) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_StringToVec3(const char *string, float *vector) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_StringToVec4(const char *string, float *vector) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_StringToEnum(const union DvarLimits *domain, const char *string) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_StringToColor(const char *string, unsigned char *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_StringToValue(const unsigned char type, const union DvarLimits domain, const char *string) -> union DvarValue
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_DisplayableValue(const struct dvar_t *dvar) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_DisplayableResetValue(const struct dvar_t *dvar) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_DisplayableLatchedValue(const struct dvar_t *dvar) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_ClampVectorToDomain(float *vector, int components, float min, float max) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_VectorInDomain(const float *vector, int components, float min, float max) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_ClampValueToDomain(unsigned char type, union DvarValue value, const union DvarValue resetValue, const union DvarLimits domain) -> union DvarValue
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ValueInDomain(unsigned char type, union DvarValue value, union DvarLimits domain) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_VectorDomainToString(int components, union DvarLimits domain, char *outBuffer, int outBufferLen) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_DomainToString_Internal(unsigned char type, union DvarLimits domain, char *outBuffer, int outBufferLen, int *outLineCount) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_DomainToString(unsigned char type, union DvarLimits domain, char *outBuffer, int outBufferLen) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_DomainToString_GetLines(unsigned char type, union DvarLimits domain, char *outBuffer, int outBufferLen, int *outLineCount) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_PrintDomain(unsigned char type, union DvarLimits domain) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_ValuesEqual(unsigned char type, union DvarValue val0, union DvarValue val1) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_SetLatchedValue(struct dvar_t *dvar, union DvarValue value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_HasLatchedValue(const struct dvar_t *dvar) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_SetVariant(struct dvar_t *dvar, union DvarValue value, enum DvarSetSource source) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_FindMalleableVar(const char *dvarName) -> struct dvar_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_FindVar(const char *dvarName) -> const struct dvar_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ClearModified(const struct dvar_t *dvar) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetModified(const struct dvar_t *dvar) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_UpdateEnumDomain(const struct dvar_t *dvar, const char **stringTable) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetBool(const char *dvarName) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetInt(const char *dvarName) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetFloat(const char *dvarName) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetVec3(const char *dvarName, float *result) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetString(const char *dvarName) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetVariantString(const char *dvarName) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetVariantStringWithDefault(const char *dvarName, const char *defaultValue) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetUnpackedColor(const struct dvar_t *dvar, float *expandedColor) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetUnpackedColorByName(const char *dvarName, float *expandedColor) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_Shutdown() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_PerformUnregistration(struct dvar_t *dvar) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_UpdateResetValue(struct dvar_t *dvar, union DvarValue value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ChangeResetValue(const struct dvar_t *dvar, union DvarValue value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_UpdateValue(struct dvar_t *dvar, union DvarValue value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_MakeExplicitType(struct dvar_t *dvar, const char *dvarName, unsigned char type, unsigned short flags, union DvarValue resetValue, union DvarLimits domain) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_GetReinterpretedResetValue(struct dvar_t *__formal, union DvarValue value, unsigned char type, unsigned short flags, union DvarLimits domain) -> union DvarValue
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_ReinterpretDvar(struct dvar_t *dvar, const char *dvarName, unsigned char type, unsigned short flags, union DvarValue value, union DvarLimits domain) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_MakeLatchedValueCurrent(const struct dvar_t *dvar) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ClearLatchedValue(const struct dvar_t *dvar) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_Reregister(struct dvar_t *dvar, const char *dvarName, unsigned char type, unsigned short flags, union DvarValue resetValue, union DvarLimits domain, const char *description) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_RegisterNew(const char *dvarName, unsigned char type, unsigned short flags, union DvarValue value, union DvarLimits domain, const char *description) -> const struct dvar_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_RegisterFlags(const char *dvarName, int flags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_RegisterVariant(const char *dvarName, unsigned char type, unsigned short flags, union DvarValue value, union DvarLimits domain, const char *description) -> const struct dvar_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_RegisterBool(const char *dvarName, bool value, unsigned short flags, const char *description) -> const struct dvar_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_RegisterInt(const char *dvarName, int value, int min, int max, unsigned short flags, const char *description) -> const struct dvar_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_RegisterFloat(const char *dvarName, float value, float min, float max, unsigned short flags, const char *description) -> const struct dvar_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_RegisterVec2(const char *dvarName, float x, float y, float min, float max, unsigned short flags, const char *description) -> const struct dvar_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_RegisterVec3(const char *dvarName, float x, float y, float z, float min, float max, unsigned short flags, const char *description) -> const struct dvar_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_RegisterVec3Color(const char *dvarName, float x, float y, float z, float max, unsigned short flags, const char *description) -> const struct dvar_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_RegisterVec4(const char *dvarName, float x, float y, float z, float w, float min, float max, unsigned short flags, const char *description) -> const struct dvar_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_RegisterString(const char *dvarName, const char *value, unsigned short flags, const char *description) -> const struct dvar_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_RegisterEnum(const char *dvarName, const char **valueList, int defaultIndex, unsigned short flags, const char *description) -> const struct dvar_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_RegisterColor(const char *dvarName, float r, float g, float b, float a, unsigned short flags, const char *description) -> const struct dvar_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetBoolFromSource(const struct dvar_t *dvar, bool value, enum DvarSetSource source) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetIntFromSource(const struct dvar_t *dvar, int value, enum DvarSetSource source) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetFloatFromSource(const struct dvar_t *dvar, float value, enum DvarSetSource source) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetVec2FromSource(const struct dvar_t *dvar, float x, float y, enum DvarSetSource source) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetVec3FromSource(const struct dvar_t *dvar, float x, float y, float z, enum DvarSetSource source) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetVec4FromSource(const struct dvar_t *dvar, float x, float y, float z, float w, enum DvarSetSource source) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_SetStringFromSource(const struct dvar_t *dvar, const char *string, enum DvarSetSource source) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetColorFromSource(const struct dvar_t *dvar, float r, float g, float b, float a, enum DvarSetSource source) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetBool(const struct dvar_t *dvar, bool value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetInt(const struct dvar_t *dvar, int value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetFloat(const struct dvar_t *dvar, float value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetVec2(const struct dvar_t *dvar, float x, float y) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetVec3(const struct dvar_t *dvar, float x, float y, float z) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetVec4(const struct dvar_t *dvar, float x, float y, float z, float w) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetString(const struct dvar_t *dvar, const char *value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetColor(const struct dvar_t *dvar, float r, float g, float b, float a) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_SetFromStringFromSource(const struct dvar_t *dvar, const char *string, enum DvarSetSource source) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetFromString(const struct dvar_t *dvar, const char *string) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetBoolByName(const char *dvarName, bool value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetIntByName(const char *dvarName, int value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetFloatByName(const char *dvarName, float value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetVec2ByName(const char *dvarName, float x, float y) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetVec3ByName(const char *dvarName, float x, float y, float z) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetVec4ByName(const char *dvarName, float x, float y, float z, float w) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetStringByName(const char *dvarName, const char *value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetColorByName(const char *dvarName, float r, float g, float b, float a) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetFromStringByNameFromSource(const char *dvarName, const char *string, enum DvarSetSource source) -> const struct dvar_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetFromStringByName(const char *dvarName, const char *string) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetCommand(const char *dvarName, const char *string) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_AddFlags(const struct dvar_t *dvar, int flags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_Reset(const struct dvar_t *dvar, enum DvarSetSource setSource) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto String_Hash(const char *string) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_GetValueHash(const struct dvar_t *dvar) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SetCheatState() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_Init() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ResetScriptInfo() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_AnyLatchedValues() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_SaveDvars(struct MemoryFile *memFile, unsigned int filter) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_LoadDvarsAddFlags(struct MemoryFile *memFile, unsigned short flags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_LoadDvars(struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_LoadScriptInfo(struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ResetDvars(unsigned int filter, enum DvarSetSource setSource) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_SaveDvarsToBuffer(const char **dvarnames, unsigned int numDvars, char *buffer, unsigned int bufsize) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_LoadDvarsFromBuffer(const char **dvarnames, unsigned int numDvars, const char *buffer, const char *filename) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_CountServerDemoDvars(const struct dvar_t *dvar, void *userData) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_CountServerDemoDvars() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_HashServerDemoDvars(const struct dvar_t *dvar, void *userData) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_ChecksumServerdemoDvars() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Dvar_PrintServerDemoDvars(const struct dvar_t *dvar, void *userData) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Dvar_PrintServerdemoDvars() -> void
{

}

#endif // __UNIMPLEMENTED__
