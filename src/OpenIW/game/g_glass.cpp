//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto G_InitGlass() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ShutdownGlass() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_Glass_GetIndicesFromName(unsigned int name, unsigned int *count) -> const unsigned short*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_Glass_IsIndexValid(unsigned int index) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_Glass_GetPieceOrigin(unsigned int index, float *origin) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto G_GlassPieceFromIndex(unsigned int pieceIndex) -> struct G_GlassPiece*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_Glass_GetPieceState(unsigned int pieceIndex) -> enum GlassPieceState
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_Glass_IsPieceSolid(unsigned int pieceIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PackFloat(float x) -> unsigned char
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto G_Glass_PieceStateChanged(unsigned int pieceIndex, enum GlassPieceState oldState, const float *damagePos, const float *damageDir) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_Glass_DamagePiece(unsigned int pieceIndex, int damage, const float *damagePos, const float *damageDir) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_Glass_DestroyPiece(unsigned int pieceIndex, const float *damagePos, const float *damageDir) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_Glass_DeletePiece(unsigned int pieceIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_Glass_RadiusDamage(const float *origin, float radius, float coneAngleCos, float *coneDirection, float innerDamage, float outerDamage) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_Glass_Update() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_Glass_TempDestroyPiece(unsigned int pieceIndex) -> unsigned short
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_Glass_RestorePiece(unsigned int pieceIndex, unsigned short damageTaken) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_Glass_WriteEndOfGlassMarker(struct msg_t *msg) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto G_Glass_WriteImpactInfo(struct msg_t *msg, struct G_GlassPiece *piece, int time) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_Glass_WriteChanges(struct msg_t *msg, int sinceTime) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SaveGlass(struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_LoadGlass(struct MemoryFile *memFile) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_PhysBreakGlass(const float *origin, const float *normal) -> void
{

}

#endif // __UNIMPLEMENTED__
