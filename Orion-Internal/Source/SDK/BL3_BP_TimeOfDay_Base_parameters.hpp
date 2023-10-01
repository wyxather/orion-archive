#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_TimeOfDay_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_TimeOfDay_Base.BP_TimeOfDay_Base_C.UpdateParameters
struct ABP_TimeOfDay_Base_C_UpdateParameters_Params
{
};

// Function BP_TimeOfDay_Base.BP_TimeOfDay_Base_C.UserConstructionScript
struct ABP_TimeOfDay_Base_C_UserConstructionScript_Params
{
};

// Function BP_TimeOfDay_Base.BP_TimeOfDay_Base_C.ReceiveTick
struct ABP_TimeOfDay_Base_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimeOfDay_Base.BP_TimeOfDay_Base_C.ReceiveBeginPlay
struct ABP_TimeOfDay_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_TimeOfDay_Base.BP_TimeOfDay_Base_C.ExecuteUbergraph_BP_TimeOfDay_Base
struct ABP_TimeOfDay_Base_C_ExecuteUbergraph_BP_TimeOfDay_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
