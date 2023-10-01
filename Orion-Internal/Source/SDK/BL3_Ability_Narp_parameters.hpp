#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Narp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Narp.Ability_Narp_C.OnActivated
struct UAbility_Narp_C_OnActivated_Params
{
};

// Function Ability_Narp.Ability_Narp_C.OnReloadStarted
struct UAbility_Narp_C_OnReloadStarted_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Narp.Ability_Narp_C.OnReloadEnded
struct UAbility_Narp_C_OnReloadEnded_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Narp.Ability_Narp_C.OnDeactivated
struct UAbility_Narp_C_OnDeactivated_Params
{
};

// Function Ability_Narp.Ability_Narp_C.OnUnregistered
struct UAbility_Narp_C_OnUnregistered_Params
{
};

// Function Ability_Narp.Ability_Narp_C.ExecuteUbergraph_Ability_Narp
struct UAbility_Narp_C_ExecuteUbergraph_Ability_Narp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
