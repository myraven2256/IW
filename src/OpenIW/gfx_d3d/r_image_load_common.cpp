//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto Image_GetMipmapResolution(int baseWidth, int baseHeight, int mipmap, unsigned short *mipWidth, unsigned short *mipHeight) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Image_GetPlatformScreenWidth(int platform, int screenWidth) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Image_GetPlatformScreenHeight(int platform, int screenHeight) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Image_TrackMemory(struct GfxImage *image, int platform, int memory) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_TrackFullscreenTexture(struct GfxImage *image, int fullscreenWidth, int fullscreenHeight, int picmip, enum _D3DFORMAT format) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_TrackTexture(struct GfxImage *image, int imageFlags, enum _D3DFORMAT format, int width, int height, int depth) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_GetCardMemoryAmount(unsigned int imageFlags, enum _D3DFORMAT format, unsigned int width, unsigned int height, unsigned int depth) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_MipLevelBaseAddress(const struct GfxImage *image, struct D3DBaseTexture *basemap, enum _D3DFORMAT format, enum _D3DCUBEMAP_FACES face, unsigned int mipLevel) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Image_Upload2D_CopyData_Xbox(const struct GfxImage *image, enum _D3DFORMAT format, enum _D3DCUBEMAP_FACES face, unsigned int mipLevel, const unsigned char *src) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Image_Upload3D_CopyData_Xbox(const struct GfxImage *image, enum _D3DFORMAT format, unsigned int mipLevel, const unsigned char *src) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_UploadData(const struct GfxImage *image, enum _D3DFORMAT format, enum _D3DCUBEMAP_FACES face, unsigned int mipLevel, const unsigned char *src) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Image_AllocCubePixels_Xbox(struct GfxImage *image, int mipmapCount, enum _D3DFORMAT imageFormat) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Image_Alloc3DPixels_Xbox(struct GfxImage *image, int mipmapCount, enum _D3DFORMAT imageFormat) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Image_Alloc2DPixels_Xbox(struct GfxImage *image, int mipmapCount, enum _D3DFORMAT imageFormat) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Image_Alloc1DPixels_Xbox(struct GfxImage *image, int mipmapCount, enum _D3DFORMAT imageFormat) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_Setup(struct GfxImage *image, int width, int height, int depth, int imageFlags, enum _D3DFORMAT imageFormat, const char *name) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_SetupAndLoad(struct GfxImage *image, int width, int height, int depth, int imageFlags, enum _D3DFORMAT imageFormat, const char *name) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Image_CubemapFace(unsigned int faceIndex) -> enum _D3DCUBEMAP_FACES
{

}

#endif // __UNIMPLEMENTED__
