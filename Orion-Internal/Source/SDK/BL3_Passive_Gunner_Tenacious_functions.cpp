// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_Tenacious_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Gunner_Tenacious_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.OnActivated");

	UPassive_Gunner_Tenacious_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.ShieldDepleted_TencaiousDefense
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference ResourcePool                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassive_Gunner_Tenacious_C::ShieldDepleted_TencaiousDefense(const struct FGameResourcePoolReference& ResourcePool)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.ShieldDepleted_TencaiousDefense");

	UPassive_Gunner_Tenacious_C_ShieldDepleted_TencaiousDefense_Params params;
	params.ResourcePool = ResourcePool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UPassive_Gunner_Tenacious_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.OnDeactivated");

	UPassive_Gunner_Tenacious_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.OnFilled_TencaciousDefense
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference ResourcePool                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassive_Gunner_Tenacious_C::OnFilled_TencaciousDefense(const struct FGameResourcePoolReference& ResourcePool)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.OnFilled_TencaciousDefense");

	UPassive_Gunner_Tenacious_C_OnFilled_TencaciousDefense_Params params;
	params.ResourcePool = ResourcePool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.SetTriggerStateByShieldAmount
// (BlueprintCallable, BlueprintEvent)

void UPassive_Gunner_Tenacious_C::SetTriggerStateByShieldAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.SetTriggerStateByShieldAmount");

	UPassive_Gunner_Tenacious_C_SetTriggerStateByShieldAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.ExecuteUbergraph_Passive_Gunner_Tenacious
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_Tenacious_C::ExecuteUbergraph_Passive_Gunner_Tenacious(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.ExecuteUbergraph_Passive_Gunner_Tenacious");

	UPassive_Gunner_Tenacious_C_ExecuteUbergraph_Passive_Gunner_Tenacious_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
