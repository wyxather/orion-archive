// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_InventoryNotifications_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.CanCheckQueue
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWidget_InventoryNotifications_C::CanCheckQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.CanCheckQueue");

	UWidget_InventoryNotifications_C_CanCheckQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.ClearNotificationQueue
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          EndCurrentNotification         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryNotifications_C::ClearNotificationQueue(bool* EndCurrentNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.ClearNotificationQueue");

	UWidget_InventoryNotifications_C_ClearNotificationQueue_Params params;
	params.EndCurrentNotification = EndCurrentNotification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.GetRelevantCharacter
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacterGunfire*       Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryNotifications_C::GetRelevantCharacter(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.GetRelevantCharacter");

	UWidget_InventoryNotifications_C_GetRelevantCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.GetItemLevel
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Level                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryNotifications_C::GetItemLevel(class UClass** Item, int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.GetItemLevel");

	UWidget_InventoryNotifications_C_GetItemLevel_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Level != nullptr)
		*Level = params.Level;
}


// Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.Add Loot Entry
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryNotifications_C::Add_Loot_Entry(class UClass** Item, int* Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.Add Loot Entry");

	UWidget_InventoryNotifications_C_Add_Loot_Entry_Params params;
	params.Item = Item;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_InventoryNotifications_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.Construct");

	UWidget_InventoryNotifications_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.OnPickupItem_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemNotifyReason*             Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryNotifications_C::OnPickupItem_Event_1(class UClass** ItemBP, int* Quantity, int* Level, EItemNotifyReason* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.OnPickupItem_Event_1");

	UWidget_InventoryNotifications_C_OnPickupItem_Event_1_Params params;
	params.ItemBP = ItemBP;
	params.Quantity = Quantity;
	params.Level = Level;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.UpdatePawn
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_InventoryNotifications_C::UpdatePawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.UpdatePawn");

	UWidget_InventoryNotifications_C_UpdatePawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.Tick
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryNotifications_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.Tick");

	UWidget_InventoryNotifications_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.CheckQueue
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_InventoryNotifications_C::CheckQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.CheckQueue");

	UWidget_InventoryNotifications_C_CheckQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.ExecuteUbergraph_Widget_InventoryNotifications
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryNotifications_C::ExecuteUbergraph_Widget_InventoryNotifications(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.ExecuteUbergraph_Widget_InventoryNotifications");

	UWidget_InventoryNotifications_C_ExecuteUbergraph_Widget_InventoryNotifications_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
