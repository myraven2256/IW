//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_HudElemRegisterDvars() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_TranslateHudElemMessage(int localClientNum, const char *message, const char *messageType, char *hudElemString, const int hudElemStringLength) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SafeTranslateHudElemString(int localClientNum, int index, char *hudElemString, const int hudElemStringLength) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HudElemStringWidth(const char *string, const struct cg_hudelem_t *cghe) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetHudElemTime(const struct hudelem_s *elem, int timeNow) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HudElemTimerString(const struct hudelem_s *elem, int timeNow) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HudElemTenthsTimerString(const struct hudelem_s *elem, int timeNow) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HudElemMaterialSpecifiedWidth(const struct ScreenPlacement *scrPlace, int alignScreen, int sizeVirtual, const struct cg_hudelem_t *cghe) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HudElemMaterialSpecifiedHeight(const struct ScreenPlacement *scrPlace, int alignScreen, int sizeVirtual, const struct cg_hudelem_t *cghe) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HudElemMaterialWidth(const struct ScreenPlacement *scrPlace, const struct hudelem_s *elem, const struct cg_hudelem_t *cghe) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HudElemMaterialHeight(const struct ScreenPlacement *scrPlace, const struct hudelem_s *elem, const struct cg_hudelem_t *cghe) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HudElemWidth(const struct ScreenPlacement *scrPlace, const struct hudelem_s *elem, const struct cg_hudelem_t *cghe) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HudElemHeight(const struct ScreenPlacement *scrPlace, const struct hudelem_s *elem, const struct cg_hudelem_t *cghe) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AlignHudElemX(int alignOrg, float x, float width) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AlignHudElemY(int alignOrg, float y, float height) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetHudElemOrg(const struct ScreenPlacement *scrPlace, int alignOrg, int alignScreen, float xVirtual, float yVirtual, float width, float height, float *orgX, float *orgY) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HudElemMovementFrac(const struct hudelem_s *elem, int timeNow) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto IsFontScaleLerping(const struct hudelem_s *elem, int timeNow) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetHudElemPos(const struct ScreenPlacement *scrPlace, const struct hudelem_s *elem, struct cg_hudelem_t *cghe) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto OffsetHudElemY(const struct hudelem_s *elem, const struct cg_hudelem_t *cghe, float offsetY) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ConsolidateHudElemText(struct cg_hudelem_t *cghe, char *hudElemString) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CopyStringToHudElemString(const char *string, char *hudElemString) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DrawSingleHudElem2d_GetHudElemInfo(int localClientNum, const struct hudelem_s *elem, struct cg_hudelem_t *cghe, char *hudElemString) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HudElemColorToVec4(int localClientNum, const union hudelem_color_t *hudElemColor, float *resultColor) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DrawHudElemString(int localClientNum, const char *text, const struct hudelem_s *elem, struct cg_hudelem_t *cghe) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DrawHudElemClock(int localClientNum, const struct hudelem_s *elem, const struct cg_hudelem_t *cghe) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DrawHudElemMaterial(int localClientNum, const struct hudelem_s *elem, struct cg_hudelem_t *cghe) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto HudElemWaypointHeight(int localClientNum, const struct hudelem_s *elem) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ClampScreenPosToEdges(int localClientNum, float *point, float padLeft, float padRight, float padTop, float padBottom, float *resultNormal, float *resultDist) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetScaleForDistance(int localClientNum, const float *worldPos) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetWaypointOffsetForStance(struct centity_s *cent) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetWaypointEntPos(int localClientNum, const struct hudelem_s *elem, float *outPos) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_DrawWaypoint(int localClientNum, struct WaypointDrawArgs *args) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DrawOffscreenViewableWaypoint(int localClientNum, const struct hudelem_s *elem) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto DrawSingleHudElem2d(int localClientNum, const struct hudelem_s *elem) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CopyInUseHudElems(struct hudelem_s **elems, int *elemCount, struct hudelem_s *elemSrcArray, int elemSrcArrayCount) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto compare_hudelems(const void *pe0, const void *pe1) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetSortedHudElems(int localClientNum, struct hudelem_s **elems) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Draw2dHudElems(int localClientNum, int uilayer) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto AddDrawSurfForHudElemWaypoint(int localClientNum, const struct hudelem_s *elem) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddDrawSurfsFor3dHudElems(int localClientNum) -> void
{

}

#endif // __UNIMPLEMENTED__
