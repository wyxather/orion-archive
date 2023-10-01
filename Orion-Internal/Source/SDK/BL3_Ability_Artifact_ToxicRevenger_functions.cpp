// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_ToxicRevenger_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_ToxicRevenger.Ability_Artifact_ToxicRevenger_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_ToxicRevenger_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_ToxicRevenger.Ability_Artifact_ToxicRevenger_C.OnActivated");

	UAbility_Artifact_ToxicRevenger_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_ToxicRevenger.Ability_Artifact_ToxicRevenger_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_ToxicRevenger_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_ToxicRevenger.Ability_Artifact_ToxicRevenger_C.OnDeactivated");

	UAbility_Artifact_ToxicRevenger_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_ToxicRevenger.Ability_Artifact_ToxicRevenger_C.SlamEnd
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGroundSlamEndedDetails Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_ToxicRevenger_C::SlamEnd(const struct FGroundSlamEndedDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_ToxicRevenger.Ability_Artifact_ToxicRevenger_C.SlamEnd");

	UAbility_Artifact_ToxicRevenger_C_SlamEnd_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_ToxicRevenger.Ability_Artifact_ToxicRevenger_C.ExecuteUbergraph_Ability_Artifact_ToxicRevenger
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_ToxicRevenger_C::ExecuteUbergraph_Ability_Artifact_ToxicRevenger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_ToxicRevenger.Ability_Artifact_ToxicRevenger_C.ExecuteUbergraph_Ability_Artifact_ToxicRevenger");

	UAbility_Artifact_ToxicRevenger_C_ExecuteUbergraph_Ability_Artifact_ToxicRevenger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
