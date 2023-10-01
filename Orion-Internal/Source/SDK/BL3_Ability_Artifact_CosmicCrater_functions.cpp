// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_CosmicCrater_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_CosmicCrater.Ability_Artifact_CosmicCrater_C.Ammo Return
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_CosmicCrater_C::Ammo_Return(class AOakCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_CosmicCrater.Ability_Artifact_CosmicCrater_C.Ammo Return");

	UAbility_Artifact_CosmicCrater_C_Ammo_Return_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_CosmicCrater.Ability_Artifact_CosmicCrater_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_CosmicCrater_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_CosmicCrater.Ability_Artifact_CosmicCrater_C.OnActivated");

	UAbility_Artifact_CosmicCrater_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_CosmicCrater.Ability_Artifact_CosmicCrater_C.SlamEnd
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGroundSlamEndedDetails Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_CosmicCrater_C::SlamEnd(const struct FGroundSlamEndedDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_CosmicCrater.Ability_Artifact_CosmicCrater_C.SlamEnd");

	UAbility_Artifact_CosmicCrater_C_SlamEnd_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_CosmicCrater.Ability_Artifact_CosmicCrater_C.ExecuteUbergraph_Ability_Artifact_CosmicCrater
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_CosmicCrater_C::ExecuteUbergraph_Ability_Artifact_CosmicCrater(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_CosmicCrater.Ability_Artifact_CosmicCrater_C.ExecuteUbergraph_Ability_Artifact_CosmicCrater");

	UAbility_Artifact_CosmicCrater_C_ExecuteUbergraph_Ability_Artifact_CosmicCrater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
