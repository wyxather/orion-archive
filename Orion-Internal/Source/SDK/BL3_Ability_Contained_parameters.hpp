#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Contained_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Contained.Ability_Contained_C.OnActivated
struct UAbility_Contained_C_OnActivated_Params
{
};

// Function Ability_Contained.Ability_Contained_C.OnDeactivated
struct UAbility_Contained_C_OnDeactivated_Params
{
};

// Function Ability_Contained.Ability_Contained_C.OnUnregistered
struct UAbility_Contained_C_OnUnregistered_Params
{
};

// Function Ability_Contained.Ability_Contained_C.OnPaused
struct UAbility_Contained_C_OnPaused_Params
{
};

// Function Ability_Contained.Ability_Contained_C.OnCauseAnyDamage_Event
struct UAbility_Contained_C_OnCauseAnyDamage_Event_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_Contained.Ability_Contained_C.ExecuteUbergraph_Ability_Contained
struct UAbility_Contained_C_ExecuteUbergraph_Ability_Contained_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
