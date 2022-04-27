//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto R_ModelLightingIndexFromHandle(unsigned int handle) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DecodeModelLightingPlacement(unsigned int entryIndex, unsigned int *x0, unsigned int *y0) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_UpdateBaseLightingCoords(float xCoord, float yCoord, float zCoord, float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetModelLightingCoords(unsigned int handle, float *out) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetModelGroundLighting(unsigned int handle) -> union GfxColor
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ModelLightingIndexToHandle(unsigned int index) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocStaticModelLighting(const struct GfxStaticModelDrawInst *smodelDrawInst, unsigned int smodelIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AllocModelLighting(const float *lightingOrigin, unsigned short *cachedLightingHandle, function *GetPrimaryLightCallback, const void *userData, struct GfxLightingInfo *lightingInfoOut, int useHeroLighting) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DynEntPrimaryLightCallback(const void *userData) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetPrimaryLightForBoxCallback(const void *userData) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetPrimaryLightForSphereCallback(const void *userData) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocModelLighting_PrimaryLight(const float *lightingOrigin, unsigned int dynEntId, unsigned short *cachedLightingHandle, struct GfxLightingInfo *lightingInfoOut) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocModelLighting_Box(const float *lightingOrigin, const struct Bounds *bounds, unsigned short *cachedLightingHandle, struct GfxLightingInfo *lightingInfoOut, int useHeroLighting) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AllocModelLighting_Sphere(const float *lightingOrigin, const float *origin, float radius, unsigned short *cachedLightingHandle, struct GfxLightingInfo *lightingInfoOut) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ClearModelLightingOrigins() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ToggleModelLightingFrame() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetModelLightingTextureDelta(unsigned int dx, unsigned int dy, unsigned int dz) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetModelLightingTextureOffset(unsigned int x0, unsigned int y0) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetTextureOffset(unsigned int x, unsigned int y, unsigned int z) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_VerifyModelLightingImageOffsets() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CalcModelLighting(unsigned int entryIndex, const float *lightingOrigin, unsigned int nonSunPrimaryLightIndex, enum GfxModelLightExtrapolation extrapolateBehavior, int useHeroLighting, union GfxColor *ambientColor) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetModelGroundLighting(unsigned int entryIndex, const unsigned char *groundLighting) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetStaticModelLighting(unsigned int smodelIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_BeginAllStaticModelLighting() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetAllStaticModelLighting() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetModelLightingCoordsForSource(unsigned int handle, struct GfxCmdBufSourceState *source) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetModelAmbientColorForSource(const unsigned char *ambientColor, struct GfxCmdBufSourceState *source) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetModelLightingSampleDeltas() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetModelLightingLookupScale(struct GfxCmdBufInput *input) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SetupDynamicModelLighting(struct GfxCmdBufInput *input) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AllocModelLightingGlobal(unsigned int bytes) -> void*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitModelLightingGlobals() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ResetModelLighting() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitModelLightingImage() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownModelLightingImage() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitStaticModelLighting(unsigned int smodelCount) -> void
{

}

#endif // __UNIMPLEMENTED__
