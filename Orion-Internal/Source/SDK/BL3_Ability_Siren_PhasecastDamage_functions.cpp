// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Siren_PhasecastDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Siren_PhasecastDamage.Ability_Siren_PhasecastDamage_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Siren_PhasecastDamage_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_PhasecastDamage.Ability_Siren_PhasecastDamage_C.OnActivated");

	UAbility_Siren_PhasecastDamage_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_PhasecastDamage.Ability_Siren_PhasecastDamage_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Siren_PhasecastDamage_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_PhasecastDamage.Ability_Siren_PhasecastDamage_C.OnDeactivated");

	UAbility_Siren_PhasecastDamage_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_PhasecastDamage.Ability_Siren_PhasecastDamage_C.ExecuteUbergraph_Ability_Siren_PhasecastDamage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Siren_PhasecastDamage_C::ExecuteUbergraph_Ability_Siren_PhasecastDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_PhasecastDamage.Ability_Siren_PhasecastDamage_C.ExecuteUbergraph_Ability_Siren_PhasecastDamage");

	UAbility_Siren_PhasecastDamage_C_ExecuteUbergraph_Ability_Siren_PhasecastDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
