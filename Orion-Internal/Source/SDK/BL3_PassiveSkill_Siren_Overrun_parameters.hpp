#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_Overrun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.GetFallbackBlitzLocation
struct UPassiveSkill_Siren_Overrun_C_GetFallbackBlitzLocation_Params
{
	struct FVector                                     res;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.OnBlitzStarted
struct UPassiveSkill_Siren_Overrun_C_OnBlitzStarted_Params
{
};

// Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.ResetOverrunCooldown
struct UPassiveSkill_Siren_Overrun_C_ResetOverrunCooldown_Params
{
};

// Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.CalculateAbilityState
struct UPassiveSkill_Siren_Overrun_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.BlitzCausedDeath
struct UPassiveSkill_Siren_Overrun_C_BlitzCausedDeath_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.OnActivated
struct UPassiveSkill_Siren_Overrun_C_OnActivated_Params
{
};

// Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.BlitzOnPerformMelee
struct UPassiveSkill_Siren_Overrun_C_BlitzOnPerformMelee_Params
{
	class UPlayerMeleeData*                            MeleeData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      MeleeTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.ExecuteUbergraph_PassiveSkill_Siren_Overrun
struct UPassiveSkill_Siren_Overrun_C_ExecuteUbergraph_PassiveSkill_Siren_Overrun_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
