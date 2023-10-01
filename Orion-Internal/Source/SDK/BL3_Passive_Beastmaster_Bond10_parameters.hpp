#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Bond10_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnRep_DominateTarget
struct UPassive_Beastmaster_Bond10_C_OnRep_DominateTarget_Params
{
};

// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.DetermineTargetClassification
struct UPassive_Beastmaster_Bond10_C_DetermineTargetClassification_Params
{
	int                                                FinalDurationScalar;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.RemoveDominateTargetFromList
struct UPassive_Beastmaster_Bond10_C_RemoveDominateTargetFromList_Params
{
	class AActor*                                      NewTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.TryApplyDominate
struct UPassive_Beastmaster_Bond10_C_TryApplyDominate_Params
{
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	class AActor*                                      ActorToDominate;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.AddDominateTargetToList
struct UPassive_Beastmaster_Bond10_C_AddDominateTargetToList_Params
{
	class AActor*                                      NewTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.HandleDominateTimerFinished
struct UPassive_Beastmaster_Bond10_C_HandleDominateTimerFinished_Params
{
	class UObject*                                     InSpecTimer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EOakAbilityTimerResult                             InResult;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.DoHealthPercentDamage
struct UPassive_Beastmaster_Bond10_C_DoHealthPercentDamage_Params
{
};

// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnAbilityTimerStarted
struct UPassive_Beastmaster_Bond10_C_OnAbilityTimerStarted_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnAbilityTimerEnded
struct UPassive_Beastmaster_Bond10_C_OnAbilityTimerEnded_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOakAbilityTimerResult*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnDeath_DominateTarget_HitRun9
struct UPassive_Beastmaster_Bond10_C_OnDeath_DominateTarget_HitRun9_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.EndDomination
struct UPassive_Beastmaster_Bond10_C_EndDomination_Params
{
};

// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnCausedDamage_HitAndRun9
struct UPassive_Beastmaster_Bond10_C_OnCausedDamage_HitAndRun9_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.DoDominateExplosion
struct UPassive_Beastmaster_Bond10_C_DoDominateExplosion_Params
{
};

// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.OnActivated
struct UPassive_Beastmaster_Bond10_C_OnActivated_Params
{
};

// Function Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C.ExecuteUbergraph_Passive_Beastmaster_Bond10
struct UPassive_Beastmaster_Bond10_C_ExecuteUbergraph_Passive_Beastmaster_Bond10_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
