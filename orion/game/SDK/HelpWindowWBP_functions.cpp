#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass HelpWindowWBP.HelpWindowWBP_C
// (None)

class UClass* UHelpWindowWBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HelpWindowWBP_C");

	return Clss;
}


// HelpWindowWBP_C HelpWindowWBP.Default__HelpWindowWBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHelpWindowWBP_C* UHelpWindowWBP_C::GetDefaultObj()
{
	static class UHelpWindowWBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHelpWindowWBP_C*>(UHelpWindowWBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HelpWindowWBP.HelpWindowWBP_C.PreSetText
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHelpWindowWBP_C::PreSetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "PreSetText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HelpWindowWBP.HelpWindowWBP_C.RefreshText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSUseInputType         InputType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHelpWindowWBP_C::RefreshText(enum class EKSUseInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "RefreshText");

	Params::UHelpWindowWBP_C_RefreshText_Params Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpWindowWBP.HelpWindowWBP_C.FlipHelpWindow
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFlip                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHelpWindowWBP_C::FlipHelpWindow(bool IsFlip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "FlipHelpWindow");

	Params::UHelpWindowWBP_C_FlipHelpWindow_Params Parms{};

	Parms.IsFlip = IsFlip;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpWindowWBP.HelpWindowWBP_C.SetPositionByWidget
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceFlip                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHelpWindowWBP_C::SetPositionByWidget(class UUserWidget* Widget, bool ForceFlip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "SetPositionByWidget");

	Params::UHelpWindowWBP_C_SetPositionByWidget_Params Parms{};

	Parms.Widget = Widget;
	Parms.ForceFlip = ForceFlip;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpWindowWBP.HelpWindowWBP_C.ScrollToTop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHelpWindowWBP_C::ScrollToTop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "ScrollToTop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HelpWindowWBP.HelpWindowWBP_C.UpdateScrollIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHelpWindowWBP_C::UpdateScrollIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "UpdateScrollIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HelpWindowWBP.HelpWindowWBP_C.ScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHelpWindowWBP_C::ScrollAxis(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "ScrollAxis");

	Params::UHelpWindowWBP_C_ScrollAxis_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpWindowWBP.HelpWindowWBP_C.SetTextLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TextLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHelpWindowWBP_C::SetTextLabel(class FName TextLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "SetTextLabel");

	Params::UHelpWindowWBP_C_SetTextLabel_Params Parms{};

	Parms.TextLabel = TextLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpWindowWBP.HelpWindowWBP_C.Init
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UHelpWindowWBP_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "Init");

	Params::UHelpWindowWBP_C_Init_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HelpWindowWBP.HelpWindowWBP_C.ForceOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHelpWindowWBP_C::ForceOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "ForceOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HelpWindowWBP.HelpWindowWBP_C.ForceHide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHelpWindowWBP_C::ForceHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "ForceHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HelpWindowWBP.HelpWindowWBP_C.IsPlayingCloseAnim
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlaying                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHelpWindowWBP_C::IsPlayingCloseAnim(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "IsPlayingCloseAnim");

	Params::UHelpWindowWBP_C_IsPlayingCloseAnim_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;

}


// Function HelpWindowWBP.HelpWindowWBP_C.UpdateAnim
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHelpWindowWBP_C::UpdateAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "UpdateAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HelpWindowWBP.HelpWindowWBP_C.State_OnEnd
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHelpWindowWBP_C::State_OnEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "State_OnEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HelpWindowWBP.HelpWindowWBP_C.State_OnUpdate
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHelpWindowWBP_C::State_OnUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "State_OnUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HelpWindowWBP.HelpWindowWBP_C.State_OnBegin
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHelpWindowWBP_C::State_OnBegin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "State_OnBegin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HelpWindowWBP.HelpWindowWBP_C.UpdateState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHelpWindowWBP_C::UpdateState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "UpdateState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HelpWindowWBP.HelpWindowWBP_C.SetNextState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NextState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHelpWindowWBP_C::SetNextState(int32 NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "SetNextState");

	Params::UHelpWindowWBP_C_SetNextState_Params Parms{};

	Parms.NextState = NextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpWindowWBP.HelpWindowWBP_C.PlayAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHelpWindowWBP_C::PlayAnim(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "PlayAnim");

	Params::UHelpWindowWBP_C_PlayAnim_Params Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpWindowWBP.HelpWindowWBP_C.SetGameText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TextLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHelpWindowWBP_C::SetGameText(class FName TextLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "SetGameText");

	Params::UHelpWindowWBP_C_SetGameText_Params Parms{};

	Parms.TextLabel = TextLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpWindowWBP.HelpWindowWBP_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UHelpWindowWBP_C::SetText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "SetText");

	Params::UHelpWindowWBP_C_SetText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpWindowWBP.HelpWindowWBP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHelpWindowWBP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "Tick");

	Params::UHelpWindowWBP_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpWindowWBP.HelpWindowWBP_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHelpWindowWBP_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HelpWindowWBP.HelpWindowWBP_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHelpWindowWBP_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HelpWindowWBP.HelpWindowWBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHelpWindowWBP_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HelpWindowWBP.HelpWindowWBP_C.ChangeInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSUseInputType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHelpWindowWBP_C::ChangeInputMode(enum class EKSUseInputType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "ChangeInputMode");

	Params::UHelpWindowWBP_C_ChangeInputMode_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpWindowWBP.HelpWindowWBP_C.ExecuteUbergraph_HelpWindowWBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHelpWindowWBP_C::ExecuteUbergraph_HelpWindowWBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("HelpWindowWBP_C", "ExecuteUbergraph_HelpWindowWBP");

	Params::UHelpWindowWBP_C_ExecuteUbergraph_HelpWindowWBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


