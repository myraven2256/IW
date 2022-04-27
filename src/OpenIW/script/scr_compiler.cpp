//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_scr_compiler() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CompileRemoveRefToString(unsigned int stringValue) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitCanonicalString(unsigned int stringValue) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitCanonicalStringConst(unsigned int stringValue) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CompileTransferRefToString(unsigned int stringValue, unsigned int user) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitAssignmentPos() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitPreAssignmentPos() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitOpcode(unsigned int op, int offset, int callType) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitEnd() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitReturn() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitInteger(int value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitShort(short value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitUnsignedShort(unsigned short value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitByte(unsigned char value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitFloat(float value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitString(unsigned int value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitCodepos(const char *pos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EvalUndefined(union sval_u sourcePos, struct VariableCompileValue *constValue) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitGetUndefined(union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EvalInteger(int value, union sval_u sourcePos, struct VariableCompileValue *constValue) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitGetInteger(int value, union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EvalFloat(float value, union sval_u sourcePos, struct VariableCompileValue *constValue) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitGetFloat(float value, union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitAnimTree(union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitSetVariableField(union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_FindLocalVar(struct scr_block_t *block, int startIndex, unsigned int name) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_FindLocalVarIndex(unsigned int name, union sval_u sourcePos, bool create, struct scr_block_t *block) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitCreateLocalVars(struct scr_block_t *block, union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitRemoveLocalVars(struct scr_block_t *block, struct scr_block_t *outerBlock) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitNOP2(bool lastStatement, unsigned int endSourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CheckMaxSwitchCases(int count) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CheckLocalVarsCount(int localVarsCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_RegisterLocalVar(unsigned int name, union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CopyBlock(struct scr_block_t *from, struct scr_block_t **to) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_InitFromChildBlocks(struct scr_block_t **childBlocks, int childCount, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_AppendChildBlocks(struct scr_block_t **childBlocks, int childCount, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_MergeChildBlocks(struct scr_block_t **childBlocks, int childCount, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_TransferBlock(struct scr_block_t *from, struct scr_block_t *to) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitSafeSetVariableField(union sval_u expr, union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CalcLocalVarsSafeSetVariableField(union sval_u expr, union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitSafeSetWaittillVariableField(union sval_u expr, union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EvalString(unsigned int value, union sval_u sourcePos, struct VariableCompileValue *constValue) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitGetString(unsigned int value, union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EvalIString(unsigned int value, union sval_u sourcePos, struct VariableCompileValue *constValue) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitGetIString(unsigned int value, union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitGetVector(const float *value, union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitGetAnimation(unsigned int stringValue, union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitValue(struct VariableCompileValue *constValue) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_PushValue(struct VariableCompileValue *constValue) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_PopValue() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitCastBool(union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitBoolNot(union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitBoolComplement(union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitSize(union sval_u expr, union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitSelf(union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitThisthread(union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitLevel(union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitGame(union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitAnim(union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitSelfObject(union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitLevelObject(union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitAnimObject(union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitOrEvalLocalVariable(union sval_u expr, union sval_u sourcePos, struct VariableCompileValue *constValue, struct scr_block_t *block) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitLocalVariableRef(union sval_u expr, union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CalcLocalVarsLocalVariableRef(union sval_u expr, union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitGameRef(union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitEvalArray(union sval_u sourcePos, union sval_u indexSourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitEvalArrayRef(union sval_u sourcePos, union sval_u indexSourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitClearArray(union sval_u sourcePos, union sval_u indexSourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitEmptyArray(union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EvalAnimation(union sval_u anim, union sval_u sourcePos, struct VariableCompileValue *constValue) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitFieldVariable(union sval_u expr, union sval_u field, union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitFieldVariableRef(union sval_u expr, union sval_u field, union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitClearFieldVariable(union sval_u expr, union sval_u field, union sval_u sourcePos, union sval_u rhsSourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitObject(union sval_u expr, union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitDecTop() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitCastFieldObject(union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitArrayVariable(union sval_u expr, union sval_u index, union sval_u sourcePos, union sval_u indexSourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitArrayVariableRef(union sval_u expr, union sval_u index, union sval_u sourcePos, union sval_u indexSourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CalcLocalVarsArrayVariableRef(union sval_u expr, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitClearArrayVariable(union sval_u expr, union sval_u index, union sval_u sourcePos, union sval_u indexSourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitOrEvalVariableExpression(union sval_u expr, struct VariableCompileValue *constValue, struct scr_block_t *block) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitVariableExpression(union sval_u expr, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetExpressionCount(union sval_u exprlist) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitExpressionList(union sval_u exprlist, struct scr_block_t *block) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetSingleParameter(union sval_u exprlist) -> union sval_u*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AddExpressionListOpcodePos(union sval_u exprlist) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AddFilePrecache(unsigned int filename, unsigned int sourcePos, bool include, unsigned int *filePosId, unsigned int *fileCountId) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitFunction(union sval_u func, union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_GetBuiltin2(union sval_u func) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_GetUncacheType(int type) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_GetCacheType(int type) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_RegisterFunction(int func, const char *name) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AddFunction(int func, const char *name) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitGetFunction(union sval_u func_name, union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitPostScriptFunction(union sval_u func, int param_count, bool bMethod, union sval_u nameSourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitPostScriptFunctionPointer(union sval_u expr, int param_count, bool bMethod, union sval_u nameSourcePos, union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitPostScriptThread(union sval_u func, int param_count, bool bMethod, union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitPostScriptChildThread(union sval_u func, int param_count, bool bMethod, union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitPostScriptThreadPointer(union sval_u expr, int param_count, bool bMethod, union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitPostScriptChildThreadPointer(union sval_u expr, int param_count, bool bMethod, union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitPostScriptFunctionCall(union sval_u func_name, int param_count, bool bMethod, union sval_u nameSourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitPostScriptThreadCall(union sval_u func_name, int param_count, bool bMethod, union sval_u sourcePos, union sval_u nameSourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitPostScriptChildThreadCall(union sval_u func_name, int param_count, bool bMethod, union sval_u sourcePos, union sval_u nameSourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitBuiltinCallPointer(union sval_u expr, int param_count, bool bMethod, union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitPreFunctionCall(union sval_u func_name) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitPostFunctionCall(union sval_u func_name, int param_count, bool bMethod, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetBuiltin(union sval_u func_name) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_BeginDevScript(int *type, char **savedPos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_EndDevScript(int type, char **savedPos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitCallBuiltinOpcode(int param_count, union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitCallBuiltinMethodOpcode(int param_count, union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitCall(union sval_u func_name, union sval_u params, bool bStatement, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitMethod(union sval_u expr, union sval_u func_name, union sval_u params, union sval_u methodSourcePos, bool bStatement, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LinkThread(unsigned int threadCountId, struct VariableValue *pos, bool allowFarCall) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LinkFile(unsigned int filePosId, unsigned int fileCountId) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CheckThreadPosition(unsigned int parentId, unsigned int posId, unsigned int name, unsigned int sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SpecifyThreadPosition(unsigned int posId, unsigned int name, unsigned int sourcePos, int type) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetThreadPosition(unsigned int posId, union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitCallExpression(union sval_u expr, bool bStatement, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitCallExpressionFieldObject(union sval_u expr, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitBreakOn(union sval_u expr, union sval_u param, union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CreateVector(struct VariableCompileValue *constValue, struct VariableValue *value) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EvalPrimitiveExpressionList(union sval_u exprlist, union sval_u sourcePos, struct VariableCompileValue *constValue) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitOrEvalPrimitiveExpressionList(union sval_u exprlist, union sval_u sourcePos, struct VariableCompileValue *constValue, struct scr_block_t *block) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitExpressionListFieldObject(union sval_u exprlist, union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EvalPrimitiveExpression(union sval_u expr, struct VariableCompileValue *constValue) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitOrEvalPrimitiveExpression(union sval_u expr, struct VariableCompileValue *constValue, struct scr_block_t *block) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitPrimitiveExpression(union sval_u expr, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitBoolOrExpression(union sval_u expr1, union sval_u expr2, union sval_u expr1sourcePos, union sval_u expr2sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitBoolAndExpression(union sval_u expr1, union sval_u expr2, union sval_u expr1sourcePos, union sval_u expr2sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EvalBinaryOperatorExpression(union sval_u expr1, union sval_u expr2, union sval_u opcode, union sval_u sourcePos, struct VariableCompileValue *constValue) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitOrEvalBinaryOperatorExpression(union sval_u expr1, union sval_u expr2, union sval_u opcode, union sval_u sourcePos, struct VariableCompileValue *constValue, struct scr_block_t *block) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitBinaryEqualsOperatorExpression(union sval_u lhs, union sval_u rhs, union sval_u opcode, union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CalcLocalVarsBinaryEqualsOperatorExpression(union sval_u lhs, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EvalExpression(union sval_u expr, struct VariableCompileValue *constValue) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitOrEvalExpression(union sval_u expr, struct VariableCompileValue *constValue, struct scr_block_t *block) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitExpression(union sval_u expr, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitVariableExpressionRef(union sval_u expr, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CalcLocalVarsVariableExpressionRef(union sval_u expr, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitArrayPrimitiveExpressionRef(union sval_u expr, union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CalcLocalVarsArrayPrimitiveExpressionRef(union sval_u expr, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitPrimitiveExpressionFieldObject(union sval_u expr, union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitExpressionFieldObject(union sval_u expr, union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConnectBreakStatements() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConnectContinueStatements() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IsUndefinedPrimitiveExpression(union sval_u expr) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IsUndefinedExpression(union sval_u expr) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitClearVariableExpression(union sval_u expr, union sval_u rhsSourcePos, struct scr_block_t *block) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitAssignmentStatement(union sval_u lhs, union sval_u rhs, union sval_u sourcePos, union sval_u rhsSourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CalcLocalVarsAssignmentStatement(union sval_u lhs, union sval_u rhs, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitCallExpressionStatement(union sval_u expr, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitReturnStatement(union sval_u expr, union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitEndStatement(union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitWaitStatement(union sval_u expr, union sval_u sourcePos, union sval_u waitSourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitWaittillFrameEnd(union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitIfStatement(union sval_u expr, union sval_u stmt, union sval_u sourcePos, bool lastStatement, unsigned int endSourcePos, struct scr_block_t *block, union sval_u *ifStatBlock) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CalcLocalVarsIfStatement(union sval_u stmt, struct scr_block_t *block, union sval_u *ifStatBlock) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitIfElseStatement(union sval_u expr, union sval_u stmt1, union sval_u stmt2, union sval_u sourcePos, union sval_u elseSourcePos, bool lastStatement, unsigned int endSourcePos, struct scr_block_t *block, union sval_u *ifStatBlock, union sval_u *elseStatBlock) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CalcLocalVarsIfElseStatement(union sval_u stmt1, union sval_u stmt2, struct scr_block_t *block, union sval_u *ifStatBlock, union sval_u *elseStatBlock) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_AddBreakBlock(struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_AddContinueBlock(struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitWhileStatement(union sval_u expr, union sval_u stmt, union sval_u sourcePos, union sval_u whileSourcePos, struct scr_block_t *block, union sval_u *whileStatBlock) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CalcLocalVarsWhileStatement(union sval_u expr, union sval_u stmt, struct scr_block_t *block, union sval_u *whileStatBlock) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitForStatement(union sval_u stmt1, union sval_u expr, union sval_u stmt2, union sval_u stmt, union sval_u sourcePos, union sval_u forSourcePos, struct scr_block_t *block, union sval_u *forStatBlock, union sval_u *forStatPostBlock) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CalcLocalVarsForStatement(union sval_u stmt1, union sval_u expr, union sval_u stmt2, union sval_u stmt, struct scr_block_t *block, union sval_u *forStatBlock, union sval_u *forStatPostBlock) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitIncStatement(union sval_u expr, union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CalcLocalVarsIncStatement(union sval_u expr, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitDecStatement(union sval_u expr, union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitFormalParameterListInternal(union sval_u *node, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CalcLocalVarsFormalParameterListInternal(union sval_u *node, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitFormalWaittillParameterListRefInternal(union sval_u *node, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitWaittillStatement(union sval_u obj, union sval_u exprlist, union sval_u sourcePos, union sval_u waitSourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CalcLocalVarsWaittillStatement(union sval_u exprlist, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitWaittillmatchStatement(union sval_u obj, union sval_u exprlist, union sval_u sourcePos, union sval_u waitSourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitNotifyStatement(union sval_u obj, union sval_u exprlist, union sval_u sourcePos, union sval_u notifySourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitEndOnStatement(union sval_u obj, union sval_u expr, union sval_u sourcePos, union sval_u exprSourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CompareCaseInfo(const void *elem1, const void *elem2) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_IsLastStatement(union sval_u *node) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitCaseStatement(union sval_u expr, union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitDefaultStatement(union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitSwitchStatementList(union sval_u val, bool lastStatement, unsigned int endSourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CalcLocalVarsSwitchStatement(union sval_u stmtlist, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitSwitchStatement(union sval_u expr, union sval_u stmtlist, union sval_u sourcePos, bool lastStatement, unsigned int endSourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitCaseStatementInfo(unsigned int name, union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitBreakStatement(union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitContinueStatement(union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitBreakpointStatement(union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitProfStatement(union sval_u profileName, union sval_u sourcePos, unsigned char op) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitProfBeginStatement(union sval_u profileName, union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitProfEndStatement(union sval_u profileName, union sval_u sourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitStatement(union sval_u val, bool lastStatement, unsigned int endSourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CalcLocalVarsStatement(union sval_u val, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitStatementList(union sval_u val, bool lastStatement, unsigned int endSourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CalcLocalVarsStatementList(union sval_u val, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CalcLocalVarsDeveloperStatementList(union sval_u val, struct scr_block_t *block, union sval_u *devStatBlock) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitDeveloperStatementList(union sval_u val, union sval_u sourcePos, struct scr_block_t *block, union sval_u *devStatBlock) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitFormalParameterList(union sval_u exprlist, union sval_u sourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CalcLocalVarsFormalParameterList(union sval_u exprlist, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SpecifyThread(union sval_u val) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitThreadInternal(union sval_u val, union sval_u sourcePos, union sval_u endSourcePos, struct scr_block_t *block) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Scr_CalcLocalVarsThread(union sval_u exprlist, union sval_u stmtlist, union sval_u *stmttblock) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto InitThread(int type) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitNormalThread(union sval_u val, union sval_u *stmttblock) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitDeveloperThread(union sval_u val, union sval_u *stmttblock) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitDefineStatement(union sval_u key, union sval_u expr, union sval_u keySourcePos, union sval_u exprSourcePos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitThread(union sval_u val) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitThreadList(union sval_u val) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitInclude(union sval_u val) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EmitIncludeList(union sval_u val) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScriptCompile(union sval_u val, unsigned int filePosId, unsigned int fileCountId, unsigned int scriptId, struct PrecacheEntry *entries, int entriesCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_CompileStatement(union sval_u parseData) -> void
{

}

#endif // __UNIMPLEMENTED__
