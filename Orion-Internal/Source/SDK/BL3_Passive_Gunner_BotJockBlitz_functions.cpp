// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_BotJockBlitz_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UPassive_Gunner_BotJockBlitz_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.CalculateAbilityState");

	UPassive_Gunner_BotJockBlitz_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UPassive_Gunner_BotJockBlitz_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.OnDeactivated");

	UPassive_Gunner_BotJockBlitz_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UPassive_Gunner_BotJockBlitz_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.OnPaused");

	UPassive_Gunner_BotJockBlitz_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.OnResumed
// (Event, Protected, BlueprintEvent)

void UPassive_Gunner_BotJockBlitz_C::OnResumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.OnResumed");

	UPassive_Gunner_BotJockBlitz_C_OnResumed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Gunner_BotJockBlitz_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.OnActivated");

	UPassive_Gunner_BotJockBlitz_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.ExecuteUbergraph_Passive_Gunner_BotJockBlitz
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_BotJockBlitz_C::ExecuteUbergraph_Passive_Gunner_BotJockBlitz(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.ExecuteUbergraph_Passive_Gunner_BotJockBlitz");

	UPassive_Gunner_BotJockBlitz_C_ExecuteUbergraph_Passive_Gunner_BotJockBlitz_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
