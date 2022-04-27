//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Fill_Clip(struct playerState_s *ps, unsigned int weapon) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Add_Ammo(struct gentity_s *ent, unsigned int weaponIndex, unsigned char weaponModel, int count, int fillClip) -> unsigned int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto CurrentPrimaryWeapon(struct playerState_s *ps) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto G_ItemClipMask(const struct gentity_s *ent) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto WeaponPickup_AddWeapon(struct gentity_s *weaponEnt, struct gentity_s *playerEnt, int weapon, unsigned char weaponModel, struct gentity_s **pDroppedWeapon) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto PrintPlayerPickupMessage(struct gentity_s *player, int weapIdx) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto WeaponPickup_LeechFromWeaponEnt(struct gentity_s *weaponEnt, struct gentity_s *player, int haveExactWeapon, int *pickupEvent, bool suppressNotifies) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto WeaponPickup_AddAmmoForNewWeapon(struct gentity_s *weaponEnt, struct gentity_s *player) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto WeaponPickup_Notifies(struct gentity_s *thisItem, struct gentity_s *newDroppedItem, struct gentity_s *player, struct WeaponDef *weapDef, bool pickedUp) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto WeaponPickup_Grab(struct gentity_s *weaponEnt, struct gentity_s *player, int weapIdx, int *pickupEvent) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto WeaponPickup_Touch(struct gentity_s *weaponEnt, struct gentity_s *player, int weapIdx, int *pickupEvent) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto WeaponPickup(struct gentity_s *weaponEnt, struct gentity_s *player, int *pickupEvent, int touched) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto ScavengerBagPickup(struct gentity_s *weaponEnt, struct gentity_s *player, int *pickupEvent, int touched) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Touch_Item_Auto(struct gentity_s *ent, struct gentity_s *other, int bTouched) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Touch_Item(struct gentity_s *ent, struct gentity_s *other, int touched) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetFreeDropCueIdx() -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto UpdateScavengerBagVisibility(struct gentity_s *bagEnt) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Think_Item(struct gentity_s *pSelf) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetItemClassname(int item, struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto LaunchItem(int item, int ownerNum) -> struct gentity_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_SetDefaultVelocity(const struct gentity_s *droppingEnt, struct gentity_s *droppedEnt) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_SetDefaultState(const struct gentity_s *droppingEnt, struct gentity_s *droppedEnt) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_GetStateFromTag(const struct gentity_s *droppingEnt, unsigned int tag, const struct gentity_s *droppedEnt, float *matrix[0x3]) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_SetStateFromTag(const struct gentity_s *droppingEnt, unsigned int tag, struct gentity_s *droppedEnt) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Drop_Item(struct gentity_s *ent, int item) -> struct gentity_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Drop_ScavengerBag(struct gentity_s *ent, int weapIdx) -> struct gentity_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetNonClipAmmoToTransferToWeaponEntity(struct gentity_s *player, int transferWeapon) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PlayerHasAnyAmmoToTransferToWeapon(struct gentity_s *player, int transferWeapon) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TransferPlayerAmmoToWeaponEntity(struct gentity_s *player, struct gentity_s *weaponEnt, int transferWeapon) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto GetRandomClipAmmo(int weapIndex) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TransferRandomAmmoToWeaponEntity(struct gentity_s *weaponEnt, int transferWeapon) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Drop_Weapon(struct gentity_s *ent, int weapIdx, unsigned char weaponModel) -> struct gentity_s*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FinishSpawningItem(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SaveRegisteredWeapons() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SaveRegisteredItems() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto RegisterWeaponRumbles(struct WeaponDef *weapDef) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_RegisterWeapon(unsigned int weapIndex) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SpawnItem(struct gentity_s *ent, int item) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto G_OrientItemToGround(struct gentity_s *ent, struct trace_t *trace) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto G_EntCreatePhysObj(struct gentity_s *ent, const float *origin, const float *rotationMatrix[0x3], const float *velocity, struct PhysCollmap *physCollmap) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_EnablePhysicsDelayed(struct gentity_s *weapEnt, struct gentity_s *dropper, int dropTime, const float *prevMatrix[0x3], unsigned int tagName, struct PhysCollmap *physCollmap) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_EntEnablePhysics(struct gentity_s *ent, struct PhysCollmap *physCollmap) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Item_RunWeaponPhysics(struct gentity_s *ent) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_RunItem(struct gentity_s *ent) -> void
{

}

#endif // __UNIMPLEMENTED__
