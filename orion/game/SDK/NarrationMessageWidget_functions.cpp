#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass NarrationMessageWidget.NarrationMessageWidget_C
// (None)

class UClass* UNarrationMessageWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NarrationMessageWidget_C");

	return Clss;
}


// NarrationMessageWidget_C NarrationMessageWidget.Default__NarrationMessageWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNarrationMessageWidget_C* UNarrationMessageWidget_C::GetDefaultObj()
{
	static class UNarrationMessageWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNarrationMessageWidget_C*>(UNarrationMessageWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NarrationMessageWidget.NarrationMessageWidget_C.CheckNewLineRemove
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Body                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        RetText                                                          (Parm, OutParm)

void UNarrationMessageWidget_C::CheckNewLineRemove(class FText Body, class FText* RetText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationMessageWidget_C", "CheckNewLineRemove");

	Params::UNarrationMessageWidget_C_CheckNewLineRemove_Params Parms{};

	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

	if (RetText != nullptr)
		*RetText = Parms.RetText;

}


// Function NarrationMessageWidget.NarrationMessageWidget_C.UpdateState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationMessageWidget_C::UpdateState(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationMessageWidget_C", "UpdateState");

	Params::UNarrationMessageWidget_C_UpdateState_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationMessageWidget.NarrationMessageWidget_C.PlayFadeAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationMessageWidget_C::PlayFadeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationMessageWidget_C", "PlayFadeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationMessageWidget.NarrationMessageWidget_C.GetTextEndOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ETextJustify            Justification                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   TextSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   TmpOffset1                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationMessageWidget_C::GetTextEndOffset(enum class ETextJustify Justification, const struct FVector2D& TextSize, struct FVector2D* TmpOffset1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationMessageWidget_C", "GetTextEndOffset");

	Params::UNarrationMessageWidget_C_GetTextEndOffset_Params Parms{};

	Parms.Justification = Justification;
	Parms.TextSize = TextSize;

	UObject::ProcessEvent(Func, &Parms);

	if (TmpOffset1 != nullptr)
		*TmpOffset1 = std::move(Parms.TmpOffset1);

}


// Function NarrationMessageWidget.NarrationMessageWidget_C.GetTextStartOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ETextJustify            Justification                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   TextSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   TmpOffset1                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationMessageWidget_C::GetTextStartOffset(enum class ETextJustify Justification, const struct FVector2D& TextSize, struct FVector2D* TmpOffset1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationMessageWidget_C", "GetTextStartOffset");

	Params::UNarrationMessageWidget_C_GetTextStartOffset_Params Parms{};

	Parms.Justification = Justification;
	Parms.TextSize = TextSize;

	UObject::ProcessEvent(Func, &Parms);

	if (TmpOffset1 != nullptr)
		*TmpOffset1 = std::move(Parms.TmpOffset1);

}


// Function NarrationMessageWidget.NarrationMessageWidget_C.SettingText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Body                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              DrawTime                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextJustify            Justification                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationMessageWidget_C::SettingText(class FText Body, float DrawTime, enum class ETextJustify Justification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationMessageWidget_C", "SettingText");

	Params::UNarrationMessageWidget_C_SettingText_Params Parms{};

	Parms.Body = Body;
	Parms.DrawTime = DrawTime;
	Parms.Justification = Justification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationMessageWidget.NarrationMessageWidget_C.PlayVoice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalkVoice                  VoiceData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UNarrationMessageWidget_C::PlayVoice(const struct FTalkVoice& VoiceData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationMessageWidget_C", "PlayVoice");

	Params::UNarrationMessageWidget_C_PlayVoice_Params Parms{};

	Parms.VoiceData = VoiceData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationMessageWidget.NarrationMessageWidget_C.SetTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DefaultTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationMessageWidget_C::SetTime(float DefaultTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationMessageWidget_C", "SetTime");

	Params::UNarrationMessageWidget_C_SetTime_Params Parms{};

	Parms.DefaultTime = DefaultTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationMessageWidget.NarrationMessageWidget_C.PlayMessage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              TextJustification                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DisableAnimation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              DrawTime                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalkVoice                  VoiceData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UNarrationMessageWidget_C::PlayMessage(class FText& Text, int32 TextJustification, bool DisableAnimation, float DrawTime, const struct FTalkVoice& VoiceData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationMessageWidget_C", "PlayMessage");

	Params::UNarrationMessageWidget_C_PlayMessage_Params Parms{};

	Parms.Text = Text;
	Parms.TextJustification = TextJustification;
	Parms.DisableAnimation = DisableAnimation;
	Parms.DrawTime = DrawTime;
	Parms.VoiceData = VoiceData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NarrationMessageWidget.NarrationMessageWidget_C.SetAnimTime
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationMessageWidget_C::SetAnimTime(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationMessageWidget_C", "SetAnimTime");

	Params::UNarrationMessageWidget_C_SetAnimTime_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationMessageWidget.NarrationMessageWidget_C.UpdateFadeOut
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationMessageWidget_C::UpdateFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationMessageWidget_C", "UpdateFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationMessageWidget.NarrationMessageWidget_C.UpdateAnim
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationMessageWidget_C::UpdateAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationMessageWidget_C", "UpdateAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationMessageWidget.NarrationMessageWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationMessageWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationMessageWidget_C", "Tick");

	Params::UNarrationMessageWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationMessageWidget.NarrationMessageWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNarrationMessageWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationMessageWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationMessageWidget.NarrationMessageWidget_C.SkipDraw
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationMessageWidget_C::SkipDraw()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationMessageWidget_C", "SkipDraw");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationMessageWidget.NarrationMessageWidget_C.PlayFadeOut
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationMessageWidget_C::PlayFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationMessageWidget_C", "PlayFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationMessageWidget.NarrationMessageWidget_C.Reset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationMessageWidget_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationMessageWidget_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationMessageWidget.NarrationMessageWidget_C.SetNottingLine
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationMessageWidget_C::SetNottingLine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationMessageWidget_C", "SetNottingLine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationMessageWidget.NarrationMessageWidget_C.SetBlankLine
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNarrationMessageWidget_C::SetBlankLine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationMessageWidget_C", "SetBlankLine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationMessageWidget.NarrationMessageWidget_C.Debug_Localization
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDebug                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNarrationMessageWidget_C::Debug_Localization(bool IsDebug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationMessageWidget_C", "Debug_Localization");

	Params::UNarrationMessageWidget_C_Debug_Localization_Params Parms{};

	Parms.IsDebug = IsDebug;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NarrationMessageWidget.NarrationMessageWidget_C.WidgetAnimationEvt_FadeInAnimation_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)
// Parameters:

void UNarrationMessageWidget_C::WidgetAnimationEvt_FadeInAnimation_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationMessageWidget_C", "WidgetAnimationEvt_FadeInAnimation_K2Node_WidgetAnimationEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NarrationMessageWidget.NarrationMessageWidget_C.ExecuteUbergraph_NarrationMessageWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNarrationMessageWidget_C::ExecuteUbergraph_NarrationMessageWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NarrationMessageWidget_C", "ExecuteUbergraph_NarrationMessageWidget");

	Params::UNarrationMessageWidget_C_ExecuteUbergraph_NarrationMessageWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


