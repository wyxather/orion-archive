// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CatchARide_Platform_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CatchARide_Platform.BP_CatchARide_Platform_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CatchARide_Platform_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatchARide_Platform.BP_CatchARide_Platform_C.UserConstructionScript");

	ABP_CatchARide_Platform_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CatchARide_Platform.BP_CatchARide_Platform_C.DigistructIn
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIsScanning                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CatchARide_Platform_C::DigistructIn(bool* bIsScanning)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatchARide_Platform.BP_CatchARide_Platform_C.DigistructIn");

	ABP_CatchARide_Platform_C_DigistructIn_Params params;
	params.bIsScanning = bIsScanning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CatchARide_Platform.BP_CatchARide_Platform_C.DigistructOut
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CatchARide_Platform_C::DigistructOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatchARide_Platform.BP_CatchARide_Platform_C.DigistructOut");

	ABP_CatchARide_Platform_C_DigistructOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CatchARide_Platform.BP_CatchARide_Platform_C.StopScanFeedback
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CatchARide_Platform_C::StopScanFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatchARide_Platform.BP_CatchARide_Platform_C.StopScanFeedback");

	ABP_CatchARide_Platform_C_StopScanFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CatchARide_Platform.BP_CatchARide_Platform_C.ExecuteUbergraph_BP_CatchARide_Platform
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CatchARide_Platform_C::ExecuteUbergraph_BP_CatchARide_Platform(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatchARide_Platform.BP_CatchARide_Platform_C.ExecuteUbergraph_BP_CatchARide_Platform");

	ABP_CatchARide_Platform_C_ExecuteUbergraph_BP_CatchARide_Platform_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CatchARide_Platform.BP_CatchARide_Platform_C.VehicleScanned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_CatchARide_Platform_C::VehicleScanned__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatchARide_Platform.BP_CatchARide_Platform_C.VehicleScanned__DelegateSignature");

	ABP_CatchARide_Platform_C_VehicleScanned__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
