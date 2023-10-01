// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_DialogueOption_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_DialogueOption.Widget_DialogueOption_C.SetIcon
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWidget_DialogueOption_C::SetIcon(class FString* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DialogueOption.Widget_DialogueOption_C.SetIcon");

	UWidget_DialogueOption_C_SetIcon_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DialogueOption.Widget_DialogueOption_C.Get_Icon_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_DialogueOption_C::Get_Icon_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DialogueOption.Widget_DialogueOption_C.Get_Icon_Visibility_1");

	UWidget_DialogueOption_C_Get_Icon_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_DialogueOption.Widget_DialogueOption_C.GetColorAndOpacity_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_DialogueOption_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DialogueOption.Widget_DialogueOption_C.GetColorAndOpacity_1");

	UWidget_DialogueOption_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_DialogueOption.Widget_DialogueOption_C.Get_Button_bIsEnabled_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWidget_DialogueOption_C::Get_Button_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DialogueOption.Widget_DialogueOption_C.Get_Button_bIsEnabled_1");

	UWidget_DialogueOption_C_Get_Button_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_DialogueOption.Widget_DialogueOption_C.GetText_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_DialogueOption_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DialogueOption.Widget_DialogueOption_C.GetText_1");

	UWidget_DialogueOption_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_DialogueOption.Widget_DialogueOption_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_DialogueOption_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DialogueOption.Widget_DialogueOption_C.Construct");

	UWidget_DialogueOption_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DialogueOption.Widget_DialogueOption_C.BndEvt__Button_K2Node_ComponentBoundEvent_182_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_DialogueOption_C::BndEvt__Button_K2Node_ComponentBoundEvent_182_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DialogueOption.Widget_DialogueOption_C.BndEvt__Button_K2Node_ComponentBoundEvent_182_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_DialogueOption_C_BndEvt__Button_K2Node_ComponentBoundEvent_182_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DialogueOption.Widget_DialogueOption_C.ExecuteUbergraph_Widget_DialogueOption
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_DialogueOption_C::ExecuteUbergraph_Widget_DialogueOption(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DialogueOption.Widget_DialogueOption_C.ExecuteUbergraph_Widget_DialogueOption");

	UWidget_DialogueOption_C_ExecuteUbergraph_Widget_DialogueOption_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
