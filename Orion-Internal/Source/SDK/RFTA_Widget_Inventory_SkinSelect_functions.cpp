// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Inventory_SkinSelect_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Inventory_SkinSelect.Widget_Inventory_SkinSelect_C.Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_SkinSelect_C::Init(int* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinSelect.Widget_Inventory_SkinSelect_C.Init");

	UWidget_Inventory_SkinSelect_C_Init_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinSelect.Widget_Inventory_SkinSelect_C.BndEvt__Skins_K2Node_ComponentBoundEvent_0_OnSkinEquipped__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void UWidget_Inventory_SkinSelect_C::BndEvt__Skins_K2Node_ComponentBoundEvent_0_OnSkinEquipped__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinSelect.Widget_Inventory_SkinSelect_C.BndEvt__Skins_K2Node_ComponentBoundEvent_0_OnSkinEquipped__DelegateSignature");

	UWidget_Inventory_SkinSelect_C_BndEvt__Skins_K2Node_ComponentBoundEvent_0_OnSkinEquipped__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinSelect.Widget_Inventory_SkinSelect_C.BndEvt__Back_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_SkinSelect_C::BndEvt__Back_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinSelect.Widget_Inventory_SkinSelect_C.BndEvt__Back_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Inventory_SkinSelect_C_BndEvt__Back_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinSelect.Widget_Inventory_SkinSelect_C.ExecuteUbergraph_Widget_Inventory_SkinSelect
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_SkinSelect_C::ExecuteUbergraph_Widget_Inventory_SkinSelect(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinSelect.Widget_Inventory_SkinSelect_C.ExecuteUbergraph_Widget_Inventory_SkinSelect");

	UWidget_Inventory_SkinSelect_C_ExecuteUbergraph_Widget_Inventory_SkinSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
