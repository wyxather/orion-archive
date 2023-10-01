// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_VaultReward_TrueGuardian_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.CompletedAllPlotMissions
// (Public, BlueprintCallable, BlueprintEvent)

void UChallenge_VaultReward_TrueGuardian_C::CompletedAllPlotMissions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.CompletedAllPlotMissions");

	UChallenge_VaultReward_TrueGuardian_C_CompletedAllPlotMissions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.SetBinds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChallengesComponent*    ChallengeComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChallenge_VaultReward_TrueGuardian_C::SetBinds(class UChallengesComponent* ChallengeComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.SetBinds");

	UChallenge_VaultReward_TrueGuardian_C_SetBinds_Params params;
	params.ChallengeComponent = ChallengeComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController**   CompletedPlayer                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_VaultReward_TrueGuardian_C::CompletedChallenge(class AGbxPlayerController** CompletedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.CompletedChallenge");

	UChallenge_VaultReward_TrueGuardian_C_CompletedChallenge_Params params;
	params.CompletedPlayer = CompletedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_VaultReward_TrueGuardian_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.OnInitChallengeInstance");

	UChallenge_VaultReward_TrueGuardian_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.ExecuteUbergraph_Challenge_VaultReward_TrueGuardian
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_VaultReward_TrueGuardian_C::ExecuteUbergraph_Challenge_VaultReward_TrueGuardian(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.ExecuteUbergraph_Challenge_VaultReward_TrueGuardian");

	UChallenge_VaultReward_TrueGuardian_C_ExecuteUbergraph_Challenge_VaultReward_TrueGuardian_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
