//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto GetMinBitCountForNum(const unsigned int num) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ValuesAreEqual(int bits, const int *fromF, const int *toF) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaKey(struct msg_t *msg, int key, int oldV, int newV, int bits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaKey(struct msg_t *msg, int key, int oldV, int bits) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteKey(struct msg_t *msg, int key, int newV, int bits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadKey(struct msg_t *msg, int key, int bits) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaKeyByte(struct msg_t *msg, int key, int oldV, int newV) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaKeyByte(struct msg_t *msg, int key, int oldV) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaKeyShort(struct msg_t *msg, int key, int oldV, int newV) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaKeyShort(struct msg_t *msg, int key, int oldV) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaUsercmdKey(struct msg_t *msg, int key, const struct usercmd_s *from, const struct usercmd_s *to) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaUsercmdKey(struct msg_t *msg, int key, const struct usercmd_s *from, struct usercmd_s *to) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ClearLastReferencedEntity(struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_ReadDeltaTime(struct msg_t *msg, int timeBase) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_ReadDeltaGroundEntity(struct msg_t *msg) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_ReadDeltaEventField(struct msg_t *msg) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_ReadDeltaEventParamField(struct msg_t *msg) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_ReadEFlags(struct msg_t *msg, const int oldFlags) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_ReadOriginFloat(int bits, struct msg_t *msg, float oldValue) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_ReadOriginZFloat(struct msg_t *msg, float oldValue) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadEntityIndex(struct msg_t *msg, int indexBits) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_ReadLastChangedField(struct msg_t *msg, int totalFields) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_ReadValueNoXor(struct msg_t *msg, const int bits) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_ReadValue(struct msg_t *msg, const int *fromF, int *toF, const int bits) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_ReadDeltaAngle(struct msg_t *msg, const float oldFloat) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_ReadDeltaField(struct msg_t *msg, const int time, const void *from, void *to, const struct NetField *field, int print, bool noXor) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_ReadNumFieldsSkipped(struct msg_t *msg, const int skippedFieldBits, const int maxVal) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_CopyFieldOver(const struct NetField *stateFields, const void *from, void *to, const int fieldNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_ReadDeltaFields(struct msg_t *msg, const int time, const void *from, void *to, int numFields, const struct NetField *stateFields, const int skippedFieldBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_ReadDeltaStruct(struct msg_t *msg, const int time, const void *from, void *to, unsigned int number, int numFields, int indexBits, const struct NetField *stateFields, const int skippedFieldBits) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_ReadDeltaEntityStruct(struct msg_t *msg, const int time, const void *from, void *to, unsigned int number, const int skippedFieldBits) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaEntity(struct msg_t *msg, const int time, const struct entityState_s *from, struct entityState_s *to, int number) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaArchivedEntity(struct msg_t *msg, const int time, const struct archivedEntity_s *from, struct archivedEntity_s *to, int number) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaClient(struct msg_t *msg, const int time, const struct clientState_s *from, struct clientState_s *to, int number) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_ReadDeltaHudElems(struct msg_t *msg, const int time, const struct hudelem_s *from, struct hudelem_s *to, int count) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_ReadDeltaPlayerstate(const int localClientNum, struct msg_t *msg, const int time, const struct playerState_s *from, struct playerState_s *to, bool predictedFieldsIgnoreXor) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_initHuffmanInternal() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_CheckFields() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_InitHuffman() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_DumpNetFieldChanges_f() -> void
{

}

#endif // __UNIMPLEMENTED__
