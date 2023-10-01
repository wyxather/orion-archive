// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_IceSpiker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.GbxAsyncRequest_Spawned_8F4C186441C83D0984C828A8A9143007
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InstanceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_IceSpiker_C::GbxAsyncRequest_Spawned_8F4C186441C83D0984C828A8A9143007(class AActor* Actor, int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.GbxAsyncRequest_Spawned_8F4C186441C83D0984C828A8A9143007");

	UAbility_Artifact_IceSpiker_C_GbxAsyncRequest_Spawned_8F4C186441C83D0984C828A8A9143007_Params params;
	params.Actor = Actor;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.GbxAsyncRequest_Spawned_3D3B284F40AA4A2CD27B3FA660DADB8E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InstanceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_IceSpiker_C::GbxAsyncRequest_Spawned_3D3B284F40AA4A2CD27B3FA660DADB8E(class AActor* Actor, int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.GbxAsyncRequest_Spawned_3D3B284F40AA4A2CD27B3FA660DADB8E");

	UAbility_Artifact_IceSpiker_C_GbxAsyncRequest_Spawned_3D3B284F40AA4A2CD27B3FA660DADB8E_Params params;
	params.Actor = Actor;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_IceSpiker_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.OnActivated");

	UAbility_Artifact_IceSpiker_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_IceSpiker_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.OnDeactivated");

	UAbility_Artifact_IceSpiker_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.GroundSlam_End
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGroundSlamEndedDetails Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_IceSpiker_C::GroundSlam_End(const struct FGroundSlamEndedDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.GroundSlam_End");

	UAbility_Artifact_IceSpiker_C_GroundSlam_End_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.ExecuteUbergraph_Ability_Artifact_IceSpiker
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_IceSpiker_C::ExecuteUbergraph_Ability_Artifact_IceSpiker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_IceSpiker.Ability_Artifact_IceSpiker_C.ExecuteUbergraph_Ability_Artifact_IceSpiker");

	UAbility_Artifact_IceSpiker_C_ExecuteUbergraph_Ability_Artifact_IceSpiker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
