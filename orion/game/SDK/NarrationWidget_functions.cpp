#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass NarrationWidget.NarrationWidget_C
// (None)

class UClass* UNarrationWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NarrationWidget_C");

	return Clss;
}


// NarrationWidget_C NarrationWidget.Default__NarrationWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNarrationWidget_C* UNarrationWidget_C::GetDefaultObj()
{
	static class UNarrationWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNarrationWidget_C*>(UNarrationWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NarrationWidget.NarrationWidget_C.CheckNextStepForGroup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ViewIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AllFade                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              StartIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EndIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsNextStep                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNarrationWidget_C::CheckNextStepForGroup(int32 ViewIndex, bool AllFade, int32 StartIndex, int32 EndIndex, bool* IsNextStep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "CheckNextStepForGroup");

	Params::UNarrationWidget_C_CheckNextStepForGroup_Params Parms{};

	Parms.ViewIndex = ViewIndex;
	Parms.AllFade = AllFade;
	Parms.StartIndex = StartIndex;
	Parms.EndIndex = EndIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (IsNextStep != nullptr)
		*IsNextStep = Parms.IsNextStep;

}


// Function NarrationWidget.NarrationWidget_C.CheckNextStep
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ViewIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsNextStep                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNarrationWidget_C::CheckNextStep(int32 ViewIndex, bool* IsNextStep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "CheckNextStep");

	Params::UNarrationWidget_C_CheckNextStep_Params Parms{};

	Parms.ViewIndex = ViewIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (IsNextStep != nullptr)
		*IsNextStep = Parms.IsNextStep;

}


// Function NarrationWidget.NarrationWidget_C.SetState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENARRATION_STATE        State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationWidget_C::SetState(enum class ENARRATION_STATE State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "SetState");

	Params::UNarrationWidget_C_SetState_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationWidget.NarrationWidget_C.RequestMultiLineDraw
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::RequestMultiLineDraw()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "RequestMultiLineDraw");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.GetAllFadeAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ViewIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AllFade                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNarrationWidget_C::GetAllFadeAnim(int32 ViewIndex, bool* AllFade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "GetAllFadeAnim");

	Params::UNarrationWidget_C_GetAllFadeAnim_Params Parms{};

	Parms.ViewIndex = ViewIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (AllFade != nullptr)
		*AllFade = Parms.AllFade;

}


// Function NarrationWidget.NarrationWidget_C.SettingOtherWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::SettingOtherWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "SettingOtherWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.CheckCloseBGAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::CheckCloseBGAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "CheckCloseBGAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.CheckOpenBGAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::CheckOpenBGAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "CheckOpenBGAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.Get Event Fade Color
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                OutSlateColor                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationWidget_C::Get_Event_Fade_Color(struct FLinearColor* OutSlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "Get Event Fade Color");

	Params::UNarrationWidget_C_Get_Event_Fade_Color_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutSlateColor != nullptr)
		*OutSlateColor = std::move(Parms.OutSlateColor);

}


// Function NarrationWidget.NarrationWidget_C.CloseFlashback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::CloseFlashback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "CloseFlashback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.ResetFlashbackParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AllReset                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNarrationWidget_C::ResetFlashbackParam(bool AllReset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "ResetFlashbackParam");

	Params::UNarrationWidget_C_ResetFlashbackParam_Params Parms{};

	Parms.AllReset = AllReset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationWidget.NarrationWidget_C.Update Flashback
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               End                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNarrationWidget_C::Update_Flashback(bool* End)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "Update Flashback");

	Params::UNarrationWidget_C_Update_Flashback_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (End != nullptr)
		*End = Parms.End;

}


// Function NarrationWidget.NarrationWidget_C.PhraseMessageDraw_Inner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::PhraseMessageDraw_Inner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "PhraseMessageDraw_Inner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.SettingGroupParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ViewIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationWidget_C::SettingGroupParam(int32 ViewIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "SettingGroupParam");

	Params::UNarrationWidget_C_SettingGroupParam_Params Parms{};

	Parms.ViewIndex = ViewIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationWidget.NarrationWidget_C.UpdateGroupDrawMessage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnd                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNarrationWidget_C::UpdateGroupDrawMessage(bool* IsEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "UpdateGroupDrawMessage");

	Params::UNarrationWidget_C_UpdateGroupDrawMessage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEnd != nullptr)
		*IsEnd = Parms.IsEnd;

}


