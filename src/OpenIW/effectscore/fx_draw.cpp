//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_fx_draw() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_InterpolateColor(const struct FxElemVisStateSample *refState, float valueLerp, float valueLerpInv, float sampleLerp, float sampleLerpInv, int channel) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_IntegrateRotationFromZero(const struct FxElemVisStateSample *refState, int randomSeed, enum FxRandKey randomKey, float sampleLerp, float msecLifeSpan) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_EvaluateVisAlpha(struct FxElemPreVisualState *preVisState, struct FxElemVisualState *visState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SetupVisualState(const struct FxElemDef *elemDef, const struct FxEffect *effect, int randomSeed, float normTimeUpdateEnd, struct FxElemPreVisualState *preVisState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_EvaluateSize(const struct FxElemPreVisualState *preVisState, struct FxElemVisualState *visState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_InterpolateScale(const struct FxElemVisStateSample *refState, int randomSeed, enum FxRandKey randomKey, float sampleLerp, float sampleLerpInv) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_EvaluateScale(const struct FxElemPreVisualState *preVisState, struct FxElemVisualState *visState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_EvaluateVisualState_DoLighting(const struct FxElemPreVisualState *preVisState, struct FxElemVisualState *visState, const struct FxElemDef *elemDef) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_EvaluateVisualState(const struct FxElemPreVisualState *preVisState, float msecLifeSpan, struct FxElemVisualState *visState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GetSpriteTexCoords(const struct FxDrawState *draw, float *s0, float *ds, float *t0, float *dt) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GenSpriteVerts(struct FxDrawState *draw, const float *tangent, const float *binormal, const float *normal) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GenTrail_IndsForSegment(struct FxDrawState *draw, unsigned short reservedBaseVertex, struct r_double_index_t *outIndices) -> struct r_double_index_t*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto Fx_GenTrail_PopulateSegmentDrawState(const struct FxElemDef *elemDef, struct FxElemVisualState *visState, float spawnDist, float uCoordOffset, const float *posWorld, const float *basis[0x3], struct FxTrailSegmentDrawState *outState) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GenTrail_VertsForSegment(const struct FxTrailSegmentDrawState *segmentDrawState, struct GfxPackedVertex *vertsIter) -> struct GfxPackedVertex*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_CullElementForDraw_FrustumPlaneCount(const struct FxDrawState *draw) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_CullElementForDraw_Sprite(const struct FxDrawState *draw) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_DrawElem_BillboardSprite(struct FxDrawState *draw) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_DrawElem_OrientedSprite(struct FxDrawState *draw) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_GetMsecForSamplingAxis(float msecElapsed, float msecLifeSpan, int atRestFraction) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_SetPlacement(const struct FxDrawState *draw, struct GfxScaledPlacement *placement) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_CullCylinder(const struct FxCamera *camera, unsigned int frustumPlaneCount, const float *midPoint, const float *centerAxis, float halfHeight, float radius) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_CullElementForDraw_Tail(const struct FxDrawState *draw) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_DrawElem_Tail(struct FxDrawState *draw) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_ClampRangeLerp(const float dist, const struct FxFloatRange *range) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_EvaluateDistanceFade(struct FxDrawState *draw) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_SetPlacementFromPhysics(const struct FxDrawState *draw, struct GfxPlacement *placement) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_DrawElem_Model(struct FxDrawState *draw) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_CullElementForDraw_Light(const struct FxDrawState *draw) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_DrawElem_Light(struct FxDrawState *draw) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_DrawElem_SpotLight(struct FxDrawState *draw) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_DrawElement_Setup_Time(struct FxDrawState *draw, int elemMsecBegin, float *outRealNormTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_DrawElement_Setup_Position(struct FxDrawState *draw, const float *elemOrigin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_DrawElement_Setup_VisualState(struct FxDrawState *draw) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_DrawElement(const struct FxElemDef *elemDef, const struct FxElem *elem, struct FxDrawState *draw) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_DrawTrail_GetTextureOffset(struct FxDrawState *draw, float spawnDist) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_DrawTrail(struct FxDrawState *draw, struct FxTrail *trail) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_DrawTrailsForEffect(struct GfxCodeSurfGlob *codeSurfGlob, struct FxSystem *system, struct FxEffect *effect, int drawTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_DrawSpriteEffect(struct GfxCodeSurfGlob *codeSurfGlob, struct FxSystem *system, struct FxEffect *effect, int drawTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_DrawSpotLightEffect(struct FxSystem *system, struct FxEffect *effect, int drawTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_DrawNonSpriteEffect(struct FxSystem *system, struct FxEffect *effect, unsigned int elemClass, int drawTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawNonSpriteElems(struct FxSystem *system) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawSpotLight(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_DrawSpriteElems(struct GfxCodeSurfGlob *codeSurfGlob, struct FxSystem *system, int drawTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto FX_ShouldDrawSpriteElems() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateVerts(struct FxGenerateVertsCmd *cmd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FillGenerateVertsCmd(const struct FxCmd *cmd, struct FxGenerateVertsCmd *genVertsCmd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FillGenerateModelMarksCmd(int localClientNum, struct FxGenerateModelMarksCmd *genModelMarksCmd) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_FillGenerateGlassVertsCmd(struct FxGenerateGlassVertsCmd *genGlassVertsCmd) -> void
{

}

#endif // __UNIMPLEMENTED__
