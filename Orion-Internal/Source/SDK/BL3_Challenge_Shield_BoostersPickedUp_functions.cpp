// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Shield_BoostersPickedUp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_Shield_BoostersPickedUp.Challenge_Shield_BoostersPickedUp_C.CheckItemPickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PickedUpActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Shield_BoostersPickedUp_C::CheckItemPickup(class AActor* PickedUpActor, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Shield_BoostersPickedUp.Challenge_Shield_BoostersPickedUp_C.CheckItemPickup");

	UChallenge_Shield_BoostersPickedUp_C_CheckItemPickup_Params params;
	params.PickedUpActor = PickedUpActor;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Shield_BoostersPickedUp.Challenge_Shield_BoostersPickedUp_C.OnInitChallengeInstance
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Shield_BoostersPickedUp_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Shield_BoostersPickedUp.Challenge_Shield_BoostersPickedUp_C.OnInitChallengeInstance");

	UChallenge_Shield_BoostersPickedUp_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
