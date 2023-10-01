// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_OperativeDLC_10_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_OperativeDLC_10.Passive_OperativeDLC_9_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_OperativeDLC_9_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_10.Passive_OperativeDLC_9_C.OnActivated");

	UPassive_OperativeDLC_9_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_OperativeDLC_10.Passive_OperativeDLC_9_C.ResetGate
// (BlueprintCallable, BlueprintEvent)

void UPassive_OperativeDLC_9_C::ResetGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_10.Passive_OperativeDLC_9_C.ResetGate");

	UPassive_OperativeDLC_9_C_ResetGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_OperativeDLC_10.Passive_OperativeDLC_9_C.CustomEvent_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassive_OperativeDLC_9_C::CustomEvent_1(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_10.Passive_OperativeDLC_9_C.CustomEvent_1");

	UPassive_OperativeDLC_9_C_CustomEvent_1_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_OperativeDLC_10.Passive_OperativeDLC_9_C.ExecuteUbergraph_Passive_OperativeDLC_10
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_OperativeDLC_9_C::ExecuteUbergraph_Passive_OperativeDLC_10(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_10.Passive_OperativeDLC_9_C.ExecuteUbergraph_Passive_OperativeDLC_10");

	UPassive_OperativeDLC_9_C_ExecuteUbergraph_Passive_OperativeDLC_10_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