// Function NarrationWidget.NarrationWidget_C.GetCurrentNarration
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ViewIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNarrationMessageWidgetBase* CurrentLine                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationWidget_C::GetCurrentNarration(int32 ViewIndex, class UNarrationMessageWidgetBase** CurrentLine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "GetCurrentNarration");

	Params::UNarrationWidget_C_GetCurrentNarration_Params Parms{};

	Parms.ViewIndex = ViewIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentLine != nullptr)
		*CurrentLine = Parms.CurrentLine;

}


// Function NarrationWidget.NarrationWidget_C.IsNarrationGroupEnd
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ViewIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Ret                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNarrationWidget_C::IsNarrationGroupEnd(int32 ViewIndex, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "IsNarrationGroupEnd");

	Params::UNarrationWidget_C_IsNarrationGroupEnd_Params Parms{};

	Parms.ViewIndex = ViewIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;

}


// Function NarrationWidget.NarrationWidget_C.GetTextGroupLabel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ViewIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                TextArray                                                        (Parm, OutParm)

void UNarrationWidget_C::GetTextGroupLabel(int32 ViewIndex, TArray<class FName>* TextArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "GetTextGroupLabel");

	Params::UNarrationWidget_C_GetTextGroupLabel_Params Parms{};

	Parms.ViewIndex = ViewIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (TextArray != nullptr)
		*TextArray = std::move(Parms.TextArray);

}


// Function NarrationWidget.NarrationWidget_C.PlayCloseBGAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::PlayCloseBGAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "PlayCloseBGAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.PlayOpenBGAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::PlayOpenBGAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "PlayOpenBGAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.PlayCloseAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::PlayCloseAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "PlayCloseAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.PlayOpenAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::PlayOpenAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "PlayOpenAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.CheckCloseAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::CheckCloseAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "CheckCloseAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.CheckOpenAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::CheckOpenAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "CheckOpenAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.Debug Auto Narration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::Debug_Auto_Narration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "Debug Auto Narration");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OneLineDraw
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNarrationMessageWidgetBase* TargetObject                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TalkLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TextJustification                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DisableAnimation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsVoiceSkip                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UNarrationWidget_C::OneLineDraw(class UNarrationMessageWidgetBase* TargetObject, class FName TalkLabel, int32 TextJustification, bool DisableAnimation, bool IsVoiceSkip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OneLineDraw");

	Params::UNarrationWidget_C_OneLineDraw_Params Parms{};

	Parms.TargetObject = TargetObject;
	Parms.TalkLabel = TalkLabel;
	Parms.TextJustification = TextJustification;
	Parms.DisableAnimation = DisableAnimation;
	Parms.IsVoiceSkip = IsVoiceSkip;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NarrationWidget.NarrationWidget_C.UpdateDrawMessage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnd                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNarrationWidget_C::UpdateDrawMessage(bool* IsEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "UpdateDrawMessage");

	Params::UNarrationWidget_C_UpdateDrawMessage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEnd != nullptr)
		*IsEnd = Parms.IsEnd;

}


// Function NarrationWidget.NarrationWidget_C.SetPlayPageMessage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNarrationDataBase          Page                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UNarrationWidget_C::SetPlayPageMessage(struct FNarrationDataBase& Page)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "SetPlayPageMessage");

	Params::UNarrationWidget_C_SetPlayPageMessage_Params Parms{};

	Parms.Page = Page;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NarrationWidget.NarrationWidget_C.NextPage
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnd                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNarrationWidget_C::NextPage(bool* IsEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "NextPage");

	Params::UNarrationWidget_C_NextPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEnd != nullptr)
		*IsEnd = Parms.IsEnd;

}


