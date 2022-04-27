//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_r_light() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ShowGridOrigin(const float *origin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ShowGridBox(const unsigned int *pos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ShowGridCorner(unsigned int x, unsigned int y, unsigned int z, float halfSize, const float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ShowLightGrid(const struct GfxLightGrid *lightGrid, const unsigned int *pos, const float *samplePos, const struct GfxLightGridEntry **cornerEntry, bool *suppressEntry, bool honorSuppression) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ShowDetailedGridOrigin(const float *origin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ShowDetailedGridBox(const unsigned int *pos) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetLightGridAverageColorByIndexes(const struct GfxLightGrid *lightGrid, unsigned short colorIndex, const unsigned int *sampleIndexes, unsigned int sampleIndexCount, float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ShowDetailedGridCornerLine(const float *center, unsigned int x, unsigned int y, unsigned int z, const float *lineColor) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ShowPrimaryLightLine(const float *origin, unsigned int primaryLightIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ShowDetailedGridCorner(const struct GfxLightGrid *lightGrid, unsigned short colorIndex, unsigned int primaryLightIndex, const float *center, unsigned int x, unsigned int y, unsigned int z, bool drawLine, const float *lineColor) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ShowDetailedLightGrid(const struct GfxLightGrid *lightGrid, unsigned int primaryLightIndex, const unsigned int *pos, const float *samplePos, const struct GfxLightGridEntry **cornerEntry, bool *suppressEntry, bool honorSuppression) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_LightGridDebugEnable(const float *viewPos, int desiredState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_LightGridDebugDisable() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LightGridDebugToggle(const float *viewPos, bool lockToBox) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddSortedHistoryEntry(int x, int y, int z, int pos) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SortedHistoryEntry(int x, int y, int z, enum GfxSortedHistoryAdd addMode) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_ShowLightVisCachePoints(const float *viewOrigin, const struct DpvsPlane *clipPlanes, int clipPlaneCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_UpdateVisHistory(const struct GfxLightGrid *lightGrid, const unsigned int *pos, const struct GfxLightGridEntry **cornerEntry) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetPackedSunWeightFromFloat(float sunWeight) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AverageLightGridColors(const struct GfxLightGridColors *colors, float sunWeight, unsigned char *outColor) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetGridAmbientColor(const struct GfxLightGridColors *colors, unsigned char packedSunWeight) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetLightGridColors(const struct GfxLightGridColors *colors, unsigned char packedSunWeight, unsigned char *pixels) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ScaleLightGridColors(const struct GfxLightGridColors *colors, unsigned short fixedPointWeight, unsigned short *scaled) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_WeightedAccumulateLightGridColors(const struct GfxLightGridColors *colors, unsigned short fixedPointWeight, unsigned short *accumulated) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_PackAccumulatedLightGridColors(const unsigned short *accumulated, struct GfxLightGridColors *packed) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetLightGridColorsFixedPointBlendWeights(const float *colorsWeight, unsigned int colorsCount, float weightNormalizeScale, unsigned short *fixedPointWeight) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AdjustLightColorSamples(unsigned short *colorSamples) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ApplyLightGridTweaksToLightGridColors(const struct GfxLightGrid *lightGrid, unsigned int colorsIndex, struct GfxLightGridColors *localColorsToSet, struct GfxLightGridColors **colorsToSetPtr) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ApplyCharacterLightsToLightGridColors(const struct GfxLightGrid *lightGrid, unsigned int colorsIndex, const float *charLightOrigin, struct GfxLightGridColors *localColorsToSet, struct GfxLightGridColors **colorsToSetPtr) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetLightGridColorsFromIndex(const struct GfxLightGrid *lightGrid, unsigned int colorsIndex, float primaryLightWeight, unsigned char *dest, const float *xyz) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_FixedPointBlendLightGridColors(const struct GfxLightGrid *lightGrid, const unsigned short *colorsIndex, const unsigned short *fixedPointWeight, unsigned int colorsCount, struct GfxLightGridColors *outPacked, bool useHeroLighting) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_BlendLightGridColors(const struct GfxLightGrid *lightGrid, const unsigned short *colorsIndex, const float *colorsWeight, unsigned int colorsCount, float weightNormalizeScale, struct GfxLightGridColors *outPacked, bool useHeroLighting) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_BlendAndAverageLightGridColors(const struct GfxLightGrid *lightGrid, const unsigned short *colorsIndex, const float *colorsWeight, unsigned int colorsCount, float primaryLightWeight, float weightNormalizeScale, unsigned char *outAverage) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_BlendAndSetLightGridColors(const struct GfxLightGrid *lightGrid, const unsigned short *colorsIndex, const float *colorsWeight, unsigned int colorsCount, float primaryLightWeight, float weightNormalizeScale, unsigned char *dest, const float *xyz) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SetDefaultLightGridColors(const struct GfxLightGrid *lightGrid, unsigned char *dest) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_ExtrapolateLightingAtPoint(const struct GfxLightGrid *lightGrid, unsigned char *dest, enum GfxModelLightExtrapolation extrapolateBehavior, unsigned int defaultGridEntry, const float *xyz, union GfxColor *ambientColor) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_AddLightGridSample(unsigned short *sampleColors, float *sampleWeight, unsigned int sampleCount, unsigned short sampleColorsAdd, float sampleWeightAdd) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetLightGridSampleEntryQuad(const struct GfxLightGrid *lightGrid, const unsigned int *pos, const struct GfxLightGridEntry **entries, unsigned int *defaultGridEntry) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_SunPrimaryLightCount() -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_FirstOccludedSunPrimaryLight() -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_IsOccludedSunLight(unsigned int primaryLightIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsPrimarySunLight(unsigned int primaryLightIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_GetPrimaryLightForOccludedSunLight(unsigned int primaryLightIndex) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_IsBetterPrimaryLight(unsigned char oldPrimaryLightIndex, unsigned char newPrimaryLightIndex, float oldWeight, float newWeight) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_LightSightTrace(int oldHitNum, const float *start, const float *end, const struct Bounds *bounds, unsigned int bmodelIndex, int brushmask) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_IsValidLightGridSample(const struct GfxLightGrid *lightGrid, const struct GfxLightGridEntry *entry, int cornerIndex, const unsigned int *pos, const float *samplePos) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_LightGridLookup(const struct GfxLightGrid *lightGrid, const float *samplePos, float *cornerWeight, const struct GfxLightGridEntry **cornerEntry, unsigned int *defaultGridEntry) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetPrimaryLightFromGrid(const struct GfxLightGrid *lightGrid, const float *samplePos, unsigned char sunPrimaryLightIndex) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_CanLightInfluenceLightGridCorner(const struct GfxLightGrid *lightGrid, const struct ComPrimaryLight *light, const float *samplePos, unsigned int cornerIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_IsInSunPrimaryLight(const float *samplePos) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetLightingAtPoint(const struct GfxLightGrid *lightGrid, const float *samplePos, unsigned int nonSunPrimaryLightIndex, unsigned short *sampleColors, float *sampleWeight, unsigned int *sampleCount, unsigned int *defaultGridEntry, float *primaryVisibleWeight, float *primaryOccludedWeight, float *maxWeight) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetLightingAtPoint(const struct GfxLightGrid *lightGrid, const float *samplePos, unsigned int nonSunPrimaryLightIndex, unsigned char *dest, enum GfxModelLightExtrapolation extrapolateBehavior, int useHeroLighting, union GfxColor *ambientColor) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetAttenuatedPrimaryLightColor(const struct ComPrimaryLight *light, const float *origin, float *attenuatedColor) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GetAverageLightingAtPoint(const float *samplePos, unsigned char *outColor) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto R_LightVisHistoryFilename(const char *bspName, char *filename) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_InitLightVisHistory(const char *bspName) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_SaveLightVisHistory() -> void
{

}

#endif // __UNIMPLEMENTED__
