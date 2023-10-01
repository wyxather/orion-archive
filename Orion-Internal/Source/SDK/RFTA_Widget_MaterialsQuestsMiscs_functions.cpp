// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_MaterialsQuestsMiscs_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.GetItemLabel
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Out                            (Parm, OutParm)

void UWidget_MaterialsQuestsMiscs_C::GetItemLabel(class UClass** ItemBP, struct FText* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.GetItemLabel");

	UWidget_MaterialsQuestsMiscs_C_GetItemLabel_Params params;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.RequiredUseConfirm
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_MaterialsQuestsMiscs_C::RequiredUseConfirm(class UClass** ItemBP, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.RequiredUseConfirm");

	UWidget_MaterialsQuestsMiscs_C_RequiredUseConfirm_Params params;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.CanBeHotKeyed
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_MaterialsQuestsMiscs_C::CanBeHotKeyed(class UClass** ItemBP, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.CanBeHotKeyed");

	UWidget_MaterialsQuestsMiscs_C_CanBeHotKeyed_Params params;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.GetSelectedItem
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem          Item                           (Parm, OutParm, NoDestructor, ContainsInstancedReference)

void UWidget_MaterialsQuestsMiscs_C::GetSelectedItem(bool* Valid, struct FInventoryItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.GetSelectedItem");

	UWidget_MaterialsQuestsMiscs_C_GetSelectedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
	if (Item != nullptr)
		*Item = params.Item;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.GetRelevantInventory
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UInventoryComponent*     Inventory                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MaterialsQuestsMiscs_C::GetRelevantInventory(class UInventoryComponent** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.GetRelevantInventory");

	UWidget_MaterialsQuestsMiscs_C_GetRelevantInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.GetVisibility_3
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_MaterialsQuestsMiscs_C::GetVisibility_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.GetVisibility_3");

	UWidget_MaterialsQuestsMiscs_C_GetVisibility_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.CommandsVisibility
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_MaterialsQuestsMiscs_C::CommandsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.CommandsVisibility");

	UWidget_MaterialsQuestsMiscs_C_CommandsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.FindInfo
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInspectInfo*           InspectInfo                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int*                           InfoNumber                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectStat            Array_Element                  (Parm, OutParm)

void UWidget_MaterialsQuestsMiscs_C::FindInfo(struct FInspectInfo* InspectInfo, int* InfoNumber, struct FInspectStat* Array_Element)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.FindInfo");

	UWidget_MaterialsQuestsMiscs_C_FindInfo_Params params;
	params.InspectInfo = InspectInfo;
	params.InfoNumber = InfoNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array_Element != nullptr)
		*Array_Element = params.Array_Element;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.FocusList
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_MaterialsQuestsMiscs_C::FocusList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.FocusList");

	UWidget_MaterialsQuestsMiscs_C_FocusList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.Get_ItemTypeLabel_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_MaterialsQuestsMiscs_C::Get_ItemTypeLabel_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.Get_ItemTypeLabel_Text_1");

	UWidget_MaterialsQuestsMiscs_C_Get_ItemTypeLabel_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.GetVisibility_2
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_MaterialsQuestsMiscs_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.GetVisibility_2");

	UWidget_MaterialsQuestsMiscs_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.GetVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_MaterialsQuestsMiscs_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.GetVisibility_1");

	UWidget_MaterialsQuestsMiscs_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.ShowQuickSelect
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MaterialsQuestsMiscs_C::ShowQuickSelect(struct FName* Radial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.ShowQuickSelect");

	UWidget_MaterialsQuestsMiscs_C_ShowQuickSelect_Params params;
	params.Radial = Radial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.DoQuickSelect
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_MaterialsQuestsMiscs_C::DoQuickSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.DoQuickSelect");

	UWidget_MaterialsQuestsMiscs_C_DoQuickSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.Get_Scrap_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_MaterialsQuestsMiscs_C::Get_Scrap_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.Get_Scrap_Text_1");

	UWidget_MaterialsQuestsMiscs_C_Get_Scrap_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.Refresh
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_MaterialsQuestsMiscs_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.Refresh");

	UWidget_MaterialsQuestsMiscs_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_MaterialsQuestsMiscs_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.Construct");

	UWidget_MaterialsQuestsMiscs_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.OnInventoryChanged_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_MaterialsQuestsMiscs_C::OnInventoryChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.OnInventoryChanged_Event_1");

	UWidget_MaterialsQuestsMiscs_C_OnInventoryChanged_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.OnTabFocus_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_InventoryTab_C** Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MaterialsQuestsMiscs_C::OnTabFocus_Event_1(class UWidget_InventoryTab_C** Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.OnTabFocus_Event_1");

	UWidget_MaterialsQuestsMiscs_C_OnTabFocus_Event_1_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.BndEvt__QuickSelect_K2Node_ComponentBoundEvent_149_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MaterialsQuestsMiscs_C::BndEvt__QuickSelect_K2Node_ComponentBoundEvent_149_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.BndEvt__QuickSelect_K2Node_ComponentBoundEvent_149_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_MaterialsQuestsMiscs_C_BndEvt__QuickSelect_K2Node_ComponentBoundEvent_149_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MaterialsQuestsMiscs_C::BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_MaterialsQuestsMiscs_C_BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_16_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MaterialsQuestsMiscs_C::BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_16_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_16_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_MaterialsQuestsMiscs_C_BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_16_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.BndEvt__InventoryList_K2Node_ComponentBoundEvent_0_OnSelectItem__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo*           InspectInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Comparing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInspectInfo*           InspectInfoCompare             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          ShowIngredients                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRecipeInfo*            Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MaterialsQuestsMiscs_C::BndEvt__InventoryList_K2Node_ComponentBoundEvent_0_OnSelectItem__DelegateSignature(int* ItemID, struct FInspectInfo* InspectInfo, bool* Comparing, struct FInspectInfo* InspectInfoCompare, bool* ShowIngredients, struct FRecipeInfo* Recipe, class UClass** ItemBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.BndEvt__InventoryList_K2Node_ComponentBoundEvent_0_OnSelectItem__DelegateSignature");

	UWidget_MaterialsQuestsMiscs_C_BndEvt__InventoryList_K2Node_ComponentBoundEvent_0_OnSelectItem__DelegateSignature_Params params;
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


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.BndEvt__UseItem_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MaterialsQuestsMiscs_C::BndEvt__UseItem_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.BndEvt__UseItem_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_MaterialsQuestsMiscs_C_BndEvt__UseItem_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.BndEvt__InventoryList_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MaterialsQuestsMiscs_C::BndEvt__InventoryList_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature(int* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.BndEvt__InventoryList_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature");

	UWidget_MaterialsQuestsMiscs_C_BndEvt__InventoryList_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.RefocusList
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_MaterialsQuestsMiscs_C::RefocusList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.RefocusList");

	UWidget_MaterialsQuestsMiscs_C_RefocusList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.OnSelectItem_Event
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo*           InspectInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Comparing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInspectInfo*           InspectInfoCompare             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          ShowIngredients                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRecipeInfo*            Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MaterialsQuestsMiscs_C::OnSelectItem_Event(int* ItemID, struct FInspectInfo* InspectInfo, bool* Comparing, struct FInspectInfo* InspectInfoCompare, bool* ShowIngredients, struct FRecipeInfo* Recipe, class UClass** ItemBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.OnSelectItem_Event");

	UWidget_MaterialsQuestsMiscs_C_OnSelectItem_Event_Params params;
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


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.OnDialogResult_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MaterialsQuestsMiscs_C::OnDialogResult_Event_1(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.OnDialogResult_Event_1");

	UWidget_MaterialsQuestsMiscs_C_OnDialogResult_Event_1_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.ExecuteUbergraph_Widget_MaterialsQuestsMiscs
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MaterialsQuestsMiscs_C::ExecuteUbergraph_Widget_MaterialsQuestsMiscs(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.ExecuteUbergraph_Widget_MaterialsQuestsMiscs");

	UWidget_MaterialsQuestsMiscs_C_ExecuteUbergraph_Widget_MaterialsQuestsMiscs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.AdvancedStats__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_MaterialsQuestsMiscs_C::AdvancedStats__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.AdvancedStats__DelegateSignature");

	UWidget_MaterialsQuestsMiscs_C_AdvancedStats__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
