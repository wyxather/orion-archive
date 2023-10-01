#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_AssaultRifle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_AssaultRifle.Weapon_AssaultRifle_C.OnActivated
struct AWeapon_AssaultRifle_C_OnActivated_Params
{
};

// Function Weapon_AssaultRifle.Weapon_AssaultRifle_C.ExecuteUbergraph_Weapon_AssaultRifle
struct AWeapon_AssaultRifle_C_ExecuteUbergraph_Weapon_AssaultRifle_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
