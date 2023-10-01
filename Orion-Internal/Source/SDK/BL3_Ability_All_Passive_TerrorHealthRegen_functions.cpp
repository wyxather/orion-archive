// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_Passive_TerrorHealthRegen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_All_Passive_TerrorHealthRegen.Ability_All_Passive_TerrorHealthRegen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_All_Passive_TerrorHealthRegen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorHealthRegen.Ability_All_Passive_TerrorHealthRegen_C.OnActivated");

	UAbility_All_Passive_TerrorHealthRegen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_Passive_TerrorHealthRegen.Ability_All_Passive_TerrorHealthRegen_C.ExecuteUbergraph_Ability_All_Passive_TerrorHealthRegen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_All_Passive_TerrorHealthRegen_C::ExecuteUbergraph_Ability_All_Passive_TerrorHealthRegen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorHealthRegen.Ability_All_Passive_TerrorHealthRegen_C.ExecuteUbergraph_Ability_All_Passive_TerrorHealthRegen");

	UAbility_All_Passive_TerrorHealthRegen_C_ExecuteUbergraph_Ability_All_Passive_TerrorHealthRegen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
