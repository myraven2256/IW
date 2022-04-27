//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto UI_GetClientInfo(int localClientNum) -> struct uiInfo_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetLocalVarsContext(int localClientNum) -> struct UILocalVarContext*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetClientDC(int localClientNum) -> struct UiContext*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_RegisterDvars() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_ui_main() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_AssetCache() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SetScissorRect(const struct ScreenPlacement *scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ClearScissorRect() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawSides(const struct ScreenPlacement *scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float size, const float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawTopBottom(const struct ScreenPlacement *scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float size, const float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawRect(const struct ScreenPlacement *scrPlace, float x, float y, float width, float height, int horzAlign, int vertAlign, float size, const float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawHighlightRect(const struct ScreenPlacement *scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float size, const float *hiColor, const float *loColor) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_TextWidth(const char *text, int maxChars, struct Font_s *font, float scale) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_TextHeight(struct Font_s *font, float scale) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawText(const struct ScreenPlacement *scrPlace, const char *text, int maxChars, struct Font_s *font, float x, float y, int horzAlign, int vertAlign, float scale, const float *color, int style) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawTextWithGlow(const struct ScreenPlacement *scrPlace, const char *text, int maxChars, struct Font_s *font, float x, float y, int horzAlign, int vertAlign, float scale, const float *color, int style, const float *glowColor, bool subtitle, bool cinematic, struct Material *fxMaterial, struct Material *fxMaterialGlow, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawTextNoSnap(const struct ScreenPlacement *scrPlace, const char *text, int maxChars, struct Font_s *font, float x, float y, int horzAlign, int vertAlign, float scale, const float *color, int style) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawTextWithCursor(const struct ScreenPlacement *scrPlace, const char *text, int maxChars, struct Font_s *font, float x, float y, int horzAlign, int vertAlign, float scale, const float *color, int style, int cursorPos, char cursor) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetFontHandle(const struct ScreenPlacement *scrPlace, int fontEnum, float scale) -> struct Font_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_UpdateTime(int localClientNum, int realtime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawBuildNumber(const int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_RefreshViewport(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_RefreshFullscreen(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Shutdown(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetMenuBuffer_FastFile(const char *filename) -> char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetMenuBuffer(const char *filename) -> char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Load_ScriptMenuInternal(const char *pszMenu, int imageTrack) -> struct MenuList*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Load_ScriptMenu(int localClientNum, const char *pszMenu, int imageTrack) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_GetLevelShot(int index) -> struct Material*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_DrawMapCustomData(int localClientNum, const struct rectDef_s *rect, struct Font_s *font, float scale, const float *color, int textStyle, int itemAlignment, const char *name) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetMapDisplayName(const char *pszMap) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetCurrentMapName() -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetCurrentMapImage() -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetCurrentMapCustom(const char *customField) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetMapDisplayNameFromPartialLoadNameMatch(const char *mapName, int *mapLoadNameLen) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetGameTypeDisplayName(const char *pszGameType) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OwnerDrawWidth(int ownerDraw, struct Font_s *font, float scale) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_BuildPlayerList(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_BuildCustomGameTypeList(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_DrawKeyBindStatus(int localClientNum, struct rectDef_s *rect, struct Font_s *font, float scale, float *color, int textStyle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawMapLevelshot(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_LoadIngameMenus(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SetMap(const char *mapname, const char *gametype) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_DrawLocalTalking(struct SessionData *session, int localClientNum, const struct rectDef_s *rect, const float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetTalkerClientNum(int localClientNum, const int num) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_DrawTalkerNum(int localClientNum, const int num, struct rectDef_s *rect, struct Font_s *font, float *color, float textScale, int style) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_DrawReservedSlots(const int localClientNum, struct rectDef_s *rect, struct Font_s *font, float *color, float textScale, int style) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_DrawLoggedInUser(const struct ScreenPlacement *scrPlace, struct rectDef_s *rect, struct Font_s *font, float scale, float *color, int textStyle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_DrawLoggedInUserName(const struct ScreenPlacement *scrPlace, struct rectDef_s *rect, struct Font_s *font, float scale, float *color, int textStyle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetXpLockDescription(const int localClientNum, const int playlistId) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_DrawPlaylistDescription(const int localClientNum, struct rectDef_s *rect, struct Font_s *font, float *color, float textScale, int style, int textAlignMode) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OwnerDraw(int localClientNum, float x, float y, float w, float h, int horzAlign, int vertAlign, float text_x, float text_y, int ownerDraw, int ownerDrawFlags, int itemAlignment, float special, struct Font_s *font, float scale, float *color, struct Material *material, int textStyle, struct rectDef_s parentRect, int textAlignMode, const char *name) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OwnerDrawVisible(int flags) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OwnerDrawHandleKey(int ownerDraw, int flags, float *special, int key) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_ServersQsortCompare(const void *arg1, const void *arg2) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_ServersSort(int column, int force) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CheckExecKey(int localClientNum, int key) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_VerifyLanguage() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_UpdateDisplayServers(struct uiInfo_s *uiInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_GetOpenOrCloseMenuOnDvarArgs(const char **args, const char *cmd, char *dvarName, int dvarNameLen, char *testValue, int testValueLen, char *menuName, int menuNameLen) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_DvarValueTest(const char *cmd, const char *dvarName, const char *testValue, bool wantMatch) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_OpenMenuOnDvar(struct uiInfo_s *uiInfo, const char *cmd, const char *menuName, const char *dvarName, const char *testValue) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_CloseMenuOnDvar(struct uiInfo_s *uiInfo, const char *cmd, const char *menuName, const char *dvarName, const char *testValue) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_RunMenuScript(int localClientNum, const char **args, const char *actualScript) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_InsertServerIntoDisplayList(int num, int position) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_BinaryServerInsertion(int num) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_ClearDisplayedServers() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_BuildServerDisplayList(struct uiInfo_s *uiInfo, int force) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_BuildServerStatus(struct uiInfo_s *uiInfo, int force) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederCount(int localClientNum, float feederID) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_SelectedMap(int index) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_GetListIndexFromMapIndex(int testMapIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_UpdatePendingPings(struct uiInfo_s *uiInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UpdatePartyDvars(const int localClientNum, const unsigned int index, const struct PartyData *party, unsigned __int64 xuid) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemText(int localClientNum, struct itemDef_s *item, const float feederID, int index, int column, float *s0, float *t0, float *s1, float *t1, struct Material **material) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederDoubleClick(int localClientNum, float feederID, int index) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemEnabled(int localClientNum, float feederID, int index) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemImage(const float feederID, int index) -> struct Material*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederItemColor(int localClientNum, struct itemDef_s *item, const float feederID, int index, int column, float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederBackColor(int localClientNum, struct itemDef_s *item, const float feederID, int index, float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OverrideCursorPos(int localClientNum, struct itemDef_s *item) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FeederSelection(int localClientNum, float feederID, int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_GetGameTypesList_FastFile() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_UpdateGameTypesList() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetGameTypesList() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetRandomGametype() -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetGametypeCount() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetCustomGametypeCount() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Mail_UpdateMail(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Mail_GetUpdateTime(int localClientNum) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Mail_AnyMailSelected(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Mail_GetSelectedMailIndex(int localClientNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Mail_DeleteSelected(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Pause(int localClientNum, int b) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OpenMenu_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ListMenus_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_SelectStringTableEntryInDvar_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_VerifyString(const char *str, const wchar_t *strOrig) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LoadCustomModeDvarNames(const char **dvarNames, char *dvarBuffer) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_CustomModeSaveToBuffer(char *buffer, unsigned int buflen) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_CustomModeLoadFromBuffer(char *buffer) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CustomModeSetCancelState_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CustomModeNew_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CustomModeKeyboard_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ShowKeyboard(int controllerIndex, const char *title, const char *defaultText, int maxlen, function *callback) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CallKeyboardCallback(int localClientNum, char *resultString) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CallKeyboardCallbackCancelled(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CustomModeDelete_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetLocaleString(unsigned long locale) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto stripSpaces(const char *string) -> char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_ClanKeyboardComplete(int localControllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ClanKeyboard_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EnumerateSaved_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CustomMode_Load_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CustomMode_Save_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_Keyboard_f_callback(int localClientNum, bool changeConfirmed, const char *resultString) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Keyboard_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CloseMenu_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_LoadMenuLists(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Init(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_KeyEvent(int localClientNum, int key, int down) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetActiveMenu(int localClientNum) -> enum uiMenuCommand_t
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetTopActiveMenuName(int localClientNum) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SetActiveMenu(int localClientNum, int menu) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_IsFullscreen(int localClientNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ShowAcceptInviteWarning(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Text_PaintCenter(const struct ScreenPlacement *scrPlace, const float x, const float y, struct Font_s *const font, const float scale, const float *color, const char *text, const float *glowColor) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Text_PaintCenterWithDots(const struct ScreenPlacement *scrPlace, const float x, const float y, struct Font_s *const font, const float scale, const float *color, const char *text, const float *glowColor) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetConnectInfoString(struct uiClientState_s *state) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawConnectScreen(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetBlurRadius(int localClientNum) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_StopServerRefresh() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_DoServerRefresh(struct uiInfo_s *uiInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_StartServerRefresh(int localClientNum, int full) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CheckStringTranslation(const char *reference, const char *translation) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SafeTranslateString(const char *reference) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SafeLocalizeTextMessage(const char *reference) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_AnyFullScreenMenuVisible(int localClientNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_AnyMenuActive(int localClientNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ReplaceConversionString(const char *sourceString, const char *replaceString) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ReplaceConversionInt(const char *sourceString, int replaceInt) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ReplaceConversionInts(const char *sourceString, int numInts, int *replaceInts) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FilterStringForButtonAnimation(char *str, unsigned int strMaxSize) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ReplaceConversions(const char *sourceString, struct ConversionArguments *arguments, char *outputString, int outputStringSize) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CloseAll(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CloseFocusedMenu(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_Popup(int localClientNum, const char *menu) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_PopupScriptMenu(int localClientNum, const char *menuName, bool useMouse) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ClosePopupScriptMenu(int localClientNum, bool allowResponse) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_AllowScriptMenuResponse(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CloseInGameMenu(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ReturnToSplitScreenMenu(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CloseAllMenus(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_IsMenuOpenAndVisible(const int localClientNum, const char *menuName) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_OpenMenu(int localClientNum, const char *menuName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_CloseMenu(int localClientNum, const char *menuName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EscMenu(int localClientNum, const char *menuName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_ShowReadingSaveDevicePopup(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_HideReadingSaveDevicePopup(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_BeginReadingDeviceUI(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_EndReadingSaveDeviceUI(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ShouldDrawCrosshair() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_MissingMapError() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_AmISelected(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_IsSelectedPlayerFriend(const int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_FindByName(const char *p) -> struct itemDef_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Test_PushButton_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Test_PushKey_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Test_GamepadButton_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_MyChangesSaveDynamicFlags() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_MyChangesRestoreDynamicFlags() -> void
{

}

#endif // __UNIMPLEMENTED__
