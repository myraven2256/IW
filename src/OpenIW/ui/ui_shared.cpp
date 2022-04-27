//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto Item_GetRectPlacementX(int alignX, float x0, float containerWidth, float selfWidth) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_GetTextPlacementX(int alignX, float x0, float containerWidth, float selfWidth) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_GetRectPlacementY(int alignY, float y0, float containerHeight, float selfHeight) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_GetTextPlacementY(int alignY, float y0, float containerHeight, float selfHeight) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_Setup(struct UiContext *dc) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LerpColor(float *a, float *b, float *c, float t) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Color_Parse(const char **p, float *c[0x4]) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto String_Parse(const char **p, char *out, int len) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GradientBar_Paint(struct rectDef_s *rect, float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Fade(int *flags, float *f, float clamp, int *nextTime, int offsetTime, int bFlags, float fadeAmount, float fadeInAmount, struct UiContext *dc) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Window_Paint(struct UiContext *dc, struct windowDef_t *window, const struct ScreenPlacement *scrPlace, float scale, float alphaScale, float fadeAmount, float fadeInAmount, float fadeClamp, float fadeCycle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_ClearFocus(struct UiContext *dc, struct itemDef_s *item) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_ClearFocus(struct UiContext *dc, struct menuDef_t *menu) -> struct itemDef_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Menu_ItemsMatchingGroup(struct menuDef_t *menu, const char *name) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Menu_GetMatchingItemByNumber(struct itemDef_s *item, struct menuDef_t *menu, int index, const char *name) -> struct itemDef_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_SetColor(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_SetBackground(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Menu_FindItemByName(struct menuDef_t *menu, const char *p) -> struct itemDef_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetItemByName(const int localClientNum, const char *name) -> struct itemDef_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_SetItemColor(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Menu_ShowItemByName(int localClientNum, struct menuDef_t *menu, const char *p, int bShow) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Menu_FadeItemByName(int localClientNum, struct menuDef_t *menu, const char *p, int fadeOut) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Menus_RemoveFromOpenStack(struct UiContext *dc, struct menuDef_t *pMenu) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Menus_AddToOpenStack(struct UiContext *dc, struct menuDef_t *pMenu) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_MenuIsInStack(struct UiContext *dc, struct menuDef_t *menu) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_FindByName(const struct UiContext *dc, const char *p) -> struct menuDef_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_HideByName(const struct UiContext *dc, const char *menuName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_ShowByName(const struct UiContext *dc, const char *windowName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_NewsTicker_Init(struct UiContext *dc, struct itemDef_s *item) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_TextVScroll_Init(struct UiContext *dc, struct itemDef_s *item) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Menu_InitItems(struct UiContext *dc, struct menuDef_t *menu) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Menu_LoseFocusDueToOpen(struct UiContext *dc, struct menuDef_t *menu) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Menu_CallOnFocusDueToOpen(struct UiContext *dc, struct menuDef_t *menu) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Menu_GainFocusDueToClose(struct UiContext *dc, struct menuDef_t *menu, int oldMenuWasFullscreen) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Menu_RunCloseScript(struct UiContext *dc, struct menuDef_t *menu) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_ForceClose(struct UiContext *dc, struct menuDef_t *menu) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_CloseRequest(struct UiContext *dc, struct menuDef_t *menu) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_CloseByName(struct UiContext *dc, const char *p) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_EscByName(struct UiContext *dc, const char *p) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_SetFocusToItem(struct UiContext *dc, const char *menuName, const char *itemName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_CloseAll(struct UiContext *dc) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_CloseAllBehindMain(struct UiContext *dc) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_Show(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_Hide(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_FadeIn(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_FadeOut(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ShowMenu(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_HideMenu(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_Open(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_OpenForGameType(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_CloseForGameType(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ValidateStat(const int controllerIndex, int index, const int value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_StatSetUsingStatsTable(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_StatBitMaskGetArgs(struct UiContext *dc, struct itemDef_s *item, const char **args, int *statNum, int *bitMask) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_StatClearPerkGetArg(struct UiContext *dc, struct itemDef_s *item, const char **args, char *refString, const int refStringLen) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_StatClearPerkNew(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_StatClearBitMask(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_Close(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_CloseForAllPlayers(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_InGameOpen(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_InGameClose(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Menu_FocusFirstSelectableItem(struct UiContext *dc, struct menuDef_t *menu) -> struct itemDef_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_FocusFirstInMenu(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_SetFocus(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_SetFocusByDvar(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_SetDvar(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ExecHandler(int localClientNum, int controllerIndex, struct itemDef_s *item, const char **args, function *textCallback) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_AddTextWrapper(int clientNum, int controllerIndex, const char *text) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_Exec(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ExecNow(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ConditionalExecHandler(int localClientNum, struct itemDef_s *item, const char **args, function *shouldExec, function *textCallback) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ConditionalResponseHandler(int localClientNum, struct itemDef_s *item, const char **args, function *shouldRespond) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ExecIfStringsEqual(const char *dvarValue, const char *testValue) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ExecIfIntsEqual(const char *dvarValue, const char *testValue) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ExecIfFloatsEqual(const char *dvarValue, const char *testValue) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ExecOnDvarStringValue(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ExecOnDvarIntValue(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ExecOnDvarFloatValue(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ExecNowOnDvarStringValue(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ExecNowOnDvarIntValue(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ExecNowOnDvarFloatValue(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_RespondOnDvarStringValue(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_RespondOnDvarIntValue(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_RespondOnDvarFloatValue(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ParseLocalVarInParens(struct UiContext *dc, const char **args, int argumentIndex) -> const struct UILocalVar*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ParseLocalVarInt(struct UiContext *dc, const char *firstToken, const char **args, int argumentIndex, int *value) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ParseLocalVarString(struct UiContext *dc, const char *firstToken, const char **args, int argumentIndex, const char **value, char *buf, int bufsize) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ParseLocalVarBool(struct UiContext *dc, const char *firstToken, const char **args, int argumentIndex, bool *value) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ParseKeyboard(const char *firstToken, const char **args, int argumentIndex, char *title, int titleLen) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_SetPlayerDataKeyboardFinished(int localClientNum, bool changeConfirmed, const char *resultString) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_OpenKeyboardForSetPlayerData(struct UiContext *dc, struct StructuredDataLookup *lookup, const char *defaultText, int maxLen, const char *title) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetPlayerData_PrintArgs(const char *foundArgs[0x32], int argCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_SetPlayerData_Internal(int localClientNum, struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_SetPlayerData(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_SetPlayerDataSplitScreen(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_UpdateMail(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_OpenMail(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_DeleteMail(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_DoMailLottery(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ResetStatsConfirm(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ResetStatsCancel(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ParseLocalVar(struct UiContext *dc, const char **args) -> const struct UILocalVar*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_SetLocalVarBool(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_SetLocalVarInt(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_SetLocalVarFloat(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_SetLocalVarString(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_FeederTop(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_FeederBottom(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_Play(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ShowGamerCard(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_KickPlayer(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_GetKickPlayerQuestionString(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_PartyUpdateMissingMapPackDvar(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_TogglePlayerMute(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Script_ResolveError(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_HandleTransition(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Script_ScriptMenuResponse(struct UiContext *dc, struct itemDef_s *item, const char **args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_RunScript(struct UiContext *dc, struct itemDef_s *item, const char *s) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_HandleEvent(struct UiContext *dc, struct itemDef_s *item, struct MenuEventHandlerSet *eventHandlerSet) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_IsDisabled(const int localClientNum, struct itemDef_s *item) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_SetFocus(struct UiContext *dc, struct itemDef_s *item, float x, float y, enum ItemFocusReason reason) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ListBox_MaxScroll(int localClientNum, struct itemDef_s *item) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ListBox_Viewmax(struct itemDef_s *item) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_ListBox_ThumbPosition(int localClientNum, struct itemDef_s *item) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_ListBox_ThumbDrawPosition(struct UiContext *dc, struct itemDef_s *item) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_Slider_ThumbPosition(int localClientNum, struct itemDef_s *item) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_OwnerDraw_HandleKey(struct itemDef_s *item, int key) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_ListBox_SetCursorPos(int localClientNum, struct itemDef_s *item, int viewmax, int newCursorPos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_ListBox_Page(int localClientNum, struct itemDef_s *item, int max, int scrollmax, int viewmax, int delta) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_ListBox_Scroll(int localClientNum, struct itemDef_s *item, int max, int scrollmax, int viewmax, int delta) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_ListBox_IsActionKey(int key) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_ListBox_HandleKey(struct UiContext *dc, struct itemDef_s *item, int key, int down, int force) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_ShouldHandleKey(struct UiContext *dc, struct itemDef_s *item, int key) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_YesNo_IsActionKey(int key) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_YesNo_HandleKey(struct UiContext *dc, struct itemDef_s *item, int key) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_Multi_CountSettings(struct itemDef_s *item) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_DvarEnum_CountSettings(struct itemDef_s *item) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_Multi_FindDvarByValue(struct itemDef_s *item) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_Multi_Setting(struct itemDef_s *item) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_DvarEnum_EnumIndex(struct itemDef_s *item) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_DvarEnum_Setting(struct itemDef_s *item) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_List_IsCountUpKey(int key) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_List_IsCountDownKey(int key) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_List_NextEntryForKey(int key, int current, int count) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_Multi_HandleKey(struct UiContext *dc, struct itemDef_s *item, int key) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_DvarEnum_HandleKey(struct UiContext *dc, struct itemDef_s *item, int key) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_IsTextField(const struct itemDef_s *item) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_TextField_BeginEdit(int localClientNum, struct itemDef_s *item) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_TextField_EnsureCursorVisible(int localClientNum, struct itemDef_s *item, const char *text) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_TextField_HandleKey(struct UiContext *dc, struct itemDef_s *item, int key) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_Slider_IsLeftKey(int key) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_Slider_IsRightKey(int key) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_Slider_HandleKey(struct UiContext *dc, struct itemDef_s *item, int key, int down) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_HandleKey(struct UiContext *dc, struct itemDef_s *item, int key, int down) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_Action(struct UiContext *dc, struct itemDef_s *item) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Menu_SetPrevCursorItem(struct UiContext *dc, struct menuDef_t *menu, enum ItemFocusReason reason) -> struct itemDef_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Menu_SetNextCursorItem(struct UiContext *dc, struct menuDef_t *menu, enum ItemFocusReason reason) -> struct itemDef_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_RunOnOpenScript(struct UiContext *dc, struct menuDef_t *menu) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Menus_ResetFxBirthTimeOnItems(struct UiContext *dc, struct menuDef_t *menu) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_Open(struct UiContext *dc, struct menuDef_t *menu) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_OpenByName(struct UiContext *dc, const char *p) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_PrintAllLoadedMenus(struct UiContext *dc) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_CorrectedTextRect(int localClientNum, struct itemDef_s *item) -> struct rectDef_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Menu_CheckOnKey(struct UiContext *dc, struct menuDef_t *menu, int key) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_FindFocusedItem(struct UiContext *dc) -> struct itemDef_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_HandleKey(struct UiContext *dc, struct menuDef_t *menu, int key, int down) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ToWindowCoords(float *x, float *y, const struct windowDef_t *window) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_GetFont(int localClientNum, const struct itemDef_s *item) -> struct Font_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_SetTextExtents(int localClientNum, struct itemDef_s *item, const char *text) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_TextColor(struct UiContext *dc, struct itemDef_s *item, float *newColor[0x4]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_PickWordWrapLineWidth(const char *text, int bufferSize, struct Font_s *font, float normalizedScale, int targetLineCount, int widthGuess, int widthLimit) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ComputeTargetLineWidth(const char *text, const struct rectDef_s *rect, struct Font_s *font, float scale, float normalizedScale, int bufferSize, int textAlignMode) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetWrappedTextHeight(const char *text, const struct rectDef_s *rect, struct Font_s *font, float scale, int textAlignMode) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto _DrawWrappedText(const struct ScreenPlacement *scrPlace, const char *text, const struct rectDef_s *rect, struct Font_s *font, float x, float y, float scale, const float *color, int style, int textAlignMode, struct rectDef_s *textRect, bool subtitle, bool glow, const float *glowColor, bool cinematic, bool clipTextToRect, struct Material *fxMaterial, struct Material *fxMaterialGlow, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawWrappedText(const struct ScreenPlacement *scrPlace, const char *text, const struct rectDef_s *rect, struct Font_s *font, float x, float y, float scale, const float *color, int style, int textAlignMode, struct rectDef_s *textRect, bool clipTextToRect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawWrappedTextSubtitled(const struct ScreenPlacement *scrPlace, const char *text, const struct rectDef_s *rect, struct Font_s *font, float x, float y, float scale, const float *color, int style, int textAlignMode, struct rectDef_s *textRect, const float *subtitleGlowColor, bool cinematic, bool clipTextToRect) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_DrawWrappedTextWithEffects(const struct ScreenPlacement *scrPlace, const char *text, const struct rectDef_s *rect, struct Font_s *font, float x, float y, float scale, const float *color, int style, int textAlignMode, struct rectDef_s *textRect, const float *glowColor, bool cinematic, bool clipTextToRect, struct Material *fxMaterial, struct Material *fxMaterialGlow, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_VScrollTextAdjust(struct UiContext *dc, struct itemDef_s *item, float y, const struct rectDef_s *rect, const char *text, struct Font_s *font, float *drawColor) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_Text_AutoWrapped_Paint(struct UiContext *dc, struct itemDef_s *item, const char *text, const float *color, bool subtitle, const float *subtitleGlowColor, bool cinematic) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DirectiveFakeIntroSeconds(int localClientNum, const char *arg0, char *result, const int resultBufferSize) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DirectiveFakeIntroTime(int localClientNum, const char *arg0, char *result, const int resultBufferSize) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ParseDirective(const char *directive, char *resultName, const int resultNameSize, char *resultArg0, const int resultArg0Size) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ProcessStringDirective(int localClientNum, const char *directive, char *result, int maxBufferSize) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_ReplaceDirective(int localClientNum, const char *srcString, char *dstString, const int dstBufferSize) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_Text_Paint(struct UiContext *dc, struct itemDef_s *item) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_TextField_Paint(struct UiContext *dc, struct itemDef_s *item) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_YesNo_Paint(struct UiContext *dc, struct itemDef_s *item) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_Multi_Paint(struct UiContext *dc, struct itemDef_s *item) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_DvarEnum_Paint(struct UiContext *dc, struct itemDef_s *item) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetPlatformCommand(const char *command, const char **consoleCommand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetKeyBindingLocalizedString(int localClientNum, const char *command, char *result, const int resultSize, bool single) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetKeyBindingLocalizedString(int localClientNum, const char *command, char *result, const int resultSize) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetKeyBindingLocalizedStringSingle(int localClientNum, const char *command, char *result, const int resultSize) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_Slider_Paint(struct UiContext *dc, struct itemDef_s *item) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_Bind_Paint(struct UiContext *dc, struct itemDef_s *item) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Display_KeyBindPending() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_Bind_IsActionKey(struct UiContext *dc, struct itemDef_s *item, int key) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_Bind_HandleKey(struct UiContext *dc, struct itemDef_s *item, int key, int down) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_GetTextAlignAdj(const int alignment, float width, float textWidth) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_ListBox_PaintTextElem(const int localClientNum, struct itemDef_s *item, int row, int col, int maxChars, int alignment, float x, float y, float w, float h) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_ListBox_PaintBackground(const int localClientNum, struct itemDef_s *item, float x, float y, int row) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_ListBox_PaintHighlight(const int localClientNum, struct itemDef_s *item, float x, float y) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_ListBox_GetVisibleElementCount(struct itemDef_s *item) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_ListBox_Paint(struct UiContext *dc, struct itemDef_s *item) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_OwnerDraw_Paint(struct UiContext *dc, struct itemDef_s *item) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_GameMsgWindow_Paint(struct UiContext *dc, struct itemDef_s *item) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto NewsTicker_GetBreakPosition(const char *textPtr) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_NewsTicker_Paint(struct UiContext *dc, struct itemDef_s *item) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Item_Paint(struct UiContext *dc, const struct ScreenPlacement *scrPlace, struct itemDef_s *item) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_GetFocused(struct UiContext *dc) -> struct menuDef_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_GetTopOfStack(struct UiContext *dc, int offset) -> struct menuDef_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_SetFeederSelection(struct UiContext *dc, struct menuDef_t *menu, int feeder, int index, const char *name) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menus_AnyFullScreenVisible(struct UiContext *dc) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_IsVisible(struct UiContext *dc, struct menuDef_t *menu) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_Paint(struct UiContext *dc, struct menuDef_t *menu) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_Count(struct UiContext *dc) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Menu_PaintViewport_ComputeBlur(struct UiContext *dc) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Menu_PaintAll_BeginVisibleList(char *stringBegin, unsigned int stringSize) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Menu_PaintAll_AppendToVisibleList(char *stringBegin, unsigned int stringSize, const char *stringToAppend) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Menu_PaintAll_DrawVisibleList(char *stringBegin, struct UiContext *dc) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Menu_PaintAll_Internal(struct UiContext *dc, int screenSpace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_PaintViewport(struct UiContext *dc) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_PaintFullscreen(struct UiContext *dc) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_ui_shared() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_AddMenu(struct UiContext *dc, struct menuDef_t *menu) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_AddMenuList(struct UiContext *dc, struct MenuList *menuList) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_PlayLocalSoundAlias(int localClientNum, struct snd_alias_list_t *aliasList) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_PlayLocalSoundAliasByName(int localClientNum, const char *aliasname) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UI_GetForcedMenuScreen() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetMenuScreen(int localClientNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetMenuScreenForError() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_SetErrorAction(enum uiErrorAction_t errorAction) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UIScript_ClearError(const int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_ActionByName(struct UiContext *dc, const char *buttonName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Menu_ActionByName(struct UiContext *dc, const char *keyName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_MyChangesSaveDynamicFlagsForClient(struct UiContext *uiDC, int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_MyChangesRestoreDynamicFlagsForClient(struct UiContext *uiDC, int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
