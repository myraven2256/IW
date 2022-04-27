//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_cl_console() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_ToggleConsole() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_OpenConsole(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_OpenConsoleOutput(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_CloseConsole(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetupChatField(const int localClientNum, int teamChat, int widthInPixels) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_ChatModePublic_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_ChatModeTeam_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_Echo_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_GetTextCopy(char *text, int maxSize) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_ResetMessageWindowTimes(struct MessageWindow *msgwnd, int serverTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_TimeJumped(int localClientNum, int serverTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_NudgeMessageWindowTimes(struct MessageWindow *msgwnd, int serverTimeNudge, int serverTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_TimeNudged(int localClientNum, int serverTimeNudge) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_ClearMessageWindow(struct MessageWindow *msgwnd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_ClearNotify(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_ClearMiniConsole(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_ClearErrors(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_CheckResize(const struct ScreenPlacement *scrPlace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_InitMessageWindow(struct MessageWindow *msgwnd, struct Message *messages, struct MessageLine *lines, char *text, int lineCount, int padding, int textPoolSize, int scrollTime, int fadeIn, int fadeOut) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_Clear_f() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Init() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Shutdown() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_InitClientAssets() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_ShutdownClientAssets() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_GetDefaultMsgDuration(enum print_msg_dest_t dest) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_UpdateMessage(int localClientNum, struct MessageWindow *msgwnd, int duration) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_FreeFirstMessageWindowLine(struct MessageWindow *msgwnd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_NeedToFreeMessageWindowLine(struct MessageWindow *msgwnd, int charCount) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_CopyCurrentConsoleLineText(struct MessageWindow *msgwnd, struct MessageLine *msgLine) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LatestActiveTypewrittenLineIdx(struct MessageWindow *msgwnd) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PrintableCharsCount(const struct MessageWindow *msgwnd, struct MessageLine *line) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PrintTimeTotal(struct MessageWindow *msgwnd, struct MessageLine *line) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PrintTimeWriteOut(struct MessageWindow *msgwnd, struct MessageLine *line) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetNextValidPrintTimeForLine(int localClientNum, struct MessageWindow *msgwnd, int flags) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_UpdateMessageWindowLine(int localClientNum, struct MessageWindow *msgwnd, int linefeed, int flags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_GetDestWindow(int localClientNum, enum print_msg_dest_t dest) -> struct MessageWindow*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_UpdateNotifyMessageWindow(int localClientNum, int channel, int duration, int flags, enum print_msg_dest_t dest) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_UpdateNotifyMessage(int localClientNum, int channel, int duration, int flags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_UpdateNotifyLineWindow(int localClientNum, int channel, bool lineFeed, int flags, enum print_msg_dest_t dest) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_UpdateNotifyLine(int localClientNum, int channel, bool lineFeed, int flags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_Linefeed(int localClientNum, int channel, int flags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_InitMessageBuffer() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_OneTimeInit() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_TextLineWrapPosition(const char *txt, int bufferSize, int pixelsAvailable, struct Font_s *font, float scale, int lineBroken) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_ConsolePrint_AddLine(int localClientNum, int channel, const char *txt, int duration, int pixelWidth, char color, int flags) -> char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ConsolePrint(int localClientNum, int channel, const char *txt, int duration, int pixelWidth, int flags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ConsoleFixPosition() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_AddDeathMessageChar(char *deathMsg, unsigned int deathMsgLen, unsigned int deathMsgMaxLen, char c) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_AddDeathMessageString(char *deathMsg, unsigned int deathMsgLen, unsigned int deathMsgMaxLen, const char *string) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_DeathMessageIconDimension(float size) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_AddDeathMessageIcon(char *deathMsg, unsigned int deathMsgLen, unsigned int deathMsgMaxLen, struct Material *iconShader, float iconWidth, float iconHeight, bool horzFlipIcon) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DeathMessagePrint(int localClientNum, const char *attackerName, char attackerColorIndex, const char *victimName, char victimColorIndex, struct Material *iconShader, float iconWidth, float iconHeight, bool horzFlipIcon) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_AutoCompleteFromList(const char **strings, unsigned int stringCount, const char *prefix, char *completed, unsigned int sizeofCompleted) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_TokenizeInput() -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_AnySpaceAfterCommand() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConDrawInput_TextHeight(struct Font_s *font) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConDrawInput_TextWidth(const char *text) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConDrawInput_Text(const char *str, const float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConDrawInput_TextLimitChars(const char *str, int maxChars, const float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConDrawInput_Newline() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConDrawInput_Over(int amount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConDrawInput_TextAndOver(const char *str, const float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConDraw_Box(float x, float y, float w, float h, const float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConDrawInput_Box(int lines, const float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_GetAutoCompleteColorCodedStringDiscontiguous(const char *query, const char *matchToText, int matchTextLen, char *colorCoded) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_GetAutoCompleteColorCodedStringContiguous(const char *query, const char *matchToText, int matchTextLen, char *colorCoded) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_GetAutoCompleteColorCodedString(const char *query, const char *matchToText, int matchTextLen, bool isDvarCommand, const char *originalCommand, char *colorCoded) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_IsAutoCompleteMatch(const char *query, const char *matchToText, int matchTextLen) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConDrawInput_StringMatchesInputText(const char *str) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConDrawInput_IncrMatchCounter(const char *str) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConDrawInput_DvarMatch(const char *str) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConDrawInput_CompareStrings(const void *e0, const void *e1) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConDrawInput_TextFieldFirstArgChar() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConDrawInput_AutoCompleteArg(const char **stringList, int stringCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConDrawInput_GetDvarDescriptionLines(const struct dvar_t *dvar) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConDrawInput_DetailedDvarMatch(const char *str) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConDrawInput_DetailedCmdMatch(const char *str) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConDrawInput_CmdMatch(const char *str) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_DrawAutoCompleteChoice(int localClientNum, bool isDvarCommand, const char *originalCommand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_DrawInputPrompt(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_HasTooManyMatchesToShow() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_IsDvarCommand(const char *cmd) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_DrawInput(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_CycleAutoComplete(int step) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_HasActiveAutoComplete() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_CommitToAutoComplete() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_CancelAutoComplete() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_AllowAutoCompleteCycling(bool isAllowed) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LineVisible(const struct MessageWindow *msgwnd, int lineIdx, int time) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TypewriterSounds(int localClientNum, const struct MessageWindow *msgwnd, struct MessageLine *line) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_DrawMessageLineOnHUD(int localClientNum, const struct ScreenPlacement *scrPlace, int x, int y, int charHeight, int horzAlign, int vertAlign, struct Font_s *font, const struct MessageWindow *msgwnd, int lineIdx, float *color, int textStyle, float msgwndScale, int textAlignMode) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_CullFinishedLines(int serverTime, struct MessageWindow *msgwnd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_GetMessageAlpha(struct Message *message, struct MessageWindow *msgwnd, int serverTime, bool scrollsIntoPlace) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_DrawMessageWindowNewToOld(int localClientNum, struct MessageWindow *msgwnd, int x, int y, int hudCharHeight, int horzAlign, int vertAlign, bool up, struct Font_s *font, float *color, int textStyle, float msgwndScale, int textAlignMode) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_DrawMessageWindowOldToNew(int localClientNum, struct MessageWindow *msgwnd, int x, int y, int charHeight, int horzAlign, int vertAlign, bool up, struct Font_s *font, float *color, int textStyle, float msgwndScale, int textAlignMode) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CL_ShouldntDrawMessageWindow(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_DrawMessageWindow(int localClientNum, struct MessageWindow *msgwnd, int x, int y, int charHeight, int horzAlign, int vertAlign, struct Font_s *font, float *color, int textStyle, float msgwndScale, enum msgwnd_mode_t mode, int textAlignMode) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_DrawGameMessageWindow(int localClientNum, int windowIndex, int xPos, int yPos, int horzAlign, int vertAlign, struct Font_s *font, float fontScale, float *color, int textStyle, int textAlignMode, enum msgwnd_mode_t mode) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_DrawMiniConsole(int localClientNum, int xPos, int yPos, float alpha) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_DrawErrors(int localClientNum, int xPos, int yPos, float alpha) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_IsValidGameMessageWindow(int windowIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_IsGameMessageWindowActive(int localClientNum, int windowIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_DrawSay(int localClientNum, int x, int y) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_ToggleConsoleOutput() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_DrawOutputScrollBar(float x, float y, float width, float height) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_DrawOutputText(float x, float y, float width, float height) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_GetVersionString() -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_DrawOutputVersion(float x, float y, float width, float height) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_DrawOuputWindow() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Con_DrawSolidConsole(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_DrawConsole(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_PageUp() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_PageDown() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Top() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Bottom() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Close(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_IsActive(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_PlayTextFXPulseSounds(int localClientNum, int currentTime, int strLength, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int *soundTimeKeeper) -> void
{

}

#endif // __UNIMPLEMENTED__
