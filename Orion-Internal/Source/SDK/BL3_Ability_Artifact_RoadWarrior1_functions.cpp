// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_RoadWarrior1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_RoadWarrior1_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.OnActivated");

	UAbility_Artifact_RoadWarrior1_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.StartSlide
// (BlueprintCallable, BlueprintEvent)

void UAbility_Artifact_RoadWarrior1_C::StartSlide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.StartSlide");

	UAbility_Artifact_RoadWarrior1_C_StartSlide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.FireProjectile
// (BlueprintCallable, BlueprintEvent)

void UAbility_Artifact_RoadWarrior1_C::FireProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.FireProjectile");

	UAbility_Artifact_RoadWarrior1_C_FireProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.StoppedSliding
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlideEndedDetails      Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_RoadWarrior1_C::StoppedSliding(const struct FSlideEndedDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.StoppedSliding");

	UAbility_Artifact_RoadWarrior1_C_StoppedSliding_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_RoadWarrior1_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.OnDeactivated");

	UAbility_Artifact_RoadWarrior1_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.ExecuteUbergraph_Ability_Artifact_RoadWarrior1
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_RoadWarrior1_C::ExecuteUbergraph_Ability_Artifact_RoadWarrior1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.ExecuteUbergraph_Ability_Artifact_RoadWarrior1");

	UAbility_Artifact_RoadWarrior1_C_ExecuteUbergraph_Ability_Artifact_RoadWarrior1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
