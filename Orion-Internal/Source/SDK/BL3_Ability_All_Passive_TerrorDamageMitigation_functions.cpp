// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_Passive_TerrorDamageMitigation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_All_Passive_TerrorDamageMitigation.Ability_All_Passive_TerrorDamageMitigation_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_All_Passive_TerrorDamageMitigation_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorDamageMitigation.Ability_All_Passive_TerrorDamageMitigation_C.OnActivated");

	UAbility_All_Passive_TerrorDamageMitigation_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_Passive_TerrorDamageMitigation.Ability_All_Passive_TerrorDamageMitigation_C.ExecuteUbergraph_Ability_All_Passive_TerrorDamageMitigation
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_All_Passive_TerrorDamageMitigation_C::ExecuteUbergraph_Ability_All_Passive_TerrorDamageMitigation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorDamageMitigation.Ability_All_Passive_TerrorDamageMitigation_C.ExecuteUbergraph_Ability_All_Passive_TerrorDamageMitigation");

	UAbility_All_Passive_TerrorDamageMitigation_C_ExecuteUbergraph_Ability_All_Passive_TerrorDamageMitigation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
