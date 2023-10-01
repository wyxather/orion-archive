#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Beastmaster_ClassMod_Hib_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.EndDomination
struct UOakAbility_Beastmaster_ClassMod_Hib_C_EndDomination_Params
{
};

// Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.OnDeath_DominateTarget_HitRun9
struct UOakAbility_Beastmaster_ClassMod_Hib_C_OnDeath_DominateTarget_HitRun9_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.OnAbilityTimerEnded
struct UOakAbility_Beastmaster_ClassMod_Hib_C_OnAbilityTimerEnded_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOakAbilityTimerResult*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.OnAbilityTimerStarted
struct UOakAbility_Beastmaster_ClassMod_Hib_C_OnAbilityTimerStarted_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.OnActivated
struct UOakAbility_Beastmaster_ClassMod_Hib_C_OnActivated_Params
{
};

// Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.CustomEvent_2
struct UOakAbility_Beastmaster_ClassMod_Hib_C_CustomEvent_2_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OakAbility_Beastmaster_ClassMod_Hib.OakAbility_Beastmaster_ClassMod_Hib_C.ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Hib
struct UOakAbility_Beastmaster_ClassMod_Hib_C_ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Hib_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
