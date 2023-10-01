// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_VanquisherFireRate_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_VanquisherFireRate.Ability_VanquisherFireRate_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UAbility_VanquisherFireRate_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_VanquisherFireRate.Ability_VanquisherFireRate_C.CalculateAbilityState");

	UAbility_VanquisherFireRate_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ability_VanquisherFireRate.Ability_VanquisherFireRate_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_VanquisherFireRate_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_VanquisherFireRate.Ability_VanquisherFireRate_C.OnActivated");

	UAbility_VanquisherFireRate_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_VanquisherFireRate.Ability_VanquisherFireRate_C.ExecuteUbergraph_Ability_VanquisherFireRate
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_VanquisherFireRate_C::ExecuteUbergraph_Ability_VanquisherFireRate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_VanquisherFireRate.Ability_VanquisherFireRate_C.ExecuteUbergraph_Ability_VanquisherFireRate");

	UAbility_VanquisherFireRate_C_ExecuteUbergraph_Ability_VanquisherFireRate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
