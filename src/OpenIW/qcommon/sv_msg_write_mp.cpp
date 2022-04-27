//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_msg() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_GetStateFieldListForEntityType(const int eType) -> const struct NetFieldList*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_CheckWritingEnoughBits(int value, int bits) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteReliableCommandToBuffer(const char *pszCommand, char *pszBuffer, int iBufferSize) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_CheckOriginIsInPlayableBounds(const float *origin, const float *mapCenter) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteOriginFloat(const struct SnapshotInfo_s *snapInfo, const int clientNum, const float *mapCenter, struct msg_t *msg, int bits, float value, float oldValue) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteOriginZFloat(const struct SnapshotInfo_s *snapInfo, const int clientNum, const float *mapCenter, struct msg_t *msg, float value, float oldValue) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_ShouldSendPSField(const struct SnapshotInfo_s *snapInfo, bool sendOriginAndVel, const struct playerState_s *ps, const struct playerState_s *oldPs, const struct NetField *field) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteEntityIndex(const struct SnapshotInfo_s *snapInfo, struct msg_t *msg, const int index, const int indexBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteLastChangedField(struct msg_t *msg, const int lastChangedFieldNum, int numFields) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_WriteDeltaTime(const int clientNum, struct msg_t *msg, int timeBase, int time) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_WriteEFlags(const int clientNum, struct msg_t *msg, const int oldFlags, const int newFlags) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_WriteGroundEntityNum(const int clientNum, struct msg_t *msg, const int groundEntityNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteEventNum(const int clientNum, struct msg_t *msg, int eventNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteEventParam(const int clientNum, struct msg_t *msg, int eventParam) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_GetPacketEntityTypeForEType(int eType) -> enum PacketEntityType
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_GetBitCount(int bits, bool *estimate, int from, int to) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_EncodeSkippedFields(const struct SnapshotInfo_s *snapInfo, struct msg_t *msg, int numFieldsSkipped, const int skippedFieldBits) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_WriteValueNoXor(const struct SnapshotInfo_s *snapInfo, struct msg_t *msg, int value, const int bits, const char *fieldName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_WriteValue(const struct SnapshotInfo_s *snapInfo, struct msg_t *msg, const int *fromF, const int *toF, const int bits, const char *fieldName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_WriteDeltaAngle(const struct SnapshotInfo_s *snapInfo, struct msg_t *msg, const float oldFloat, const float fullFloat) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_WriteDeltaField(const struct SnapshotInfo_s *snapInfo, struct msg_t *msg, const int time, const unsigned char *from, const unsigned char *to, const struct NetField *field, const int fieldNum, const bool forceSend, const int lastChangedField, const int skippedFieldBits, const bool sendSkippedFields) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_WriteDeltaFields(const struct SnapshotInfo_s *snapInfo, struct msg_t *msg, const int time, const unsigned char *from, const unsigned char *to, const int force, int lastChanged, int numFields, const struct NetField *stateFields, const int skippedFieldBits, bool writeEntUnlinkBit, bool isEntity) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_GetLastChangedField(const struct SnapshotInfo_s *snapInfo, const unsigned char *from, const unsigned char *to, const int numFields, const struct NetField *stateFields) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_WriteDeltaStruct(struct SnapshotInfo_s *snapInfo, struct msg_t *msg, const int time, unsigned char *from, unsigned char *to, int force, int numFields, int indexBits, const struct NetField *stateFields, int bChangeBit, int skippedFieldBits, bool isEntity) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_TrTypeUsesTrDelta(const int trType) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_TrTypeUsesTrDuration(const int trType) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_ShouldEntityFieldBeForcedSent(const struct SnapshotInfo_s *snapInfo, const struct entityState_s *from, const struct entityState_s *to, const struct NetField *field) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_ShouldEntityFieldBeForcedHidden(const struct SnapshotInfo_s *snapInfo, const struct entityState_s *from, const struct entityState_s *to, const struct NetField *field) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_ShouldSendEntityField(const struct SnapshotInfo_s *snapInfo, const struct entityState_s *from, const struct entityState_s *to, const struct NetField *field) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_WriteEntityDelta(const struct SnapshotInfo_s *snapInfo, struct msg_t *msg, const int time, const struct entityState_s *fromES, const struct entityState_s *toES, int force, int numFields, int indexBits, const struct NetField *stateFields) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_WriteEntityRemoval(const struct SnapshotInfo_s *snapInfo, struct msg_t *msg, unsigned char *from, int indexBits, bool changeBit) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_EntityStatesMatch(const struct entityState_s *e1, const struct entityState_s *e2) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_WriteEntityDeltaForEType(const struct SnapshotInfo_s *snapInfo, struct msg_t *msg, const int time, int eType, const struct entityState_s *from, const struct entityState_s *to, int force) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UpdateEntTimesForTimeDelta(struct entityState_s *ent, const int timeDelta) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PrintChangedEntityFields(struct SnapshotInfo_s *snapInfo, const struct entityState_s *from, const struct entityState_s *to) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteEntity(struct SnapshotInfo_s *snapInfo, struct msg_t *msg, const int timeDeltaFrom, const int timeDeltaTo, const int time, const struct entityState_s *from, const struct entityState_s *to, int force) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaArchivedEntity(struct SnapshotInfo_s *snapInfo, struct msg_t *msg, const int time, const struct archivedEntity_s *from, const struct archivedEntity_s *to, int force) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaClient(struct SnapshotInfo_s *snapInfo, struct msg_t *msg, const int time, const struct clientState_s *from, const struct clientState_s *to, int force) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MSG_WriteDeltaHudElems(struct SnapshotInfo_s *snapInfo, struct msg_t *msg, const int time, const struct hudelem_s *from, const struct hudelem_s *to, int count) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteEmptyPlayerstate(struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MSG_WriteDeltaPlayerstate(struct SnapshotInfo_s *snapInfo, struct msg_t *msg, const int time, const struct playerState_s *from, const struct playerState_s *to) -> void
{

}

#endif // __UNIMPLEMENTED__
