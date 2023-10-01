// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_Salvo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_Salvo.Ability_Artifact_Salvo_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_Salvo_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Salvo.Ability_Artifact_Salvo_C.OnActivated");

	UAbility_Artifact_Salvo_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Salvo.Ability_Artifact_Salvo_C.FireRocket
// (BlueprintCallable, BlueprintEvent)

void UAbility_Artifact_Salvo_C::FireRocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Salvo.Ability_Artifact_Salvo_C.FireRocket");

	UAbility_Artifact_Salvo_C_FireRocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Salvo.Ability_Artifact_Salvo_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_Salvo_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Salvo.Ability_Artifact_Salvo_C.OnDeactivated");

	UAbility_Artifact_Salvo_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Salvo.Ability_Artifact_Salvo_C.ExecuteQuery
// (BlueprintCallable, BlueprintEvent)

void UAbility_Artifact_Salvo_C::ExecuteQuery()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Salvo.Ability_Artifact_Salvo_C.ExecuteQuery");

	UAbility_Artifact_Salvo_C_ExecuteQuery_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Salvo.Ability_Artifact_Salvo_C.SlamEnd
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGroundSlamEndedDetails Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_Salvo_C::SlamEnd(const struct FGroundSlamEndedDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Salvo.Ability_Artifact_Salvo_C.SlamEnd");

	UAbility_Artifact_Salvo_C_SlamEnd_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Salvo.Ability_Artifact_Salvo_C.StopFiring
// (BlueprintCallable, BlueprintEvent)

void UAbility_Artifact_Salvo_C::StopFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Salvo.Ability_Artifact_Salvo_C.StopFiring");

	UAbility_Artifact_Salvo_C_StopFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Salvo.Ability_Artifact_Salvo_C.ExecuteUbergraph_Ability_Artifact_Salvo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_Salvo_C::ExecuteUbergraph_Ability_Artifact_Salvo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Salvo.Ability_Artifact_Salvo_C.ExecuteUbergraph_Ability_Artifact_Salvo");

	UAbility_Artifact_Salvo_C_ExecuteUbergraph_Ability_Artifact_Salvo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
