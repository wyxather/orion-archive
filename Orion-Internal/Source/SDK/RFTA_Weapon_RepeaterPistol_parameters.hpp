#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_RepeaterPistol_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_RepeaterPistol.Weapon_RepeaterPistol_C.OnActivated
struct AWeapon_RepeaterPistol_C_OnActivated_Params
{
};

// Function Weapon_RepeaterPistol.Weapon_RepeaterPistol_C.ExecuteUbergraph_Weapon_RepeaterPistol
struct AWeapon_RepeaterPistol_C_ExecuteUbergraph_Weapon_RepeaterPistol_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
