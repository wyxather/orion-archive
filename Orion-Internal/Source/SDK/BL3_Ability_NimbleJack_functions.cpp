// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_NimbleJack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_NimbleJack.Ability_NimbleJack_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UAbility_NimbleJack_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_NimbleJack.Ability_NimbleJack_C.CalculateAbilityState");

	UAbility_NimbleJack_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ability_NimbleJack.Ability_NimbleJack_C.OnRegistered
// (Event, Protected, BlueprintEvent)

void UAbility_NimbleJack_C::OnRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_NimbleJack.Ability_NimbleJack_C.OnRegistered");

	UAbility_NimbleJack_C_OnRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_NimbleJack.Ability_NimbleJack_C.ExecuteUbergraph_Ability_NimbleJack
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_NimbleJack_C::ExecuteUbergraph_Ability_NimbleJack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_NimbleJack.Ability_NimbleJack_C.ExecuteUbergraph_Ability_NimbleJack");

	UAbility_NimbleJack_C_ExecuteUbergraph_Ability_NimbleJack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
