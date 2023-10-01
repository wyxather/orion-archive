#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Swamp_PrideOfTheIskal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_Swamp_PrideOfTheIskal.Weapon_Swamp_PrideOfTheIskal_C.SetInactiveVFX
struct AWeapon_Swamp_PrideOfTheIskal_C_SetInactiveVFX_Params
{
};

// Function Weapon_Swamp_PrideOfTheIskal.Weapon_Swamp_PrideOfTheIskal_C.SetActiveVFX
struct AWeapon_Swamp_PrideOfTheIskal_C_SetActiveVFX_Params
{
};

// Function Weapon_Swamp_PrideOfTheIskal.Weapon_Swamp_PrideOfTheIskal_C.OnFire
struct AWeapon_Swamp_PrideOfTheIskal_C_OnFire_Params
{
	struct FVector*                                    from;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector*                                    to;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WeaponSpread;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Swamp_PrideOfTheIskal.Weapon_Swamp_PrideOfTheIskal_C.OnActivateMod_Event_1
struct AWeapon_Swamp_PrideOfTheIskal_C_OnActivateMod_Event_1_Params
{
	EModActiveState*                                   ActiveState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Swamp_PrideOfTheIskal.Weapon_Swamp_PrideOfTheIskal_C.ReceiveBeginPlay
struct AWeapon_Swamp_PrideOfTheIskal_C_ReceiveBeginPlay_Params
{
};

// Function Weapon_Swamp_PrideOfTheIskal.Weapon_Swamp_PrideOfTheIskal_C.ExecuteUbergraph_Weapon_Swamp_PrideOfTheIskal
struct AWeapon_Swamp_PrideOfTheIskal_C_ExecuteUbergraph_Weapon_Swamp_PrideOfTheIskal_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
