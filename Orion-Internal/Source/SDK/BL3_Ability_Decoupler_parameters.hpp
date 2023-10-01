#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Decoupler_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Decoupler.Ability_Decoupler_C.OnActivated
struct UAbility_Decoupler_C_OnActivated_Params
{
};

// Function Ability_Decoupler.Ability_Decoupler_C.OnDeactivated
struct UAbility_Decoupler_C_OnDeactivated_Params
{
};

// Function Ability_Decoupler.Ability_Decoupler_C.OnUnregistered
struct UAbility_Decoupler_C_OnUnregistered_Params
{
};

// Function Ability_Decoupler.Ability_Decoupler_C.OnPaused
struct UAbility_Decoupler_C_OnPaused_Params
{
};

// Function Ability_Decoupler.Ability_Decoupler_C.ReloadStarted
struct UAbility_Decoupler_C_ReloadStarted_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Decoupler.Ability_Decoupler_C.ReloadFinished
struct UAbility_Decoupler_C_ReloadFinished_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Decoupler.Ability_Decoupler_C.ExecuteUbergraph_Ability_Decoupler
struct UAbility_Decoupler_C_ExecuteUbergraph_Ability_Decoupler_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
