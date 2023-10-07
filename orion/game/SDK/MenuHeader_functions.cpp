#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MenuHeader.MenuHeader_C
// (None)

class UClass* UMenuHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuHeader_C");

	return Clss;
}


// MenuHeader_C MenuHeader.Default__MenuHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenuHeader_C* UMenuHeader_C::GetDefaultObj()
{
	static class UMenuHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuHeader_C*>(UMenuHeader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MenuHeader.MenuHeader_C.IsUIPartsRunning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               IsRunning                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuHeader_C::IsUIPartsRunning(bool* IsRunning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuHeader_C", "IsUIPartsRunning");

	Params::UMenuHeader_C_IsUIPartsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsRunning != nullptr)
		*IsRunning = Parms.IsRunning;

}


// Function MenuHeader.MenuHeader_C.IsPlayingAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               IsPlaying                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuHeader_C::IsPlayingAnim(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuHeader_C", "IsPlayingAnim");

	Params::UMenuHeader_C_IsPlayingAnim_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;

}


// Function MenuHeader.MenuHeader_C.SetGameText_FormatText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        FormatTextLabel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TextLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuHeader_C::SetGameText_FormatText(class FName FormatTextLabel, class FName TextLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuHeader_C", "SetGameText_FormatText");

	Params::UMenuHeader_C_SetGameText_FormatText_Params Parms{};

	Parms.FormatTextLabel = FormatTextLabel;
	Parms.TextLabel = TextLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuHeader.MenuHeader_C.Set Game TextLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        In_Label                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuHeader_C::Set_Game_TextLabel(class FName In_Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuHeader_C", "Set Game TextLabel");

	Params::UMenuHeader_C_Set_Game_TextLabel_Params Parms{};

	Parms.In_Label = In_Label;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuHeader.MenuHeader_C.ResetAnimaion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuHeader_C::ResetAnimaion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuHeader_C", "ResetAnimaion");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuHeader.MenuHeader_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        In_Text                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UMenuHeader_C::SetText(class FText In_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuHeader_C", "SetText");

	Params::UMenuHeader_C_SetText_Params Parms{};

	Parms.In_Text = In_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuHeader.MenuHeader_C.InitWidgetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuHeader_C::InitWidgetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuHeader_C", "InitWidgetData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuHeader.MenuHeader_C.OpenWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuHeader_C::OpenWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuHeader_C", "OpenWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuHeader.MenuHeader_C.CloseWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuHeader_C::CloseWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuHeader_C", "CloseWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuHeader.MenuHeader_C.ExecuteUbergraph_MenuHeader
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuHeader_C::ExecuteUbergraph_MenuHeader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MenuHeader_C", "ExecuteUbergraph_MenuHeader");

	Params::UMenuHeader_C_ExecuteUbergraph_MenuHeader_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


