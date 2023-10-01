// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Rakkman_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Rakkman.Ability_Rakkman_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UAbility_Rakkman_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Rakkman.Ability_Rakkman_C.CalculateAbilityState");

	UAbility_Rakkman_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ability_Rakkman.Ability_Rakkman_C.OnRegistered
// (Event, Protected, BlueprintEvent)

void UAbility_Rakkman_C::OnRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Rakkman.Ability_Rakkman_C.OnRegistered");

	UAbility_Rakkman_C_OnRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Rakkman.Ability_Rakkman_C.ExecuteUbergraph_Ability_Rakkman
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Rakkman_C::ExecuteUbergraph_Ability_Rakkman(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Rakkman.Ability_Rakkman_C.ExecuteUbergraph_Ability_Rakkman");

	UAbility_Rakkman_C_ExecuteUbergraph_Ability_Rakkman_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
