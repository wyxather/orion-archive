#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_PetShared_GeneticLink_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.NewFunction_1
struct UAbility_PetShared_GeneticLink_C_NewFunction_1_Params
{
	float                                              DamageDealt;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.OnActivated
struct UAbility_PetShared_GeneticLink_C_OnActivated_Params
{
};

// Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.OnTakeDamage_GeneticLink
struct UAbility_PetShared_GeneticLink_C_OnTakeDamage_GeneticLink_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.EnablePetBonusDamage
struct UAbility_PetShared_GeneticLink_C_EnablePetBonusDamage_Params
{
};

// Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.OnAbilityTimerEnded
struct UAbility_PetShared_GeneticLink_C_OnAbilityTimerEnded_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOakAbilityTimerResult*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.ExecuteUbergraph_Ability_PetShared_GeneticLink
struct UAbility_PetShared_GeneticLink_C_ExecuteUbergraph_Ability_PetShared_GeneticLink_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
