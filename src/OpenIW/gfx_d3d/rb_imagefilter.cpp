//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto RB_VirtualToSceneRadius(float radius, float *radiusX, float *radiusY) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_PickSymmetricFilterMaterial(int halfTapCount, int gammaType, const struct Material **material) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_GaussianFilterPoints1D(float pixels, int srcRes, int dstRes, int tapLimit, float *tapOffsets, float *tapWeights) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_GenerateGaussianFilter1D(float radius, int *res, int axis, int gammaType, struct GfxImageFilterPass *filterPass) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_GenerateGaussianFilter2D(float radius, int srcWidth, int srcHeight, int dstWidth, int dstHeight, int gammaType, struct GfxImageFilterPass *filterPass) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_GenerateGaussianFilterChain(float radiusX, float radiusY, int srcWidth, int srcHeight, int dstWidth, int dstHeight, int passLimit, int gammaType, struct GfxImageFilterPass *filterPass) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_SetupFilterPass(const struct GfxImageFilterPass *filterPass) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_FilterPingPong(const struct GfxImageFilter *filter, int passIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_FilterPingPongEnd(const struct GfxImageFilter *filter) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_SetSrgbTexture(struct GfxImage *image, bool useSrgbReads) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_SetSrgbTextureReadsForFilteringImage(const struct GfxImageFilter *filter, bool useSrgbReads) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_FilterImage(struct GfxImageFilter *filter) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_GaussianFilterImage(float radius, enum GfxRenderTargetId srcRenderTargetId, enum GfxRenderTargetId dstRenderTargetId) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RB_ApplyGlowFilter(float radius, enum GfxRenderTargetId srcRenderTarget, enum GfxRenderTargetId dstRenderTarget) -> enum GfxRenderTargetId
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_GlowFilterImage(float radius) -> void
{

}

#endif // __UNIMPLEMENTED__
