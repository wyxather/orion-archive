#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CatchARide_Platform_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CatchARide_Platform.BP_CatchARide_Platform_C.UserConstructionScript
struct ABP_CatchARide_Platform_C_UserConstructionScript_Params
{
};

// Function BP_CatchARide_Platform.BP_CatchARide_Platform_C.DigistructIn
struct ABP_CatchARide_Platform_C_DigistructIn_Params
{
	bool*                                              bIsScanning;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CatchARide_Platform.BP_CatchARide_Platform_C.DigistructOut
struct ABP_CatchARide_Platform_C_DigistructOut_Params
{
};

// Function BP_CatchARide_Platform.BP_CatchARide_Platform_C.StopScanFeedback
struct ABP_CatchARide_Platform_C_StopScanFeedback_Params
{
};

// Function BP_CatchARide_Platform.BP_CatchARide_Platform_C.ExecuteUbergraph_BP_CatchARide_Platform
struct ABP_CatchARide_Platform_C_ExecuteUbergraph_BP_CatchARide_Platform_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CatchARide_Platform.BP_CatchARide_Platform_C.VehicleScanned__DelegateSignature
struct ABP_CatchARide_Platform_C_VehicleScanned__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
