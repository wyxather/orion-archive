// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_Console_30_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Challenge_Console_30.BP_Challenge_Console_29_C.CheckAllSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  EquippedActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventorySlotData*      SlotData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_Console_29_C::CheckAllSlots(class AActor* EquippedActor, class UInventorySlotData* SlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_30.BP_Challenge_Console_29_C.CheckAllSlots");

	UBP_Challenge_Console_29_C_CheckAllSlots_Params params;
	params.EquippedActor = EquippedActor;
	params.SlotData = SlotData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Challenge_Console_30.BP_Challenge_Console_29_C.CheckInvSlotRarity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventorySlotData*      InvSlot                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isRare                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_Console_29_C::CheckInvSlotRarity(class UInventorySlotData* InvSlot, bool* isRare)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_30.BP_Challenge_Console_29_C.CheckInvSlotRarity");

	UBP_Challenge_Console_29_C_CheckInvSlotRarity_Params params;
	params.InvSlot = InvSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isRare != nullptr)
		*isRare = params.isRare;
}


// Function BP_Challenge_Console_30.BP_Challenge_Console_29_C.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_Console_29_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_30.BP_Challenge_Console_29_C.OnInitChallengeInstance");

	UBP_Challenge_Console_29_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Challenge_Console_30.BP_Challenge_Console_29_C.ExecuteUbergraph_BP_Challenge_Console_30
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_Console_29_C::ExecuteUbergraph_BP_Challenge_Console_30(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_30.BP_Challenge_Console_29_C.ExecuteUbergraph_BP_Challenge_Console_30");

	UBP_Challenge_Console_29_C_ExecuteUbergraph_BP_Challenge_Console_30_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
