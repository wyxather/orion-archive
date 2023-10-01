#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_StatusEffect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_StatusEffect.Action_StatusEffect_C.GetRemainingTime
struct UAction_StatusEffect_C_GetRemainingTime_Params
{
	float                                              Seconds;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_StatusEffect.Action_StatusEffect_C.Remove Status Effect
struct UAction_StatusEffect_C_Remove_Status_Effect_Params
{
	class UClass**                                     StatusEffect;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_StatusEffect.Action_StatusEffect_C.ApplyStatusDamage
struct UAction_StatusEffect_C_ApplyStatusDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// Function Action_StatusEffect.Action_StatusEffect_C.UpdateDecay
struct UAction_StatusEffect_C_UpdateDecay_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_StatusEffect.Action_StatusEffect_C.GetValuePct
struct UAction_StatusEffect_C_GetValuePct_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_StatusEffect.Action_StatusEffect_C.AllowAction
struct UAction_StatusEffect_C_AllowAction_Params
{
	class UClass**                                     ActionBP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FDamageInfo*                                InDamageInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Action_StatusEffect.Action_StatusEffect_C.OnTick
struct UAction_StatusEffect_C_OnTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_StatusEffect.Action_StatusEffect_C.OnActionStart
struct UAction_StatusEffect_C_OnActionStart_Params
{
};

// Function Action_StatusEffect.Action_StatusEffect_C.OnPostComputeStats
struct UAction_StatusEffect_C_OnPostComputeStats_Params
{
};

// Function Action_StatusEffect.Action_StatusEffect_C.OnValueChanged
struct UAction_StatusEffect_C_OnValueChanged_Params
{
	float*                                             OldValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_StatusEffect.Action_StatusEffect_C.OnWorldReset
struct UAction_StatusEffect_C_OnWorldReset_Params
{
};

// Function Action_StatusEffect.Action_StatusEffect_C.ExecuteUbergraph_Action_StatusEffect
struct UAction_StatusEffect_C_ExecuteUbergraph_Action_StatusEffect_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
