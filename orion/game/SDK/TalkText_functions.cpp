#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass TalkText.TalkText_C
// (None)

class UClass* UTalkText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TalkText_C");

	return Clss;
}


// TalkText_C TalkText.Default__TalkText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTalkText_C* UTalkText_C::GetDefaultObj()
{
	static class UTalkText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTalkText_C*>(UTalkText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TalkText.TalkText_C.RefreshText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTalkText_C::RefreshText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_C", "RefreshText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TalkText.TalkText_C.GetBoldResolutionTag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      OutText                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UTalkText_C::GetBoldResolutionTag(const class FString& Text, class FString* OutText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_C", "GetBoldResolutionTag");

	Params::UTalkText_C_GetBoldResolutionTag_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);

}


// Function TalkText.TalkText_C.GetItalicResolutionTag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      OutText                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UTalkText_C::GetItalicResolutionTag(const class FString& Text, class FString* OutText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_C", "GetItalicResolutionTag");

	Params::UTalkText_C_GetItalicResolutionTag_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);

}


// Function TalkText.TalkText_C.ReplaceTextTag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      OutText                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UTalkText_C::ReplaceTextTag(const class FString& Text, class FString* OutText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_C", "ReplaceTextTag");

	Params::UTalkText_C_ReplaceTextTag_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);

}


// Function TalkText.TalkText_C.GetTextWaitTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DefaultTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Time                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTalkText_C::GetTextWaitTime(float DefaultTime, float* Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_C", "GetTextWaitTime");

	Params::UTalkText_C_GetTextWaitTime_Params Parms{};

	Parms.DefaultTime = DefaultTime;

	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;

}


// Function TalkText.TalkText_C.CheckShadowTextBlock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UTalkText_C::CheckShadowTextBlock(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_C", "CheckShadowTextBlock");

	Params::UTalkText_C_CheckShadowTextBlock_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TalkText.TalkText_C.SetTextWait
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSLanguage             Language                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BalloonSpeedType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BalloonDoubleSpeedType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTalkText_C::SetTextWait(enum class EKSLanguage Language, int32 BalloonSpeedType, int32 BalloonDoubleSpeedType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_C", "SetTextWait");

	Params::UTalkText_C_SetTextWait_Params Parms{};

	Parms.Language = Language;
	Parms.BalloonSpeedType = BalloonSpeedType;
	Parms.BalloonDoubleSpeedType = BalloonDoubleSpeedType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TalkText.TalkText_C.GetTextBlockSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   Size                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTalkText_C::GetTextBlockSize(struct FVector2D* Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_C", "GetTextBlockSize");

	Params::UTalkText_C_GetTextBlockSize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Size != nullptr)
		*Size = std::move(Parms.Size);

}


// Function TalkText.TalkText_C.UpdateTextCounter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewParam                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               UseTag                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTalkText_C::UpdateTextCounter(class FString* NewParam, bool* UseTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_C", "UpdateTextCounter");

	Params::UTalkText_C_UpdateTextCounter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);

	if (UseTag != nullptr)
		*UseTag = Parms.UseTag;

}


// Function TalkText.TalkText_C.InitAnim
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTalkText_C::InitAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_C", "InitAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TalkText.TalkText_C.InitTextSize
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   OutputPin                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTalkText_C::InitTextSize(int32 Index, struct FVector2D* OutputPin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_C", "InitTextSize");

	Params::UTalkText_C_InitTextSize_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPin != nullptr)
		*OutputPin = std::move(Parms.OutputPin);

}


// Function TalkText.TalkText_C.ClearText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTalkText_C::ClearText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_C", "ClearText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TalkText.TalkText_C.GetSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   Size                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTalkText_C::GetSize(struct FVector2D* Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_C", "GetSize");

	Params::UTalkText_C_GetSize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Size != nullptr)
		*Size = std::move(Parms.Size);

}


// Function TalkText.TalkText_C.PlayVoice
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlayVoice                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTalkText_C::PlayVoice(bool* PlayVoice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_C", "PlayVoice");

	Params::UTalkText_C_PlayVoice_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PlayVoice != nullptr)
		*PlayVoice = Parms.PlayVoice;

}


// Function TalkText.TalkText_C.Next
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AutoNext                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsEnd                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayVoice                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTalkText_C::Next(bool AutoNext, bool* IsEnd, int32* Index, bool* PlayVoice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_C", "Next");

	Params::UTalkText_C_Next_Params Parms{};

	Parms.AutoNext = AutoNext;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnd != nullptr)
		*IsEnd = Parms.IsEnd;

	if (Index != nullptr)
		*Index = Parms.Index;

	if (PlayVoice != nullptr)
		*PlayVoice = Parms.PlayVoice;

}


// Function TalkText.TalkText_C.EndAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTalkText_C::EndAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_C", "EndAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TalkText.TalkText_C.IsAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Animation                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTalkText_C::IsAnimation(bool* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_C", "IsAnimation");

	Params::UTalkText_C_IsAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Animation != nullptr)
		*Animation = Parms.Animation;

}


// Function TalkText.TalkText_C.StartAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTalkText_C::StartAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_C", "StartAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TalkText.TalkText_C.SetText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Texts                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FName>                VoiceLabel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTalkText_C::SetText(TArray<class FString>& Texts, TArray<class FName>& VoiceLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_C", "SetText");

	Params::UTalkText_C_SetText_Params Parms{};

	Parms.Texts = Texts;
	Parms.VoiceLabel = VoiceLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TalkText.TalkText_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTalkText_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_C", "Tick");

	Params::UTalkText_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TalkText.TalkText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTalkText_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TalkText.TalkText_C.ExecuteUbergraph_TalkText
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTalkText_C::ExecuteUbergraph_TalkText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TalkText_C", "ExecuteUbergraph_TalkText");

	Params::UTalkText_C_ExecuteUbergraph_TalkText_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


