// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_Vengeance_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_Vengeance.Ability_Artifact_Vengeance_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_Vengeance_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Vengeance.Ability_Artifact_Vengeance_C.OnActivated");

	UAbility_Artifact_Vengeance_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Vengeance.Ability_Artifact_Vengeance_C.OnSlamEnd
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGroundSlamEndedDetails Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_Vengeance_C::OnSlamEnd(const struct FGroundSlamEndedDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Vengeance.Ability_Artifact_Vengeance_C.OnSlamEnd");

	UAbility_Artifact_Vengeance_C_OnSlamEnd_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Vengeance.Ability_Artifact_Vengeance_C.ExecuteUbergraph_Ability_Artifact_Vengeance
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_Vengeance_C::ExecuteUbergraph_Ability_Artifact_Vengeance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Vengeance.Ability_Artifact_Vengeance_C.ExecuteUbergraph_Ability_Artifact_Vengeance");

	UAbility_Artifact_Vengeance_C_ExecuteUbergraph_Ability_Artifact_Vengeance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
