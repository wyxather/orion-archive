// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_unhealthyraddamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_All_unhealthyraddamage.Ability_All_UnhealthyRadDamage_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_All_UnhealthyRadDamage_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_unhealthyraddamage.Ability_All_UnhealthyRadDamage_C.OnActivated");

	UAbility_All_UnhealthyRadDamage_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_unhealthyraddamage.Ability_All_UnhealthyRadDamage_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_All_UnhealthyRadDamage_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_unhealthyraddamage.Ability_All_UnhealthyRadDamage_C.OnDeactivated");

	UAbility_All_UnhealthyRadDamage_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_unhealthyraddamage.Ability_All_UnhealthyRadDamage_C.ExecuteUbergraph_Ability_All_UnhealthyRadDamage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_All_UnhealthyRadDamage_C::ExecuteUbergraph_Ability_All_UnhealthyRadDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_unhealthyraddamage.Ability_All_UnhealthyRadDamage_C.ExecuteUbergraph_Ability_All_UnhealthyRadDamage");

	UAbility_All_UnhealthyRadDamage_C_ExecuteUbergraph_Ability_All_UnhealthyRadDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
