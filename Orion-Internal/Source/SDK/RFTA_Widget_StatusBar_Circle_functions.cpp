// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_StatusBar_Circle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_StatusBar_Circle.Widget_StatusBar_Circle_C.Get_FillGamepad_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_StatusBar_Circle_C::Get_FillGamepad_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusBar_Circle.Widget_StatusBar_Circle_C.Get_FillGamepad_Visibility_1");

	UWidget_StatusBar_Circle_C_Get_FillGamepad_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_StatusBar_Circle.Widget_StatusBar_Circle_C.Get_FillKeyboard_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_StatusBar_Circle_C::Get_FillKeyboard_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusBar_Circle.Widget_StatusBar_Circle_C.Get_FillKeyboard_Visibility_1");

	UWidget_StatusBar_Circle_C_Get_FillKeyboard_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_StatusBar_Circle.Widget_StatusBar_Circle_C.Get_FlashImage_Brush_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWidget_StatusBar_Circle_C::Get_FlashImage_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusBar_Circle.Widget_StatusBar_Circle_C.Get_FlashImage_Brush_1");

	UWidget_StatusBar_Circle_C_Get_FlashImage_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_StatusBar_Circle.Widget_StatusBar_Circle_C.Get_FlashImage_ColorAndOpacity_2
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UWidget_StatusBar_Circle_C::Get_FlashImage_ColorAndOpacity_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusBar_Circle.Widget_StatusBar_Circle_C.Get_FlashImage_ColorAndOpacity_2");

	UWidget_StatusBar_Circle_C_Get_FlashImage_ColorAndOpacity_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_StatusBar_Circle.Widget_StatusBar_Circle_C.Get_FlashImage_ColorAndOpacity_1
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UWidget_StatusBar_Circle_C::Get_FlashImage_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusBar_Circle.Widget_StatusBar_Circle_C.Get_FlashImage_ColorAndOpacity_1");

	UWidget_StatusBar_Circle_C_Get_FlashImage_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusBar_Circle.Widget_StatusBar_Circle_C.Flash
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_StatusBar_Circle_C::Flash()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusBar_Circle.Widget_StatusBar_Circle_C.Flash");

	UWidget_StatusBar_Circle_C_Flash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusBar_Circle.Widget_StatusBar_Circle_C.SetPercentage
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percentage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_StatusBar_Circle_C::SetPercentage(float* Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusBar_Circle.Widget_StatusBar_Circle_C.SetPercentage");

	UWidget_StatusBar_Circle_C_SetPercentage_Params params;
	params.Percentage = Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusBar_Circle.Widget_StatusBar_Circle_C.DelayedSetPercentage
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percentage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_StatusBar_Circle_C::DelayedSetPercentage(float* Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusBar_Circle.Widget_StatusBar_Circle_C.DelayedSetPercentage");

	UWidget_StatusBar_Circle_C_DelayedSetPercentage_Params params;
	params.Percentage = Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusBar_Circle.Widget_StatusBar_Circle_C.PreConstruct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_StatusBar_Circle_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusBar_Circle.Widget_StatusBar_Circle_C.PreConstruct");

	UWidget_StatusBar_Circle_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_StatusBar_Circle.Widget_StatusBar_Circle_C.ExecuteUbergraph_Widget_StatusBar_Circle
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_StatusBar_Circle_C::ExecuteUbergraph_Widget_StatusBar_Circle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusBar_Circle.Widget_StatusBar_Circle_C.ExecuteUbergraph_Widget_StatusBar_Circle");

	UWidget_StatusBar_Circle_C_ExecuteUbergraph_Widget_StatusBar_Circle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
