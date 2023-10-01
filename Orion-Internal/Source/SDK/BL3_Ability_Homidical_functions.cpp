// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Homidical_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Homidical.Ability_Homidical_C.OnRegistered
// (Event, Protected, BlueprintEvent)

void UAbility_Homidical_C::OnRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Homidical.Ability_Homidical_C.OnRegistered");

	UAbility_Homidical_C_OnRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Homidical.Ability_Homidical_C.OnCauseDeath_CE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Homidical_C::OnCauseDeath_CE(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Homidical.Ability_Homidical_C.OnCauseDeath_CE");

	UAbility_Homidical_C_OnCauseDeath_CE_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Homidical.Ability_Homidical_C.OnDownStateExit
// (BlueprintCallable, BlueprintEvent)

void UAbility_Homidical_C::OnDownStateExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Homidical.Ability_Homidical_C.OnDownStateExit");

	UAbility_Homidical_C_OnDownStateExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Homidical.Ability_Homidical_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UAbility_Homidical_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Homidical.Ability_Homidical_C.OnUnregistered");

	UAbility_Homidical_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Homidical.Ability_Homidical_C.OnResumed
// (Event, Protected, BlueprintEvent)

void UAbility_Homidical_C::OnResumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Homidical.Ability_Homidical_C.OnResumed");

	UAbility_Homidical_C_OnResumed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Homidical.Ability_Homidical_C.HomicidalTimerEnded
// (BlueprintCallable, BlueprintEvent)

void UAbility_Homidical_C::HomicidalTimerEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Homidical.Ability_Homidical_C.HomicidalTimerEnded");

	UAbility_Homidical_C_HomicidalTimerEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Homidical.Ability_Homidical_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Homidical_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Homidical.Ability_Homidical_C.OnActivated");

	UAbility_Homidical_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Homidical.Ability_Homidical_C.ExecuteUbergraph_Ability_Homidical
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Homidical_C::ExecuteUbergraph_Ability_Homidical(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Homidical.Ability_Homidical_C.ExecuteUbergraph_Ability_Homidical");

	UAbility_Homidical_C_ExecuteUbergraph_Ability_Homidical_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
