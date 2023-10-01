// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_OperativeDLC_16_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_OperativeDLC_16.Passive_OperativeDLC_15_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_OperativeDLC_15_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_16.Passive_OperativeDLC_15_C.OnActivated");

	UPassive_OperativeDLC_15_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_OperativeDLC_16.Passive_OperativeDLC_15_C.OnResumed
// (Event, Protected, BlueprintEvent)

void UPassive_OperativeDLC_15_C::OnResumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_16.Passive_OperativeDLC_15_C.OnResumed");

	UPassive_OperativeDLC_15_C_OnResumed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_OperativeDLC_16.Passive_OperativeDLC_15_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UPassive_OperativeDLC_15_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_16.Passive_OperativeDLC_15_C.OnPaused");

	UPassive_OperativeDLC_15_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_OperativeDLC_16.Passive_OperativeDLC_15_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UPassive_OperativeDLC_15_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_16.Passive_OperativeDLC_15_C.OnDeactivated");

	UPassive_OperativeDLC_15_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_OperativeDLC_16.Passive_OperativeDLC_15_C.ExecuteUbergraph_Passive_OperativeDLC_16
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_OperativeDLC_15_C::ExecuteUbergraph_Passive_OperativeDLC_16(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_16.Passive_OperativeDLC_15_C.ExecuteUbergraph_Passive_OperativeDLC_16");

	UPassive_OperativeDLC_15_C_ExecuteUbergraph_Passive_OperativeDLC_16_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
