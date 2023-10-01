#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_Reload_TerrorNova_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Gunner_Reload_TerrorNova.Ability_Gunner_Reload_TerrorNova_C.OnActivated
struct UAbility_Gunner_Reload_TerrorNova_C_OnActivated_Params
{
};

// Function Ability_Gunner_Reload_TerrorNova.Ability_Gunner_Reload_TerrorNova_C.ReloadStarted
struct UAbility_Gunner_Reload_TerrorNova_C_ReloadStarted_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Gunner_Reload_TerrorNova.Ability_Gunner_Reload_TerrorNova_C.ExecuteUbergraph_Ability_Gunner_Reload_TerrorNova
struct UAbility_Gunner_Reload_TerrorNova_C_ExecuteUbergraph_Ability_Gunner_Reload_TerrorNova_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
