// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_FleshMelter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_FleshMelter.Ability_Artifact_FleshMelter_C.CausedDeath_FleshMelter
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_FleshMelter_C::CausedDeath_FleshMelter(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_FleshMelter.Ability_Artifact_FleshMelter_C.CausedDeath_FleshMelter");

	UAbility_Artifact_FleshMelter_C_CausedDeath_FleshMelter_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_FleshMelter.Ability_Artifact_FleshMelter_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_FleshMelter_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_FleshMelter.Ability_Artifact_FleshMelter_C.OnDeactivated");

	UAbility_Artifact_FleshMelter_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_FleshMelter.Ability_Artifact_FleshMelter_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_FleshMelter_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_FleshMelter.Ability_Artifact_FleshMelter_C.OnActivated");

	UAbility_Artifact_FleshMelter_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_FleshMelter.Ability_Artifact_FleshMelter_C.ExecuteUbergraph_Ability_Artifact_FleshMelter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_FleshMelter_C::ExecuteUbergraph_Ability_Artifact_FleshMelter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_FleshMelter.Ability_Artifact_FleshMelter_C.ExecuteUbergraph_Ability_Artifact_FleshMelter");

	UAbility_Artifact_FleshMelter_C_ExecuteUbergraph_Ability_Artifact_FleshMelter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
