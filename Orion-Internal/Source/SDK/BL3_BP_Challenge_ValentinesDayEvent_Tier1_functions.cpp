// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_ValentinesDayEvent_Tier1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Challenge_ValentinesDayEvent_Tier1.BP_Challenge_ValentinesDayEvent_Tier1_C.PlayCompletionAudio
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGbxPlayerController*    InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayedAudio                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_ValentinesDayEvent_Tier1_C::PlayCompletionAudio(class AGbxPlayerController* InputPin, bool* PlayedAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_ValentinesDayEvent_Tier1.BP_Challenge_ValentinesDayEvent_Tier1_C.PlayCompletionAudio");

	UBP_Challenge_ValentinesDayEvent_Tier1_C_PlayCompletionAudio_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayedAudio != nullptr)
		*PlayedAudio = params.PlayedAudio;
}


// Function BP_Challenge_ValentinesDayEvent_Tier1.BP_Challenge_ValentinesDayEvent_Tier1_C.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_ValentinesDayEvent_Tier1_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_ValentinesDayEvent_Tier1.BP_Challenge_ValentinesDayEvent_Tier1_C.OnInitChallengeInstance");

	UBP_Challenge_ValentinesDayEvent_Tier1_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Challenge_ValentinesDayEvent_Tier1.BP_Challenge_ValentinesDayEvent_Tier1_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController**   CompletedPlayer                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_ValentinesDayEvent_Tier1_C::CompletedChallenge(class AGbxPlayerController** CompletedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_ValentinesDayEvent_Tier1.BP_Challenge_ValentinesDayEvent_Tier1_C.CompletedChallenge");

	UBP_Challenge_ValentinesDayEvent_Tier1_C_CompletedChallenge_Params params;
	params.CompletedPlayer = CompletedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Challenge_ValentinesDayEvent_Tier1.BP_Challenge_ValentinesDayEvent_Tier1_C.ExecuteUbergraph_BP_Challenge_ValentinesDayEvent_Tier1
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_ValentinesDayEvent_Tier1_C::ExecuteUbergraph_BP_Challenge_ValentinesDayEvent_Tier1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_ValentinesDayEvent_Tier1.BP_Challenge_ValentinesDayEvent_Tier1_C.ExecuteUbergraph_BP_Challenge_ValentinesDayEvent_Tier1");

	UBP_Challenge_ValentinesDayEvent_Tier1_C_ExecuteUbergraph_BP_Challenge_ValentinesDayEvent_Tier1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
