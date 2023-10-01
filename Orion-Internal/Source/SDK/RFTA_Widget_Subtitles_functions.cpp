// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Subtitles_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Subtitles.Widget_Subtitles_C.ShouldShowSubtitle
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Subtitles_C::ShouldShowSubtitle(class AActor** Source, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Subtitles.Widget_Subtitles_C.ShouldShowSubtitle");

	UWidget_Subtitles_C_ShouldShowSubtitle_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_Subtitles.Widget_Subtitles_C.RemoveSubtitle
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Subtitles_C::RemoveSubtitle(class AActor** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Subtitles.Widget_Subtitles_C.RemoveSubtitle");

	UWidget_Subtitles_C_RemoveSubtitle_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Subtitles.Widget_Subtitles_C.AddSubtitle
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText*                  Speaker                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_Subtitles_C::AddSubtitle(class AActor** Context, struct FText* Speaker, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Subtitles.Widget_Subtitles_C.AddSubtitle");

	UWidget_Subtitles_C_AddSubtitle_Params params;
	params.Context = Context;
	params.Speaker = Speaker;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Subtitles.Widget_Subtitles_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Subtitles_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Subtitles.Widget_Subtitles_C.Construct");

	UWidget_Subtitles_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Subtitles.Widget_Subtitles_C.OnAddSubtitle_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USubtitleInstance**      Subtitle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Subtitles_C::OnAddSubtitle_Event_1(class USubtitleInstance** Subtitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Subtitles.Widget_Subtitles_C.OnAddSubtitle_Event_1");

	UWidget_Subtitles_C_OnAddSubtitle_Event_1_Params params;
	params.Subtitle = Subtitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Subtitles.Widget_Subtitles_C.OnRemoveSubtitle_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USubtitleInstance**      Subtitle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Subtitles_C::OnRemoveSubtitle_Event_1(class USubtitleInstance** Subtitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Subtitles.Widget_Subtitles_C.OnRemoveSubtitle_Event_1");

	UWidget_Subtitles_C_OnRemoveSubtitle_Event_1_Params params;
	params.Subtitle = Subtitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Subtitles.Widget_Subtitles_C.ExecuteUbergraph_Widget_Subtitles
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Subtitles_C::ExecuteUbergraph_Widget_Subtitles(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Subtitles.Widget_Subtitles_C.ExecuteUbergraph_Widget_Subtitles");

	UWidget_Subtitles_C_ExecuteUbergraph_Widget_Subtitles_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
