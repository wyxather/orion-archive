#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenuItemPanel.MainMenuItemPanel_C
// (None)

class UClass* UMainMenuItemPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuItemPanel_C");

	return Clss;
}


// MainMenuItemPanel_C MainMenuItemPanel.Default__MainMenuItemPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuItemPanel_C* UMainMenuItemPanel_C::GetDefaultObj()
{
	static class UMainMenuItemPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuItemPanel_C*>(UMainMenuItemPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuItemPanel.MainMenuItemPanel_C.SetCursorVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuItemPanel_C::SetCursorVisibility(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "SetCursorVisibility");

	Params::UMainMenuItemPanel_C_SetCursorVisibility_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.SetShining
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemPanel_C::SetShining()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "SetShining");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.SetTextVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuItemPanel_C::SetTextVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "SetTextVisible");

	Params::UMainMenuItemPanel_C_SetTextVisible_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.SetIMenuIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuItemPanel_C::SetIMenuIconVisibility(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "SetIMenuIconVisibility");

	Params::UMainMenuItemPanel_C_SetIMenuIconVisibility_Params Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.IsCancelAnimationPlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsPlaying                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuItemPanel_C::IsCancelAnimationPlaying(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "IsCancelAnimationPlaying");

	Params::UMainMenuItemPanel_C_IsCancelAnimationPlaying_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.GetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ItemText                                                         (Parm, OutParm)

void UMainMenuItemPanel_C::GetText(class FText* ItemText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "GetText");

	Params::UMainMenuItemPanel_C_GetText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemText != nullptr)
		*ItemText = Parms.ItemText;

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.SetMenuIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        IconTexLabel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MaskTexLabel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuItemPanel_C::SetMenuIcon(class FName IconTexLabel, class FName MaskTexLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "SetMenuIcon");

	Params::UMainMenuItemPanel_C_SetMenuIcon_Params Parms{};

	Parms.IconTexLabel = IconTexLabel;
	Parms.MaskTexLabel = MaskTexLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.CancelDefaultAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemPanel_C::CancelDefaultAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "CancelDefaultAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.DefaultAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemPanel_C::DefaultAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "DefaultAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.StartOutFocusCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuItemPanel_C::StartOutFocusCancel(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "StartOutFocusCancel");

	Params::UMainMenuItemPanel_C_StartOutFocusCancel_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.StartOutFocusDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuItemPanel_C::StartOutFocusDecide(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "StartOutFocusDecide");

	Params::UMainMenuItemPanel_C_StartOutFocusDecide_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.GetMainMenuState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMAINMENUSTATE          MainMenuState                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuItemPanel_C::GetMainMenuState(enum class EMAINMENUSTATE* MainMenuState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "GetMainMenuState");

	Params::UMainMenuItemPanel_C_GetMainMenuState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MainMenuState != nullptr)
		*MainMenuState = Parms.MainMenuState;

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.NewIconEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuItemPanel_C::NewIconEnable(bool NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "NewIconEnable");

	Params::UMainMenuItemPanel_C_NewIconEnable_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.ChangeEnable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UnEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NowSelect                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuItemPanel_C::ChangeEnable(bool UnEnable, bool NowSelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "ChangeEnable");

	Params::UMainMenuItemPanel_C_ChangeEnable_Params Parms{};

	Parms.UnEnable = UnEnable;
	Parms.NowSelect = NowSelect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemPanel_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.SetupText_WithTextLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        GameTextLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuItemPanel_C::SetupText_WithTextLabel(class FName GameTextLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "SetupText_WithTextLabel");

	Params::UMainMenuItemPanel_C_SetupText_WithTextLabel_Params Parms{};

	Parms.GameTextLabel = GameTextLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.SetupText_Direct
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainMenuItemPanel_C::SetupText_Direct(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "SetupText_Direct");

	Params::UMainMenuItemPanel_C_SetupText_Direct_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.SetupText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemPanel_C::SetupText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "SetupText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.Cancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuItemPanel_C::Cancel(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "Cancel");

	Params::UMainMenuItemPanel_C_Cancel_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.PlayAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Fast                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuItemPanel_C::PlayAnim(class UWidgetAnimation* Animation, bool Fast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "PlayAnim");

	Params::UMainMenuItemPanel_C_PlayAnim_Params Parms{};

	Parms.Animation = Animation;
	Parms.Fast = Fast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.GetHeight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Image_Size_Y                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuItemPanel_C::GetHeight(float* Image_Size_Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "GetHeight");

	Params::UMainMenuItemPanel_C_GetHeight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Image_Size_Y != nullptr)
		*Image_Size_Y = Parms.Image_Size_Y;

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.Decide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuItemPanel_C::Decide(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "Decide");

	Params::UMainMenuItemPanel_C_Decide_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AnimFast                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FromUp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuItemPanel_C::Focus(bool AnimFast, bool FromUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "Focus");

	Params::UMainMenuItemPanel_C_Focus_Params Parms{};

	Parms.AnimFast = AnimFast;
	Parms.FromUp = FromUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.OutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AnimFast                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               MoveUp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuItemPanel_C::OutFocus(bool AnimFast, bool MoveUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "OutFocus");

	Params::UMainMenuItemPanel_C_OutFocus_Params Parms{};

	Parms.AnimFast = AnimFast;
	Parms.MoveUp = MoveUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.GetCursorPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuItemPanel_C::GetCursorPosition(struct FVector2D* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "GetCursorPosition");

	Params::UMainMenuItemPanel_C_GetCursorPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainMenuItemPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.ResetAppearance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemPanel_C::ResetAppearance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "ResetAppearance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemPanel.MainMenuItemPanel_C.ExecuteUbergraph_MainMenuItemPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuItemPanel_C::ExecuteUbergraph_MainMenuItemPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemPanel_C", "ExecuteUbergraph_MainMenuItemPanel");

	Params::UMainMenuItemPanel_C_ExecuteUbergraph_MainMenuItemPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


