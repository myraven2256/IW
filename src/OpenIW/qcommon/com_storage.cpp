//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto LiveStorage_ShowResetStatsError(int controllerIndex, enum StatsSource statsSource) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_ResetStatsWithConfirmation(int controllerIndex, enum StatsSource statsSource, enum ResetStatsReason reason) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_ResetStatsCancel(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_ResetStatsConfirm(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_DiscardStats(const int controllerIndex, enum StatsSource statsSource) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_FinalizeStatsRead(const int controllerIndex, enum StatsSource statsSource, struct StructuredDataDef *def) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LiveStorage_SetCustomClassNames(const int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LiveStorage_PrestigeResetForCmd() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LiveStorage_GetRankForCmd() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_PersistentDataEnabled() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_GetPlayerUnlockDataBuffer(struct StructuredDataBuffer *result, const int controllerIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_GetActiveStatsSource(const int controllerIndex) -> enum StatsSource
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_ShouldReadOnlineStats(int localControllerIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_ShouldReadOfflineStats(int localControllerIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_ClientUsingOnlineStatsOffline(const int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_EnsureWeHaveStats_Online(const int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_EnsureWeHaveStats_Offline(const int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_EnsureWeHaveStats(const int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_ResetActiveStats(const int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_ResetStats_SetStatsSource(const int controllerIndex, enum StatsSource statsSource) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_ResetStats_ClearStatsSource(const int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_CheckNotResettingStats(const int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_WriteChecksumToBuffer(unsigned char *buffer, const int len) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_ResetStats(const int controllerIndex, enum StatsSource statsSource) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_SaveStats(const int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_OpenPlayerDataRead(const int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_FinalizeStatsReadCommon(const int controllerIndex, enum StatsSource statsSource) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LiveStorage_StatPrestigeResetCmd() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_FindCacItem(int itemIndex) -> const struct CaCItem*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ValidateSlotItem(int itemIndex, const int level, unsigned int typeMask) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_CaCHasOverkill(const int controllerIndex, int index) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_ValidateCaCStat(const int controllerIndex, int index, const int value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_ValidateSetStatCmd(int index, int value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_StatsInit(const int controllerIndex, bool clear) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_StatsInitCmd() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_SetLookedUpDataFromString(struct StructuredDataLookup *lookup, struct StructuredDataBuffer *buffer, unsigned char *modifiedFlags, const char *value) -> enum StructuredData_SetResult
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_MaySetPersistentData(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_DoWeHaveStatsForSource(const int controllerIndex, enum StatsSource statsSource) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_DoWeHaveStats(const int controllerIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_MaySetPersistentData_ControllerIndex(int controllerIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_EnsureMaySetPersistentData(int localClientNum, const char *debugInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PrintArgs() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_DataSetCmd() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_DataGetCmd() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LiveStorage_DataDumpCmd() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LiveStorage_DumpUnlockedItemsCmd() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LiveStorage_DataSetPrintStrings(const char *const*navStrings, int navStringCount, const char *value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LiveStorage_DataGetPrintStrings(const char *const*navStrings, int navStringCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LiveStorage_DataSetInternalString(const char *const*navStrings, int navStringCount, const char *value, struct StructuredDataBuffer *buffer, unsigned char *modifiedFlags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_DataSetInternalInt(const char *const*navStrings, int navStringCount, int value, struct StructuredDataBuffer *buffer, unsigned char *modifiedFlags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_DataSetInternalIntByName(const char *name, int value, struct StructuredDataBuffer *buffer, unsigned char *modifiedFlags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_PlayerDataSetIntByName(const int controllerIndex, const char *name, int value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LiveStorage_DataGetInternalLookup(struct StructuredDataLookup *lookup, const char *const*navStrings, int navStringCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LiveStorage_DataGetInternalString(const char *const*navStrings, int navStringCount, const struct StructuredDataBuffer *buffer) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_DataGetInternalInt(const char *const*navStrings, int navStringCount, const struct StructuredDataBuffer *buffer) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_DataGetInternalIntByName(const char *name, const struct StructuredDataBuffer *buffer) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ShowPopupGettingData(const int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_ShowPopupGettingDataIfNeeded(const int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_PlayerDataGetString(const int controllerIndex, const char *const*navStrings, int navStringCount) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_PlayerDataGetStringByName(const int controllerIndex, const char *name) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_PlayerDataGetInt(const int controllerIndex, const char *const*navStrings, int navStringCount) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_PlayerDataGetIntByName(const int controllerIndex, const char *name) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_ReadPlayerDataDef(unsigned char *buffer, int bufsize) -> struct StructuredDataDef*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_WritePlayerDataDef(unsigned char *buffer, int bufsize) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetStringForStat(int stat, const struct StatStringPair *pairs, int pairCount) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetStatForString(const char *string, const struct StatStringPair *pairs, int pairCount) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_GetStructuredDataForStat(int index, struct StructuredDataBuffer *buffer) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_SetStructuredDataForStat(int index, const int value, struct StructuredDataBuffer *buffer, unsigned char *modifiedFlags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_GetStat(const int controllerIndex, int index) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_SetStat(const int controllerIndex, int index, const int value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_UpdatePersistentDataVersion(const int controllerIndex, enum StatsSource statsSource, struct StructuredDataDef *def) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LiveStorage_SetPersistentDataVersion(const int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_GetPersistentDataVersion(const int controllerIndex, enum StatsSource statsSource) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_GetPersistentDataDefVersion() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_GetPersistentDataDefFormatChecksum() -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_NewUser_Common(const int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_RecordPlayTime(const int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_GetAndResetLastPlayTime(struct StructuredDataBuffer *buffer, unsigned char *modifiedFlags) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_EndGame(const int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_BeginGame(const int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_GetStatBuffer(const int controllerIndex) -> const unsigned char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_GetStableStatBuffer(const int controllerIndex) -> const unsigned char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_GetPersistentDataBufferForSource(const int controllerIndex, enum StatsSource statsSource) -> unsigned char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_GetPersistentDataBuffer(const int controllerIndex) -> unsigned char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_StatsWriteNeeded(const int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_StatsWriteNotNeeded(const int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_GettingStats(const int controllerIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_WaitForWriteStatsBuffer(const int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_NewUser(const int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_GetStatForCmd(int index) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_GetControllerForCmd(int index) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_TrySetStatForCmd(int index, int value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LiveStorage_StatSetCmd() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LiveStorage_StatGetCmd() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LiveStorage_StatGetInDvarCmd() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LiveStorage_UploadStatsCmd() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LiveStorage_ReadStatsCmd() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto InitRequiredTask(struct RequiredTask *task) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_InitCommon() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_Init() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_Shutdown() -> void
{

}

#endif // __UNIMPLEMENTED__
