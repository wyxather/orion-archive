// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_HolyGrail_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_HolyGrail.Ability_Artifact_HolyGrail_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_HolyGrail_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_HolyGrail.Ability_Artifact_HolyGrail_C.OnActivated");

	UAbility_Artifact_HolyGrail_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_HolyGrail.Ability_Artifact_HolyGrail_C.OnRegistered
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_HolyGrail_C::OnRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_HolyGrail.Ability_Artifact_HolyGrail_C.OnRegistered");

	UAbility_Artifact_HolyGrail_C_OnRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_HolyGrail.Ability_Artifact_HolyGrail_C.OnRevivingStopped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccessful                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_HolyGrail_C::OnRevivingStopped(bool IsSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_HolyGrail.Ability_Artifact_HolyGrail_C.OnRevivingStopped");

	UAbility_Artifact_HolyGrail_C_OnRevivingStopped_Params params;
	params.IsSuccessful = IsSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_HolyGrail.Ability_Artifact_HolyGrail_C.OnReviveStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorBeingRevived              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_HolyGrail_C::OnReviveStart(class AActor* ActorBeingRevived)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_HolyGrail.Ability_Artifact_HolyGrail_C.OnReviveStart");

	UAbility_Artifact_HolyGrail_C_OnReviveStart_Params params;
	params.ActorBeingRevived = ActorBeingRevived;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_HolyGrail.Ability_Artifact_HolyGrail_C.ExecuteUbergraph_Ability_Artifact_HolyGrail
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_HolyGrail_C::ExecuteUbergraph_Ability_Artifact_HolyGrail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_HolyGrail.Ability_Artifact_HolyGrail_C.ExecuteUbergraph_Ability_Artifact_HolyGrail");

	UAbility_Artifact_HolyGrail_C_ExecuteUbergraph_Ability_Artifact_HolyGrail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
