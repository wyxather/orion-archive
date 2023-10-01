// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_ElectricSlide_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_ElectricSlide_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.OnActivated");

	UAbility_Artifact_ElectricSlide_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.StartSlide
// (BlueprintCallable, BlueprintEvent)

void UAbility_Artifact_ElectricSlide_C::StartSlide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.StartSlide");

	UAbility_Artifact_ElectricSlide_C_StartSlide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.StopSlide
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlideEndedDetails      Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_ElectricSlide_C::StopSlide(const struct FSlideEndedDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.StopSlide");

	UAbility_Artifact_ElectricSlide_C_StopSlide_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.QueryEnemies
// (BlueprintCallable, BlueprintEvent)

void UAbility_Artifact_ElectricSlide_C::QueryEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.QueryEnemies");

	UAbility_Artifact_ElectricSlide_C_QueryEnemies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.ExecuteUbergraph_Ability_Artifact_ElectricSlide
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_ElectricSlide_C::ExecuteUbergraph_Ability_Artifact_ElectricSlide(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.ExecuteUbergraph_Ability_Artifact_ElectricSlide");

	UAbility_Artifact_ElectricSlide_C_ExecuteUbergraph_Ability_Artifact_ElectricSlide_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
