// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_InventoryList_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_InventoryList.Widget_InventoryList_C.ItemHasDoNotSellTag
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HasTag                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryList_C::ItemHasDoNotSellTag(class AItem** Item, bool* HasTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.ItemHasDoNotSellTag");

	UWidget_InventoryList_C_ItemHasDoNotSellTag_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasTag != nullptr)
		*HasTag = params.HasTag;
}


// Function Widget_InventoryList.Widget_InventoryList_C.GetSortMethod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EItemQuerySortMethod           SortMethod                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryList_C::GetSortMethod(EItemQuerySortMethod* SortMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.GetSortMethod");

	UWidget_InventoryList_C_GetSortMethod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SortMethod != nullptr)
		*SortMethod = params.SortMethod;
}


// Function Widget_InventoryList.Widget_InventoryList_C.UpdateInventoryIndex
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_InventoryList_C::UpdateInventoryIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.UpdateInventoryIndex");

	UWidget_InventoryList_C_UpdateInventoryIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.GetInventoryOwner
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryList_C::GetInventoryOwner(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.GetInventoryOwner");

	UWidget_InventoryList_C_GetInventoryOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function Widget_InventoryList.Widget_InventoryList_C.SetInventoryOwner
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryList_C::SetInventoryOwner(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.SetInventoryOwner");

	UWidget_InventoryList_C_SetInventoryOwner_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.GetQueryFilter
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemQueryFilter        Filter                         (Parm, OutParm)

void UWidget_InventoryList_C::GetQueryFilter(struct FItemQueryFilter* Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.GetQueryFilter");

	UWidget_InventoryList_C_GetQueryFilter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Filter != nullptr)
		*Filter = params.Filter;
}


// Function Widget_InventoryList.Widget_InventoryList_C.GetEmptyVisibility_2
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_InventoryList_C::GetEmptyVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.GetEmptyVisibility_2");

	UWidget_InventoryList_C_GetEmptyVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_InventoryList.Widget_InventoryList_C.GetEmptyVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_InventoryList_C::GetEmptyVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.GetEmptyVisibility_1");

	UWidget_InventoryList_C_GetEmptyVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_InventoryList.Widget_InventoryList_C.IsEmptyMerchantList
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryList_C::IsEmptyMerchantList(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.IsEmptyMerchantList");

	UWidget_InventoryList_C_IsEmptyMerchantList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_InventoryList.Widget_InventoryList_C.GetPlayerInventory
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UInventoryComponent*     Inventory                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryList_C::GetPlayerInventory(class UInventoryComponent** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.GetPlayerInventory");

	UWidget_InventoryList_C_GetPlayerInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}


// Function Widget_InventoryList.Widget_InventoryList_C.IsItemAtMaxStack
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryList_C::IsItemAtMaxStack(class UClass** ItemBP, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.IsItemAtMaxStack");

	UWidget_InventoryList_C_IsItemAtMaxStack_Params params;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_InventoryList.Widget_InventoryList_C.SetBackgroundGridFadedSlotsSize
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_InventoryList_C::SetBackgroundGridFadedSlotsSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.SetBackgroundGridFadedSlotsSize");

	UWidget_InventoryList_C_SetBackgroundGridFadedSlotsSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.ScreenSizeResolutionCalculation
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWidget_InventoryList_C::ScreenSizeResolutionCalculation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.ScreenSizeResolutionCalculation");

	UWidget_InventoryList_C_ScreenSizeResolutionCalculation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_InventoryList.Widget_InventoryList_C.GetEquippedItem
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AEquipment*              Equipment                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryList_C::GetEquippedItem(class AEquipment** Equipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.GetEquippedItem");

	UWidget_InventoryList_C_GetEquippedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Equipment != nullptr)
		*Equipment = params.Equipment;
}


// Function Widget_InventoryList.Widget_InventoryList_C.SetEnabled
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryList_C::SetEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.SetEnabled");

	UWidget_InventoryList_C_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.FocusFirstInventoryItem
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_InventoryList_C::FocusFirstInventoryItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.FocusFirstInventoryItem");

	UWidget_InventoryList_C_FocusFirstInventoryItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.GetVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_InventoryList_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.GetVisibility_1");

	UWidget_InventoryList_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_InventoryList.Widget_InventoryList_C.SetEquippedItem
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Valid                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInspectInfo*           InspectInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          FocusEquipped                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryList_C::SetEquippedItem(bool* Valid, struct FInspectInfo* InspectInfo, bool* FocusEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.SetEquippedItem");

	UWidget_InventoryList_C_SetEquippedItem_Params params;
	params.Valid = Valid;
	params.InspectInfo = InspectInfo;
	params.FocusEquipped = FocusEquipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.HasEquippedItem
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryList_C::HasEquippedItem(int* ItemID, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.HasEquippedItem");

	UWidget_InventoryList_C_HasEquippedItem_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_InventoryList.Widget_InventoryList_C.BuildUpdateEquippedItem
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_InventoryList_C::BuildUpdateEquippedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.BuildUpdateEquippedItem");

	UWidget_InventoryList_C_BuildUpdateEquippedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.ShouldHideItem
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent**    Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryList_C::ShouldHideItem(int* ItemID, class UInventoryComponent** Inventory, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.ShouldHideItem");

	UWidget_InventoryList_C_ShouldHideItem_Params params;
	params.ItemID = ItemID;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_InventoryList.Widget_InventoryList_C.SetPanelPadding
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryList_C::SetPanelPadding(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.SetPanelPadding");

	UWidget_InventoryList_C_SetPanelPadding_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.GetPanelWidget
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPanelWidget*            Out                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryList_C::GetPanelWidget(class UPanelWidget** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.GetPanelWidget");

	UWidget_InventoryList_C_GetPanelWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_InventoryList.Widget_InventoryList_C.GetInventoryItemByID
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget_InventoryItem_C* Out                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryList_C::GetInventoryItemByID(int* ItemID, class UWidget_InventoryItem_C** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.GetInventoryItemByID");

	UWidget_InventoryList_C_GetInventoryItemByID_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_InventoryList.Widget_InventoryList_C.GetVisibility_4Item
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_InventoryList_C::GetVisibility_4Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.GetVisibility_4Item");

	UWidget_InventoryList_C_GetVisibility_4Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_InventoryList.Widget_InventoryList_C.GetVisibility_3Item
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_InventoryList_C::GetVisibility_3Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.GetVisibility_3Item");

	UWidget_InventoryList_C_GetVisibility_3Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_InventoryList.Widget_InventoryList_C.PlayerHasItem
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryList_C::PlayerHasItem(class UClass** ItemBP, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.PlayerHasItem");

	UWidget_InventoryList_C_PlayerHasItem_Params params;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_InventoryList.Widget_InventoryList_C.IsItemUnique
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryList_C::IsItemUnique(class UClass** ItemBP, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.IsItemUnique");

	UWidget_InventoryList_C_IsItemUnique_Params params;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_InventoryList.Widget_InventoryList_C.ShouldAddItem
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem*         InventoryItem                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryList_C::ShouldAddItem(struct FInventoryItem* InventoryItem, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.ShouldAddItem");

	UWidget_InventoryList_C_ShouldAddItem_Params params;
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_InventoryList.Widget_InventoryList_C.GetVisibility_2Item
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_InventoryList_C::GetVisibility_2Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.GetVisibility_2Item");

	UWidget_InventoryList_C_GetVisibility_2Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_InventoryList.Widget_InventoryList_C.GetVisibility_1Item
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_InventoryList_C::GetVisibility_1Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.GetVisibility_1Item");

	UWidget_InventoryList_C_GetVisibility_1Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_InventoryList.Widget_InventoryList_C.GetVisibility_Empty
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_InventoryList_C::GetVisibility_Empty()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.GetVisibility_Empty");

	UWidget_InventoryList_C_GetVisibility_Empty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_InventoryList.Widget_InventoryList_C.SetItemType
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          FocusEquippedItem              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName*                  EquipSlotName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryList_C::SetItemType(class UClass** Type, class UClass** Category, bool* FocusEquippedItem, struct FName* EquipSlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.SetItemType");

	UWidget_InventoryList_C_SetItemType_Params params;
	params.Type = Type;
	params.Category = Category;
	params.FocusEquippedItem = FocusEquippedItem;
	params.EquipSlotName = EquipSlotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.FocusItem
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          InactiveFocus                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryList_C::FocusItem(int* ItemID, bool* InactiveFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.FocusItem");

	UWidget_InventoryList_C_FocusItem_Params params;
	params.ItemID = ItemID;
	params.InactiveFocus = InactiveFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.ShowInactiveFocus
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Allow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryList_C::ShowInactiveFocus(bool* Allow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.ShowInactiveFocus");

	UWidget_InventoryList_C_ShowInactiveFocus_Params params;
	params.Allow = Allow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.IsEmpty
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryList_C::IsEmpty(bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.IsEmpty");

	UWidget_InventoryList_C_IsEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Widget_InventoryList.Widget_InventoryList_C.AddInventoryItem
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem          Item                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// class UInventoryComponent**    Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           ItemIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryList_C::AddInventoryItem(class UInventoryComponent** Inventory, int* ItemIndex, struct FInventoryItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.AddInventoryItem");

	UWidget_InventoryList_C_AddInventoryItem_Params params;
	params.Inventory = Inventory;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function Widget_InventoryList.Widget_InventoryList_C.HasInventoryItem
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent**    Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget_InventoryItem_C* InventoryItem                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryList_C::HasInventoryItem(int* ItemID, class UInventoryComponent** Inventory, bool* Rtn, class UWidget_InventoryItem_C** InventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.HasInventoryItem");

	UWidget_InventoryList_C_HasInventoryItem_Params params;
	params.ItemID = ItemID;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rtn != nullptr)
		*Rtn = params.Rtn;
	if (InventoryItem != nullptr)
		*InventoryItem = params.InventoryItem;
}


// Function Widget_InventoryList.Widget_InventoryList_C.UpdateInventoryList
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_InventoryList_C::UpdateInventoryList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.UpdateInventoryList");

	UWidget_InventoryList_C_UpdateInventoryList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.Focus
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_InventoryList_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.Focus");

	UWidget_InventoryList_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.BuildInventoryList
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_InventoryList_C::BuildInventoryList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.BuildInventoryList");

	UWidget_InventoryList_C_BuildInventoryList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_InventoryList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.Construct");

	UWidget_InventoryList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.OnSetInventory
// 00007FF6F8B35350
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UInventoryComponent*>* NewInventories                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWidget_InventoryList_C::OnSetInventory(TArray<class UInventoryComponent*>* NewInventories)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.OnSetInventory");

	UWidget_InventoryList_C_OnSetInventory_Params params;
	params.NewInventories = NewInventories;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.OnInventoryChanged
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_InventoryList_C::OnInventoryChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.OnInventoryChanged");

	UWidget_InventoryList_C_OnInventoryChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.ReFocus
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryList_C::ReFocus(int* ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.ReFocus");

	UWidget_InventoryList_C_ReFocus_Params params;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.FocusFistAvailableEvent
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_InventoryList_C::FocusFistAvailableEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.FocusFistAvailableEvent");

	UWidget_InventoryList_C_FocusFistAvailableEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.ResetScrollOffset
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryList_C::ResetScrollOffset(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.ResetScrollOffset");

	UWidget_InventoryList_C_ResetScrollOffset_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.OnItemSelected
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryList_C::OnItemSelected(int* ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.OnItemSelected");

	UWidget_InventoryList_C_OnItemSelected_Params params;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.ExecuteUbergraph_Widget_InventoryList
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryList_C::ExecuteUbergraph_Widget_InventoryList(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.ExecuteUbergraph_Widget_InventoryList");

	UWidget_InventoryList_C_ExecuteUbergraph_Widget_InventoryList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.OnInventoryUpdate__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_InventoryList_C::OnInventoryUpdate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.OnInventoryUpdate__DelegateSignature");

	UWidget_InventoryList_C_OnInventoryUpdate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.OnUpdateCustomEquipment__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_InventoryList_C::OnUpdateCustomEquipment__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.OnUpdateCustomEquipment__DelegateSignature");

	UWidget_InventoryList_C_OnUpdateCustomEquipment__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.OnRightClickEquipMod__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_InventoryList_C::OnRightClickEquipMod__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.OnRightClickEquipMod__DelegateSignature");

	UWidget_InventoryList_C_OnRightClickEquipMod__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.OnItemAction__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInventoryAction>* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryList_C::OnItemAction__DelegateSignature(TEnumAsByte<EInventoryAction>* Action, int* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.OnItemAction__DelegateSignature");

	UWidget_InventoryList_C_OnItemAction__DelegateSignature_Params params;
	params.Action = Action;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.OnItemClicked__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryList_C::OnItemClicked__DelegateSignature(int* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.OnItemClicked__DelegateSignature");

	UWidget_InventoryList_C_OnItemClicked__DelegateSignature_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryList.Widget_InventoryList_C.OnSelectItem__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo*           InspectInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Comparing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInspectInfo*           InspectInfoCompare             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          ShowIngredients                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRecipeInfo*            Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryList_C::OnSelectItem__DelegateSignature(int* ItemID, struct FInspectInfo* InspectInfo, bool* Comparing, struct FInspectInfo* InspectInfoCompare, bool* ShowIngredients, struct FRecipeInfo* Recipe, class UClass** ItemBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryList.Widget_InventoryList_C.OnSelectItem__DelegateSignature");

	UWidget_InventoryList_C_OnSelectItem__DelegateSignature_Params params;
	params.ItemID = ItemID;
	params.InspectInfo = InspectInfo;
	params.Comparing = Comparing;
	params.InspectInfoCompare = InspectInfoCompare;
	params.ShowIngredients = ShowIngredients;
	params.Recipe = Recipe;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
