#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Septimator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Septimator.Ability_Septimator_C.OnActivated
struct UAbility_Septimator_C_OnActivated_Params
{
};

// Function Ability_Septimator.Ability_Septimator_C.CausedDamage
struct UAbility_Septimator_C_CausedDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_Septimator.Ability_Septimator_C.Reset
struct UAbility_Septimator_C_Reset_Params
{
};

// Function Ability_Septimator.Ability_Septimator_C.NotifySwitchedMode_Event
struct UAbility_Septimator_C_NotifySwitchedMode_Event_Params
{
};

// Function Ability_Septimator.Ability_Septimator_C.ExecuteUbergraph_Ability_Septimator
struct UAbility_Septimator_C_ExecuteUbergraph_Ability_Septimator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
