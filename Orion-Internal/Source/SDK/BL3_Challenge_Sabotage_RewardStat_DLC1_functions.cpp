// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Sabotage_RewardStat_DLC1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_Sabotage_RewardStat_DLC1.Challenge_Sabotage_RewardStat_DLC1_C.PlayCompletionVO
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGbxPlayerController*    PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Played                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChallenge_Sabotage_RewardStat_DLC1_C::PlayCompletionVO(class AGbxPlayerController* PlayerController, bool* Played)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Sabotage_RewardStat_DLC1.Challenge_Sabotage_RewardStat_DLC1_C.PlayCompletionVO");

	UChallenge_Sabotage_RewardStat_DLC1_C_PlayCompletionVO_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Played != nullptr)
		*Played = params.Played;
}


// Function Challenge_Sabotage_RewardStat_DLC1.Challenge_Sabotage_RewardStat_DLC1_C.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Sabotage_RewardStat_DLC1_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Sabotage_RewardStat_DLC1.Challenge_Sabotage_RewardStat_DLC1_C.OnInitChallengeInstance");

	UChallenge_Sabotage_RewardStat_DLC1_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Sabotage_RewardStat_DLC1.Challenge_Sabotage_RewardStat_DLC1_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController**   CompletedPlayer                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Sabotage_RewardStat_DLC1_C::CompletedChallenge(class AGbxPlayerController** CompletedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Sabotage_RewardStat_DLC1.Challenge_Sabotage_RewardStat_DLC1_C.CompletedChallenge");

	UChallenge_Sabotage_RewardStat_DLC1_C_CompletedChallenge_Params params;
	params.CompletedPlayer = CompletedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Sabotage_RewardStat_DLC1.Challenge_Sabotage_RewardStat_DLC1_C.ExecuteUbergraph_Challenge_Sabotage_RewardStat_DLC1
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Sabotage_RewardStat_DLC1_C::ExecuteUbergraph_Challenge_Sabotage_RewardStat_DLC1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Sabotage_RewardStat_DLC1.Challenge_Sabotage_RewardStat_DLC1_C.ExecuteUbergraph_Challenge_Sabotage_RewardStat_DLC1");

	UChallenge_Sabotage_RewardStat_DLC1_C_ExecuteUbergraph_Challenge_Sabotage_RewardStat_DLC1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
