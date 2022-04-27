//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto IWNet_Storage_IsStorageCommand(struct IWNetCommandData *cmd) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWNet_Storage_UtilStateComplete(struct IWNetStorageTaskState *state, enum IWNetStorageError errorCode) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWNet_Storage_UtilComplete(struct IWNetCommandData *cmd, enum IWNetStorageError errorCode) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWNet_Storage_UtilWriteSpaceLeft(struct IWNetCommandData *cmd) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWNet_Storage_UtilReadSpaceLeft(struct IWNetCommandData *cmd) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWNet_WriteStorageUtil_FileId(struct IWNetCommandData *cmd, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWNet_WriteStorageUtil_FileName(struct IWNetCommandData *cmd, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWNet_WriteStorage_BeginWrite(const int localControllerIndex, struct IWNetCommandData *cmd, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWNet_WriteStorage_Write(const int localControllerIndex, struct IWNetCommandData *cmd, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWNet_WriteStorage_EndWrite(const int localControllerIndex, struct IWNetCommandData *cmd, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWNet_WriteStorage_BeginRead(const int localControllerIndex, struct IWNetCommandData *cmd, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWNet_WriteStorage_Read(const int localControllerIndex, struct IWNetCommandData *cmd, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWNet_WriteStorage_EndRead(const int localControllerIndex, struct IWNetCommandData *cmd, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWNet_Storage_WriteCommand(const int localControllerIndex, struct IWNetCommandData *cmd, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWNet_Storage_UtilNextWrite(struct IWNetCommandData *cmd, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWNet_Storage_UtilNextRead(struct IWNetCommandData *cmd, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWNet_Storage_HandleReplyFileBeginWrite(struct IWNetCommandData *cmd, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWNet_Storage_HandleReplyFileWrite(struct IWNetCommandData *cmd, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWNet_Storage_HandleReplyFileEndWrite(struct IWNetCommandData *cmd, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWNet_Storage_HandleReplyFileBeginRead(struct IWNetCommandData *cmd, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWNet_Storage_HandleReplyFileRead(struct IWNetCommandData *cmd, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWNet_Storage_HandleReplyFileEndRead(struct IWNetCommandData *cmd, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IWNet_Storage_HandleError<3>(struct IWNetCommandData *cmd, struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWNet_Storage_ParsePacket(struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWNet_Storage_Write(const int localControllerIndex, struct IWNetStorageTaskState *request, const char *filename, unsigned char *data, unsigned int size) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWNet_Storage_Read(const int localControllerIndex, struct IWNetStorageTaskState *request, const char *filename, unsigned char *data, unsigned int maxSize) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWNet_Storage_IsComplete(struct IWNetStorageTaskState *request) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWNet_Storage_Cancel(struct IWNetStorageTaskState *request) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWNet_Storage_Clear(struct IWNetStorageTaskState *request) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWNet_Storage_GetErrorCode(struct IWNetStorageTaskState *request, enum IWNetStorageError *outErrorCode) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IWNet_Storage_ErrorCodeToString(enum IWNetStorageError errorCode) -> const char*
{

}

#endif // __UNIMPLEMENTED__
