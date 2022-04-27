//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto SegmentSentinelWrite(struct MemoryFile *memFile, int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SegmentSentinelReadAndVerify(struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MemFile_ResetSaveStrings() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MemFile_WriteDataForArchive(struct MemoryFile *memFile, int bytes, void *data) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_CommonInit(struct MemoryFile *memFile, int size, void *buffer, bool errorOnOverflow, bool compress) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_memfile() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetThreadID() -> enum MemFileThread
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetStreamMode(enum MemFileMode mode) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AssertStreamMode(enum MemFileMode mode) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_InitForReading(struct MemoryFile *memFile, int size, void *buffer, bool compress) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_InitForWriting(struct MemoryFile *memFile, int size, void *buffer, bool errorOnOverflow, bool compress) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_Shutdown(struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MemFile_deflateInit(void *next_out, int avail_out, bool compress) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MemFile_deflateEnd(bool compress) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_StartSegment(struct MemoryFile *memFile, int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MemFile_EndSegment(struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MemFile_inflateInit(void *next_in, int len, bool compress) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MemFile_inflateEnd(bool compress) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MemFile_GetSegmentAddress(struct MemoryFile *memFile, int index) -> const unsigned char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_AtEnd(struct MemoryFile *memFile) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_MoveToSegment(struct MemoryFile *memFile, int index) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_CopySegments(struct MemoryFile *memFile, int index, void *buf) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_Cleanup() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_IsReading(struct MemoryFile *memFile) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_IsWriting(struct MemoryFile *memFile) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MemFile_WriteError(struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MemFile_WriteDataInternal(struct MemoryFile *memFile, int bytes, int nonZeroCount, int cacheBufferLen, unsigned int nextByte) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_GetUsedSize(struct MemoryFile *memFile) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_WriteData(struct MemoryFile *memFile, int byteCount, const void *p) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_WriteCString(struct MemoryFile *memFile, const char *string) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_ReadCString(struct MemoryFile *memFile) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto MemFile_ReadByteInternal(struct MemoryFile *memFile) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MemFile_ReadData(struct MemoryFile *memFile, int byteCount, void *p) -> void
{

}

#endif // __UNIMPLEMENTED__
