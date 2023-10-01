#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Beastmaster_ClassMod_Alisma_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.OnActivated
struct UOakAbility_Beastmaster_ClassMod_Alisma_C_OnActivated_Params
{
};

// Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.BeastmasterClassModAlisma_OnCausedAnyDamage
struct UOakAbility_Beastmaster_ClassMod_Alisma_C_BeastmasterClassModAlisma_OnCausedAnyDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.ResetGate
struct UOakAbility_Beastmaster_ClassMod_Alisma_C_ResetGate_Params
{
};

// Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.OnResumed
struct UOakAbility_Beastmaster_ClassMod_Alisma_C_OnResumed_Params
{
};

// Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.OnAbilityTimerEnded
struct UOakAbility_Beastmaster_ClassMod_Alisma_C_OnAbilityTimerEnded_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOakAbilityTimerResult*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OakAbility_Beastmaster_ClassMod_Alisma.OakAbility_Beastmaster_ClassMod_Alisma_C.ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Alisma
struct UOakAbility_Beastmaster_ClassMod_Alisma_C_ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Alisma_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
