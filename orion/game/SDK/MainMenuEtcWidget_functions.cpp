#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenuEtcWidget.MainMenuEtcWidget_C
// (None)

class UClass* UMainMenuEtcWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuEtcWidget_C");

	return Clss;
}


// MainMenuEtcWidget_C MainMenuEtcWidget.Default__MainMenuEtcWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuEtcWidget_C* UMainMenuEtcWidget_C::GetDefaultObj()
{
	static class UMainMenuEtcWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuEtcWidget_C*>(UMainMenuEtcWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuEtcWidget.MainMenuEtcWidget_C.SetupMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuEtcWidget_C::SetupMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuEtcWidget_C", "SetupMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuEtcWidget.MainMenuEtcWidget_C.MenuOutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuEtcWidget_C::MenuOutFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuEtcWidget_C", "MenuOutFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuEtcWidget.MainMenuEtcWidget_C.MenuFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuEtcWidget_C::MenuFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuEtcWidget_C", "MenuFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuEtcWidget.MainMenuEtcWidget_C.SelectCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuEtcWidget_C::SelectCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuEtcWidget_C", "SelectCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuEtcWidget.MainMenuEtcWidget_C.SelectDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuEtcWidget_C::SelectDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuEtcWidget_C", "SelectDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuEtcWidget.MainMenuEtcWidget_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuEtcWidget_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuEtcWidget_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuEtcWidget.MainMenuEtcWidget_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuEtcWidget_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuEtcWidget_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuEtcWidget.MainMenuEtcWidget_C.GetCursorSelect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CursorSelect                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuEtcWidget_C::GetCursorSelect(int32* CursorSelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuEtcWidget_C", "GetCursorSelect");

	Params::UMainMenuEtcWidget_C_GetCursorSelect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CursorSelect != nullptr)
		*CursorSelect = Parms.CursorSelect;

}


// Function MainMenuEtcWidget.MainMenuEtcWidget_C.SetCursorSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CursorSelect                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuEtcWidget_C::SetCursorSelect(int32 CursorSelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuEtcWidget_C", "SetCursorSelect");

	Params::UMainMenuEtcWidget_C_SetCursorSelect_Params Parms{};

	Parms.CursorSelect = CursorSelect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuEtcWidget.MainMenuEtcWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainMenuEtcWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuEtcWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuEtcWidget.MainMenuEtcWidget_C.ExecuteUbergraph_MainMenuEtcWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuEtcWidget_C::ExecuteUbergraph_MainMenuEtcWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuEtcWidget_C", "ExecuteUbergraph_MainMenuEtcWidget");

	Params::UMainMenuEtcWidget_C_ExecuteUbergraph_MainMenuEtcWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


