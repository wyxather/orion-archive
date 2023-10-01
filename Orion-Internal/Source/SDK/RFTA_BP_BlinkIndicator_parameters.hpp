#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_BlinkIndicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BlinkIndicator.BP_BlinkIndicator_C.ReceiveBeginPlay
struct ABP_BlinkIndicator_C_ReceiveBeginPlay_Params
{
};

// Function BP_BlinkIndicator.BP_BlinkIndicator_C.ReceiveEndPlay
struct ABP_BlinkIndicator_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BlinkIndicator.BP_BlinkIndicator_C.ExecuteUbergraph_BP_BlinkIndicator
struct ABP_BlinkIndicator_C_ExecuteUbergraph_BP_BlinkIndicator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
