#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorialCommonUI.UITutorialCommonUI_C
// (None)

class UClass* UUITutorialCommonUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorialCommonUI_C");

	return Clss;
}


// UITutorialCommonUI_C UITutorialCommonUI.Default__UITutorialCommonUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorialCommonUI_C* UUITutorialCommonUI_C::GetDefaultObj()
{
	static class UUITutorialCommonUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorialCommonUI_C*>(UUITutorialCommonUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorialCommonUI.UITutorialCommonUI_C.IsPlayingAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsPlaying                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUITutorialCommonUI_C::IsPlayingAnim(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialCommonUI_C", "IsPlayingAnim");

	Params::UUITutorialCommonUI_C_IsPlayingAnim_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;

}


// Function UITutorialCommonUI.UITutorialCommonUI_C.Check EpilogueAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Play                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUITutorialCommonUI_C::Check_EpilogueAnimation(bool* Play)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialCommonUI_C", "Check EpilogueAnimation");

	Params::UUITutorialCommonUI_C_Check_EpilogueAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Play != nullptr)
		*Play = Parms.Play;

}


// Function UITutorialCommonUI.UITutorialCommonUI_C.SetEndCardMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUITutorialCommonUI_C::SetEndCardMode(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialCommonUI_C", "SetEndCardMode");

	Params::UUITutorialCommonUI_C_SetEndCardMode_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UITutorialCommonUI.UITutorialCommonUI_C.SetTextActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              TempleteType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SetTitle                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUITutorialCommonUI_C::SetTextActive(bool IsActive, int32 TempleteType, bool* SetTitle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialCommonUI_C", "SetTextActive");

	Params::UUITutorialCommonUI_C_SetTextActive_Params Parms{};

	Parms.IsActive = IsActive;
	Parms.TempleteType = TempleteType;

	UObject::ProcessEvent(Func, &Parms);

	if (SetTitle != nullptr)
		*SetTitle = Parms.SetTitle;

}


// Function UITutorialCommonUI.UITutorialCommonUI_C.RemoveTemplate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorialCommonUI_C::RemoveTemplate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialCommonUI_C", "RemoveTemplate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialCommonUI.UITutorialCommonUI_C.AddTemplate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUITutorialTemplateBase*     AddTemplate                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialCommonUI_C::AddTemplate(class UUITutorialTemplateBase* AddTemplate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialCommonUI_C", "AddTemplate");

	Params::UUITutorialCommonUI_C_AddTemplate_Params Parms{};

	Parms.AddTemplate = AddTemplate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UITutorialCommonUI.UITutorialCommonUI_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUITutorialCommonUI_C::SetTitle(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialCommonUI_C", "SetTitle");

	Params::UUITutorialCommonUI_C_SetTitle_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UITutorialCommonUI.UITutorialCommonUI_C.Set UIFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Focus                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Fast                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsEpilouge                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUITutorialCommonUI_C::Set_UIFocus(bool Focus, bool Fast, bool IsEpilouge)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialCommonUI_C", "Set UIFocus");

	Params::UUITutorialCommonUI_C_Set_UIFocus_Params Parms{};

	Parms.Focus = Focus;
	Parms.Fast = Fast;
	Parms.IsEpilouge = IsEpilouge;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UITutorialCommonUI.UITutorialCommonUI_C.SetGuide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorialCommonUI_C::SetGuide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialCommonUI_C", "SetGuide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialCommonUI.UITutorialCommonUI_C.PlayEpilogueAnim_Inner
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUITutorialCommonUI_C::PlayEpilogueAnim_Inner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialCommonUI_C", "PlayEpilogueAnim_Inner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialCommonUI.UITutorialCommonUI_C.ExecuteUbergraph_UITutorialCommonUI
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialCommonUI_C::ExecuteUbergraph_UITutorialCommonUI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialCommonUI_C", "ExecuteUbergraph_UITutorialCommonUI");

	Params::UUITutorialCommonUI_C_ExecuteUbergraph_UITutorialCommonUI_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