// Function NarrationWidget.NarrationWidget_C.SelfClose
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::SelfClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "SelfClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UNarrationWidget_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "IsRunning");

	Params::UNarrationWidget_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NarrationWidget.NarrationWidget_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationWidget_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnRightAxisX");

	Params::UNarrationWidget_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationWidget.NarrationWidget_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationWidget_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnRightAxisY");

	Params::UNarrationWidget_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationWidget.NarrationWidget_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationWidget_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnLeftAxisX");

	Params::UNarrationWidget_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationWidget.NarrationWidget_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationWidget_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnGamePadAxisX");

	Params::UNarrationWidget_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationWidget.NarrationWidget_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationWidget_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnGamePadAxisY");

	Params::UNarrationWidget_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationWidget.NarrationWidget_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNarrationWidget_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnListPaging");

	Params::UNarrationWidget_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationWidget.NarrationWidget_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationWidget_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "WorldMapSlowCursorX");

	Params::UNarrationWidget_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationWidget.NarrationWidget_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationWidget_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "WorldMapSlowCursorY");

	Params::UNarrationWidget_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationWidget.NarrationWidget_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationWidget_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "HelpScrollAxis");

	Params::UNarrationWidget_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationWidget.NarrationWidget_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.Debug_Localization
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDebug                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNarrationWidget_C::Debug_Localization(bool IsDebug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "Debug_Localization");

	Params::UNarrationWidget_C_Debug_Localization_Params Parms{};

	Parms.IsDebug = IsDebug;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationWidget.NarrationWidget_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationWidget_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnLeftAxisY");

	Params::UNarrationWidget_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationWidget.NarrationWidget_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "Tick");

	Params::UNarrationWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationWidget.NarrationWidget_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.Close
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsForceClose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNarrationWidget_C::Close(bool IsForceClose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "Close");

	Params::UNarrationWidget_C_Close_Params Parms{};

	Parms.IsForceClose = IsForceClose;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationWidget.NarrationWidget_C.CloseMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::CloseMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "CloseMessage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.AllDrawMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::AllDrawMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "AllDrawMessage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.PhraseMessageDraw
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::PhraseMessageDraw()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "PhraseMessageDraw");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.OpenInner
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationWidget_C::OpenInner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "OpenInner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationWidget.NarrationWidget_C.SetAnimationMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassBGOpen                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PassBGClose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNarrationWidget_C::SetAnimationMode(bool PassBGOpen, bool PassBGClose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "SetAnimationMode");

	Params::UNarrationWidget_C_SetAnimationMode_Params Parms{};

	Parms.PassBGOpen = PassBGOpen;
	Parms.PassBGClose = PassBGClose;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationWidget.NarrationWidget_C.PlayNarration
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NarrationSetLabel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationWidget_C::PlayNarration(class FName NarrationSetLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "PlayNarration");

	Params::UNarrationWidget_C_PlayNarration_Params Parms{};

	Parms.NarrationSetLabel = NarrationSetLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationWidget.NarrationWidget_C.PlayNote
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NoteLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseBackground                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNarrationWidget_C::PlayNote(class FName NoteLabel, bool UseBackground)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "PlayNote");

	Params::UNarrationWidget_C_PlayNote_Params Parms{};

	Parms.NoteLabel = NoteLabel;
	Parms.UseBackground = UseBackground;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationWidget.NarrationWidget_C.NoticeCreatedWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWIDGET_CREATE_PHASE    CreatePhase                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationWidget_C::NoticeCreatedWidget(enum class EWIDGET_CREATE_PHASE CreatePhase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "NoticeCreatedWidget");

	Params::UNarrationWidget_C_NoticeCreatedWidget_Params Parms{};

	Parms.CreatePhase = CreatePhase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationWidget.NarrationWidget_C.ExecuteUbergraph_NarrationWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationWidget_C::ExecuteUbergraph_NarrationWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationWidget_C", "ExecuteUbergraph_NarrationWidget");

	Params::UNarrationWidget_C_ExecuteUbergraph_NarrationWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


