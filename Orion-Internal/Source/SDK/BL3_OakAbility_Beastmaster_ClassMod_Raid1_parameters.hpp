#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Beastmaster_ClassMod_Raid1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.FireRakk
struct UOakAbility_Beastmaster_ClassMod_Raid1_C_FireRakk_Params
{
	class AActor*                                      SourceActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.OnActivated
struct UOakAbility_Beastmaster_ClassMod_Raid1_C_OnActivated_Params
{
};

// Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.BeastmasterClassModRaid1_OnCausedAnyDamage
struct UOakAbility_Beastmaster_ClassMod_Raid1_C_BeastmasterClassModRaid1_OnCausedAnyDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.BreakLoop
struct UOakAbility_Beastmaster_ClassMod_Raid1_C_BreakLoop_Params
{
};

// Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.ResetGate
struct UOakAbility_Beastmaster_ClassMod_Raid1_C_ResetGate_Params
{
};

// Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.OnResumed
struct UOakAbility_Beastmaster_ClassMod_Raid1_C_OnResumed_Params
{
};

// Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.ClassMod_Raid1_OnActionSkillActivated
struct UOakAbility_Beastmaster_ClassMod_Raid1_C_ClassMod_Raid1_OnActionSkillActivated_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.OnAbilityTimerEnded
struct UOakAbility_Beastmaster_ClassMod_Raid1_C_OnAbilityTimerEnded_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOakAbilityTimerResult*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C.ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Raid1
struct UOakAbility_Beastmaster_ClassMod_Raid1_C_ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Raid1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
