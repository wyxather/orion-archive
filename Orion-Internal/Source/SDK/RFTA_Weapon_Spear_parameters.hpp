#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Spear_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_Spear.Weapon_Spear_C.ReceiveBeginPlay
struct AWeapon_Spear_C_ReceiveBeginPlay_Params
{
};

// Function Weapon_Spear.Weapon_Spear_C.OnInHand
struct AWeapon_Spear_C_OnInHand_Params
{
};

// Function Weapon_Spear.Weapon_Spear_C.OnNotInHand
struct AWeapon_Spear_C_OnNotInHand_Params
{
};

// Function Weapon_Spear.Weapon_Spear_C.ExecuteUbergraph_Weapon_Spear
struct AWeapon_Spear_C_ExecuteUbergraph_Weapon_Spear_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
