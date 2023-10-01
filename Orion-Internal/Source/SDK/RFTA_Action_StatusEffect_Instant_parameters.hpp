#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_StatusEffect_Instant_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_StatusEffect_Instant.Action_StatusEffect_Instant_C.Do Action
struct UAction_StatusEffect_Instant_C_Do_Action_Params
{
};

// Function Action_StatusEffect_Instant.Action_StatusEffect_Instant_C.OnValueChanged
struct UAction_StatusEffect_Instant_C_OnValueChanged_Params
{
	float*                                             OldValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_StatusEffect_Instant.Action_StatusEffect_Instant_C.OnActionStart
struct UAction_StatusEffect_Instant_C_OnActionStart_Params
{
};

// Function Action_StatusEffect_Instant.Action_StatusEffect_Instant_C.ExecuteUbergraph_Action_StatusEffect_Instant
struct UAction_StatusEffect_Instant_C_ExecuteUbergraph_Action_StatusEffect_Instant_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
