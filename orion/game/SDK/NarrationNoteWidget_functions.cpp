#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass NarrationNoteWidget.NarrationNoteWidget_C
// (None)

class UClass* UNarrationNoteWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NarrationNoteWidget_C");

	return Clss;
}


// NarrationNoteWidget_C NarrationNoteWidget.Default__NarrationNoteWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNarrationNoteWidget_C* UNarrationNoteWidget_C::GetDefaultObj()
{
	static class UNarrationNoteWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNarrationNoteWidget_C*>(UNarrationNoteWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NarrationNoteWidget.NarrationNoteWidget_C.PlayFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationNoteWidget_C::PlayFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationNoteWidget_C", "PlayFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationNoteWidget.NarrationNoteWidget_C.SetScroll
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AddScrollValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MoveSuccess                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNarrationNoteWidget_C::SetScroll(float AddScrollValue, bool* MoveSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationNoteWidget_C", "SetScroll");

	Params::UNarrationNoteWidget_C_SetScroll_Params Parms{};

	Parms.AddScrollValue = AddScrollValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MoveSuccess != nullptr)
		*MoveSuccess = Parms.MoveSuccess;

}


// Function NarrationNoteWidget.NarrationNoteWidget_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UNarrationNoteWidget_C::SetText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationNoteWidget_C", "SetText");

	Params::UNarrationNoteWidget_C_SetText_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationNoteWidget.NarrationNoteWidget_C.PlayFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationNoteWidget_C::PlayFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationNoteWidget_C", "PlayFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationNoteWidget.NarrationNoteWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationNoteWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationNoteWidget_C", "Tick");

	Params::UNarrationNoteWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationNoteWidget.NarrationNoteWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNarrationNoteWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationNoteWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationNoteWidget.NarrationNoteWidget_C.ExecuteUbergraph_NarrationNoteWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationNoteWidget_C::ExecuteUbergraph_NarrationNoteWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationNoteWidget_C", "ExecuteUbergraph_NarrationNoteWidget");

	Params::UNarrationNoteWidget_C_ExecuteUbergraph_NarrationNoteWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


