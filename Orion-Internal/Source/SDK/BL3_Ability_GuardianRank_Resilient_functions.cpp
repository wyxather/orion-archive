// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_GuardianRank_Resilient_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_GuardianRank_Resilient.Ability_GuardianRank_Resilient_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_GuardianRank_Resilient_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Resilient.Ability_GuardianRank_Resilient_C.OnActivated");

	UAbility_GuardianRank_Resilient_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_GuardianRank_Resilient.Ability_GuardianRank_Resilient_C.DownState_StopHost
// (BlueprintCallable, BlueprintEvent)

void UAbility_GuardianRank_Resilient_C::DownState_StopHost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Resilient.Ability_GuardianRank_Resilient_C.DownState_StopHost");

	UAbility_GuardianRank_Resilient_C_DownState_StopHost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_GuardianRank_Resilient.Ability_GuardianRank_Resilient_C.ExecuteUbergraph_Ability_GuardianRank_Resilient
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_GuardianRank_Resilient_C::ExecuteUbergraph_Ability_GuardianRank_Resilient(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Resilient.Ability_GuardianRank_Resilient_C.ExecuteUbergraph_Ability_GuardianRank_Resilient");

	UAbility_GuardianRank_Resilient_C_ExecuteUbergraph_Ability_GuardianRank_Resilient_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
