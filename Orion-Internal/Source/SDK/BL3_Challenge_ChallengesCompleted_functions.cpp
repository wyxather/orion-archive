// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_ChallengesCompleted_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_ChallengesCompleted.Challenge_ChallengesCompleted_C.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_ChallengesCompleted_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ChallengesCompleted.Challenge_ChallengesCompleted_C.OnInitChallengeInstance");

	UChallenge_ChallengesCompleted_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_ChallengesCompleted.Challenge_ChallengesCompleted_C.ChallengeCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChallengesComponent*    ChallengeComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass*                  ChallengeClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_ChallengesCompleted_C::ChallengeCompleted(class UChallengesComponent* ChallengeComponent, class UClass* ChallengeClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ChallengesCompleted.Challenge_ChallengesCompleted_C.ChallengeCompleted");

	UChallenge_ChallengesCompleted_C_ChallengeCompleted_Params params;
	params.ChallengeComponent = ChallengeComponent;
	params.ChallengeClass = ChallengeClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_ChallengesCompleted.Challenge_ChallengesCompleted_C.ExecuteUbergraph_Challenge_ChallengesCompleted
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_ChallengesCompleted_C::ExecuteUbergraph_Challenge_ChallengesCompleted(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_ChallengesCompleted.Challenge_ChallengesCompleted_C.ExecuteUbergraph_Challenge_ChallengesCompleted");

	UChallenge_ChallengesCompleted_C_ExecuteUbergraph_Challenge_ChallengesCompleted_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
