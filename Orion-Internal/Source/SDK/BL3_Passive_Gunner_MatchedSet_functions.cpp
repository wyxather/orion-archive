// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_MatchedSet_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UPassive_Gunner_MatchedSet_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.CalculateAbilityState");

	UPassive_Gunner_MatchedSet_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.SetGearModifierPerInventorySlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventorySlotData*      SlotToUse                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           NewModifyValue                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_MatchedSet_C::SetGearModifierPerInventorySlot(class UInventorySlotData* SlotToUse, bool NewModifyValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.SetGearModifierPerInventorySlot");

	UPassive_Gunner_MatchedSet_C_SetGearModifierPerInventorySlot_Params params;
	params.SlotToUse = SlotToUse;
	params.NewModifyValue = NewModifyValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.CalculateTotalGearModifierBonus
// (Public, BlueprintCallable, BlueprintEvent)

void UPassive_Gunner_MatchedSet_C::CalculateTotalGearModifierBonus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.CalculateTotalGearModifierBonus");

	UPassive_Gunner_MatchedSet_C_CalculateTotalGearModifierBonus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.GetIsNewRightHandWeapon?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ModifiedEquipment              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ItIs_                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_MatchedSet_C::GetIsNewRightHandWeapon_(class AActor* ModifiedEquipment, bool* ItIs_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.GetIsNewRightHandWeapon?");

	UPassive_Gunner_MatchedSet_C_GetIsNewRightHandWeapon__Params params;
	params.ModifiedEquipment = ModifiedEquipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItIs_ != nullptr)
		*ItIs_ = params.ItIs_;
}


// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.CleanupGearBonus
// (Public, BlueprintCallable, BlueprintEvent)

void UPassive_Gunner_MatchedSet_C::CleanupGearBonus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.CleanupGearBonus");

	UPassive_Gunner_MatchedSet_C_CleanupGearBonus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.SetRightHandManufacturer
// (Public, BlueprintCallable, BlueprintEvent)

void UPassive_Gunner_MatchedSet_C::SetRightHandManufacturer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.SetRightHandManufacturer");

	UPassive_Gunner_MatchedSet_C_SetRightHandManufacturer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.GetItemManufacturer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  GearToTest                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UManufacturerData*       Manufacturer                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_MatchedSet_C::GetItemManufacturer(class AActor* GearToTest, class UManufacturerData** Manufacturer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.GetItemManufacturer");

	UPassive_Gunner_MatchedSet_C_GetItemManufacturer_Params params;
	params.GearToTest = GearToTest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Manufacturer != nullptr)
		*Manufacturer = params.Manufacturer;
}


// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.TryToModifyIndividualGearBonus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventorySlotData*      NewSlot                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Add_                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_MatchedSet_C::TryToModifyIndividualGearBonus(class UInventorySlotData* NewSlot, bool Add_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.TryToModifyIndividualGearBonus");

	UPassive_Gunner_MatchedSet_C_TryToModifyIndividualGearBonus_Params params;
	params.NewSlot = NewSlot;
	params.Add_ = Add_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.MatchedSet_EquippedItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  EquippedActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventorySlotData*      SlotData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_MatchedSet_C::MatchedSet_EquippedItem(class AActor* EquippedActor, class UInventorySlotData* SlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.MatchedSet_EquippedItem");

	UPassive_Gunner_MatchedSet_C_MatchedSet_EquippedItem_Params params;
	params.EquippedActor = EquippedActor;
	params.SlotData = SlotData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.MatchedSet_UnequippedItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  UnequippedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventorySlotData*      SlotData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_MatchedSet_C::MatchedSet_UnequippedItem(class AActor* UnequippedActor, class UInventorySlotData* SlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.MatchedSet_UnequippedItem");

	UPassive_Gunner_MatchedSet_C_MatchedSet_UnequippedItem_Params params;
	params.UnequippedActor = UnequippedActor;
	params.SlotData = SlotData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.DetermineTotalGearBonus
// (BlueprintCallable, BlueprintEvent)

void UPassive_Gunner_MatchedSet_C::DetermineTotalGearBonus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.DetermineTotalGearBonus");

	UPassive_Gunner_MatchedSet_C_DetermineTotalGearBonus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.HandleNewEquippedItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewModifiedActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventorySlotData*      NewSlotData                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Add_                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_MatchedSet_C::HandleNewEquippedItem(class AActor* NewModifiedActor, class UInventorySlotData* NewSlotData, bool Add_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.HandleNewEquippedItem");

	UPassive_Gunner_MatchedSet_C_HandleNewEquippedItem_Params params;
	params.NewModifiedActor = NewModifiedActor;
	params.NewSlotData = NewSlotData;
	params.Add_ = Add_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Gunner_MatchedSet_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnActivated");

	UPassive_Gunner_MatchedSet_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnResumed
// (Event, Protected, BlueprintEvent)

void UPassive_Gunner_MatchedSet_C::OnResumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnResumed");

	UPassive_Gunner_MatchedSet_C_OnResumed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UPassive_Gunner_MatchedSet_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnPaused");

	UPassive_Gunner_MatchedSet_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.MatchedSet_OnWeaponChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 NewWeapon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeapon*                 LastWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_MatchedSet_C::MatchedSet_OnWeaponChanged(class AWeapon* NewWeapon, class AWeapon* LastWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.MatchedSet_OnWeaponChanged");

	UPassive_Gunner_MatchedSet_C_MatchedSet_OnWeaponChanged_Params params;
	params.NewWeapon = NewWeapon;
	params.LastWeapon = LastWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnForcedRefresh
// (Event, Protected, BlueprintEvent)

void UPassive_Gunner_MatchedSet_C::OnForcedRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnForcedRefresh");

	UPassive_Gunner_MatchedSet_C_OnForcedRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.ExecuteUbergraph_Passive_Gunner_MatchedSet
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_MatchedSet_C::ExecuteUbergraph_Passive_Gunner_MatchedSet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.ExecuteUbergraph_Passive_Gunner_MatchedSet");

	UPassive_Gunner_MatchedSet_C_ExecuteUbergraph_Passive_Gunner_MatchedSet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
