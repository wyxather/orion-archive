// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Inventory_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Inventory.Widget_Inventory_C.DoSelectSkin
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Inventory_C::DoSelectSkin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.DoSelectSkin");

	UWidget_Inventory_C_DoSelectSkin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory.Widget_Inventory_C.Get_QuickSelect_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Inventory_C::Get_QuickSelect_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.Get_QuickSelect_Visibility_1");

	UWidget_Inventory_C_Get_QuickSelect_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Inventory.Widget_Inventory_C.SetAction
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText*                  ActionLabel                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Valid                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Inventory_C::SetAction(int* Type, struct FText* ActionLabel, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.SetAction");

	UWidget_Inventory_C_SetAction_Params params;
	params.Type = Type;
	params.ActionLabel = ActionLabel;
	params.Valid = Valid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory.Widget_Inventory_C.FocusInventoryTab
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_EquipmentSlot_C** EquipmentSlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_C::FocusInventoryTab(class UWidget_EquipmentSlot_C** EquipmentSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.FocusInventoryTab");

	UWidget_Inventory_C_FocusInventoryTab_Params params;
	params.EquipmentSlot = EquipmentSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory.Widget_Inventory_C.ParseEquipmentSlots
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget**           Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_C::ParseEquipmentSlots(class UPanelWidget** Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.ParseEquipmentSlots");

	UWidget_Inventory_C_ParseEquipmentSlots_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory.Widget_Inventory_C.GetItemToCompare
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_C::GetItemToCompare(int* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.GetItemToCompare");

	UWidget_Inventory_C_GetItemToCompare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Widget_Inventory.Widget_Inventory_C.SetItemResumeInfo
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_C::SetItemResumeInfo(int* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.SetItemResumeInfo");

	UWidget_Inventory_C_SetItemResumeInfo_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory.Widget_Inventory_C.CommandsVisibility
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Inventory_C::CommandsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.CommandsVisibility");

	UWidget_Inventory_C_CommandsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Inventory.Widget_Inventory_C.FindInfo
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInspectInfo*           InspectInfo                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int*                           InfoNumber                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectStat            Array_Element                  (Parm, OutParm)

void UWidget_Inventory_C::FindInfo(struct FInspectInfo* InspectInfo, int* InfoNumber, struct FInspectStat* Array_Element)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.FindInfo");

	UWidget_Inventory_C_FindInfo_Params params;
	params.InspectInfo = InspectInfo;
	params.InfoNumber = InfoNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array_Element != nullptr)
		*Array_Element = params.Array_Element;
}


// Function Widget_Inventory.Widget_Inventory_C.Get_ItemTypeLabel_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Inventory_C::Get_ItemTypeLabel_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.Get_ItemTypeLabel_Text_1");

	UWidget_Inventory_C_Get_ItemTypeLabel_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Inventory.Widget_Inventory_C.GetVisibility_2
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Inventory_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.GetVisibility_2");

	UWidget_Inventory_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Inventory.Widget_Inventory_C.GetVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Inventory_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.GetVisibility_1");

	UWidget_Inventory_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Inventory.Widget_Inventory_C.ShowQuickSelect
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_C::ShowQuickSelect(struct FName* Radial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.ShowQuickSelect");

	UWidget_Inventory_C_ShowQuickSelect_Params params;
	params.Radial = Radial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory.Widget_Inventory_C.DoQuickSelect
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Inventory_C::DoQuickSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.DoQuickSelect");

	UWidget_Inventory_C_DoQuickSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory.Widget_Inventory_C.Get_Scrap_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Inventory_C::Get_Scrap_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.Get_Scrap_Text_1");

	UWidget_Inventory_C_Get_Scrap_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Inventory.Widget_Inventory_C.Refresh
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInspectInfo*           InspectInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Comparing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInspectInfo*           CompareInspectInfo             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_Inventory_C::Refresh(struct FInspectInfo* InspectInfo, bool* Comparing, struct FInspectInfo* CompareInspectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.Refresh");

	UWidget_Inventory_C_Refresh_Params params;
	params.InspectInfo = InspectInfo;
	params.Comparing = Comparing;
	params.CompareInspectInfo = CompareInspectInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory.Widget_Inventory_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Inventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.Construct");

	UWidget_Inventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory.Widget_Inventory_C.OnInventoryChanged_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Inventory_C::OnInventoryChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.OnInventoryChanged_Event_1");

	UWidget_Inventory_C_OnInventoryChanged_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory.Widget_Inventory_C.OnTabFocus_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_InventoryTab_C** Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_C::OnTabFocus_Event_1(class UWidget_InventoryTab_C** Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.OnTabFocus_Event_1");

	UWidget_Inventory_C_OnTabFocus_Event_1_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory.Widget_Inventory_C.BndEvt__QuickSelect_K2Node_ComponentBoundEvent_149_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_C::BndEvt__QuickSelect_K2Node_ComponentBoundEvent_149_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.BndEvt__QuickSelect_K2Node_ComponentBoundEvent_149_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Inventory_C_BndEvt__QuickSelect_K2Node_ComponentBoundEvent_149_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory.Widget_Inventory_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_C::BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Inventory_C_BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory.Widget_Inventory_C.BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_16_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_C::BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_16_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_16_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Inventory_C_BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_16_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory.Widget_Inventory_C.BndEvt__EquipUnequip_K2Node_ComponentBoundEvent_34_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_C::BndEvt__EquipUnequip_K2Node_ComponentBoundEvent_34_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.BndEvt__EquipUnequip_K2Node_ComponentBoundEvent_34_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Inventory_C_BndEvt__EquipUnequip_K2Node_ComponentBoundEvent_34_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory.Widget_Inventory_C.OnEquipmentFocused
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_C::OnEquipmentFocused(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.OnEquipmentFocused");

	UWidget_Inventory_C_OnEquipmentFocused_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory.Widget_Inventory_C.OnEquipmentClicked
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_C::OnEquipmentClicked(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.OnEquipmentClicked");

	UWidget_Inventory_C_OnEquipmentClicked_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory.Widget_Inventory_C.BndEvt__ItemInfo_K2Node_ComponentBoundEvent_1_OnSubAction__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FText*                  ActionLabel                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_Inventory_C::BndEvt__ItemInfo_K2Node_ComponentBoundEvent_1_OnSubAction__DelegateSignature(struct FText* ActionLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.BndEvt__ItemInfo_K2Node_ComponentBoundEvent_1_OnSubAction__DelegateSignature");

	UWidget_Inventory_C_BndEvt__ItemInfo_K2Node_ComponentBoundEvent_1_OnSubAction__DelegateSignature_Params params;
	params.ActionLabel = ActionLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory.Widget_Inventory_C.BndEvt__InventoryList_K2Node_ComponentBoundEvent_2_OnSelectItem__DelegateSignature
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

void UWidget_Inventory_C::BndEvt__InventoryList_K2Node_ComponentBoundEvent_2_OnSelectItem__DelegateSignature(int* ItemID, struct FInspectInfo* InspectInfo, bool* Comparing, struct FInspectInfo* InspectInfoCompare, bool* ShowIngredients, struct FRecipeInfo* Recipe, class UClass** ItemBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.BndEvt__InventoryList_K2Node_ComponentBoundEvent_2_OnSelectItem__DelegateSignature");

	UWidget_Inventory_C_BndEvt__InventoryList_K2Node_ComponentBoundEvent_2_OnSelectItem__DelegateSignature_Params params;
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


// Function Widget_Inventory.Widget_Inventory_C.BndEvt__ResumeInfo_K2Node_ComponentBoundEvent_3_OnSubAction__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FText*                  ActionLabel                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_Inventory_C::BndEvt__ResumeInfo_K2Node_ComponentBoundEvent_3_OnSubAction__DelegateSignature(struct FText* ActionLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.BndEvt__ResumeInfo_K2Node_ComponentBoundEvent_3_OnSubAction__DelegateSignature");

	UWidget_Inventory_C_BndEvt__ResumeInfo_K2Node_ComponentBoundEvent_3_OnSubAction__DelegateSignature_Params params;
	params.ActionLabel = ActionLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory.Widget_Inventory_C.ExecuteUbergraph_Widget_Inventory
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_C::ExecuteUbergraph_Widget_Inventory(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.ExecuteUbergraph_Widget_Inventory");

	UWidget_Inventory_C_ExecuteUbergraph_Widget_Inventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory.Widget_Inventory_C.AdvancedStats__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_Inventory_C::AdvancedStats__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory.Widget_Inventory_C.AdvancedStats__DelegateSignature");

	UWidget_Inventory_C_AdvancedStats__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
