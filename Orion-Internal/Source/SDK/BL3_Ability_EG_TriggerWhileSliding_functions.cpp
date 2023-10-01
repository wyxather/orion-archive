// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_EG_TriggerWhileSliding_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_EG_TriggerWhileSliding.Ability_EG_TriggerWhileSliding_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UAbility_EG_TriggerWhileSliding_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_EG_TriggerWhileSliding.Ability_EG_TriggerWhileSliding_C.CalculateAbilityState");

	UAbility_EG_TriggerWhileSliding_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ability_EG_TriggerWhileSliding.Ability_EG_TriggerWhileSliding_C.OnRegistered
// (Event, Protected, BlueprintEvent)

void UAbility_EG_TriggerWhileSliding_C::OnRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_EG_TriggerWhileSliding.Ability_EG_TriggerWhileSliding_C.OnRegistered");

	UAbility_EG_TriggerWhileSliding_C_OnRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_EG_TriggerWhileSliding.Ability_EG_TriggerWhileSliding_C.ExecuteUbergraph_Ability_EG_TriggerWhileSliding
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_EG_TriggerWhileSliding_C::ExecuteUbergraph_Ability_EG_TriggerWhileSliding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_EG_TriggerWhileSliding.Ability_EG_TriggerWhileSliding_C.ExecuteUbergraph_Ability_EG_TriggerWhileSliding");

	UAbility_EG_TriggerWhileSliding_C_ExecuteUbergraph_Ability_EG_TriggerWhileSliding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
