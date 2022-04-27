//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto LB_XUserDataToInt(struct _XUSER_DATA *value) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LB_IntToXUserData(struct _XUSER_DATA *xdata, const int value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LB_CompareXUserStatsRowRanks(const void *r1, const void *r2) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LB_Enumerate(int controllerIndex, struct Leaderboard *lb, void *hEnum, void *pvBuffer, unsigned long cbBuffer, const int taskType) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LB_GetXUserStatsSpec(struct LeaderboardDef *lbDef, struct _XUSER_STATS_SPEC *spec) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LB_GetByRank(struct Leaderboard *lb, const int controllerIndex, const unsigned int topRank) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LB_GetByPlayer(struct Leaderboard *lb, const int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LB_GetFriendStats(const int controllerIndex, struct Leaderboard *lb) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LB_GetFriends(struct Leaderboard *lb, const int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LB_SortXUserStatsByRank(struct _XUSER_STATS_READ_RESULTS *stats) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LB_CalcPlayerIndex(const int localControllerIndex, struct _XUSER_STATS_READ_RESULTS *stats) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LB_ClearPlayerStats(const int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LB_UploadPlayersCmd() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LB_FlushCmd() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LB_UploadPlayerDataComplete(const int slot) -> enum taskCompleteResults
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LB_ReadLeaderboardComplete(const int slot) -> enum taskCompleteResults
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LB_GetFriendsComplete(const int slot) -> enum taskCompleteResults
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LB_CalcOffset(const int offset, struct Leaderboard *lb) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LB_UpdateLeaderboard(const int localClientNum, const int index) -> struct _XUSER_STATS_READ_RESULTS*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_Init_Platform() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_FeederCount(const int localClientNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_OnSelect(const int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LB_GetXUserCol(struct _XUSER_STATS_ROW *row, int colId) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_UploadPlayerData_Platform(const int localControllerIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_CheckOngoingTasks() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_EndOngoingTasks() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HandleNumber(struct LbColumnDef *lbColDef, struct _XUSER_STATS_ROW *row, struct Material **material) -> char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HandleTime(struct LbColumnDef *lbColDef, struct _XUSER_STATS_ROW *row, struct Material **material) -> char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HandleLevelDisplay(struct LbColumnDef *lbColDef, struct _XUSER_STATS_ROW *row, struct Material **material) -> char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HandleLevelIcon(struct LbColumnDef *lbColDef, struct _XUSER_STATS_ROW *row, struct Material **material) -> char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HandlePercent(struct LbColumnDef *lbColDef, struct _XUSER_STATS_ROW *row, struct Material **material) -> char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_FeederItemText_Platform(const int localClientNum, int index, struct LbColumnDef *lbColDef, struct Material **material) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_GetCol(const char *lbName, const char *colName, const unsigned __int64 xuid, struct LbGetColData *colData, struct overlappedTask *task) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_GetColComplete(struct overlappedTask *task) -> enum taskCompleteResults
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LB_GetColString(struct LbGetColData *colData) -> const char*
{

}

#endif // __UNIMPLEMENTED__
