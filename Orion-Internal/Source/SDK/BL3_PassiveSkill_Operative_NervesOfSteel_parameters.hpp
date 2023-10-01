#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_NervesOfSteel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.CalculateAbilityState
struct UPassiveSkill_Operative_NervesOfSteel_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnActivated
struct UPassiveSkill_Operative_NervesOfSteel_C_OnActivated_Params
{
};

// Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.InTheZone_OnResourcePoolFilled
struct UPassiveSkill_Operative_NervesOfSteel_C_InTheZone_OnResourcePoolFilled_Params
{
	struct FGameResourcePoolReference                  ResourcePool;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.InTheZone_OnResourcePoolNotFilled
struct UPassiveSkill_Operative_NervesOfSteel_C_InTheZone_OnResourcePoolNotFilled_Params
{
	struct FGameResourcePoolReference                  ResourcePool;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnAbilityTimerEnded
struct UPassiveSkill_Operative_NervesOfSteel_C_OnAbilityTimerEnded_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOakAbilityTimerResult*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnResumed
struct UPassiveSkill_Operative_NervesOfSteel_C_OnResumed_Params
{
};

// Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.OnPaused
struct UPassiveSkill_Operative_NervesOfSteel_C_OnPaused_Params
{
};

// Function PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C.ExecuteUbergraph_PassiveSkill_Operative_NervesOfSteel
struct UPassiveSkill_Operative_NervesOfSteel_C_ExecuteUbergraph_PassiveSkill_Operative_NervesOfSteel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
