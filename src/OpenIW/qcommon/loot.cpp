//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto GetLevel(const struct StructuredDataBuffer *buffer) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsAllRequiredLootUnlocked(const struct StructuredDataBuffer *buffer, const struct StringTable *unlockTable, const char *requiredLootList) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CheckValidRequiredLootList(const struct StringTable *unlockTable, const char *requiredLootList, int originalRow) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsLootWeaponUnlocked(const struct StructuredDataBuffer *buffer, const struct StringTable *unlockTable, const char *lootItemName) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetLootFromUnlockTable(const struct StringTable *unlockTable, int row, struct Loot *result) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IsChallengeComplete(const struct StructuredDataBuffer *buffer, const char *challengeBaseName) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_IsItemUnlockedFromTable(const struct StructuredDataBuffer *buffer, const struct StringTable *unlockTable, int row) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveStorage_IsItemUnlockedFromTable_LocalClient(int localClientNum, const struct StringTable *unlockTable, int row) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CheckValidItem(const struct StringTable *unlockTable, int row) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Loot_CheckForErrors() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_InitItemsUnlocked(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FindItemsUnlockedLastGame(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetNew(struct StructuredDataBuffer *buffer, const char *arrayName, const char *itemName, char *errBuf, int errBufSize) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetNew_LocalClient(int localClientNum, const char *arrayName, const char *itemName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetWeaponPartNew(struct StructuredDataBuffer *buffer, const char *arrayName, const char *weaponName, const char *partName, char *errBuf, int errBufSize) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetWeaponPartNew_FullName(struct StructuredDataBuffer *buffer, const char *arrayName, const char *itemName, char *errBuf, int errBufSize) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetWeaponPartNew_LocalClient(int localClientNum, const char *arrayName, const char *itemName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetChallengeTier(const char *challengeName, char *errBuf, int errBufSize) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetChallengeTierNew(struct StructuredDataBuffer *buffer, const char *challengeName, char *errBuf, int errBufSize) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetChallengeTierNew_LocalClient(int localClientNum, const char *challengeName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_MarkUnlockedItemsNew(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Loot_DumpUnlockedItems(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Mail_LookupMailIndex(struct StructuredDataLookup *lookup, int mailIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Mail_LookupMailProperty(struct StructuredDataLookup *lookup, const char *propertyName, enum LookupResultDataType expectedResultType) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Mail_Lookup(struct StructuredDataLookup *lookup, int mailIndex, const char *propertyName, enum LookupResultDataType expectedResultType) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mail_GetArrivalTime(int localClientNum, int mailIndex) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Mail_CompareArrivalTime(const unsigned char &indexA, const unsigned char &indexB) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mail_SortMailIndices(int localClientNum, unsigned char *begin, unsigned char *end) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mail_GetMailArraySize() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Loot_Unlock(struct StructuredDataBuffer *buffer, const struct Loot *loot) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mail_GetCurrentTime() -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mail_OpenSelected(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mail_DeleteSelected(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mail_DoLottery(int localClientNum, function *randomFunction) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetLocalizedTimeString(unsigned int seconds) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mail_FeederItemText(const int localClientNum, int mailIndex, int column, struct Material **material) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mail_GetSelectedSubject(int localClientNum) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mail_GetSelectedFrom(int localClientNum) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mail_GetSelectedReceived(int localClientNum) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mail_GetSelectedBody(int localClientNum) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mail_GetSelectedLoot(int localClientNum) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mail_GetLootType(int localClientNum) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mail_SelectedGivesLoot(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mail_SelectedRanLottery(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mail_GetTimeToFollowup(int localClientNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mail_AnyNewMail(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Loot_GetLotteryLootLocalized(int localClientNum) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Loot_GetRandomLoot(const struct StructuredDataBuffer *buffer, int lootTier, const char *mapName, const char *playlistLootGroup, function *randomFunction) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mail_CreateLootMail(struct StructuredDataBuffer *buffer, unsigned char *modifiedFlags, const char *lootName, function *randomFunction) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Loot_RegisterDvars() -> void
{

}

#endif // __UNIMPLEMENTED__
