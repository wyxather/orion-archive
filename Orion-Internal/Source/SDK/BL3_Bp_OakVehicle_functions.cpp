// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Bp_OakVehicle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bp_OakVehicle.BP_OakVehicle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OakVehicle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_OakVehicle.BP_OakVehicle_C.UserConstructionScript");

	ABP_OakVehicle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_OakVehicle.BP_OakVehicle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_OakVehicle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_OakVehicle.BP_OakVehicle_C.ReceiveBeginPlay");

	ABP_OakVehicle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_OakVehicle.BP_OakVehicle_C.OnScanningStarted
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OakVehicle_C::OnScanningStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_OakVehicle.BP_OakVehicle_C.OnScanningStarted");

	ABP_OakVehicle_C_OnScanningStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_OakVehicle.BP_OakVehicle_C.OnScanningSuccess
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OakVehicle_C::OnScanningSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_OakVehicle.BP_OakVehicle_C.OnScanningSuccess");

	ABP_OakVehicle_C_OnScanningSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_OakVehicle.BP_OakVehicle_C.OnScanningCancelled
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OakVehicle_C::OnScanningCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_OakVehicle.BP_OakVehicle_C.OnScanningCancelled");

	ABP_OakVehicle_C_OnScanningCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_OakVehicle.BP_OakVehicle_C.ExecuteUbergraph_BP_OakVehicle
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OakVehicle_C::ExecuteUbergraph_BP_OakVehicle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_OakVehicle.BP_OakVehicle_C.ExecuteUbergraph_BP_OakVehicle");

	ABP_OakVehicle_C_ExecuteUbergraph_BP_OakVehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_OakVehicle.BP_OakVehicle_C.ScanCancelled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_OakVehicle_C::ScanCancelled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_OakVehicle.BP_OakVehicle_C.ScanCancelled__DelegateSignature");

	ABP_OakVehicle_C_ScanCancelled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_OakVehicle.BP_OakVehicle_C.ScanStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_OakVehicle_C::ScanStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_OakVehicle.BP_OakVehicle_C.ScanStarted__DelegateSignature");

	ABP_OakVehicle_C_ScanStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_OakVehicle.BP_OakVehicle_C.ScanSuccess__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_OakVehicle_C::ScanSuccess__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_OakVehicle.BP_OakVehicle_C.ScanSuccess__DelegateSignature");

	ABP_OakVehicle_C_ScanSuccess__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
