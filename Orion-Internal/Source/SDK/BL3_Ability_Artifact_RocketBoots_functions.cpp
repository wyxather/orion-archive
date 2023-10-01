// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_RocketBoots_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_RocketBoots_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.OnActivated");

	UAbility_Artifact_RocketBoots_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.StartSlide
// (BlueprintCallable, BlueprintEvent)

void UAbility_Artifact_RocketBoots_C::StartSlide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.StartSlide");

	UAbility_Artifact_RocketBoots_C_StartSlide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.FireRocket
// (BlueprintCallable, BlueprintEvent)

void UAbility_Artifact_RocketBoots_C::FireRocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.FireRocket");

	UAbility_Artifact_RocketBoots_C_FireRocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.StoppedSliding
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlideEndedDetails      Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_RocketBoots_C::StoppedSliding(const struct FSlideEndedDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.StoppedSliding");

	UAbility_Artifact_RocketBoots_C_StoppedSliding_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_RocketBoots_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.OnDeactivated");

	UAbility_Artifact_RocketBoots_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.ExecuteQuery
// (BlueprintCallable, BlueprintEvent)

void UAbility_Artifact_RocketBoots_C::ExecuteQuery()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.ExecuteQuery");

	UAbility_Artifact_RocketBoots_C_ExecuteQuery_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.ExecuteUbergraph_Ability_Artifact_RocketBoots
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_RocketBoots_C::ExecuteUbergraph_Ability_Artifact_RocketBoots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.ExecuteUbergraph_Ability_Artifact_RocketBoots");

	UAbility_Artifact_RocketBoots_C_ExecuteUbergraph_Ability_Artifact_RocketBoots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
