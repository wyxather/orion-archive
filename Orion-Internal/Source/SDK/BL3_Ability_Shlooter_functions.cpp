// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Shlooter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Shlooter.Ability_Shlooter_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Shlooter_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Shlooter.Ability_Shlooter_C.OnActivated");

	UAbility_Shlooter_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Shlooter.Ability_Shlooter_C.OnCausedDeath
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Shlooter_C::OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Shlooter.Ability_Shlooter_C.OnCausedDeath");

	UAbility_Shlooter_C_OnCausedDeath_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Shlooter.Ability_Shlooter_C.ExecuteUbergraph_Ability_Shlooter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Shlooter_C::ExecuteUbergraph_Ability_Shlooter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Shlooter.Ability_Shlooter_C.ExecuteUbergraph_Ability_Shlooter");

	UAbility_Shlooter_C_ExecuteUbergraph_Ability_Shlooter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
