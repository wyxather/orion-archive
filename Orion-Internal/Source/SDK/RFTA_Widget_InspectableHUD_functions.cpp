// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_InspectableHUD_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_InspectableHUD.Widget_InspectableHUD_C.EndInspectWithContext
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_InspectableHUD_C::EndInspectWithContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InspectableHUD.Widget_InspectableHUD_C.EndInspectWithContext");

	UWidget_InspectableHUD_C_EndInspectWithContext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InspectableHUD.Widget_InspectableHUD_C.CheckReadUIAutoOpen
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_InspectableHUD_C::CheckReadUIAutoOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InspectableHUD.Widget_InspectableHUD_C.CheckReadUIAutoOpen");

	UWidget_InspectableHUD_C_CheckReadUIAutoOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InspectableHUD.Widget_InspectableHUD_C.ToggleInspectableInfo
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsManualOpen                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InspectableHUD_C::ToggleInspectableInfo(bool* IsManualOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InspectableHUD.Widget_InspectableHUD_C.ToggleInspectableInfo");

	UWidget_InspectableHUD_C_ToggleInspectableInfo_Params params;
	params.IsManualOpen = IsManualOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InspectableHUD.Widget_InspectableHUD_C.ShowInspectableInfo
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InspectableHUD_C::ShowInspectableInfo(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InspectableHUD.Widget_InspectableHUD_C.ShowInspectableInfo");

	UWidget_InspectableHUD_C_ShowInspectableInfo_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InspectableHUD.Widget_InspectableHUD_C.ClearInspectable
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_InspectableHUD_C::ClearInspectable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InspectableHUD.Widget_InspectableHUD_C.ClearInspectable");

	UWidget_InspectableHUD_C_ClearInspectable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InspectableHUD.Widget_InspectableHUD_C.Toggle Quest Inventory
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_InspectableHUD_C::Toggle_Quest_Inventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InspectableHUD.Widget_InspectableHUD_C.Toggle Quest Inventory");

	UWidget_InspectableHUD_C_Toggle_Quest_Inventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InspectableHUD.Widget_InspectableHUD_C.Show Quest Inventory
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InspectableHUD_C::Show_Quest_Inventory(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InspectableHUD.Widget_InspectableHUD_C.Show Quest Inventory");

	UWidget_InspectableHUD_C_Show_Quest_Inventory_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InspectableHUD.Widget_InspectableHUD_C.Set Inspectable Mode
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_InspectableHUDMode>* Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InspectableHUD_C::Set_Inspectable_Mode(TEnumAsByte<E_InspectableHUDMode>* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InspectableHUD.Widget_InspectableHUD_C.Set Inspectable Mode");

	UWidget_InspectableHUD_C_Set_Inspectable_Mode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InspectableHUD.Widget_InspectableHUD_C.Set Inspectable
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Inspectable_C**      Inspectable_Object             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InspectableHUD_C::Set_Inspectable(class ABP_Inspectable_C** Inspectable_Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InspectableHUD.Widget_InspectableHUD_C.Set Inspectable");

	UWidget_InspectableHUD_C_Set_Inspectable_Params params;
	params.Inspectable_Object = Inspectable_Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InspectableHUD.Widget_InspectableHUD_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_InspectableHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InspectableHUD.Widget_InspectableHUD_C.Construct");

	UWidget_InspectableHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InspectableHUD.Widget_InspectableHUD_C.OnInteractive_Event_1
// 00007FF6F8B35350
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InspectableHUD_C::OnInteractive_Event_1(struct FName* StateName, class AActor** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InspectableHUD.Widget_InspectableHUD_C.OnInteractive_Event_1");

	UWidget_InspectableHUD_C_OnInteractive_Event_1_Params params;
	params.StateName = StateName;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InspectableHUD.Widget_InspectableHUD_C.OnUpdatePageUI
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          PrevVisibility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          NextVisibility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InspectableHUD_C::OnUpdatePageUI(bool* PrevVisibility, bool* NextVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InspectableHUD.Widget_InspectableHUD_C.OnUpdatePageUI");

	UWidget_InspectableHUD_C_OnUpdatePageUI_Params params;
	params.PrevVisibility = PrevVisibility;
	params.NextVisibility = NextVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InspectableHUD.Widget_InspectableHUD_C.OnUseItemFail_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_InspectableHUD_C::OnUseItemFail_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InspectableHUD.Widget_InspectableHUD_C.OnUseItemFail_Event_1");

	UWidget_InspectableHUD_C_OnUseItemFail_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InspectableHUD.Widget_InspectableHUD_C.ExecuteUbergraph_Widget_InspectableHUD
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InspectableHUD_C::ExecuteUbergraph_Widget_InspectableHUD(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InspectableHUD.Widget_InspectableHUD_C.ExecuteUbergraph_Widget_InspectableHUD");

	UWidget_InspectableHUD_C_ExecuteUbergraph_Widget_InspectableHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InspectableHUD.Widget_InspectableHUD_C.OnInspectableInfoToggled__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InspectableHUD_C::OnInspectableInfoToggled__DelegateSignature(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InspectableHUD.Widget_InspectableHUD_C.OnInspectableInfoToggled__DelegateSignature");

	UWidget_InspectableHUD_C_OnInspectableInfoToggled__DelegateSignature_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
