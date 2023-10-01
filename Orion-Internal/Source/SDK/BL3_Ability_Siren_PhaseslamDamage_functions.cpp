// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Siren_PhaseslamDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Siren_PhaseslamDamage.Ability_Siren_PhaseslamDamage_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Siren_PhaseslamDamage_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_PhaseslamDamage.Ability_Siren_PhaseslamDamage_C.OnActivated");

	UAbility_Siren_PhaseslamDamage_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_PhaseslamDamage.Ability_Siren_PhaseslamDamage_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Siren_PhaseslamDamage_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_PhaseslamDamage.Ability_Siren_PhaseslamDamage_C.OnDeactivated");

	UAbility_Siren_PhaseslamDamage_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_PhaseslamDamage.Ability_Siren_PhaseslamDamage_C.ExecuteUbergraph_Ability_Siren_PhaseslamDamage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Siren_PhaseslamDamage_C::ExecuteUbergraph_Ability_Siren_PhaseslamDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_PhaseslamDamage.Ability_Siren_PhaseslamDamage_C.ExecuteUbergraph_Ability_Siren_PhaseslamDamage");

	UAbility_Siren_PhaseslamDamage_C_ExecuteUbergraph_Ability_Siren_PhaseslamDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
