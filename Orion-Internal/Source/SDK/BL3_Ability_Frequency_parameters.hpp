#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Frequency_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Frequency.Ability_Frequency_C.OnUnregistered
struct UAbility_Frequency_C_OnUnregistered_Params
{
};

// Function Ability_Frequency.Ability_Frequency_C.OnDeactivated
struct UAbility_Frequency_C_OnDeactivated_Params
{
};

// Function Ability_Frequency.Ability_Frequency_C.OnKilled
struct UAbility_Frequency_C_OnKilled_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Frequency.Ability_Frequency_C.OnRegistered
struct UAbility_Frequency_C_OnRegistered_Params
{
};

// Function Ability_Frequency.Ability_Frequency_C.OnReloadStarted
struct UAbility_Frequency_C_OnReloadStarted_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Frequency.Ability_Frequency_C.ExecuteUbergraph_Ability_Frequency
struct UAbility_Frequency_C_ExecuteUbergraph_Ability_Frequency_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
