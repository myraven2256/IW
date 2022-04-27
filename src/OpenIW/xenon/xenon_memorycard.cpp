//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_xenon_memorycard() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemCard_SetUseDevDrive(bool useDevDrive) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemCard_IsUsingDevDrive() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetContextFileSize(void *fileHandle) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Memcard_InitializeSystem() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Memcard_InitializeDevices() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Memcard_SelectSaveDevice(int controllerIndex, bool forceShow, bool showUI, const int bytesNeeded) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Memcard_UnselectSaveDevice(int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Memcard_SetSelectedDevice(int controllerIndex, unsigned long deviceId) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Memcard_GetSelectedDeviceID(int controllerIndex) -> unsigned long
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Memcard_IsDeviceSelected(int controllerIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Memcard_IsDeviceAvailable(int controllerIndex, int bytesNeeded, bool *forceShow) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Memcard_GetDeviceState(int controllerIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Memcard_CheckForStorageDeviceChange(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Memcard_CheckAvailableOverlapped(int slot) -> enum taskCompleteResults
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Memcard_CheckOngoingTasks() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetMemcardError(struct MemcardError *error, const char *errorString, unsigned long extendedError) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClearMemcardError(struct MemcardError *error) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MemCard_OpenFromHDD(const char *name, enum MemcardOperation operation, struct MemcardError *error) -> void*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Memcard_OpenFile(void **resultFileHandle, const char *name, const char *description, enum MemcardOperation operation, int controllerIndex, unsigned long deviceId) -> enum Memcard_OpenFile_Result
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Memcard_GetOpenError() -> const struct MemcardError*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto OpenContextFile(const char *name, const char *description, enum MemcardOperation operation, int controllerIndex) -> void*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MemCard_ReadFromHDD(void *fileHandle, void *data, int maxsize, struct MemcardError *error) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ReadFromMemoryCard(void *fileHandle, void *data, int maxsize, struct MemcardError *error) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MemCard_WriteToHDD(void *fileHandle, const void *data, int size, struct MemcardError *error) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Memcard_GetWriteError() -> const struct MemcardError*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WriteToMemoryCardFile(void *fileHandle, const void *data, unsigned int size) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CloseContextFile(void *fileHandle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DeleteContextFile(void *fileHandle) -> void
{

}

#endif // __UNIMPLEMENTED__
