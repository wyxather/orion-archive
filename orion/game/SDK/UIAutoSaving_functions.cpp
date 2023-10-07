#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UIAutoSaving.UIAutoSaving_C
// (None)

class UClass* UUIAutoSaving_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIAutoSaving_C");

	return Clss;
}


// UIAutoSaving_C UIAutoSaving.Default__UIAutoSaving_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUIAutoSaving_C* UUIAutoSaving_C::GetDefaultObj()
{
	static class UUIAutoSaving_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIAutoSaving_C*>(UUIAutoSaving_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UIAutoSaving.UIAutoSaving_C.SetText
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForOptionMenu                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUIAutoSaving_C::SetText(bool ForOptionMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIAutoSaving_C", "SetText");

	Params::UUIAutoSaving_C_SetText_Params Parms{};

	Parms.ForOptionMenu = ForOptionMenu;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UIAutoSaving.UIAutoSaving_C.CloseUI
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUIAutoSaving_C::CloseUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIAutoSaving_C", "CloseUI");

	Params::UUIAutoSaving_C_CloseUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UIAutoSaving.UIAutoSaving_C.OpenUI
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUIAutoSaving_C::OpenUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIAutoSaving_C", "OpenUI");

	Params::UUIAutoSaving_C_OpenUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UIAutoSaving.UIAutoSaving_C.PlayAnim
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            CurrentAnimation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLoop                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIAutoSaving_C::PlayAnim(class UWidgetAnimation* CurrentAnimation, bool IsLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIAutoSaving_C", "PlayAnim");

	Params::UUIAutoSaving_C_PlayAnim_Params Parms{};

	Parms.CurrentAnimation = CurrentAnimation;
	Parms.IsLoop = IsLoop;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIAutoSaving.UIAutoSaving_C.Init
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIAutoSaving_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIAutoSaving_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIAutoSaving.UIAutoSaving_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUIAutoSaving_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIAutoSaving_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIAutoSaving.UIAutoSaving_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIAutoSaving_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIAutoSaving_C", "Tick");

	Params::UUIAutoSaving_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIAutoSaving.UIAutoSaving_C.ExecuteUbergraph_UIAutoSaving
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIAutoSaving_C::ExecuteUbergraph_UIAutoSaving(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIAutoSaving_C", "ExecuteUbergraph_UIAutoSaving");

	Params::UUIAutoSaving_C_ExecuteUbergraph_UIAutoSaving_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


