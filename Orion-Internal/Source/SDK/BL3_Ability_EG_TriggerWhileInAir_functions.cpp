// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_EG_TriggerWhileInAir_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_EG_TriggerWhileInAir.Ability_EG_TriggerWhileInAir_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UAbility_EG_TriggerWhileInAir_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_EG_TriggerWhileInAir.Ability_EG_TriggerWhileInAir_C.CalculateAbilityState");

	UAbility_EG_TriggerWhileInAir_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ability_EG_TriggerWhileInAir.Ability_EG_TriggerWhileInAir_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_EG_TriggerWhileInAir_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_EG_TriggerWhileInAir.Ability_EG_TriggerWhileInAir_C.OnActivated");

	UAbility_EG_TriggerWhileInAir_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_EG_TriggerWhileInAir.Ability_EG_TriggerWhileInAir_C.ExecuteUbergraph_Ability_EG_TriggerWhileInAir
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_EG_TriggerWhileInAir_C::ExecuteUbergraph_Ability_EG_TriggerWhileInAir(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_EG_TriggerWhileInAir.Ability_EG_TriggerWhileInAir_C.ExecuteUbergraph_Ability_EG_TriggerWhileInAir");

	UAbility_EG_TriggerWhileInAir_C_ExecuteUbergraph_Ability_EG_TriggerWhileInAir_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
