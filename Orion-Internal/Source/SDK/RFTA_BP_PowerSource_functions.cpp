// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_PowerSource_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PowerSource.BP_PowerSource_C.SetEnabled
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PowerSource_C::SetEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PowerSource.BP_PowerSource_C.SetEnabled");

	ABP_PowerSource_C_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PowerSource.BP_PowerSource_C.OnRep_Enabled
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_PowerSource_C::OnRep_Enabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PowerSource.BP_PowerSource_C.OnRep_Enabled");

	ABP_PowerSource_C_OnRep_Enabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PowerSource.BP_PowerSource_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ABP_PowerSource_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PowerSource.BP_PowerSource_C.ReceiveBeginPlay");

	ABP_PowerSource_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PowerSource.BP_PowerSource_C.SetTriggerState
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PowerSource_C::SetTriggerState(bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PowerSource.BP_PowerSource_C.SetTriggerState");

	ABP_PowerSource_C_SetTriggerState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PowerSource.BP_PowerSource_C.ExecuteUbergraph_BP_PowerSource
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PowerSource_C::ExecuteUbergraph_BP_PowerSource(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PowerSource.BP_PowerSource_C.ExecuteUbergraph_BP_PowerSource");

	ABP_PowerSource_C_ExecuteUbergraph_BP_PowerSource_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PowerSource.BP_PowerSource_C.OnEnabled__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PowerSource_C::OnEnabled__DelegateSignature(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PowerSource.BP_PowerSource_C.OnEnabled__DelegateSignature");

	ABP_PowerSource_C_OnEnabled__DelegateSignature_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
