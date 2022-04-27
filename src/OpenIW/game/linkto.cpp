//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto EntTagInfoChanged(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SlideMoveClientLinkedStep(float deltaT, float *origin, float *velocity, const struct Bounds *bounds, bool gravity, int passEntityNum, int clipMask) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EntUnlink_Internal(struct gentity_s *ent, bool relinking) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto EntLinkTo_Internal(struct gentity_s *ent, struct gentity_s *parent, unsigned int tagName) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntLinkTo(struct gentity_s *ent, struct gentity_s *parent, unsigned int tagName) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntLinkToWithOffset(struct gentity_s *ent, struct gentity_s *parent, unsigned int tagName, const float *originOffset, const float *anglesOffset) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntUnlink(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntIsLinkedTo(struct gentity_s *ent, struct gentity_s *parent) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntIsLinkedToAncestor(const struct gentity_s *childEnt, const struct gentity_s *ancestorEnt) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_UpdateTagInfo(struct gentity_s *ent, int bParentHasDObj) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_UpdateTagInfoOfChildren(struct gentity_s *parent, int bHasDObj) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_CalcTagParentAxis(struct gentity_s *ent, float *parentAxis[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_CalcTagParentRelAxis(struct gentity_s *ent, float *parentRelAxis[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_CalcTagAxis(struct gentity_s *ent, int bAnglesOnly) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto G_VerifyLinkedMoveTarget(const struct gentity_s *ent, const float *targetOrigin, const int contentMask) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_CalcFixedLinkTargetAxis(struct gentity_s *ent, float *axis[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetFixedLinkNonPlayer(struct gentity_s *ent, const int eAngles, const int contentMask, float *outTargetOrigin) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_DefaultViewAngleClampGoal(struct viewClampState *clamp) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SnapToViewAngleClampGoal(struct viewClampState *clamp) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CalcLerpFraction(float startTime, float totalAccelTime, float totalDecelTime, float totalTime) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LerpViewClamp(struct viewClampState *clamp) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_UpdateViewAngleClamp(struct gclient_s *client, const float *worldAnglesCenter) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ApplyGroundReferenceFrame(const float *groundAngles, const float *worldAxis[0x3], float *relativeAxis[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_InitPlayerLinkAngles(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GeneralLink(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetPlayerFixedLinkViewAngles(struct gentity_s *ent, const float *worldAxis[0x3], float lerpFraction) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto SetPlayerFixedLinkOrigin(struct gentity_s *ent, const float *worldAxis[0x3], float lerpFraction) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SetFixedLinkPlayer(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_TransferLinkedEntities(struct gentity_s *from, struct gentity_s *to) -> void
{

}

#endif // __UNIMPLEMENTED__
