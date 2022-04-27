//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto HavePlaylists(const int controllerIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_CountEntries(const int localControllerIndex, const int playlistNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CustomGameTypes_GetGametypeCount() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_FindGametype(const char *gametypeInternalName) -> struct playlistGametype*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CustomGameTypes_GetGametypeLocalizedName(const int index) -> char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CustomGameTypes_GetGametypeInternalName(const int index) -> char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CustomGameTypes_IsHardcore(const int index) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ParseIntRange(const char *field, const char **pData, int min, int max, int lineNumber) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_ParsePlaylists(const char *buffer) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetPlaylistCount() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_ValidatePlaylistNum() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetPlaylistIdForNum(const int controllerIndex, const int num) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetPlaylistName(const int controllerIndex, const int playlistId) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetPlaylistDescription(const int controllerIndex, const int playlistId) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_IsLocked(const int controllerIndex, const int playlistId, const int xp, const int prestige, const int partyCount) -> enum PlaylistLockState
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetMapPacksUsedByPlaylist(const int playlistId) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_DoWeHaveRequiredDLC(const int controllerIndex, const int playlistId) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_AnyRequiredMapPacksEnabled(const int controllerIndex, const int playlistId) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_ResetWeights(const int playlistId) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Playlist_CalcTotalWeights(const int playlistId, const int lastSelection) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Playlist_FindEntryByWeight(const int playlistId, const int selectedWeight, const int lastSelection) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Playlist_MarkEntryPlayed(const int playlistId, const int entryNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_ChooseEntry(const int localControllerIndex, const int lastSelection) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_MigrateHost(const int localControllerIndex, unsigned char *lastEntries, int numEntries) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_RunRules(const int localControllerIndex, const int entryNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetLocalizedGametypeName(const int localControllerIndex, const int entryNum) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetVersionNumber() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetUnlockXp(const int localControllerIndex, const int playlistId) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetMaxPartySize(const int localControllerIndex, const int playlistId) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetMinPartySize(const int localControllerIndex, const int playlistId) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetNumRounds(const int localControllerIndex, const int playlistId) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_JoinInProgressDisabled(const int localControllerIndex, const int playlistId) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_PartyBasedTeams(const int localControllerIndex, const int playlistId) -> bool
{

}

#endif // __UNIMPLEMENTED__
