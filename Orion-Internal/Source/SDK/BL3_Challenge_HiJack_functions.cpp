// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_HiJack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_HiJack.Challenge_HiJack_C.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_HiJack_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_HiJack.Challenge_HiJack_C.OnInitChallengeInstance");

	UChallenge_HiJack_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_HiJack.Challenge_HiJack_C.ExecuteUbergraph_Challenge_HiJack
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_HiJack_C::ExecuteUbergraph_Challenge_HiJack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_HiJack.Challenge_HiJack_C.ExecuteUbergraph_Challenge_HiJack");

	UChallenge_HiJack_C_ExecuteUbergraph_Challenge_HiJack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
