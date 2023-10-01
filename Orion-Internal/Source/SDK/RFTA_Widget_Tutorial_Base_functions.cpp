// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Tutorial_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.UpdateOrientation
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Tutorial_Base_C::UpdateOrientation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.UpdateOrientation");

	UWidget_Tutorial_Base_C_UpdateOrientation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.SetupPips
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Tutorial_Base_C::SetupPips()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.SetupPips");

	UWidget_Tutorial_Base_C_SetupPips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.SetupNextPage
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Tutorial_Base_C::SetupNextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.SetupNextPage");

	UWidget_Tutorial_Base_C_SetupNextPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Tutorial                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          Left                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Tutorial_Base_C::Init(class UClass** Tutorial, bool* Left)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.Init");

	UWidget_Tutorial_Base_C_Init_Params params;
	params.Tutorial = Tutorial;
	params.Left = Left;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.GetTutorial
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTutorial_C*             Tutorial                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Tutorial_Base_C::GetTutorial(class UTutorial_C** Tutorial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.GetTutorial");

	UWidget_Tutorial_Base_C_GetTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tutorial != nullptr)
		*Tutorial = params.Tutorial;
}


// Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.SetupPage
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTutorialPage*          Page                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWidget_Tutorial_Base_C::SetupPage(struct FTutorialPage* Page)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.SetupPage");

	UWidget_Tutorial_Base_C_SetupPage_Params params;
	params.Page = Page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.BndEvt__Widget_ButtonEx_K2Node_ComponentBoundEvent_1_OnAction__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void UWidget_Tutorial_Base_C::BndEvt__Widget_ButtonEx_K2Node_ComponentBoundEvent_1_OnAction__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.BndEvt__Widget_ButtonEx_K2Node_ComponentBoundEvent_1_OnAction__DelegateSignature");

	UWidget_Tutorial_Base_C_BndEvt__Widget_ButtonEx_K2Node_ComponentBoundEvent_1_OnAction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Tutorial_Base_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.Construct");

	UWidget_Tutorial_Base_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.BndEvt__OkButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Tutorial_Base_C::BndEvt__OkButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.BndEvt__OkButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Tutorial_Base_C_BndEvt__OkButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.ExecuteUbergraph_Widget_Tutorial_Base
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Tutorial_Base_C::ExecuteUbergraph_Widget_Tutorial_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.ExecuteUbergraph_Widget_Tutorial_Base");

	UWidget_Tutorial_Base_C_ExecuteUbergraph_Widget_Tutorial_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.Tutorial Window Closed__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_Tutorial_Base_C::Tutorial_Window_Closed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Tutorial_Base.Widget_Tutorial_Base_C.Tutorial Window Closed__DelegateSignature");

	UWidget_Tutorial_Base_C_Tutorial_Window_Closed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
