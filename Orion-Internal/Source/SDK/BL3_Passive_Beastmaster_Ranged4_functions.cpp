// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Ranged4_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.ApplyConditionalDamageModifiers
// (BlueprintCallable, BlueprintEvent)

void UPassive_Beastmaster_Ranged4_C::ApplyConditionalDamageModifiers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.ApplyConditionalDamageModifiers");

	UPassive_Beastmaster_Ranged4_C_ApplyConditionalDamageModifiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.Ranged4_EquippedItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  EquippedActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventorySlotData*      SlotData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Ranged4_C::Ranged4_EquippedItem(class AActor* EquippedActor, class UInventorySlotData* SlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.Ranged4_EquippedItem");

	UPassive_Beastmaster_Ranged4_C_Ranged4_EquippedItem_Params params;
	params.EquippedActor = EquippedActor;
	params.SlotData = SlotData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.Ranged4_UnequippedItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  UnequippedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventorySlotData*      SlotData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Ranged4_C::Ranged4_UnequippedItem(class AActor* UnequippedActor, class UInventorySlotData* SlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.Ranged4_UnequippedItem");

	UPassive_Beastmaster_Ranged4_C_Ranged4_UnequippedItem_Params params;
	params.UnequippedActor = UnequippedActor;
	params.SlotData = SlotData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.RemoveConditionalModifiers
// (BlueprintCallable, BlueprintEvent)

void UPassive_Beastmaster_Ranged4_C::RemoveConditionalModifiers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.RemoveConditionalModifiers");

	UPassive_Beastmaster_Ranged4_C_RemoveConditionalModifiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_Ranged4_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.OnActivated");

	UPassive_Beastmaster_Ranged4_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.OnResumed
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_Ranged4_C::OnResumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.OnResumed");

	UPassive_Beastmaster_Ranged4_C_OnResumed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.ExecuteUbergraph_Passive_Beastmaster_Ranged4
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Ranged4_C::ExecuteUbergraph_Passive_Beastmaster_Ranged4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.ExecuteUbergraph_Passive_Beastmaster_Ranged4");

	UPassive_Beastmaster_Ranged4_C_ExecuteUbergraph_Passive_Beastmaster_Ranged4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
