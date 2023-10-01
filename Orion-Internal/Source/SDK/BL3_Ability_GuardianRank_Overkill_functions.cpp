// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_GuardianRank_Overkill_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_GuardianRank_Overkill.Ability_GuardianRank_Overkill_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_GuardianRank_Overkill_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Overkill.Ability_GuardianRank_Overkill_C.OnActivated");

	UAbility_GuardianRank_Overkill_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_GuardianRank_Overkill.Ability_GuardianRank_Overkill_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_GuardianRank_Overkill_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Overkill.Ability_GuardianRank_Overkill_C.OnDeactivated");

	UAbility_GuardianRank_Overkill_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_GuardianRank_Overkill.Ability_GuardianRank_Overkill_C.ExecuteUbergraph_Ability_GuardianRank_Overkill
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_GuardianRank_Overkill_C::ExecuteUbergraph_Ability_GuardianRank_Overkill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Overkill.Ability_GuardianRank_Overkill_C.ExecuteUbergraph_Ability_GuardianRank_Overkill");

	UAbility_GuardianRank_Overkill_C_ExecuteUbergraph_Ability_GuardianRank_Overkill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
