// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_CausticCoast_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_CausticCoast_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.OnActivated");

	UAbility_Artifact_CausticCoast_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.StartSlide
// (BlueprintCallable, BlueprintEvent)

void UAbility_Artifact_CausticCoast_C::StartSlide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.StartSlide");

	UAbility_Artifact_CausticCoast_C_StartSlide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.FireCorrosiveProjectile
// (BlueprintCallable, BlueprintEvent)

void UAbility_Artifact_CausticCoast_C::FireCorrosiveProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.FireCorrosiveProjectile");

	UAbility_Artifact_CausticCoast_C_FireCorrosiveProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.StoppedSliding
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlideEndedDetails      Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_CausticCoast_C::StoppedSliding(const struct FSlideEndedDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.StoppedSliding");

	UAbility_Artifact_CausticCoast_C_StoppedSliding_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.ExecuteUbergraph_Ability_Artifact_CausticCoast
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_CausticCoast_C::ExecuteUbergraph_Ability_Artifact_CausticCoast(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.ExecuteUbergraph_Ability_Artifact_CausticCoast");

	UAbility_Artifact_CausticCoast_C_ExecuteUbergraph_Ability_Artifact_CausticCoast_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
