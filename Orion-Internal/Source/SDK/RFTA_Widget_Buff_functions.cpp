// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Buff_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Buff.Widget_Buff_C.Get_Icon_Brush_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWidget_Buff_C::Get_Icon_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buff.Widget_Buff_C.Get_Icon_Brush_1");

	UWidget_Buff_C_Get_Icon_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Buff.Widget_Buff_C.GetBuffLabel
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Buff_C::GetBuffLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buff.Widget_Buff_C.GetBuffLabel");

	UWidget_Buff_C_GetBuffLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Buff.Widget_Buff_C.Single Digit Formatting
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Time_Int                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                  Int_as_String                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWidget_Buff_C::Single_Digit_Formatting(int* Time_Int, class FString* Int_as_String)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buff.Widget_Buff_C.Single Digit Formatting");

	UWidget_Buff_C_Single_Digit_Formatting_Params params;
	params.Time_Int = Time_Int;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Int_as_String != nullptr)
		*Int_as_String = params.Int_as_String;
}


// Function Widget_Buff.Widget_Buff_C.Format Time
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Result                         (Parm, OutParm)

void UWidget_Buff_C::Format_Time(struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buff.Widget_Buff_C.Format Time");

	UWidget_Buff_C_Format_Time_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Widget_Buff.Widget_Buff_C.Get_RadialCooldown_ColorAndOpacity_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UWidget_Buff_C::Get_RadialCooldown_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buff.Widget_Buff_C.Get_RadialCooldown_ColorAndOpacity_1");

	UWidget_Buff_C_Get_RadialCooldown_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Buff.Widget_Buff_C.Get_Cooldown_FillColorAndOpacity_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UWidget_Buff_C::Get_Cooldown_FillColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buff.Widget_Buff_C.Get_Cooldown_FillColorAndOpacity_1");

	UWidget_Buff_C_Get_Cooldown_FillColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Buff.Widget_Buff_C.UpdateTimeRemaining
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Buff_C::UpdateTimeRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buff.Widget_Buff_C.UpdateTimeRemaining");

	UWidget_Buff_C_UpdateTimeRemaining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Buff.Widget_Buff_C.GetCooldownVisibility
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Buff_C::GetCooldownVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buff.Widget_Buff_C.GetCooldownVisibility");

	UWidget_Buff_C_GetCooldownVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Buff.Widget_Buff_C.GetVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Buff_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buff.Widget_Buff_C.GetVisibility_1");

	UWidget_Buff_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Buff.Widget_Buff_C.UpdateLevelText
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Buff_C::UpdateLevelText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buff.Widget_Buff_C.UpdateLevelText");

	UWidget_Buff_C_UpdateLevelText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Buff.Widget_Buff_C.GetIcon
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWidget_Buff_C::GetIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buff.Widget_Buff_C.GetIcon");

	UWidget_Buff_C_GetIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Buff.Widget_Buff_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Buff_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buff.Widget_Buff_C.Construct");

	UWidget_Buff_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Buff.Widget_Buff_C.Tick
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Buff_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buff.Widget_Buff_C.Tick");

	UWidget_Buff_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Buff.Widget_Buff_C.ExecuteUbergraph_Widget_Buff
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Buff_C::ExecuteUbergraph_Widget_Buff(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buff.Widget_Buff_C.ExecuteUbergraph_Widget_Buff");

	UWidget_Buff_C_ExecuteUbergraph_Widget_Buff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
