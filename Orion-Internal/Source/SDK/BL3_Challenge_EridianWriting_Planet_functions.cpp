// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_EridianWriting_Planet_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_EridianWriting_Planet.Challenge_EridianWriting_Planet_C.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_EridianWriting_Planet_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_EridianWriting_Planet.Challenge_EridianWriting_Planet_C.OnInitChallengeInstance");

	UChallenge_EridianWriting_Planet_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_EridianWriting_Planet.Challenge_EridianWriting_Planet_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController**   CompletedPlayer                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_EridianWriting_Planet_C::CompletedChallenge(class AGbxPlayerController** CompletedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_EridianWriting_Planet.Challenge_EridianWriting_Planet_C.CompletedChallenge");

	UChallenge_EridianWriting_Planet_C_CompletedChallenge_Params params;
	params.CompletedPlayer = CompletedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_EridianWriting_Planet.Challenge_EridianWriting_Planet_C.OnChallengeActivated
// (Event, Public, BlueprintEvent)

void UChallenge_EridianWriting_Planet_C::OnChallengeActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_EridianWriting_Planet.Challenge_EridianWriting_Planet_C.OnChallengeActivated");

	UChallenge_EridianWriting_Planet_C_OnChallengeActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_EridianWriting_Planet.Challenge_EridianWriting_Planet_C.ExecuteUbergraph_Challenge_EridianWriting_Planet
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_EridianWriting_Planet_C::ExecuteUbergraph_Challenge_EridianWriting_Planet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_EridianWriting_Planet.Challenge_EridianWriting_Planet_C.ExecuteUbergraph_Challenge_EridianWriting_Planet");

	UChallenge_EridianWriting_Planet_C_ExecuteUbergraph_Challenge_EridianWriting_Planet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
