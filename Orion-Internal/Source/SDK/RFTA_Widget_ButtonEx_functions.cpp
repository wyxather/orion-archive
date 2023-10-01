// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ButtonEx_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_ButtonEx.Widget_ButtonEx_C.GetInvisibleVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_ButtonEx_C::GetInvisibleVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.GetInvisibleVisibility_1");

	UWidget_ButtonEx_C_GetInvisibleVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ButtonEx.Widget_ButtonEx_C.GetInvisible
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           invisible                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_ButtonEx_C::GetInvisible(bool* invisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.GetInvisible");

	UWidget_ButtonEx_C_GetInvisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (invisible != nullptr)
		*invisible = params.invisible;
}


// Function Widget_ButtonEx.Widget_ButtonEx_C.SetInvisible
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          invisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_ButtonEx_C::SetInvisible(bool* invisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.SetInvisible");

	UWidget_ButtonEx_C_SetInvisible_Params params;
	params.invisible = invisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ButtonEx.Widget_ButtonEx_C.Get_PulseImg_Brush_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWidget_ButtonEx_C::Get_PulseImg_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.Get_PulseImg_Brush_1");

	UWidget_ButtonEx_C_Get_PulseImg_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ButtonEx.Widget_ButtonEx_C.Get_HoldButton_ColorAndOpacity_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UWidget_ButtonEx_C::Get_HoldButton_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.Get_HoldButton_ColorAndOpacity_1");

	UWidget_ButtonEx_C_Get_HoldButton_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ButtonEx.Widget_ButtonEx_C.IsolatedBtnVisibility
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_ButtonEx_C::IsolatedBtnVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.IsolatedBtnVisibility");

	UWidget_ButtonEx_C_IsolatedBtnVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ButtonEx.Widget_ButtonEx_C.SetPressAndHoldTime
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewHoldTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ButtonEx_C::SetPressAndHoldTime(float* NewHoldTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.SetPressAndHoldTime");

	UWidget_ButtonEx_C_SetPressAndHoldTime_Params params;
	params.NewHoldTime = NewHoldTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ButtonEx.Widget_ButtonEx_C.StopPulse
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ButtonEx_C::StopPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.StopPulse");

	UWidget_ButtonEx_C_StopPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ButtonEx.Widget_ButtonEx_C.StartPulse
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ButtonEx_C::StartPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.StartPulse");

	UWidget_ButtonEx_C_StartPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ButtonEx.Widget_ButtonEx_C.GetHoldPercentage
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ButtonEx_C::GetHoldPercentage(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.GetHoldPercentage");

	UWidget_ButtonEx_C_GetHoldPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_ButtonEx.Widget_ButtonEx_C.Get_LabelWidget_ColorAndOpacity_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_ButtonEx_C::Get_LabelWidget_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.Get_LabelWidget_ColorAndOpacity_1");

	UWidget_ButtonEx_C_Get_LabelWidget_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ButtonEx.Widget_ButtonEx_C.Set Image Size
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ButtonEx_C::Set_Image_Size()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.Set Image Size");

	UWidget_ButtonEx_C_Set_Image_Size_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ButtonEx.Widget_ButtonEx_C.SetLabel
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Label                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_ButtonEx_C::SetLabel(struct FText* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.SetLabel");

	UWidget_ButtonEx_C_SetLabel_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ButtonEx.Widget_ButtonEx_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_ButtonEx_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.Construct");

	UWidget_ButtonEx_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ButtonEx.Widget_ButtonEx_C.OnDeviceChangedDelegate_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ControllerId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputDevice*                  CurrentInputDevice             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ButtonEx_C::OnDeviceChangedDelegate_Event_1(int* ControllerId, EInputDevice* CurrentInputDevice)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.OnDeviceChangedDelegate_Event_1");

	UWidget_ButtonEx_C_OnDeviceChangedDelegate_Event_1_Params params;
	params.ControllerId = ControllerId;
	params.CurrentInputDevice = CurrentInputDevice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ButtonEx.Widget_ButtonEx_C.BndEvt__Btn_K2Node_ComponentBoundEvent_370_OnAdvButtonPressedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ButtonEx_C::BndEvt__Btn_K2Node_ComponentBoundEvent_370_OnAdvButtonPressedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.BndEvt__Btn_K2Node_ComponentBoundEvent_370_OnAdvButtonPressedEvent__DelegateSignature");

	UWidget_ButtonEx_C_BndEvt__Btn_K2Node_ComponentBoundEvent_370_OnAdvButtonPressedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ButtonEx.Widget_ButtonEx_C.BndEvt__Btn_K2Node_ComponentBoundEvent_401_OnAdvButtonReleasedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ButtonEx_C::BndEvt__Btn_K2Node_ComponentBoundEvent_401_OnAdvButtonReleasedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.BndEvt__Btn_K2Node_ComponentBoundEvent_401_OnAdvButtonReleasedEvent__DelegateSignature");

	UWidget_ButtonEx_C_BndEvt__Btn_K2Node_ComponentBoundEvent_401_OnAdvButtonReleasedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ButtonEx.Widget_ButtonEx_C.BndEvt__HoldButton_K2Node_ComponentBoundEvent_1302_OnPressAndHold__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// bool*                          Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float*                         CompletionPct                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ButtonEx_C::BndEvt__HoldButton_K2Node_ComponentBoundEvent_1302_OnPressAndHold__DelegateSignature(bool* Success, float* CompletionPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.BndEvt__HoldButton_K2Node_ComponentBoundEvent_1302_OnPressAndHold__DelegateSignature");

	UWidget_ButtonEx_C_BndEvt__HoldButton_K2Node_ComponentBoundEvent_1302_OnPressAndHold__DelegateSignature_Params params;
	params.Success = Success;
	params.CompletionPct = CompletionPct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ButtonEx.Widget_ButtonEx_C.BndEvt__HoldButton_K2Node_ComponentBoundEvent_1357_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ButtonEx_C::BndEvt__HoldButton_K2Node_ComponentBoundEvent_1357_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.BndEvt__HoldButton_K2Node_ComponentBoundEvent_1357_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_ButtonEx_C_BndEvt__HoldButton_K2Node_ComponentBoundEvent_1357_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ButtonEx.Widget_ButtonEx_C.BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ButtonEx_C::BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_ButtonEx_C_BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ButtonEx.Widget_ButtonEx_C.BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ButtonEx_C::BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_ButtonEx_C_BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ButtonEx.Widget_ButtonEx_C.Tick
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ButtonEx_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.Tick");

	UWidget_ButtonEx_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ButtonEx.Widget_ButtonEx_C.ExecuteUbergraph_Widget_ButtonEx
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ButtonEx_C::ExecuteUbergraph_Widget_ButtonEx(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.ExecuteUbergraph_Widget_ButtonEx");

	UWidget_ButtonEx_C_ExecuteUbergraph_Widget_ButtonEx_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ButtonEx.Widget_ButtonEx_C.OnAction__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_ButtonEx_C::OnAction__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ButtonEx.Widget_ButtonEx_C.OnAction__DelegateSignature");

	UWidget_ButtonEx_C_OnAction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
