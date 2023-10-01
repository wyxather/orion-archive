// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_WorldSlot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_WorldSlot.Widget_WorldSlot_C.Get_ActivePanel_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_WorldSlot_C::Get_ActivePanel_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldSlot.Widget_WorldSlot_C.Get_ActivePanel_Visibility_1");

	UWidget_WorldSlot_C_Get_ActivePanel_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_WorldSlot.Widget_WorldSlot_C.GetPrompt
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Out                            (Parm, OutParm)

void UWidget_WorldSlot_C::GetPrompt(struct FText* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldSlot.Widget_WorldSlot_C.GetPrompt");

	UWidget_WorldSlot_C_GetPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_WorldSlot.Widget_WorldSlot_C.Get_Create_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_WorldSlot_C::Get_Create_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldSlot.Widget_WorldSlot_C.Get_Create_Visibility_1");

	UWidget_WorldSlot_C_Get_Create_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_WorldSlot.Widget_WorldSlot_C.SetGameMode
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Label                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D**             Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_WorldSlot_C::SetGameMode(struct FText* Label, struct FText* Description, class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldSlot.Widget_WorldSlot_C.SetGameMode");

	UWidget_WorldSlot_C_SetGameMode_Params params;
	params.Label = Label;
	params.Description = Description;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WorldSlot.Widget_WorldSlot_C.RefreshDifficulty
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_WorldSlot_C::RefreshDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldSlot.Widget_WorldSlot_C.RefreshDifficulty");

	UWidget_WorldSlot_C_RefreshDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WorldSlot.Widget_WorldSlot_C.RefreshGameMode
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_WorldSlot_C::RefreshGameMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldSlot.Widget_WorldSlot_C.RefreshGameMode");

	UWidget_WorldSlot_C_RefreshGameMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WorldSlot.Widget_WorldSlot_C.RefreshPlayTime
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_WorldSlot_C::RefreshPlayTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldSlot.Widget_WorldSlot_C.RefreshPlayTime");

	UWidget_WorldSlot_C_RefreshPlayTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WorldSlot.Widget_WorldSlot_C.Refresh
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_WorldSlot_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldSlot.Widget_WorldSlot_C.Refresh");

	UWidget_WorldSlot_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WorldSlot.Widget_WorldSlot_C.GetQuest
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARemnantQuest*           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_WorldSlot_C::GetQuest(class ARemnantQuest** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldSlot.Widget_WorldSlot_C.GetQuest");

	UWidget_WorldSlot_C_GetQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_WorldSlot.Widget_WorldSlot_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_WorldSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldSlot.Widget_WorldSlot_C.Construct");

	UWidget_WorldSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WorldSlot.Widget_WorldSlot_C.BndEvt__Create_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_WorldSlot_C::BndEvt__Create_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldSlot.Widget_WorldSlot_C.BndEvt__Create_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_WorldSlot_C_BndEvt__Create_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WorldSlot.Widget_WorldSlot_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_WorldSlot_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldSlot.Widget_WorldSlot_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_WorldSlot_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WorldSlot.Widget_WorldSlot_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_WorldSlot_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldSlot.Widget_WorldSlot_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_WorldSlot_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WorldSlot.Widget_WorldSlot_C.BndEvt__Select_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_WorldSlot_C::BndEvt__Select_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldSlot.Widget_WorldSlot_C.BndEvt__Select_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_WorldSlot_C_BndEvt__Select_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WorldSlot.Widget_WorldSlot_C.BndEvt__FocusButtonWidget_160_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_WorldSlot_C::BndEvt__FocusButtonWidget_160_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldSlot.Widget_WorldSlot_C.BndEvt__FocusButtonWidget_160_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_WorldSlot_C_BndEvt__FocusButtonWidget_160_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WorldSlot.Widget_WorldSlot_C.ExecuteUbergraph_Widget_WorldSlot
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_WorldSlot_C::ExecuteUbergraph_Widget_WorldSlot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldSlot.Widget_WorldSlot_C.ExecuteUbergraph_Widget_WorldSlot");

	UWidget_WorldSlot_C_ExecuteUbergraph_Widget_WorldSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WorldSlot.Widget_WorldSlot_C.OnSelect__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_WorldSlot_C::OnSelect__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldSlot.Widget_WorldSlot_C.OnSelect__DelegateSignature");

	UWidget_WorldSlot_C_OnSelect__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WorldSlot.Widget_WorldSlot_C.OnCreate__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_WorldSlot_C**    Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_WorldSlot_C::OnCreate__DelegateSignature(class UWidget_WorldSlot_C** Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WorldSlot.Widget_WorldSlot_C.OnCreate__DelegateSignature");

	UWidget_WorldSlot_C_OnCreate__DelegateSignature_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
