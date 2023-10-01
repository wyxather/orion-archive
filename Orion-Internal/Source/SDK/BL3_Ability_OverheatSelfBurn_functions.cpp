// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_OverheatSelfBurn_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UAbility_OverheatSelfBurn_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.CalculateAbilityState");

	UAbility_OverheatSelfBurn_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UAbility_OverheatSelfBurn_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnPaused");

	UAbility_OverheatSelfBurn_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnResumed
// (Event, Protected, BlueprintEvent)

void UAbility_OverheatSelfBurn_C::OnResumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnResumed");

	UAbility_OverheatSelfBurn_C_OnResumed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_OverheatSelfBurn_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnActivated");

	UAbility_OverheatSelfBurn_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_OverheatSelfBurn_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnDeactivated");

	UAbility_OverheatSelfBurn_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UAbility_OverheatSelfBurn_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnUnregistered");

	UAbility_OverheatSelfBurn_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.ExitedDownState
// (BlueprintCallable, BlueprintEvent)

void UAbility_OverheatSelfBurn_C::ExitedDownState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.ExitedDownState");

	UAbility_OverheatSelfBurn_C_ExitedDownState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.ExecuteUbergraph_Ability_OverheatSelfBurn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_OverheatSelfBurn_C::ExecuteUbergraph_Ability_OverheatSelfBurn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.ExecuteUbergraph_Ability_OverheatSelfBurn");

	UAbility_OverheatSelfBurn_C_ExecuteUbergraph_Ability_OverheatSelfBurn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
