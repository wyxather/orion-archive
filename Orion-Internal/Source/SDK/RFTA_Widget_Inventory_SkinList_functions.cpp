// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Inventory_SkinList_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Inventory_SkinList.Widget_Inventory_SkinList_C.DoAction
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Inventory_SkinList_C::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinList.Widget_Inventory_SkinList_C.DoAction");

	UWidget_Inventory_SkinList_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinList.Widget_Inventory_SkinList_C.Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_SkinList_C::Init(int* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinList.Widget_Inventory_SkinList_C.Init");

	UWidget_Inventory_SkinList_C_Init_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinList.Widget_Inventory_SkinList_C.Refresh
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Inventory_SkinList_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinList.Widget_Inventory_SkinList_C.Refresh");

	UWidget_Inventory_SkinList_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinList.Widget_Inventory_SkinList_C.OnEquipped
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Inventory_SkinList_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinList.Widget_Inventory_SkinList_C.OnEquipped");

	UWidget_Inventory_SkinList_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinList.Widget_Inventory_SkinList_C.OnSelected
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_Inventory_SkinItem_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_SkinList_C::OnSelected(class UWidget_Inventory_SkinItem_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinList.Widget_Inventory_SkinList_C.OnSelected");

	UWidget_Inventory_SkinList_C_OnSelected_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinList.Widget_Inventory_SkinList_C.ExecuteUbergraph_Widget_Inventory_SkinList
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_SkinList_C::ExecuteUbergraph_Widget_Inventory_SkinList(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinList.Widget_Inventory_SkinList_C.ExecuteUbergraph_Widget_Inventory_SkinList");

	UWidget_Inventory_SkinList_C_ExecuteUbergraph_Widget_Inventory_SkinList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinList.Widget_Inventory_SkinList_C.OnSkinEquipped__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_Inventory_SkinList_C::OnSkinEquipped__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinList.Widget_Inventory_SkinList_C.OnSkinEquipped__DelegateSignature");

	UWidget_Inventory_SkinList_C_OnSkinEquipped__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
