#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass SubTitleWidget.SubTitleWidget_C
// (None)

class UClass* USubTitleWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubTitleWidget_C");

	return Clss;
}


// SubTitleWidget_C SubTitleWidget.Default__SubTitleWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USubTitleWidget_C* USubTitleWidget_C::GetDefaultObj()
{
	static class USubTitleWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USubTitleWidget_C*>(USubTitleWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SubTitleWidget.SubTitleWidget_C.PlayVoice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubTitleWidget_C::PlayVoice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubTitleWidget_C", "PlayVoice");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubTitleWidget.SubTitleWidget_C.SetTextOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubTitleWidget_C::SetTextOpacity(float Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubTitleWidget_C", "SetTextOpacity");

	Params::USubTitleWidget_C_SetTextOpacity_Params Parms{};

	Parms.Opacity = Opacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubTitleWidget.SubTitleWidget_C.SetRetainerParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubTitleWidget_C::SetRetainerParam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubTitleWidget_C", "SetRetainerParam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubTitleWidget.SubTitleWidget_C.CheckPlayAfterEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubTitleWidget_C::CheckPlayAfterEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubTitleWidget_C", "CheckPlayAfterEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubTitleWidget.SubTitleWidget_C.Stop
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsNext                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USubTitleWidget_C::Stop(bool* IsNext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubTitleWidget_C", "Stop");

	Params::USubTitleWidget_C_Stop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsNext != nullptr)
		*IsNext = Parms.IsNext;

}


// Function SubTitleWidget.SubTitleWidget_C.CheckNextBlockWithGroupIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsNext                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USubTitleWidget_C::CheckNextBlockWithGroupIndex(bool* IsNext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubTitleWidget_C", "CheckNextBlockWithGroupIndex");

	Params::USubTitleWidget_C_CheckNextBlockWithGroupIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsNext != nullptr)
		*IsNext = Parms.IsNext;

}


// Function SubTitleWidget.SubTitleWidget_C.SequenceRequestCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubTitleWidget_C::SequenceRequestCallback(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubTitleWidget_C", "SequenceRequestCallback");

	Params::USubTitleWidget_C_SequenceRequestCallback_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubTitleWidget.SubTitleWidget_C.ChangeEventFlags
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, bool>            Flags                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void USubTitleWidget_C::ChangeEventFlags(TMap<class FName, bool> Flags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubTitleWidget_C", "ChangeEventFlags");

	Params::USubTitleWidget_C_ChangeEventFlags_Params Parms{};

	Parms.Flags = Flags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubTitleWidget.SubTitleWidget_C.FadeBackGround
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFadeIn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USubTitleWidget_C::FadeBackGround(bool IsFadeIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubTitleWidget_C", "FadeBackGround");

	Params::USubTitleWidget_C_FadeBackGround_Params Parms{};

	Parms.IsFadeIn = IsFadeIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubTitleWidget.SubTitleWidget_C.Finish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubTitleWidget_C::Finish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubTitleWidget_C", "Finish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubTitleWidget.SubTitleWidget_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubTitleWidget_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubTitleWidget_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubTitleWidget.SubTitleWidget_C.IsActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool USubTitleWidget_C::IsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubTitleWidget_C", "IsActive");

	Params::USubTitleWidget_C_IsActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SubTitleWidget.SubTitleWidget_C.GetViewTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Time                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubTitleWidget_C::GetViewTime(float* Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubTitleWidget_C", "GetViewTime");

	Params::USubTitleWidget_C_GetViewTime_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;

}


// Function SubTitleWidget.SubTitleWidget_C.UpdateOpenSeq
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubTitleWidget_C::UpdateOpenSeq(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubTitleWidget_C", "UpdateOpenSeq");

	Params::USubTitleWidget_C_UpdateOpenSeq_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubTitleWidget.SubTitleWidget_C.PlaySubTitle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubTitleWidget_C::PlaySubTitle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubTitleWidget_C", "PlaySubTitle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubTitleWidget.SubTitleWidget_C.CheckNextBlock
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsNext                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USubTitleWidget_C::CheckNextBlock(bool* IsNext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubTitleWidget_C", "CheckNextBlock");

	Params::USubTitleWidget_C_CheckNextBlock_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsNext != nullptr)
		*IsNext = Parms.IsNext;

}


// Function SubTitleWidget.SubTitleWidget_C.OpenSubTitle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubTitleWidget_C::OpenSubTitle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubTitleWidget_C", "OpenSubTitle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubTitleWidget.SubTitleWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USubTitleWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubTitleWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubTitleWidget.SubTitleWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubTitleWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubTitleWidget_C", "Tick");

	Params::USubTitleWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubTitleWidget.SubTitleWidget_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubTitleWidget_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubTitleWidget_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubTitleWidget.SubTitleWidget_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubTitleWidget_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubTitleWidget_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubTitleWidget.SubTitleWidget_C.ForceClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubTitleWidget_C::ForceClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubTitleWidget_C", "ForceClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubTitleWidget.SubTitleWidget_C.ExecuteUbergraph_SubTitleWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubTitleWidget_C::ExecuteUbergraph_SubTitleWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SubTitleWidget_C", "ExecuteUbergraph_SubTitleWidget");

	Params::USubTitleWidget_C_ExecuteUbergraph_SubTitleWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


