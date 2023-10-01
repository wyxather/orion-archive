#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_SleepingGiant_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_SleepingGiant.Ability_SleepingGiant_C.OnResumed
struct UAbility_SleepingGiant_C_OnResumed_Params
{
};

// Function Ability_SleepingGiant.Ability_SleepingGiant_C.OnActivated
struct UAbility_SleepingGiant_C_OnActivated_Params
{
};

// Function Ability_SleepingGiant.Ability_SleepingGiant_C.OnRegistered
struct UAbility_SleepingGiant_C_OnRegistered_Params
{
};

// Function Ability_SleepingGiant.Ability_SleepingGiant_C.ReloadStartedEvent
struct UAbility_SleepingGiant_C_ReloadStartedEvent_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_SleepingGiant.Ability_SleepingGiant_C.ReloadEndedEvent
struct UAbility_SleepingGiant_C_ReloadEndedEvent_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_SleepingGiant.Ability_SleepingGiant_C.OnUnregistered
struct UAbility_SleepingGiant_C_OnUnregistered_Params
{
};

// Function Ability_SleepingGiant.Ability_SleepingGiant_C.ExecuteUbergraph_Ability_SleepingGiant
struct UAbility_SleepingGiant_C_ExecuteUbergraph_Ability_SleepingGiant_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
