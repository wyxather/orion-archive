// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_PewPew_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_PewPew.Ability_PewPew_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_PewPew_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_PewPew.Ability_PewPew_C.OnActivated");

	UAbility_PewPew_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_PewPew.Ability_PewPew_C.CausedDeath
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_PewPew_C::CausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_PewPew.Ability_PewPew_C.CausedDeath");

	UAbility_PewPew_C_CausedDeath_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_PewPew.Ability_PewPew_C.ExecuteUbergraph_Ability_PewPew
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_PewPew_C::ExecuteUbergraph_Ability_PewPew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_PewPew.Ability_PewPew_C.ExecuteUbergraph_Ability_PewPew");

	UAbility_PewPew_C_ExecuteUbergraph_Ability_PewPew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
