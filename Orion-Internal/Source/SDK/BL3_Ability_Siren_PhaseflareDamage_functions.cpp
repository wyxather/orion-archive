// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Siren_PhaseflareDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Siren_PhaseflareDamage.Ability_Siren_PhaseflareDamage_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Siren_PhaseflareDamage_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_PhaseflareDamage.Ability_Siren_PhaseflareDamage_C.OnActivated");

	UAbility_Siren_PhaseflareDamage_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_PhaseflareDamage.Ability_Siren_PhaseflareDamage_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Siren_PhaseflareDamage_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_PhaseflareDamage.Ability_Siren_PhaseflareDamage_C.OnDeactivated");

	UAbility_Siren_PhaseflareDamage_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_PhaseflareDamage.Ability_Siren_PhaseflareDamage_C.ExecuteUbergraph_Ability_Siren_PhaseflareDamage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Siren_PhaseflareDamage_C::ExecuteUbergraph_Ability_Siren_PhaseflareDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_PhaseflareDamage.Ability_Siren_PhaseflareDamage_C.ExecuteUbergraph_Ability_Siren_PhaseflareDamage");

	UAbility_Siren_PhaseflareDamage_C_ExecuteUbergraph_Ability_Siren_PhaseflareDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
