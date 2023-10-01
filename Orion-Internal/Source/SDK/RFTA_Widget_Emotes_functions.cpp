// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Emotes_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Emotes.Widget_Emotes_C.Get_Cancel_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Emotes_C::Get_Cancel_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emotes.Widget_Emotes_C.Get_Cancel_Visibility_1");

	UWidget_Emotes_C_Get_Cancel_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Emotes.Widget_Emotes_C.MakeSelection
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          FireSingle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Emotes_C::MakeSelection(bool* FireSingle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emotes.Widget_Emotes_C.MakeSelection");

	UWidget_Emotes_C_MakeSelection_Params params;
	params.FireSingle = FireSingle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Emotes.Widget_Emotes_C.CanScroll
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Emotes_C::CanScroll(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emotes.Widget_Emotes_C.CanScroll");

	UWidget_Emotes_C_CanScroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_Emotes.Widget_Emotes_C.Get_LeftButton_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Emotes_C::Get_LeftButton_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emotes.Widget_Emotes_C.Get_LeftButton_Visibility_1");

	UWidget_Emotes_C_Get_LeftButton_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Emotes.Widget_Emotes_C.Get_RightButton_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Emotes_C::Get_RightButton_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emotes.Widget_Emotes_C.Get_RightButton_Visibility_1");

	UWidget_Emotes_C_Get_RightButton_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Emotes.Widget_Emotes_C.ResolveIndex
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Emotes_C::ResolveIndex(int* In, int* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emotes.Widget_Emotes_C.ResolveIndex");

	UWidget_Emotes_C_ResolveIndex_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_Emotes.Widget_Emotes_C.SetIndex
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Emotes_C::SetIndex(class UWidget** Widget, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emotes.Widget_Emotes_C.SetIndex");

	UWidget_Emotes_C_SetIndex_Params params;
	params.Widget = Widget;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Emotes.Widget_Emotes_C.SelectEmote
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_Emote_C**        NewEmote                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Emotes_C::SelectEmote(class UWidget_Emote_C** NewEmote)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emotes.Widget_Emotes_C.SelectEmote");

	UWidget_Emotes_C_SelectEmote_Params params;
	params.NewEmote = NewEmote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Emotes.Widget_Emotes_C.Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Emotes_C::Init(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emotes.Widget_Emotes_C.Init");

	UWidget_Emotes_C_Init_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Emotes.Widget_Emotes_C.Tick
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Emotes_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emotes.Widget_Emotes_C.Tick");

	UWidget_Emotes_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Emotes.Widget_Emotes_C.DoRightScroll
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Emotes_C::DoRightScroll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emotes.Widget_Emotes_C.DoRightScroll");

	UWidget_Emotes_C_DoRightScroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Emotes.Widget_Emotes_C.DoLeftScroll
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Emotes_C::DoLeftScroll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emotes.Widget_Emotes_C.DoLeftScroll");

	UWidget_Emotes_C_DoLeftScroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Emotes.Widget_Emotes_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Emotes_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emotes.Widget_Emotes_C.Construct");

	UWidget_Emotes_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Emotes.Widget_Emotes_C.OnFinishedScrollingRight
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Emotes_C::OnFinishedScrollingRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emotes.Widget_Emotes_C.OnFinishedScrollingRight");

	UWidget_Emotes_C_OnFinishedScrollingRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Emotes.Widget_Emotes_C.OnFinishedScrollingLeft
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Emotes_C::OnFinishedScrollingLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emotes.Widget_Emotes_C.OnFinishedScrollingLeft");

	UWidget_Emotes_C_OnFinishedScrollingLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Emotes.Widget_Emotes_C.SetNavigate
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsNavigating                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          Rightward                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Emotes_C::SetNavigate(bool* IsNavigating, bool* Rightward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emotes.Widget_Emotes_C.SetNavigate");

	UWidget_Emotes_C_SetNavigate_Params params;
	params.IsNavigating = IsNavigating;
	params.Rightward = Rightward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Emotes.Widget_Emotes_C.SelectNextEmote
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Emotes_C::SelectNextEmote()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emotes.Widget_Emotes_C.SelectNextEmote");

	UWidget_Emotes_C_SelectNextEmote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Emotes.Widget_Emotes_C.SelectPreviousEmote
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Emotes_C::SelectPreviousEmote()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emotes.Widget_Emotes_C.SelectPreviousEmote");

	UWidget_Emotes_C_SelectPreviousEmote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Emotes.Widget_Emotes_C.AttemptNavigation
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Emotes_C::AttemptNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emotes.Widget_Emotes_C.AttemptNavigation");

	UWidget_Emotes_C_AttemptNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Emotes.Widget_Emotes_C.ExecuteUbergraph_Widget_Emotes
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Emotes_C::ExecuteUbergraph_Widget_Emotes(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Emotes.Widget_Emotes_C.ExecuteUbergraph_Widget_Emotes");

	UWidget_Emotes_C_ExecuteUbergraph_Widget_Emotes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
