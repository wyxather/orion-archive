#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Shotgun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_Shotgun.Weapon_Shotgun_C.OnActivated
struct AWeapon_Shotgun_C_OnActivated_Params
{
};

// Function Weapon_Shotgun.Weapon_Shotgun_C.ExecuteUbergraph_Weapon_Shotgun
struct AWeapon_Shotgun_C_ExecuteUbergraph_Weapon_Shotgun_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
