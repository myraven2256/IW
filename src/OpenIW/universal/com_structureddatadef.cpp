//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto StructuredData_GetVersion(const struct StructuredDataDef *def) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_GetFormatChecksum(const struct StructuredDataDef *def) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_GetDataVersion(const struct StructuredDataBuffer *buffer) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_GetDataFormatChecksum(const struct StructuredDataBuffer *buffer) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_SetDataVersion(const struct StructuredDataDef *def, struct StructuredDataBuffer *buffer) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_InitializeLookup(struct StructuredDataDef *def, struct StructuredDataLookup *lookup) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_LookupWithInt(struct StructuredDataLookup *lookup, int value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LookupStructProperty(struct StructuredDataLookup *lookup, const char *value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LookupEnumEntryFromString(struct StructuredDataEnum *enumDef, const char *value, int *result) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LookupEnumEntryFromIndex(struct StructuredDataEnum *enumDef, int index) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LookupEnumArray(struct StructuredDataLookup *lookup, const char *value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_LookupWithString(struct StructuredDataLookup *lookup, const char *value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_GetLookupState(const struct StructuredDataLookup *lookup) -> enum LookupState
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_GetLookupError(const struct StructuredDataLookup *lookup) -> enum LookupError
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_GetLookupExpectedType(const struct StructuredDataLookup *lookup) -> enum LookupExpectation
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_GetLookupResultType(const struct StructuredDataLookup *lookup) -> enum LookupResultDataType
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_GetIntermediateType(const struct StructuredDataLookup *lookup) -> enum StructuredDataDefIntermediateType
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_GetArraySize(const struct StructuredDataLookup *lookup) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_GetMaxStringSize(const struct StructuredDataLookup *lookup) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto StructuredData_GetIntAtOffset(struct StructuredDataType *type, unsigned int offset, const struct StructuredDataBuffer *buffer) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto StructuredData_GetByteAtOffset(struct StructuredDataType *type, unsigned int offset, const struct StructuredDataBuffer *buffer) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto StructuredData_GetBoolAtOffset(struct StructuredDataType *type, unsigned int offset, const struct StructuredDataBuffer *buffer) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto StructuredData_GetEnumValueAtOffset(struct StructuredDataDef *def, struct StructuredDataType *type, unsigned int offset, const struct StructuredDataBuffer *buffer) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto StructuredData_GetStringAtOffset(struct StructuredDataType *type, unsigned int offset, const struct StructuredDataBuffer *buffer) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto StructuredData_GetFloatAtOffset(struct StructuredDataType *type, unsigned int offset, const struct StructuredDataBuffer *buffer) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto StructuredData_GetShortAtOffset(struct StructuredDataType *type, unsigned int offset, const struct StructuredDataBuffer *buffer) -> short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_GetInt(const struct StructuredDataLookup *lookup, const struct StructuredDataBuffer *buffer) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_GetBool(const struct StructuredDataLookup *lookup, const struct StructuredDataBuffer *buffer) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_GetString(const struct StructuredDataLookup *lookup, const struct StructuredDataBuffer *buffer) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_GetFloat(const struct StructuredDataLookup *lookup, const struct StructuredDataBuffer *buffer) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_GetShort(const struct StructuredDataLookup *lookup, const struct StructuredDataBuffer *buffer) -> short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ModifyByte(unsigned char *data, unsigned char *modifiedFlags, int byteIndex, unsigned char newValue) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_SetInt_FlagModified(const struct StructuredDataLookup *lookup, struct StructuredDataBuffer *buffer, unsigned char *modifiedFlags, int value) -> enum StructuredData_SetResult
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_SetBool_FlagModified(const struct StructuredDataLookup *lookup, struct StructuredDataBuffer *buffer, unsigned char *modifiedFlags, bool value) -> enum StructuredData_SetResult
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_SetString_FlagModified(const struct StructuredDataLookup *lookup, struct StructuredDataBuffer *buffer, unsigned char *modifiedFlags, const char *value) -> enum StructuredData_SetResult
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_SetFloat_FlagModified(const struct StructuredDataLookup *lookup, struct StructuredDataBuffer *buffer, unsigned char *modifiedFlags, float value) -> enum StructuredData_SetResult
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_SetShort_FlagModified(const struct StructuredDataLookup *lookup, struct StructuredDataBuffer *buffer, unsigned char *modifiedFlags, short value) -> enum StructuredData_SetResult
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_SetInt(const struct StructuredDataLookup *lookup, struct StructuredDataBuffer *buffer, int value) -> enum StructuredData_SetResult
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_SetBool(const struct StructuredDataLookup *lookup, struct StructuredDataBuffer *buffer, bool value) -> enum StructuredData_SetResult
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_SetString(const struct StructuredDataLookup *lookup, struct StructuredDataBuffer *buffer, const char *value) -> enum StructuredData_SetResult
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_SetFloat(const struct StructuredDataLookup *lookup, struct StructuredDataBuffer *buffer, float value) -> enum StructuredData_SetResult
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_SetShort(const struct StructuredDataLookup *lookup, struct StructuredDataBuffer *buffer, short value) -> enum StructuredData_SetResult
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_ClearStructOrArray(const struct StructuredDataLookup *lookup, struct StructuredDataBuffer *buffer, unsigned char *modifiedFlags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto StructuredData_AnyBoolTrueInArray_r(struct StructuredDataDef *def, struct StructuredDataType *type, int offset, const struct StructuredDataBuffer *buffer) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_AnyBoolTrueInArray(struct StructuredDataLookup *lookup, const struct StructuredDataBuffer *buffer, bool *result) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto StructuredData_TranslateDefinition_r(unsigned int depth, const char *name, const struct StructuredDataLookup *lookupOld, const struct StructuredDataLookup *lookupNew, const struct StructuredDataBuffer *bufferOld, struct StructuredDataBuffer *bufferNew) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_TranslateDefinition(struct StructuredDataDef *oldDef, struct StructuredDataDef *newDef, struct StructuredDataBuffer *buffer) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_UpdateVersion(struct StructuredDataDefSet *defSet, struct StructuredDataBuffer *buffer, struct StructuredDataDef *matchingDef) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto StructuredData_PrintAllData_r(struct StructuredDataDef *def, struct StructuredDataType *type, const char *name, int depth, unsigned int offset, const struct StructuredDataBuffer *buffer) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_PrintAllData(struct StructuredDataDef *def, const struct StructuredDataBuffer *buffer) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredDataDefSet_GetAsset(const char *filename) -> struct StructuredDataDefSet*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredDataDef_GetAsset(const char *filename, unsigned int maxSize) -> struct StructuredDataDef*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredDataDef_GetSize(const char *filename) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_NavigateFromCmd(struct StructuredDataDef *def, function *argc, function *argv, struct StructuredDataLookup *lookup, int *finalCmdIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_NavigateByStrings(struct StructuredDataLookup *lookup, const char *const*values, int valueCount, int *finalStringIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StructuredData_PrintLookup(struct StructuredDataLookup *lookup, const struct StructuredDataBuffer *buffer) -> void
{

}

#endif // __UNIMPLEMENTED__
