#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Passive_CritStatusEffects_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Passive_CritStatusEffects.Ability_Passive_CritStatusEffects_C.OnActivated
struct UAbility_Passive_CritStatusEffects_C_OnActivated_Params
{
};

// Function Ability_Passive_CritStatusEffects.Ability_Passive_CritStatusEffects_C.CausedDamage
struct UAbility_Passive_CritStatusEffects_C_CausedDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_Passive_CritStatusEffects.Ability_Passive_CritStatusEffects_C.Reset
struct UAbility_Passive_CritStatusEffects_C_Reset_Params
{
};

// Function Ability_Passive_CritStatusEffects.Ability_Passive_CritStatusEffects_C.ExecuteUbergraph_Ability_Passive_CritStatusEffects
struct UAbility_Passive_CritStatusEffects_C_ExecuteUbergraph_Ability_Passive_CritStatusEffects_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
