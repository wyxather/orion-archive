// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_BloodyHarvest_13_AnointedLegendary_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_BloodyHarvest_13_AnointedLegendary.Challenge_BloodyHarvest_13_AnointedLegendary_C.CheckAllSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  EquippedActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventorySlotData*      SlotData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_BloodyHarvest_13_AnointedLegendary_C::CheckAllSlots(class AActor* EquippedActor, class UInventorySlotData* SlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_BloodyHarvest_13_AnointedLegendary.Challenge_BloodyHarvest_13_AnointedLegendary_C.CheckAllSlots");

	UChallenge_BloodyHarvest_13_AnointedLegendary_C_CheckAllSlots_Params params;
	params.EquippedActor = EquippedActor;
	params.SlotData = SlotData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_BloodyHarvest_13_AnointedLegendary.Challenge_BloodyHarvest_13_AnointedLegendary_C.CheckInvSlotIsFromLeague
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventorySlotData*      InvSlot                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBHAnointedGear               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChallenge_BloodyHarvest_13_AnointedLegendary_C::CheckInvSlotIsFromLeague(class UInventorySlotData* InvSlot, bool* IsBHAnointedGear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_BloodyHarvest_13_AnointedLegendary.Challenge_BloodyHarvest_13_AnointedLegendary_C.CheckInvSlotIsFromLeague");

	UChallenge_BloodyHarvest_13_AnointedLegendary_C_CheckInvSlotIsFromLeague_Params params;
	params.InvSlot = InvSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsBHAnointedGear != nullptr)
		*IsBHAnointedGear = params.IsBHAnointedGear;
}


// Function Challenge_BloodyHarvest_13_AnointedLegendary.Challenge_BloodyHarvest_13_AnointedLegendary_C.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_BloodyHarvest_13_AnointedLegendary_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_BloodyHarvest_13_AnointedLegendary.Challenge_BloodyHarvest_13_AnointedLegendary_C.OnInitChallengeInstance");

	UChallenge_BloodyHarvest_13_AnointedLegendary_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_BloodyHarvest_13_AnointedLegendary.Challenge_BloodyHarvest_13_AnointedLegendary_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController**   CompletedPlayer                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_BloodyHarvest_13_AnointedLegendary_C::CompletedChallenge(class AGbxPlayerController** CompletedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_BloodyHarvest_13_AnointedLegendary.Challenge_BloodyHarvest_13_AnointedLegendary_C.CompletedChallenge");

	UChallenge_BloodyHarvest_13_AnointedLegendary_C_CompletedChallenge_Params params;
	params.CompletedPlayer = CompletedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_BloodyHarvest_13_AnointedLegendary.Challenge_BloodyHarvest_13_AnointedLegendary_C.ExecuteUbergraph_Challenge_BloodyHarvest_13_AnointedLegendary
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_BloodyHarvest_13_AnointedLegendary_C::ExecuteUbergraph_Challenge_BloodyHarvest_13_AnointedLegendary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_BloodyHarvest_13_AnointedLegendary.Challenge_BloodyHarvest_13_AnointedLegendary_C.ExecuteUbergraph_Challenge_BloodyHarvest_13_AnointedLegendary");

	UChallenge_BloodyHarvest_13_AnointedLegendary_C_ExecuteUbergraph_Challenge_BloodyHarvest_13_AnointedLegendary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
