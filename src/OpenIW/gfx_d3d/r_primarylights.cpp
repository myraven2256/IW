//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto R_ShadowedSpotLightScore(const struct GfxViewParms *viewParms, const struct GfxLight *light) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_DoesSunPrimaryLightDirMatchStage(unsigned int sceneLightIndex, const struct GfxViewInfo *viewInfo) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddPotentiallyShadowedLight(const struct GfxViewInfo *viewInfo, unsigned int sceneLightIndex, struct GfxCandidateShadowedLight *candidateLights, unsigned int candidateLightCount) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddShadowsForLight(struct GfxViewInfo *viewInfo, unsigned int sceneLightIndex, float spotShadowFade) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddShadowedLightToShadowHistory(struct GfxShadowedLightHistory *shadowHistory, unsigned int sceneLightIndex, float score, float fadeDelta) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_FadeOutShadowHistoryEntries(unsigned int *sceneLightIsUsed, struct GfxShadowedLightHistory *shadowHistory, float fadeDelta) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ClearShadowedPrimaryLightHistory(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_AddDynamicSceneLight(struct GfxViewInfo *viewInfo, const struct GfxLight *light) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsPrimaryLight(unsigned int sceneLightIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ChooseShadowedLights(unsigned int *sceneLightIsUsed, struct GfxViewInfo *viewInfo) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetPrimaryLightEntityShadowBit(unsigned int localClientNum, unsigned int entnum, unsigned int primaryLightIndex) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetPrimaryLightDynEntShadowBit(unsigned int entnum, unsigned int primaryLightIndex) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LinkSphereEntityToPrimaryLights(unsigned int localClientNum, unsigned int entityNum, const float *origin, float radius) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LinkBoxEntityToPrimaryLights(unsigned int localClientNum, unsigned int entityNum, const struct Bounds *bounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LinkDynEntToPrimaryLights(unsigned int dynEntId, enum DynEntityDrawType drawType, const struct Bounds *bounds) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UnlinkEntityFromPrimaryLights(unsigned int localClientNum, unsigned int entityNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_UnlinkDynEntFromPrimaryLights(unsigned int dynEntId, enum DynEntityDrawType drawType) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsEntityVisibleToPrimaryLight(unsigned int localClientNum, unsigned int entityNum, unsigned int primaryLightIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsDynEntVisibleToPrimaryLight(unsigned int dynEntId, enum DynEntityDrawType drawType, unsigned int primaryLightIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_IsEntityVisibleToShadowedPrimaryLight(unsigned int baseBitIndex, unsigned int sceneLightIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsEntityVisibleToAnyShadowedPrimaryLight(const struct GfxViewInfo *viewInfo, unsigned int entityNum) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_IsDynEntVisibleToShadowedPrimaryLight(unsigned int baseBitIndex, enum DynEntityDrawType drawType, unsigned int sceneLightIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsDynEntVisibleToAnyShadowedPrimaryLight(unsigned int dynEntId, enum DynEntityDrawType drawType) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetNonSunPrimaryLightForBox(const struct Bounds *bounds) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetNonSunPrimaryLightForSphere(const float *origin, float radius) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
