//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_vehicle_path() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_DebugLine(const float *start, const float *end) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_PathDebugLine(const float *start, const float *end, int forceDraw) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_SetScriptVariable(const char *key, const char *value, struct VehiclePathNode *node) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_ParseField(const char *key, const char *value, struct VehiclePathNode *node) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_ParseAllFields(struct VehiclePathNode *node) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_ZeroNode(struct VehiclePathNode *node) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_ClearNode(struct VehiclePathNode *node) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_InitNode(struct VehiclePathNode *node, short nodeIdx) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_CopyNode(const struct VehiclePathNode *src, struct VehiclePathNode *dst) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_GetNodeIndex(unsigned short name, float *origin) -> short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_CalcNodeSpeed(short nodeIdx) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_CalcNodeLookAhead(short nodeIdx) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_CalcNodeAngles(short nodeIdx, float *angles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_GetSpeed(const struct VehiclePathPos *vpp) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_GetLookAhead(const struct VehiclePathPos *vpp) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_GetAngles(const struct VehiclePathPos *vpp, float *angles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_GetForwardLookAheadOrigin(const struct VehiclePathPos *vpp, float *lookXYZ, float lookAheadOffset) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_GetReverseLookAheadOrigin(const struct VehiclePathPos *vpp, float *lookXYZ, float lookAheadOffset) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_AdvancePathPosForward(struct VehiclePathPos *vpp, const float *dir) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_AdvancePathPosReverse(struct VehiclePathPos *vpp, const float *dir) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_AdvanceAnimPathPosForward(struct VehiclePathPos *vpp) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_AdvanceAnimPathPosReverse(struct VehiclePathPos *vpp) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_BeginSwitchNode(const struct VehiclePathPos *vpp) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_EndSwitchNode(const struct VehiclePathPos *vpp) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_DrawPath(const struct VehiclePathPos *vpp) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehPath_Init() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehPath_Free() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehPath_Setup() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehPath_DrawDebug() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehPath_InitPathPos(struct VehiclePathPos *vpp) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehPath_FreePathPos(struct VehiclePathPos *vpp) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehPath_AttachPathPos(struct VehiclePathPos *vpp, short nodeIdx) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehPath_StartPathPos(struct VehiclePathPos *vpp) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehPath_IsEndOfPath(const struct VehiclePathPos *vpp) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehPath_UpdatePathPos(struct VehiclePathPos *vpp, enum VehiclePathDir pathDir) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehPath_UpdatePathPosAnimated(struct VehiclePathPos *vpp, const float *origin, const float *angles) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehPath_UpdatePathPosPhysics(struct VehiclePathPos *vpp, const float *origin, const float *angles, enum VehiclePathDir pathDir) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehPath_UpdatePathPosLookAhead(struct VehiclePathPos *vpp, float lookAheadOffset, enum VehiclePathDir pathDir) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_GetNotifyFraction(const struct VehiclePathNode *node) -> float
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto VehPath_ProcessNotify(short nodeIndex, int entIndex, const float *origin, enum VehiclePathNotifyMode notifyMode) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehPath_UpdatePathPosNotifies(const struct VehiclePathPos *prevVpp, const struct VehiclePathPos *nextVpp, int entIndex, short waitNode, enum VehiclePathNotifyMode notifyMode, enum VehiclePathDir pathDir) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehPath_SetPathPosSwitchNode(struct VehiclePathPos *vpp, short srcNodeIdx, short dstNodeIdx) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehPath_SpawnNode(const char *className) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehPathScr_FreeScriptInfo() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehPathScr_GetNodeIndex(unsigned int scriptParamIndex) -> short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehPathScr_AddFieldsForNode() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehPathScr_GetNodeField(int nodeIndex, int offset) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehPathCmd_GetNode() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehPathCmd_GetNodeArray() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VehPathCmd_GetAllNodes() -> void
{

}

#endif // __UNIMPLEMENTED__
