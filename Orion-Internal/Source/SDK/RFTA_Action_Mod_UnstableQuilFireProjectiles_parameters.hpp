#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_UnstableQuilFireProjectiles_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.DoneWithBurst
struct UAction_Mod_UnstableQuilFireProjectiles_C_DoneWithBurst_Params
{
	bool                                               DoneFiring;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.IsInFrontOfPlayer
struct UAction_Mod_UnstableQuilFireProjectiles_C_IsInFrontOfPlayer_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InFront;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.GetCrosshairDirection
struct UAction_Mod_UnstableQuilFireProjectiles_C_GetCrosshairDirection_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector*                                    GunStartLoc;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector*                                    GunEndLoc;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Dir;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.GetEndProjectileLocation
struct UAction_Mod_UnstableQuilFireProjectiles_C_GetEndProjectileLocation_Params
{
	struct FVector                                     Dir;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.FireProjectileInstance
struct UAction_Mod_UnstableQuilFireProjectiles_C_FireProjectileInstance_Params
{
	int*                                               InstanceIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.GetSocketLocationFromOwner
struct UAction_Mod_UnstableQuilFireProjectiles_C_GetSocketLocationFromOwner_Params
{
	struct FVector                                     SocketLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.FireProjectiles
struct UAction_Mod_UnstableQuilFireProjectiles_C_FireProjectiles_Params
{
};

// Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.OnActionStart
struct UAction_Mod_UnstableQuilFireProjectiles_C_OnActionStart_Params
{
};

// Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.FireAllProjectiles
struct UAction_Mod_UnstableQuilFireProjectiles_C_FireAllProjectiles_Params
{
	int*                                               NumProjectiles;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARemnantRangedWeaponMod_C**                  Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             BurstIncrementDelay;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      Socket;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.ExecuteUbergraph_Action_Mod_UnstableQuilFireProjectiles
struct UAction_Mod_UnstableQuilFireProjectiles_C_ExecuteUbergraph_Action_Mod_UnstableQuilFireProjectiles_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
