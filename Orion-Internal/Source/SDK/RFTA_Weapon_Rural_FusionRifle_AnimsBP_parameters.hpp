#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Rural_FusionRifle_AnimsBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_Rural_FusionRifle_AnimsBP.Weapon_Rural_FusionRifle_AnimsBP_C.GetFireRate
struct UWeapon_Rural_FusionRifle_AnimsBP_C_GetFireRate_Params
{
	class AWeapon_Rural_FusionRifle_C**                WeaponReference;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Rural_FusionRifle_AnimsBP.Weapon_Rural_FusionRifle_AnimsBP_C.BlueprintUpdateAnimation
struct UWeapon_Rural_FusionRifle_AnimsBP_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Rural_FusionRifle_AnimsBP.Weapon_Rural_FusionRifle_AnimsBP_C.BlueprintBeginPlay
struct UWeapon_Rural_FusionRifle_AnimsBP_C_BlueprintBeginPlay_Params
{
};

// Function Weapon_Rural_FusionRifle_AnimsBP.Weapon_Rural_FusionRifle_AnimsBP_C.FireStart_Event_1
struct UWeapon_Rural_FusionRifle_AnimsBP_C_FireStart_Event_1_Params
{
};

// Function Weapon_Rural_FusionRifle_AnimsBP.Weapon_Rural_FusionRifle_AnimsBP_C.FireEnd_Event_1
struct UWeapon_Rural_FusionRifle_AnimsBP_C_FireEnd_Event_1_Params
{
};

// Function Weapon_Rural_FusionRifle_AnimsBP.Weapon_Rural_FusionRifle_AnimsBP_C.ExecuteUbergraph_Weapon_Rural_FusionRifle_AnimsBP
struct UWeapon_Rural_FusionRifle_AnimsBP_C_ExecuteUbergraph_Weapon_Rural_FusionRifle_AnimsBP_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
