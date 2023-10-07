#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UICommonDialogItemBP.UICommonDialogItemBP_C
// (None)

class UClass* UUICommonDialogItemBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UICommonDialogItemBP_C");

	return Clss;
}


// UICommonDialogItemBP_C UICommonDialogItemBP.Default__UICommonDialogItemBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUICommonDialogItemBP_C* UUICommonDialogItemBP_C::GetDefaultObj()
{
	static class UUICommonDialogItemBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUICommonDialogItemBP_C*>(UUICommonDialogItemBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UICommonDialogItemBP.UICommonDialogItemBP_C.SetCursorVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUICommonDialogItemBP_C::SetCursorVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogItemBP_C", "SetCursorVisibility");

	Params::UUICommonDialogItemBP_C_SetCursorVisibility_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonDialogItemBP.UICommonDialogItemBP_C.SetBlood
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUICommonDialogItemBP_C::SetBlood(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogItemBP_C", "SetBlood");

	Params::UUICommonDialogItemBP_C_SetBlood_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonDialogItemBP.UICommonDialogItemBP_C.GetFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsFocus                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUICommonDialogItemBP_C::GetFocus(bool* IsFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogItemBP_C", "GetFocus");

	Params::UUICommonDialogItemBP_C_GetFocus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsFocus != nullptr)
		*IsFocus = Parms.IsFocus;

}


// Function UICommonDialogItemBP.UICommonDialogItemBP_C.GetFinisAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFinish                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUICommonDialogItemBP_C::GetFinisAnimation(bool* IsFinish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogItemBP_C", "GetFinisAnimation");

	Params::UUICommonDialogItemBP_C_GetFinisAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsFinish != nullptr)
		*IsFinish = Parms.IsFinish;

}


// Function UICommonDialogItemBP.UICommonDialogItemBP_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ShowText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUICommonDialogItemBP_C::SetText(class FText ShowText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogItemBP_C", "SetText");

	Params::UUICommonDialogItemBP_C_SetText_Params Parms{};

	Parms.ShowText = ShowText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonDialogItemBP.UICommonDialogItemBP_C.SetUIFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Focus                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Fast                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUICommonDialogItemBP_C::SetUIFocus(bool Focus, bool Fast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogItemBP_C", "SetUIFocus");

	Params::UUICommonDialogItemBP_C_SetUIFocus_Params Parms{};

	Parms.Focus = Focus;
	Parms.Fast = Fast;

	UObject::ProcessEvent(Func, &Parms);

}

}


