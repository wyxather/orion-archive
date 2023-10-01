#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Oldridian_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Oldridian.Ability_Oldridian_C.OnActivated
struct UAbility_Oldridian_C_OnActivated_Params
{
};

// Function Ability_Oldridian.Ability_Oldridian_C.OnDeactivated
struct UAbility_Oldridian_C_OnDeactivated_Params
{
};

// Function Ability_Oldridian.Ability_Oldridian_C.OnUnregistered
struct UAbility_Oldridian_C_OnUnregistered_Params
{
};

// Function Ability_Oldridian.Ability_Oldridian_C.OnPaused
struct UAbility_Oldridian_C_OnPaused_Params
{
};

// Function Ability_Oldridian.Ability_Oldridian_C.Reload_ShotMod
struct UAbility_Oldridian_C_Reload_ShotMod_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Oldridian.Ability_Oldridian_C.RemoveShotModifiers
struct UAbility_Oldridian_C_RemoveShotModifiers_Params
{
};

// Function Ability_Oldridian.Ability_Oldridian_C.ExecuteUbergraph_Ability_Oldridian
struct UAbility_Oldridian_C_ExecuteUbergraph_Ability_Oldridian_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
