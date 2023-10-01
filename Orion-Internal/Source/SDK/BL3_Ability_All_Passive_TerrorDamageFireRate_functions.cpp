// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_Passive_TerrorDamageFireRate_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_All_Passive_TerrorDamageFireRate.Ability_All_Passive_TerrorDamageFireRate_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_All_Passive_TerrorDamageFireRate_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorDamageFireRate.Ability_All_Passive_TerrorDamageFireRate_C.OnActivated");

	UAbility_All_Passive_TerrorDamageFireRate_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_Passive_TerrorDamageFireRate.Ability_All_Passive_TerrorDamageFireRate_C.ExecuteUbergraph_Ability_All_Passive_TerrorDamageFireRate
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_All_Passive_TerrorDamageFireRate_C::ExecuteUbergraph_Ability_All_Passive_TerrorDamageFireRate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorDamageFireRate.Ability_All_Passive_TerrorDamageFireRate_C.ExecuteUbergraph_Ability_All_Passive_TerrorDamageFireRate");

	UAbility_All_Passive_TerrorDamageFireRate_C_ExecuteUbergraph_Ability_All_Passive_TerrorDamageFireRate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
