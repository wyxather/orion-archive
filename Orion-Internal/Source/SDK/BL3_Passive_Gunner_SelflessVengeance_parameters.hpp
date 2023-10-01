#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_SelflessVengeance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.ApplyBonusDamageToTarget
struct UPassive_Gunner_SelflessVengeance_C_ApplyBonusDamageToTarget_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DmgSource;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.OnActivated
struct UPassive_Gunner_SelflessVengeance_C_OnActivated_Params
{
};

// Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.ReloadEnded_SelflessVengeance
struct UPassive_Gunner_SelflessVengeance_C_ReloadEnded_SelflessVengeance_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.OnAbilityTimerStarted
struct UPassive_Gunner_SelflessVengeance_C_OnAbilityTimerStarted_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.OnAbilityTimerEnded
struct UPassive_Gunner_SelflessVengeance_C_OnAbilityTimerEnded_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOakAbilityTimerResult*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_Gunner_SelflessVengeance.Passive_Gunner_SelflessVengeance_C.ExecuteUbergraph_Passive_Gunner_SelflessVengeance
struct UPassive_Gunner_SelflessVengeance_C_ExecuteUbergraph_Passive_Gunner_SelflessVengeance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
