//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_scr_parser() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_InitOpcodeLookup() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ShutdownOpcodeLookup() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddOpcodePos(unsigned int sourcePos, int type) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RemoveOpcodePos() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddThreadStartOpcodePos(unsigned int sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetOpcodePosOfType(unsigned int bufferIndex, unsigned int startSourcePos, unsigned int endSourcePos, int type, unsigned int *sourcePos) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetClosestSourcePosOfType(unsigned int bufferIndex, unsigned int sourcePos, int type) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_GetPrevSourcePosOpcodeLookup(const char *codePos) -> struct OpcodeLookup*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_GetSourcePosOpcodeLookup(const char *codePos) -> struct OpcodeLookup*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetPrevSourcePos(const char *codePos, unsigned int index) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_GetFunctionLineNumInternal(const char *buf, unsigned int sourcePos, const char **startLine) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_GetLineNumInternal(const char *buf, unsigned int sourcePos, const char **startLine, int *col) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetLineNum(unsigned int bufferIndex, unsigned int sourcePos) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetFunctionLineNum(unsigned int bufferIndex, unsigned int sourcePos) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetSourcePosOfType(const char *codePos, int type, int currentSourcePos, struct Scr_SourcePos_t *pos) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_GetNewSourceBuffer() -> struct SourceBufferInfo*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_AddSourceBufferInternal(const char *extFilename, const char *codePos, char *sourceBuf, int len, bool doEolFixup, bool archive, bool newBuffer) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SendSource() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_ReadFile_FastFile(const char *filename, const char *extFilename, const char *codePos, bool archive) -> char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_ReadFile(const char *filename, const char *extFilename, const char *codePos, bool archive) -> char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddSourceBuffer(const char *filename, const char *extFilename, const char *codePos, bool archive) -> char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CopyFormattedLine(char *line, const char *rawLine) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_GetLineInfo(const char *buf, unsigned int sourcePos, int *col, char *line) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_GetFunctionInfo(const char *buf, unsigned int sourcePos, char *line) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_PrintSourcePos(int channel, const char *filename, const char *buf, unsigned int sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_PrintSourcePosSpreadSheet(int channel, const char *filename, const char *buf, unsigned int sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_PrintFunctionPosSpreadSheet(int channel, const char *filename, const char *buf, unsigned int sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_PrintSourcePosSummary(int channel, const char *filename, const char *buf, unsigned int sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetSourcePos(unsigned int bufferIndex, unsigned int sourcePos, char *outBuf, int outBufLen) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetSourceBuffer(const char *codePos) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_GetTextSourcePos(const char *buf, const char *codePos, char *line) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PrintPrevCodePos(int channel, const char *codePos, unsigned int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PrevCodePosFileName(const char *codePos) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PrevCodePosFunctionName(const char *codePos) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PrevCodePosFileNameMatches(const char *codePos, const char *fileName) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PrintPrevCodePosSpreadSheet(int channel, const char *codePos, bool summary, bool functionSummary) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetCodePos(const char *codePos, unsigned int index, char *outBuf, int outBufLen) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetFileAndLine(const char *codePos, char **filename, int *linenum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_AddProfileTime(const char *codePos, int time, int builtInTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CompareProfileTimes(const struct OpcodeLookup &opcodeLookup1, const struct OpcodeLookup &opcodeLookup2) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CompareScriptSourceProfileTimes(int index1, int index2) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CalcScriptFileProfile() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CalcAnimscriptProfile(int *total, int *totalNonBuiltIn) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PrintScriptProfileTimesForScriptFile() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ScriptProfileTimesReset() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PrintProfileTimes(float minTime) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_IgnoreLeaks() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CompileError(unsigned int sourcePos, const char *msg, <NoType> ) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CompileError2(const char *codePos, char *msg, <NoType> ) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RuntimeErrorInternal(int channel, const char *codePos, unsigned int index, const char *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RuntimeError(const char *codePos, unsigned int index, const char *msg, const char *dialogMessage) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetLoadedImpureScript(bool loadedImpureScript) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_LoadedImpureScript() -> bool
{

}

#endif // __UNIMPLEMENTED__
