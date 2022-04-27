//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_DrawRotatedPicPhysical(const struct ScreenPlacement *scrPlace, float x, float y, float width, float height, float angle, const float *color, struct Material *material) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawRotatedPic(const struct ScreenPlacement *scrPlace, float x, float y, float width, float height, int horzAlign, int vertAlign, float angle, const float *color, struct Material *material) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawRotatedPicWithoutSplitScreenScaling(const struct ScreenPlacement *scrPlace, float x, float y, float width, float height, int horzAlign, int vertAlign, float angle, const float *color, struct Material *material) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawRotatedQuadPic(const struct ScreenPlacement *scrPlace, float x, float y, const float *verts[0x2], float angle, const float *color, struct Material *material) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawVLine(const struct ScreenPlacement *scrPlace, float x, float top, float lineWidth, float height, int horzAlign, int vertAlign, const float *color, struct Material *material) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Draw2DLine(const struct ScreenPlacement *scrPlace, float p1x, float p1y, float p2x, float p2y, float lineWidth, int horzAlign, int vertAlign, const float *color, struct Material *material) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Draw2DTri(const struct ScreenPlacement *scrPlace, float *p0, float *p1, float *p2, int horzAlign, int vertAlign, const float *color, struct Material *material) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawStringExt(const struct ScreenPlacement *scrPlace, float x, float y, const char *string, const float *setColor, int forceColor, int shadow, float charHeight, int adjust) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawDevString(const struct ScreenPlacement *scrPlace, float x, float y, float xScale, float yScale, const char *s, const float *color, int align, struct Font_s *font) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawBigDevString(const struct ScreenPlacement *scrPlace, float x, float y, const char *s, float alpha, int align) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawBigDevStringColor(const struct ScreenPlacement *scrPlace, float x, float y, const char *s, const float *color, int align) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawSmallDevString(const struct ScreenPlacement *scrPlace, float x, float y, const char *s, float alpha, int align) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawSmallDevStringColor(const struct ScreenPlacement *scrPlace, float x, float y, const char *s, const float *color, int align) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FadeAlpha(int timeNow, int startMsec, int totalMsec, int fadeMsec) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FadeColor(int timeNow, int startMsec, int totalMsec, int fadeMsec) -> float*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetColorForHealth(int health, int armor, float *hcolor) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_MiniMapChanged(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_NorthDirectionChanged(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ThermalBodyMaterialChanged(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DebugLine(const float *start, const float *end, const float *color, int depthTest, int duration) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DebugStar(const float *point, const float *color, int duration) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DebugStarWithText(const float *point, const float *starColor, const float *textColor, const char *string, float fontsize, int duration) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DebugBox(const float *origin, const struct Bounds *bounds, float yaw, const float *color, int depthTest, int duration) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DebugBoxOriented(const float *origin, const struct Bounds *bounds, float *rotation[0x3], const float *color, int depthTest, int duration) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DebugCircle(const float *center, float radius, const float *dir, const float *color, int depthTest, int duration) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DebugArc(const float *center, float radius, float angle0, float angle1, const float *color, int depthTest, int duration) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_WorldDirToScreenPosReal(int localClientNum, const struct ScreenPlacement *scrPlace, const float *worldDir, float *outScreenPos) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_WorldPosToScreenPosReal(int localClientNum, const struct ScreenPlacement *scrPlace, const float *worldPos, float *outScreenPos) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_WorldDirToScreenPosVirtualCentered(int localClientNum, const float *worldDir, float *outScreenPos) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_TeamColor(const int team, const char *prefix, float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RelativeTeamColor(const int localClientNum, const int clientNum, const char *prefix, float *color) -> void
{

}

#endif // __UNIMPLEMENTED__
