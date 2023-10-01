#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_PowerSource_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PowerSource.BP_PowerSource_C.SetEnabled
struct ABP_PowerSource_C_SetEnabled_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PowerSource.BP_PowerSource_C.OnRep_Enabled
struct ABP_PowerSource_C_OnRep_Enabled_Params
{
};

// Function BP_PowerSource.BP_PowerSource_C.ReceiveBeginPlay
struct ABP_PowerSource_C_ReceiveBeginPlay_Params
{
};

// Function BP_PowerSource.BP_PowerSource_C.SetTriggerState
struct ABP_PowerSource_C_SetTriggerState_Params
{
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PowerSource.BP_PowerSource_C.ExecuteUbergraph_BP_PowerSource
struct ABP_PowerSource_C_ExecuteUbergraph_BP_PowerSource_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PowerSource.BP_PowerSource_C.OnEnabled__DelegateSignature
struct ABP_PowerSource_C_OnEnabled__DelegateSignature_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
