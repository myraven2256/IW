//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto R_RegisterLightDef_FastFile(const char *name) -> struct GfxLightDef*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_RegisterLightDef(const char *name) -> struct GfxLightDef*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitLightDefs() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShutdownLightDefs() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_LightImportanceGreaterEqual(const struct GfxLight *light0, const struct GfxLight *light1) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_MostImportantLights(const struct GfxLight **lights, int lightCount, int keepCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChooseVisibleDynamicLights(struct GfxViewInfo *viewInfo) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_BoxInPlanes(const float *planes[0x4], const struct Bounds *bounds) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SphereInPlanes(const float *planes[0x4], const float *center, const float radius) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AllowBspSpotLightShadows(int surfIndex, void *bspLightCallbackAsVoid) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AllowBspSpotLight(int surfIndex, void *bspLightCallbackAsVoid) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CalcPlaneFromPointDir(float *plane, const float *origin, const float *dir) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ComputeSpotLightCrossDirs(const struct GfxLight *light, float *crossDirs[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CalcPlaneFromCosSinPointDirs(float *plane, float fCos, float fSin, const float *origin, const float *forward, const float *lateral) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CalcSpotLightPlanes(const struct GfxLight *light, float *planes[0x4]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AllowBspOmniLight(int surfIndex, void *bspLightCallbackAsVoid) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetBspOmniLightSurfs(const struct GfxLight *light, const struct Sphere *bounds, const unsigned int *bspSetBits, const unsigned int dynLightIndex, struct GfxBspSurfList *bspSurfList) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetBspSpotLightSurfs(const struct GfxLight *light, const struct Sphere *bounds, const unsigned int *bspSetBits, unsigned int dynLightIndex, struct GfxBspSurfList *bspSurfList, struct GfxBspSurfList *bspSurfListShadow) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AllowStaticModelOmniLight(int smodelIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AllowStaticModelSpotLight(int smodelIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CalcBoundingSphereForSpotLight(struct Sphere *sphere, const struct GfxLight *light) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetStaticGeoDynamicLightSurfs(struct GfxViewInfo *viewInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetSceneEntDynamicLightSurfs(const struct GfxViewInfo *viewInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetTechniqueForDynamicLightType(const struct GfxLight *light, const struct GfxViewInfo *viewInfo) -> enum MaterialTechniqueType
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_EmitDynamicLightSurfs(struct GfxViewInfo *viewInfo, const float *viewOrigin) -> void
{

}

#endif // __UNIMPLEMENTED__
