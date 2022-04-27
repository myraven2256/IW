//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto FileIndexIsInPackfile(unsigned int index) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PakFile_Open(struct Sys_File *streamFileCache, enum PackfileUser user, unsigned int fileIndex) -> struct Sys_File
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StreamFileOpen(struct StreamFile *streamFile, const struct CacheFileName *fileName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StreamFileClose(struct StreamFile *streamFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StreamFileSetMissing(struct StreamFile *streamFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StreamFileMissing(struct StreamFile *streamFile) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StreamFileDefined(struct StreamFile *streamFile) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto StreamFileReadCompletion(unsigned long dwErrorCode, unsigned long dwNumberOfBytesTransferred, struct _OVERLAPPED *lpOverlapped) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StreamFileRead(struct StreamFile *streamFile, unsigned char **buffer, int fileOffset, int bytes) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CacheFileNameEqual(const struct CacheFileName2 *file0, const struct CacheFileName *file1) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CacheFileNameDefined(const struct CacheFileName *file) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CacheFileNameDefined2(const struct CacheFileName2 *file) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CacheFileNameClear2(struct CacheFileName2 *file, char *rawName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CacheFileNameCopy(const struct CacheFileName *src, struct CacheFileName *dest) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CacheFileNameCopy2(const struct CacheFileName *src, struct CacheFileName2 *dest, char *rawName, unsigned int maxLen) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CacheFileNameHash(const struct CacheFileName *file) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CacheFileNameGetDebugName(const struct CacheFileName *file) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StreamFileNameGetCacheName(const struct StreamFileName *streamFileName, struct CacheFileName *fileName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StreamFileNameGetName(const struct StreamFileName *streamFileName, char *filename, int size) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StreamFileNameIsNullSound(const struct StreamFileName *streamFileName) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_OpenFileReliable(const char *filename) -> void*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sys_CreateFile(const char *dir, const char *filename) -> struct Sys_File
{

}

#endif // __UNIMPLEMENTED__
