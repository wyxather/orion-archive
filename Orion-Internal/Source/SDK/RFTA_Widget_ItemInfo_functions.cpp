// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ItemInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_ItemInfo.Widget_ItemInfo_C.SetSizeModifier
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Mod                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ItemInfo_C::SetSizeModifier(int* Mod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo.Widget_ItemInfo_C.SetSizeModifier");

	UWidget_ItemInfo_C_SetSizeModifier_Params params;
	params.Mod = Mod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemInfo.Widget_ItemInfo_C.GetEmptyVisibility_2
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_ItemInfo_C::GetEmptyVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo.Widget_ItemInfo_C.GetEmptyVisibility_2");

	UWidget_ItemInfo_C_GetEmptyVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ItemInfo.Widget_ItemInfo_C.GetEmptyVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_ItemInfo_C::GetEmptyVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo.Widget_ItemInfo_C.GetEmptyVisibility_1");

	UWidget_ItemInfo_C_GetEmptyVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ItemInfo.Widget_ItemInfo_C.SetInfoHidden
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Hidden                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_ItemInfo_C::SetInfoHidden(bool* Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo.Widget_ItemInfo_C.SetInfoHidden");

	UWidget_ItemInfo_C_SetInfoHidden_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemInfo.Widget_ItemInfo_C.DoAction
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ItemInfo_C::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo.Widget_ItemInfo_C.DoAction");

	UWidget_ItemInfo_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemInfo.Widget_ItemInfo_C.HasInputFocus
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_ItemInfo_C::HasInputFocus(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo.Widget_ItemInfo_C.HasInputFocus");

	UWidget_ItemInfo_C_HasInputFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_ItemInfo.Widget_ItemInfo_C.EndInputFocus
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ItemInfo_C::EndInputFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo.Widget_ItemInfo_C.EndInputFocus");

	UWidget_ItemInfo_C_EndInputFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemInfo.Widget_ItemInfo_C.GetCompareInspectInfo
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Compare                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInspectInfo            CompareInspectInfo             (Parm, OutParm)

void UWidget_ItemInfo_C::GetCompareInspectInfo(int* ItemID, bool* Compare, struct FInspectInfo* CompareInspectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo.Widget_ItemInfo_C.GetCompareInspectInfo");

	UWidget_ItemInfo_C_GetCompareInspectInfo_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Compare != nullptr)
		*Compare = params.Compare;
	if (CompareInspectInfo != nullptr)
		*CompareInspectInfo = params.CompareInspectInfo;
}


// Function Widget_ItemInfo.Widget_ItemInfo_C.GetVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_ItemInfo_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo.Widget_ItemInfo_C.GetVisibility_1");

	UWidget_ItemInfo_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ItemInfo.Widget_ItemInfo_C.Get_AttributeName_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_ItemInfo_C::Get_AttributeName_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo.Widget_ItemInfo_C.Get_AttributeName_Text_1");

	UWidget_ItemInfo_C_Get_AttributeName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ItemInfo.Widget_ItemInfo_C.SetInspectInfo
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent**    Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo*           InspectInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Comparing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInspectInfo*           InspectInfoCompare             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_ItemInfo_C::SetInspectInfo(class UInventoryComponent** Inventory, int* ItemID, struct FInspectInfo* InspectInfo, bool* Comparing, struct FInspectInfo* InspectInfoCompare)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo.Widget_ItemInfo_C.SetInspectInfo");

	UWidget_ItemInfo_C_SetInspectInfo_Params params;
	params.Inventory = Inventory;
	params.ItemID = ItemID;
	params.InspectInfo = InspectInfo;
	params.Comparing = Comparing;
	params.InspectInfoCompare = InspectInfoCompare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemInfo.Widget_ItemInfo_C.GetInventoryItem
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInventoryItem          Item                           (Parm, OutParm, NoDestructor, ContainsInstancedReference)

void UWidget_ItemInfo_C::GetInventoryItem(struct FInventoryItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo.Widget_ItemInfo_C.GetInventoryItem");

	UWidget_ItemInfo_C_GetInventoryItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function Widget_ItemInfo.Widget_ItemInfo_C.SetItem
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent**    Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           CompareItemID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ItemInfo_C::SetItem(class UInventoryComponent** Inventory, int* ItemID, int* CompareItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo.Widget_ItemInfo_C.SetItem");

	UWidget_ItemInfo_C_SetItem_Params params;
	params.Inventory = Inventory;
	params.ItemID = ItemID;
	params.CompareItemID = CompareItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemInfo.Widget_ItemInfo_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_ItemInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo.Widget_ItemInfo_C.Construct");

	UWidget_ItemInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemInfo.Widget_ItemInfo_C.BndEvt__Weapons_K2Node_ComponentBoundEvent_5_OnClickMod__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget_ItemModSlot_C**  ModSlot                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ItemInfo_C::BndEvt__Weapons_K2Node_ComponentBoundEvent_5_OnClickMod__DelegateSignature(class UWidget_ItemModSlot_C** ModSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo.Widget_ItemInfo_C.BndEvt__Weapons_K2Node_ComponentBoundEvent_5_OnClickMod__DelegateSignature");

	UWidget_ItemInfo_C_BndEvt__Weapons_K2Node_ComponentBoundEvent_5_OnClickMod__DelegateSignature_Params params;
	params.ModSlot = ModSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemInfo.Widget_ItemInfo_C.BndEvt__Weapons_K2Node_ComponentBoundEvent_17_OnSelectMod__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget_ItemModSlot_C**  ModSlot                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ItemInfo_C::BndEvt__Weapons_K2Node_ComponentBoundEvent_17_OnSelectMod__DelegateSignature(class UWidget_ItemModSlot_C** ModSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo.Widget_ItemInfo_C.BndEvt__Weapons_K2Node_ComponentBoundEvent_17_OnSelectMod__DelegateSignature");

	UWidget_ItemInfo_C_BndEvt__Weapons_K2Node_ComponentBoundEvent_17_OnSelectMod__DelegateSignature_Params params;
	params.ModSlot = ModSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemInfo.Widget_ItemInfo_C.BndEvt__RangedWeapon_K2Node_ComponentBoundEvent_0_OnSubAction__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FText*                  ActionLabel                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_ItemInfo_C::BndEvt__RangedWeapon_K2Node_ComponentBoundEvent_0_OnSubAction__DelegateSignature(struct FText* ActionLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo.Widget_ItemInfo_C.BndEvt__RangedWeapon_K2Node_ComponentBoundEvent_0_OnSubAction__DelegateSignature");

	UWidget_ItemInfo_C_BndEvt__RangedWeapon_K2Node_ComponentBoundEvent_0_OnSubAction__DelegateSignature_Params params;
	params.ActionLabel = ActionLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemInfo.Widget_ItemInfo_C.ExecuteUbergraph_Widget_ItemInfo
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ItemInfo_C::ExecuteUbergraph_Widget_ItemInfo(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo.Widget_ItemInfo_C.ExecuteUbergraph_Widget_ItemInfo");

	UWidget_ItemInfo_C_ExecuteUbergraph_Widget_ItemInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemInfo.Widget_ItemInfo_C.OnSubAction__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  ActionLabel                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_ItemInfo_C::OnSubAction__DelegateSignature(struct FText* ActionLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo.Widget_ItemInfo_C.OnSubAction__DelegateSignature");

	UWidget_ItemInfo_C_OnSubAction__DelegateSignature_Params params;
	params.ActionLabel = ActionLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemInfo.Widget_ItemInfo_C.OnModSelected__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_ItemModSlot_C**  ModSlot                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ItemInfo_C::OnModSelected__DelegateSignature(class UWidget_ItemModSlot_C** ModSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo.Widget_ItemInfo_C.OnModSelected__DelegateSignature");

	UWidget_ItemInfo_C_OnModSelected__DelegateSignature_Params params;
	params.ModSlot = ModSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemInfo.Widget_ItemInfo_C.OnModClicked__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_ItemModSlot_C**  ModSlot                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ItemInfo_C::OnModClicked__DelegateSignature(class UWidget_ItemModSlot_C** ModSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo.Widget_ItemInfo_C.OnModClicked__DelegateSignature");

	UWidget_ItemInfo_C_OnModClicked__DelegateSignature_Params params;
	params.ModSlot = ModSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
