#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Bp_OakVehicle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Bp_OakVehicle.BP_OakVehicle_C.UserConstructionScript
struct ABP_OakVehicle_C_UserConstructionScript_Params
{
};

// Function Bp_OakVehicle.BP_OakVehicle_C.ReceiveBeginPlay
struct ABP_OakVehicle_C_ReceiveBeginPlay_Params
{
};

// Function Bp_OakVehicle.BP_OakVehicle_C.OnScanningStarted
struct ABP_OakVehicle_C_OnScanningStarted_Params
{
};

// Function Bp_OakVehicle.BP_OakVehicle_C.OnScanningSuccess
struct ABP_OakVehicle_C_OnScanningSuccess_Params
{
};

// Function Bp_OakVehicle.BP_OakVehicle_C.OnScanningCancelled
struct ABP_OakVehicle_C_OnScanningCancelled_Params
{
};

// Function Bp_OakVehicle.BP_OakVehicle_C.ExecuteUbergraph_BP_OakVehicle
struct ABP_OakVehicle_C_ExecuteUbergraph_BP_OakVehicle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_OakVehicle.BP_OakVehicle_C.ScanCancelled__DelegateSignature
struct ABP_OakVehicle_C_ScanCancelled__DelegateSignature_Params
{
};

// Function Bp_OakVehicle.BP_OakVehicle_C.ScanStarted__DelegateSignature
struct ABP_OakVehicle_C_ScanStarted__DelegateSignature_Params
{
};

// Function Bp_OakVehicle.BP_OakVehicle_C.ScanSuccess__DelegateSignature
struct ABP_OakVehicle_C_ScanSuccess__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
