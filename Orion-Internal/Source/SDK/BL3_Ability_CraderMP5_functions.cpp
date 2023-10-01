// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_CraderMP5_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_CraderMP5.Ability_CraderMP5_C.CalculateAbilityState
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UAbility_CraderMP5_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CraderMP5.Ability_CraderMP5_C.CalculateAbilityState");

	UAbility_CraderMP5_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ability_CraderMP5.Ability_CraderMP5_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_CraderMP5_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CraderMP5.Ability_CraderMP5_C.OnActivated");

	UAbility_CraderMP5_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_CraderMP5.Ability_CraderMP5_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_CraderMP5_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CraderMP5.Ability_CraderMP5_C.OnDeactivated");

	UAbility_CraderMP5_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_CraderMP5.Ability_CraderMP5_C.ExecuteUbergraph_Ability_CraderMP5
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_CraderMP5_C::ExecuteUbergraph_Ability_CraderMP5(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CraderMP5.Ability_CraderMP5_C.ExecuteUbergraph_Ability_CraderMP5");

	UAbility_CraderMP5_C_ExecuteUbergraph_Ability_CraderMP5_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
