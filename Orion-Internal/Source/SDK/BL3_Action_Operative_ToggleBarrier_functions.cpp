// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_ToggleBarrier_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C.AN_ButtonPressed
// (BlueprintCallable, BlueprintEvent)

void UAction_Operative_ToggleBarrier_C::AN_ButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C.AN_ButtonPressed");

	UAction_Operative_ToggleBarrier_C_AN_ButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C.AN_ShowDevice
// (BlueprintCallable, BlueprintEvent)

void UAction_Operative_ToggleBarrier_C::AN_ShowDevice()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C.AN_ShowDevice");

	UAction_Operative_ToggleBarrier_C_AN_ShowDevice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C.AN_HideDevice
// (BlueprintCallable, BlueprintEvent)

void UAction_Operative_ToggleBarrier_C::AN_HideDevice()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C.AN_HideDevice");

	UAction_Operative_ToggleBarrier_C_AN_HideDevice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C.ExecuteUbergraph_Action_Operative_ToggleBarrier
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_ToggleBarrier_C::ExecuteUbergraph_Action_Operative_ToggleBarrier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C.ExecuteUbergraph_Action_Operative_ToggleBarrier");

	UAction_Operative_ToggleBarrier_C_ExecuteUbergraph_Action_Operative_ToggleBarrier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
