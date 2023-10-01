// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Radial_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Radial.Widget_Radial_C.GetRadialItemForPanel
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget**           Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget_RadialItem_C*    RadialItem                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Radial_C::GetRadialItemForPanel(class UPanelWidget** Panel, int* Slot, class UWidget_RadialItem_C** RadialItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Radial.Widget_Radial_C.GetRadialItemForPanel");

	UWidget_Radial_C_GetRadialItemForPanel_Params params;
	params.Panel = Panel;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RadialItem != nullptr)
		*RadialItem = params.RadialItem;
}


// Function Widget_Radial.Widget_Radial_C.InitSlots
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget**           Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Radial_C::InitSlots(class UPanelWidget** Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Radial.Widget_Radial_C.InitSlots");

	UWidget_Radial_C_InitSlots_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Radial.Widget_Radial_C.Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 EquipItemBP                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Radial_C::Init(struct FName* Radial, class UClass** EquipItemBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Radial.Widget_Radial_C.Init");

	UWidget_Radial_C_Init_Params params;
	params.Radial = Radial;
	params.EquipItemBP = EquipItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Radial.Widget_Radial_C.GetRadialItem
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget_RadialItem_C*    RadialItem                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Radial_C::GetRadialItem(int* Slot, class UWidget_RadialItem_C** RadialItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Radial.Widget_Radial_C.GetRadialItem");

	UWidget_Radial_C_GetRadialItem_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RadialItem != nullptr)
		*RadialItem = params.RadialItem;
}


// Function Widget_Radial.Widget_Radial_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Radial_C::BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Radial.Widget_Radial_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Radial_C_BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Radial.Widget_Radial_C.OnQuickSelect1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Radial_C::OnQuickSelect1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Radial.Widget_Radial_C.OnQuickSelect1");

	UWidget_Radial_C_OnQuickSelect1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Radial.Widget_Radial_C.OnQuickSelect2
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Radial_C::OnQuickSelect2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Radial.Widget_Radial_C.OnQuickSelect2");

	UWidget_Radial_C_OnQuickSelect2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Radial.Widget_Radial_C.OnQuickSelect3
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Radial_C::OnQuickSelect3()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Radial.Widget_Radial_C.OnQuickSelect3");

	UWidget_Radial_C_OnQuickSelect3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Radial.Widget_Radial_C.OnQuickSelect4
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Radial_C::OnQuickSelect4()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Radial.Widget_Radial_C.OnQuickSelect4");

	UWidget_Radial_C_OnQuickSelect4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Radial.Widget_Radial_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Radial_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Radial.Widget_Radial_C.Construct");

	UWidget_Radial_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Radial.Widget_Radial_C.ExecuteUbergraph_Widget_Radial
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Radial_C::ExecuteUbergraph_Widget_Radial(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Radial.Widget_Radial_C.ExecuteUbergraph_Widget_Radial");

	UWidget_Radial_C_ExecuteUbergraph_Widget_Radial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
