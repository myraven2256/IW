//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_r_screenshot() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LevelShot() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SaveGameShot(const char *saveName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CubemapShotCalcReflectionFactor(const int shotIndex, const int colIndex, const int rowIndex, const float n0, const float n1) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CubemapShotCopySurfaceToBuffer(unsigned char *buffer, const int bufferSizeInBytes) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CubemapShotWriteTargaHeader(const int res, unsigned char *fileBuffer) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CubemapShotCopyBufferToTarga(const unsigned char *srcBuffer, unsigned char *targa) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CubemapShotApplyFresnelToTarga(const enum CubemapShot shotIndex, const float n0, const float n1, unsigned char *targa) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CopyCubemapShot(enum CubemapShot shotIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CubemapShotWriteTargaFile(const char *filename, const enum CubemapShot shotIndex, const float n0, const float n1) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CubemapShotSetInitialState() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CubemapShotRestoreState() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BeginCubemapShot(const int pixelWidthHeight, const int pixelBorder) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EndCubemapShot(const enum CubemapShot shotIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SaveCubemapShot(const char *filename, const enum CubemapShot shotIndex, const float n0, const float n1) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetDirForCubemapPixel(int faceIndex, float x, float y, float *dir) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CubemapLightingForDir(float **linearColors[0x3], int width, int height, const float *dir, const float *baseColor, unsigned char *pixel) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CubemapLighting(float **linearColors[0x3], int width, int height, const float *baseColor, unsigned char **pixels) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CubemapShotExtractLinearLight(unsigned char **pixels, int width, int height, float **linearColors[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LightingFromCubemapShots(const float *baseColor) -> void
{

}

#endif // __UNIMPLEMENTED__
