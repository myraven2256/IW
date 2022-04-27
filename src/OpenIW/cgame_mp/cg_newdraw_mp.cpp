//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_AntiBurnInHUD_RegisterDvars() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ShouldDrawHud(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FadeHudMenu(int localClientNum, const struct dvar_t *fadeDvar, int displayStartTime, int duration) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetHUDAlphaAmmo(int localClientNum) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetHUDAlphaWeaponName(int localClientNum) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetHUDAlphaStance(int localClientNum) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_GetSelectedWeaponIndex(const struct cg_s *cgameGlob) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckPlayerForLowAmmoSpecific(const struct cg_s *cgameGlob, unsigned int weapIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckPlayerForLowAmmo(const struct cg_s *cgameGlob) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckPlayerForLowClipSpecific(const struct cg_s *cgameGlob, int weapIndex, enum PlayerHandIndex hand) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CheckPlayerForLowClip(const struct cg_s *cgameGlob, enum PlayerHandIndex hand) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_DrawPlayerAmmoBackdrop(int localClientNum, const struct rectDef_s *rect, const float *color, struct Material *material) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_DrawPlayerAmmoValue(int localClientNum, const struct rectDef_s *rect, struct Font_s *font, float scale, float *color, struct Material *material, int textStyle, int type) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_DrawPlayerWeaponNameNoFade(int localClientNum, const struct rectDef_s *rect, struct Font_s *font, float scale, float *color, int textStyle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_DrawPlayerWeaponNameBackNoFade(int localClientNum, const struct rectDef_s *rect, struct Font_s *font, float scale, const float *color, struct Material *material) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_DrawPlayerWeaponNameFade(int localClientNum, const struct rectDef_s *rect, struct Font_s *font, float scale, float *color, int textStyle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_DrawPlayerWeaponNameBackFade(int localClientNum, const struct rectDef_s *rect, struct Font_s *font, float scale, const float *color, struct Material *material) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_CalcPlayerSprintColor(const struct cg_s *cgameGlob, const struct playerState_s *ps, float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CalcSplitScreenStanceScale(float *w, float *h) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CalcSplitScreenStanceOffset(float *x, float *y) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_DrawStanceIcon(int localClientNum, const struct rectDef_s *rect, float *drawColor, float x, float y, float fadeAlpha) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_DrawStanceHintPrints(int localClientNum, const struct rectDef_s *rect, float x, const float *color, float fadeAlpha, struct Font_s *font, float scale, int textStyle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_DrawPlayerStance(int localClientNum, const struct rectDef_s *rect, const float *color, struct Font_s *font, float scale, int textStyle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_DrawPlayerSprintBack(int localClientNum, const struct rectDef_s *rect, struct Material *material, float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_DrawPlayerSprintMeter(int localClientNum, const struct rectDef_s *rect, struct Material *material, float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcPlayerHealth(const struct playerState_s *ps) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_DrawPlayerBarHealth(int localClientNum, const struct rectDef_s *rect, struct Material *material, float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_DrawPlayerBarHealthBack(int localClientNum, const struct rectDef_s *rect, struct Material *material, float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_BloodOverlayIsVisible(int localClientNum) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_BloodOverlayUpdate(struct cg_s *cgameGlob, float healthRatio) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_BloodOverlayDraw(int localClientNum, const struct rectDef_s *rect, struct Material *material, float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_BloodOverlayReset(struct cg_s *cgameGlob) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ServerMaterialName(int localClientNum, int index, char *materialName, unsigned int maxLen) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ObjectiveIcon(int localClientNum, int icon, int type) -> struct Material*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_MaterialHandleForIndex(int localClientNum, int materialIndex) -> struct Material*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_UpdateCursorHints(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_GetWeaponUseString(int localClientNum, const char **secondaryString) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_GetUseString(int localClientNum) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_DrawCursorhint(int localClientNum, const struct rectDef_s *rect, struct Font_s *font, float fontscale, float *color, int textStyle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawSpectatorControls(int localClientNum, const struct rectDef_s *rect, struct Font_s *font, float fontScale, float *color, int textStyle, int textAlignMode) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawSpectatorFollowing(int localClientNum, const struct rectDef_s *rect, struct Font_s *font, float fontScale, float *color, int textStyle, int textAlignMode) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_DrawHoldBreathHint(int localClientNum, const struct rectDef_s *rect, struct Font_s *font, float fontscale, int textStyle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_DrawMantleHint(int localClientNum, const struct rectDef_s *rect, struct Font_s *font, float fontscale, const float *color, int textStyle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_OwnerDrawVisible(int flags) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ScriptMainMenu(int localClientNum) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_DrawInvalidCmdHint(int localClientNum, const struct rectDef_s *rect, struct Font_s *font, float fontscale, float *color, int textStyle) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CG_DrawTalkerNum(int localClientNum, const int num, struct rectDef_s *rect, struct Font_s *font, float *color, float textScale, int style) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_OwnerDraw(int localClientNum, struct rectDef_s parentRect, float x, float y, float w, float h, int horzAlign, int vertAlign, float text_x, float text_y, int ownerDraw, int ownerDrawFlags, float special, struct Font_s *font, float scale, float *color, struct Material *material, int textStyle, int textAlignMode) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ArchiveState(int localClientNum, struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
