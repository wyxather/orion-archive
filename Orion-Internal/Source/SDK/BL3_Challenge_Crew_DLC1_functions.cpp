// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Crew_DLC1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.PlayActivationAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChallenge_Crew_DLC1_C::PlayActivationAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.PlayActivationAudio");

	UChallenge_Crew_DLC1_C_PlayActivationAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.ShowTutorialPopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*           GameInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AOakPlayerController*    TargetPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Crew_DLC1_C::ShowTutorialPopup(class UGameInstance* GameInstance, class AOakPlayerController* TargetPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.ShowTutorialPopup");

	UChallenge_Crew_DLC1_C_ShowTutorialPopup_Params params;
	params.GameInstance = GameInstance;
	params.TargetPlayer = TargetPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.PlayCompletionAudio
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGbxPlayerController*    InputPin                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayedAudio                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChallenge_Crew_DLC1_C::PlayCompletionAudio(class AGbxPlayerController* InputPin, bool* PlayedAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.PlayCompletionAudio");

	UChallenge_Crew_DLC1_C_PlayCompletionAudio_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayedAudio != nullptr)
		*PlayedAudio = params.PlayedAudio;
}


// Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Crew_DLC1_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.OnInitChallengeInstance");

	UChallenge_Crew_DLC1_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.OnChallengeActivated
// (Event, Public, BlueprintEvent)

void UChallenge_Crew_DLC1_C::OnChallengeActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.OnChallengeActivated");

	UChallenge_Crew_DLC1_C_OnChallengeActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController**   CompletedPlayer                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Crew_DLC1_C::CompletedChallenge(class AGbxPlayerController** CompletedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.CompletedChallenge");

	UChallenge_Crew_DLC1_C_CompletedChallenge_Params params;
	params.CompletedPlayer = CompletedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.ExecuteUbergraph_Challenge_Crew_DLC1
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Crew_DLC1_C::ExecuteUbergraph_Challenge_Crew_DLC1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Crew_DLC1.Challenge_Crew_DLC1_C.ExecuteUbergraph_Challenge_Crew_DLC1");

	UChallenge_Crew_DLC1_C_ExecuteUbergraph_Challenge_Crew_DLC1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
