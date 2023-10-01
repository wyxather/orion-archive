// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_BloodyHarvest_12_HauntedLegendaries_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_BloodyHarvest_12_HauntedLegendaries.Challenge_BloodyHarvest_12_HauntedLegendaries_C.CheckInvSlotFromLeague
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventorySlotData*      InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBHAnointedGear               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChallenge_BloodyHarvest_12_HauntedLegendaries_C::CheckInvSlotFromLeague(class UInventorySlotData* InventorySlot, bool* IsBHAnointedGear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_BloodyHarvest_12_HauntedLegendaries.Challenge_BloodyHarvest_12_HauntedLegendaries_C.CheckInvSlotFromLeague");

	UChallenge_BloodyHarvest_12_HauntedLegendaries_C_CheckInvSlotFromLeague_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsBHAnointedGear != nullptr)
		*IsBHAnointedGear = params.IsBHAnointedGear;
}


// Function Challenge_BloodyHarvest_12_HauntedLegendaries.Challenge_BloodyHarvest_12_HauntedLegendaries_C.CheckAllSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Equipped_Actor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventorySlotData*      Slot_Data                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_BloodyHarvest_12_HauntedLegendaries_C::CheckAllSlots(class AActor* Equipped_Actor, class UInventorySlotData* Slot_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_BloodyHarvest_12_HauntedLegendaries.Challenge_BloodyHarvest_12_HauntedLegendaries_C.CheckAllSlots");

	UChallenge_BloodyHarvest_12_HauntedLegendaries_C_CheckAllSlots_Params params;
	params.Equipped_Actor = Equipped_Actor;
	params.Slot_Data = Slot_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_BloodyHarvest_12_HauntedLegendaries.Challenge_BloodyHarvest_12_HauntedLegendaries_C.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_BloodyHarvest_12_HauntedLegendaries_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_BloodyHarvest_12_HauntedLegendaries.Challenge_BloodyHarvest_12_HauntedLegendaries_C.OnInitChallengeInstance");

	UChallenge_BloodyHarvest_12_HauntedLegendaries_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_BloodyHarvest_12_HauntedLegendaries.Challenge_BloodyHarvest_12_HauntedLegendaries_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController**   CompletedPlayer                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_BloodyHarvest_12_HauntedLegendaries_C::CompletedChallenge(class AGbxPlayerController** CompletedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_BloodyHarvest_12_HauntedLegendaries.Challenge_BloodyHarvest_12_HauntedLegendaries_C.CompletedChallenge");

	UChallenge_BloodyHarvest_12_HauntedLegendaries_C_CompletedChallenge_Params params;
	params.CompletedPlayer = CompletedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_BloodyHarvest_12_HauntedLegendaries.Challenge_BloodyHarvest_12_HauntedLegendaries_C.ExecuteUbergraph_Challenge_BloodyHarvest_12_HauntedLegendaries
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_BloodyHarvest_12_HauntedLegendaries_C::ExecuteUbergraph_Challenge_BloodyHarvest_12_HauntedLegendaries(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_BloodyHarvest_12_HauntedLegendaries.Challenge_BloodyHarvest_12_HauntedLegendaries_C.ExecuteUbergraph_Challenge_BloodyHarvest_12_HauntedLegendaries");

	UChallenge_BloodyHarvest_12_HauntedLegendaries_C_ExecuteUbergraph_Challenge_BloodyHarvest_12_HauntedLegendaries_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
