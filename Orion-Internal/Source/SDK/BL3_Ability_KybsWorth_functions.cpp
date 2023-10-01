// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_KybsWorth_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_KybsWorth.Ability_KybsWorth_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_KybsWorth_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_KybsWorth.Ability_KybsWorth_C.OnActivated");

	UAbility_KybsWorth_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_KybsWorth.Ability_KybsWorth_C.OnCausedDeath_Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_KybsWorth_C::OnCausedDeath_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_KybsWorth.Ability_KybsWorth_C.OnCausedDeath_Event");

	UAbility_KybsWorth_C_OnCausedDeath_Event_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_KybsWorth.Ability_KybsWorth_C.ResetSpawn
// (BlueprintCallable, BlueprintEvent)

void UAbility_KybsWorth_C::ResetSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_KybsWorth.Ability_KybsWorth_C.ResetSpawn");

	UAbility_KybsWorth_C_ResetSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_KybsWorth.Ability_KybsWorth_C.ExecuteUbergraph_Ability_KybsWorth
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_KybsWorth_C::ExecuteUbergraph_Ability_KybsWorth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_KybsWorth.Ability_KybsWorth_C.ExecuteUbergraph_Ability_KybsWorth");

	UAbility_KybsWorth_C_ExecuteUbergraph_Ability_KybsWorth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
