//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_scr_debugger() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FindBreakpointInfo(const char *codePos) -> char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_AddBreakpoint(const unsigned char *codePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_RemoveBreakpoint(unsigned char *codePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddManualBreakpoint(unsigned char *codePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_RemoveManualBreakpoint(unsigned char *codePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_AddAssignmentBreakpoint(unsigned char *codePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_RemoveAssignmentBreakpoint(unsigned char *codePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_InitBreakpoints() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AllocBreakpoint() -> struct Scr_Breakpoint*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FreeBreakpoint(struct Scr_Breakpoint *breakpoint) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::operator new(unsigned int size) -> void*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::operator delete(void *ptr) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::SetScriptFile(const char *name) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::SetCurrentLine(int line) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::GetFilename() -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::AddBreakpoint(struct Scr_Breakpoint **pBreakpoint, char *codePos, int builtinIndex, struct Scr_WatchElement_s *element, unsigned char type) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_WriteElement(struct Scr_WatchElement_s *element) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ReadElement() -> struct Scr_WatchElement_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_FreeLineBreakpoint(struct Scr_Breakpoint *breakpoint, bool deleteElement) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::GetSourcePos(unsigned int *start, unsigned int *end) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::AddBreakpointAtSourcePos(struct Scr_WatchElement_s *element, unsigned char breakpointType, bool user, struct Scr_Breakpoint **pBreakpoint, unsigned int startSourcePos, unsigned int endSourcePos) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::ToggleBreakpointInternal(struct Scr_WatchElement_s *element, bool force, bool overwrite, unsigned char breakpointType, bool user) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::GetBreakpointCodePos() -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_ToggleBreakpointRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_ResumeBreakpoints() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_MonitorCommand(const char *text) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_SetTempBreakpoint(const char *codePos, unsigned int threadId, int isReturnPos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_Step() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_StepRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::RunToCursor() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_RunToCursorRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::EnterCallInternal() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_EnterCallRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWindow::Init() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_AllocDebugMem(int size, const char *name) -> void*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_FreeDebugMem(void *ptr) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_AbstractScriptList::Init() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_AbstractScriptList::Shutdown() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptList::AddFile(const char *filename, struct Scr_AddFileInfo *info) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CompareScriptWindowsNames(const void *a, const void *b) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptList::Init() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptList::Shutdown() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptCallStack::UpdateStack() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_SelectScriptLineRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_GetElementRoot(struct Scr_WatchElement_s *element) -> struct Scr_WatchElement_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::GetElementWithId_r(struct Scr_WatchElement_s *element, int id) -> struct Scr_WatchElement_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::GetElementWithId(int id) -> struct Scr_WatchElement_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::GetElementRef(struct Scr_WatchElement_s *element) -> struct Scr_WatchElement_s**
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::GetElementPrev(struct Scr_WatchElement_s *element) -> struct Scr_WatchElement_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_UpdateWatchHeightRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_IsSortWatchElement(struct Scr_WatchElement_s *element) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::ToggleExpandElement(struct Scr_WatchElement_s *element) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::ExpandElement(struct Scr_WatchElement_s *element, bool expand) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_SelectElementRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_ExpandElementRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_ToggleExpandElementRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::CreateBreakpointElement(struct Scr_WatchElement_s *element, unsigned int bufferIndex, unsigned int sourcePos, bool user) -> struct Scr_WatchElement_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::PasteNonBreakpointElement(struct Scr_WatchElement_s *element, const char *text, bool user) -> struct Scr_WatchElement_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_PasteElementRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_InsertElementRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::DeleteElementInternal(struct Scr_WatchElement_s *element) -> struct Scr_WatchElement_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_DeleteElementRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::BackspaceElementInternal(struct Scr_WatchElement_s *element) -> struct Scr_WatchElement_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_BackspaceElementRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::Init() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::Shutdown() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CreateWatchElement(const char *text, struct Scr_WatchElement_s **prevElem, const char *name) -> struct Scr_WatchElement_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_RemoveValue(struct Scr_WatchElement_s *element) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_FreeWatchElementChildrenStrict(struct Scr_WatchElement_s *element) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_FreeWatchElementText(struct Scr_WatchElement_s *element) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_FreeWatchElementChildren(struct Scr_WatchElement_s *element) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_FreeWatchElementChildrenRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::FreeWatchElement(struct Scr_WatchElement_s *element) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CompareArrayIndices(const void *arg1, const void *arg2) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CompareThreadIndices(const void *arg1, const void *arg2) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_GetElementThreadPos(struct Scr_WatchElement_s *element) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_PostSetText(struct Scr_WatchElement_s *element) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_SetElementObjectTypeRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_SetElementThreadStartRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_DeltaElementValueText(struct Scr_WatchElement_s *element, const char *oldValueText) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_SetElementValueTextRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_SetNonFieldElementRefText(struct Scr_WatchElement_s *element) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_SetNonFieldRefTextRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_SetElementRefText(struct Scr_WatchElement_s *element, char *fieldText) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_DeltaElementRefText(struct Scr_WatchElement_s *element, const char *oldRefText, char *fieldText) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_SetElementRefTextRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CompareThreadElements(const void *arg1, const void *arg2) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_ConnectElementChildren(struct Scr_WatchElement_s *parentElement) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_SortElementChildren(struct Scr_WatchElement_s *parentElement) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_SortElementChildrenRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::EvaluateWatchChildren(struct Scr_WatchElement_s *parentElement) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_SetChildCountRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::PostEvaluateWatchElement(struct Scr_WatchElement_s *element, struct VariableValue *value) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::EvaluateWatchChildElement(struct Scr_WatchElement_s *element, unsigned int fieldName, struct Scr_WatchElement_s *childElement, bool hardcodedField) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::EvaluateWatchElementExpression(struct Scr_WatchElement_s *element, struct VariableValue *value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::EvaluateWatchElement(struct Scr_WatchElement_s *element) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::CreateWatchElement(const char *text, struct Scr_WatchElement_s **prevElem, const char *name) -> struct Scr_WatchElement_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_AddTextRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::AddElement(struct Scr_WatchElement_s *element, const char *text) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::CloneElement(struct Scr_WatchElement_s *element) -> struct Scr_WatchElement_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CloneElementRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::Evaluate() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_Evaluate() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_AllowBreakpoint(const char *pos) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_RemoveNextBreakpoint() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_SpecialBreakpoint(struct VariableValue *top, const char *pos, unsigned int localId, int opcode, int type) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CheckBreakonNotify(unsigned int notifyListOwnerId, unsigned int stringValue, struct VariableValue *top, const char *pos, unsigned int localId) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::DisplayThreadPos(struct Scr_WatchElement_s *element) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_DisplayThreadPosRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_BreakOnAllAssignmentPos() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_UnbreakAllAssignmentPos() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_IsVariableBreakpoint(unsigned int id) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_AddDebugRefCountChildren(struct Scr_WatchElement_s *element, unsigned short *refCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddDebugRefCount(unsigned short *refCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RefToVariable(unsigned int id, int isObject) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::UpdateBreakpoints(bool add) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::AddBreakpoint(struct Scr_WatchElement_s *element, unsigned char type) -> struct Scr_WatchElement_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::RemoveBreakpoint(struct Scr_WatchElement_s *element) -> struct Scr_WatchElement_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::ToggleWatchElementBreakpoint(struct Scr_WatchElement_s *element, unsigned char type) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::ToggleBreakpointInternal(struct Scr_WatchElement_s *element, unsigned char type) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_ToggleWatchElementBreakpointRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto Scr_ScriptWatch::SortHitBreakpointsTop() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_InitDebuggerMain() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ShutdownDebuggerMain() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_InitDebugger() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ShutdownDebugger() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RestartDebuggerRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_InitDebuggerSystem() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ShutdownDebuggerSystem(int restart) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ConnectRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ShutdownRemoteClient(int restart) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddAssignmentPos(char *codePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ResetAbortDebugger() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_DisplayDebuggerRemoteInternal() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_DisplayDebuggerRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_UpdateRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_DisplayDebugger() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_RemoveElementValue(struct Scr_WatchElement_s *element) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_RemoveElementValues() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RemoveDebuggerRefs() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddDebuggerRefs() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RunDebuggerRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RunDebugger() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_DisplayHitBreakpointRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_WatchElementHitBreakpoint(struct Scr_WatchElement_s *element, bool enabled) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_ConditionalExpression(struct Scr_WatchElement_s *element, unsigned int localId) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ShowConsole() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_HitBreakpointInternal() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_HitBreakpoint(struct VariableValue *top, const char *pos, unsigned int localId, int hitBreakpoint) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_HitBuiltinBreakpoint(struct VariableValue *top, const char *pos, unsigned int localId, int opcode, int builtinIndex, unsigned int outparamcount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_DebugKillThread(unsigned int threadId, const char *codePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_DebugTerminateThread(int topThread) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SaveKillPos(char **killThreadCodePos) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RestoreKillPos(bool kill_thread, char *killThreadCodePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_HitBreakpointRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_WatchElementHasSameValue(struct Scr_WatchElement_s *element, struct VariableValue *newValue) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_WatchElementHitBreakpointRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_SendKeepAliveIfNeeded() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_SortHitBreakpointsTopRemote() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_ProcessDebugMessages() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Sys_ConsolePrintRemote(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_UpdateDebugSocket() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_UpdateRemoteDebugger() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_UpdateDebugger() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_HitAssignmentBreakpoint(struct VariableValue *top, const char *pos, unsigned int localId, int forceBreak) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EnableBreakpoints(bool enable) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_IgnoreErrors() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SkipIntructions() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ExitSkipIntructions() -> void
{

}

#endif // __UNIMPLEMENTED__
