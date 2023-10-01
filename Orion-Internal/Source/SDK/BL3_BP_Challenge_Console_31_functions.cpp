// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_Console_31_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Challenge_Console_31.BP_Challenge_Console_30_C.CheckInvRarity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventorySlotData*      Inv_Slot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isRare                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_Console_30_C::CheckInvRarity(class UInventorySlotData* Inv_Slot, bool* isRare)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_31.BP_Challenge_Console_30_C.CheckInvRarity");

	UBP_Challenge_Console_30_C_CheckInvRarity_Params params;
	params.Inv_Slot = Inv_Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isRare != nullptr)
		*isRare = params.isRare;
}


// Function BP_Challenge_Console_31.BP_Challenge_Console_30_C.CheckAllSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  EquippedActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventorySlotData*      SlotData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_Console_30_C::CheckAllSlots(class AActor* EquippedActor, class UInventorySlotData* SlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_31.BP_Challenge_Console_30_C.CheckAllSlots");

	UBP_Challenge_Console_30_C_CheckAllSlots_Params params;
	params.EquippedActor = EquippedActor;
	params.SlotData = SlotData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Challenge_Console_31.BP_Challenge_Console_30_C.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_Console_30_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_31.BP_Challenge_Console_30_C.OnInitChallengeInstance");

	UBP_Challenge_Console_30_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Challenge_Console_31.BP_Challenge_Console_30_C.ExecuteUbergraph_BP_Challenge_Console_31
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_Console_30_C::ExecuteUbergraph_BP_Challenge_Console_31(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_31.BP_Challenge_Console_30_C.ExecuteUbergraph_BP_Challenge_Console_31");

	UBP_Challenge_Console_30_C_ExecuteUbergraph_BP_Challenge_Console_31_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
