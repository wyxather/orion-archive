#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenuSubItemPanel.MainMenuSubItemPanel_C
// (None)

class UClass* UMainMenuSubItemPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuSubItemPanel_C");

	return Clss;
}


// MainMenuSubItemPanel_C MainMenuSubItemPanel.Default__MainMenuSubItemPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuSubItemPanel_C* UMainMenuSubItemPanel_C::GetDefaultObj()
{
	static class UMainMenuSubItemPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuSubItemPanel_C*>(UMainMenuSubItemPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuSubItemPanel.MainMenuSubItemPanel_C.NewIconEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuSubItemPanel_C::NewIconEnable(bool NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuSubItemPanel_C", "NewIconEnable");

	Params::UMainMenuSubItemPanel_C_NewIconEnable_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuSubItemPanel.MainMenuSubItemPanel_C.GetEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsUnEnable                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuSubItemPanel_C::GetEnable(bool* IsUnEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuSubItemPanel_C", "GetEnable");

	Params::UMainMenuSubItemPanel_C_GetEnable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsUnEnable != nullptr)
		*IsUnEnable = Parms.IsUnEnable;

}


// Function MainMenuSubItemPanel.MainMenuSubItemPanel_C.ChangeEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuSubItemPanel_C::ChangeEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuSubItemPanel_C", "ChangeEnable");

	Params::UMainMenuSubItemPanel_C_ChangeEnable_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuSubItemPanel.MainMenuSubItemPanel_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuSubItemPanel_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuSubItemPanel_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuSubItemPanel.MainMenuSubItemPanel_C.SetupText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuSubItemPanel_C::SetupText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuSubItemPanel_C", "SetupText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuSubItemPanel.MainMenuSubItemPanel_C.Cancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuSubItemPanel_C::Cancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuSubItemPanel_C", "Cancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuSubItemPanel.MainMenuSubItemPanel_C.PlayAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Fast                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuSubItemPanel_C::PlayAnim(class UWidgetAnimation* Animation, bool Fast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuSubItemPanel_C", "PlayAnim");

	Params::UMainMenuSubItemPanel_C_PlayAnim_Params Parms{};

	Parms.Animation = Animation;
	Parms.Fast = Fast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuSubItemPanel.MainMenuSubItemPanel_C.GetHeight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Image_Size_Y                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuSubItemPanel_C::GetHeight(float* Image_Size_Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuSubItemPanel_C", "GetHeight");

	Params::UMainMenuSubItemPanel_C_GetHeight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Image_Size_Y != nullptr)
		*Image_Size_Y = Parms.Image_Size_Y;

}


// Function MainMenuSubItemPanel.MainMenuSubItemPanel_C.Decide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuSubItemPanel_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuSubItemPanel_C", "Decide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuSubItemPanel.MainMenuSubItemPanel_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AnimFast                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FromUp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuSubItemPanel_C::Focus(bool AnimFast, bool FromUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuSubItemPanel_C", "Focus");

	Params::UMainMenuSubItemPanel_C_Focus_Params Parms{};

	Parms.AnimFast = AnimFast;
	Parms.FromUp = FromUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuSubItemPanel.MainMenuSubItemPanel_C.OutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AnimFast                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               MoveUp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuSubItemPanel_C::OutFocus(bool AnimFast, bool MoveUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuSubItemPanel_C", "OutFocus");

	Params::UMainMenuSubItemPanel_C_OutFocus_Params Parms{};

	Parms.AnimFast = AnimFast;
	Parms.MoveUp = MoveUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuSubItemPanel.MainMenuSubItemPanel_C.GetCursorPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuSubItemPanel_C::GetCursorPosition(struct FVector2D* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuSubItemPanel_C", "GetCursorPosition");

	Params::UMainMenuSubItemPanel_C_GetCursorPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function MainMenuSubItemPanel.MainMenuSubItemPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainMenuSubItemPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuSubItemPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuSubItemPanel.MainMenuSubItemPanel_C.ExecuteUbergraph_MainMenuSubItemPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuSubItemPanel_C::ExecuteUbergraph_MainMenuSubItemPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuSubItemPanel_C", "ExecuteUbergraph_MainMenuSubItemPanel");

	Params::UMainMenuSubItemPanel_C_ExecuteUbergraph_MainMenuSubItemPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


