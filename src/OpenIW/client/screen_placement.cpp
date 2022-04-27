//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto ScrPlace_CalcSpecificSafeAreaOffsets(float viewportX, float viewportY, float viewportWidth, float viewportHeight, float horzAspectScale, float safeAreaRatioHorz, float safeAreaRatioVert, float *realViewableMin, float *realViewableMax, float *virtualViewableMin, float *virtualViewableMax, int renderTargetWidth, int renderTargetHeight) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ScrPlace_CalcSafeAreaOffsets(struct ScreenPlacement *scrPlace, float viewportX, float viewportY, float viewportWidth, float viewportHeight, float horzAspectScale, int renderTargetWidth, int renderTargetHeight) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_SetupFloatRenderTargetViewport(struct ScreenPlacement *scrPlace, float viewportX, float viewportY, float viewportWidth, float viewportHeight, int renderTargetWidth, int renderTargetHeight) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_SetupFloatViewport(struct ScreenPlacement *scrPlace, float viewportX, float viewportY, float viewportWidth, float viewportHeight) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_SetupRenderTargetViewport(struct ScreenPlacement *scrPlace, int viewportX, int viewportY, int viewportWidth, int viewportHeight, int renderTargetWidth, int renderTargetHeight) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_SetupViewport(struct ScreenPlacement *scrPlace, int viewportX, int viewportY, int viewportWidth, int viewportHeight) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_SetupUnsafeViewport(struct ScreenPlacement *scrPlace, int viewportX, int viewportY, int viewportWidth, int viewportHeight) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_ApplyXWithoutSplitScreenScaling(const struct ScreenPlacement *scrPlace, float x, int horzAlign) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_ApplyX(const struct ScreenPlacement *scrPlace, float x, int horzAlign) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_ApplyYWithoutSplitScreenScaling(const struct ScreenPlacement *scrPlace, float y, int vertAlign) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_ApplyY(const struct ScreenPlacement *scrPlace, float y, int vertAlign) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ApplySplitscreenScaling(float *x, float *y, float *w, float *h) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_ApplyRectWithoutSplitScreenScaling(const struct ScreenPlacement *scrPlace, float *x, float *y, float *w, float *h, int horzAlign, int vertAlign) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IsFullscreenRect(float x, float y, float w, float h, int horzAlign, int vertAlign) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_ApplyRect(const struct ScreenPlacement *scrPlace, float *x, float *y, float *w, float *h, int horzAlign, int vertAlign) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ClampDimension(float *o, float *size, float min, float max) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_ApplyRectClamped(const struct ScreenPlacement *scrPlace, float *x, float *y, float *w, float *h, int horzAlign, int vertAlign) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_SetLegacySplitscreenScaling() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_SetNormalSplitscreenScaling() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_Init() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_SetupFullscreenViewports() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_SetupClientViewports() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_BeginDisplayView() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_BeginFullScreen() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_EndFrame() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_GetViewPlacement(const int localClientNum) -> const struct ScreenPlacement*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_GetFullPlacement() -> const struct ScreenPlacement*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_GetUnsafeFullPlacement() -> const struct ScreenPlacement*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_IsDisplayViewActive() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_IsFullScreenActive() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_GetActivePlacement(const int localClientNum) -> const struct ScreenPlacement*
{

}

#endif // __UNIMPLEMENTED__
