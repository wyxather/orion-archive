#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_WorldsEdge_WaveProjectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_WorldsEdge_WaveProjectile.Weapon_WorldsEdge_WaveProjectile_C.SetRoll
struct AWeapon_WorldsEdge_WaveProjectile_C_SetRoll_Params
{
	float*                                             Roll;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_WorldsEdge_WaveProjectile.Weapon_WorldsEdge_WaveProjectile_C.ReceiveTick
struct AWeapon_WorldsEdge_WaveProjectile_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_WorldsEdge_WaveProjectile.Weapon_WorldsEdge_WaveProjectile_C.ReceiveBeginPlay
struct AWeapon_WorldsEdge_WaveProjectile_C_ReceiveBeginPlay_Params
{
};

// Function Weapon_WorldsEdge_WaveProjectile.Weapon_WorldsEdge_WaveProjectile_C.OnProjectileHit
struct AWeapon_WorldsEdge_WaveProjectile_C_OnProjectileHit_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Weapon_WorldsEdge_WaveProjectile.Weapon_WorldsEdge_WaveProjectile_C.ExecuteUbergraph_Weapon_WorldsEdge_WaveProjectile
struct AWeapon_WorldsEdge_WaveProjectile_C_ExecuteUbergraph_Weapon_WorldsEdge_WaveProjectile_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
