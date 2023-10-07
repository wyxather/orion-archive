#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BalloonBundleWidgetBP.BalloonBundleWidgetBP_C
// (None)

class UClass* UBalloonBundleWidgetBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BalloonBundleWidgetBP_C");

	return Clss;
}


// BalloonBundleWidgetBP_C BalloonBundleWidgetBP.Default__BalloonBundleWidgetBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBalloonBundleWidgetBP_C* UBalloonBundleWidgetBP_C::GetDefaultObj()
{
	static class UBalloonBundleWidgetBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBalloonBundleWidgetBP_C*>(UBalloonBundleWidgetBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.GetTextWaitTime
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBalloonBundleWidgetBP_C::GetTextWaitTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "GetTextWaitTime");

	Params::UBalloonBundleWidgetBP_C_GetTextWaitTime_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.GetAutoTime
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBalloonBundleWidgetBP_C::GetAutoTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "GetAutoTime");

	Params::UBalloonBundleWidgetBP_C_GetAutoTime_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.CheckBalloonVoiceData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBalloonBundleWidgetBP_C::CheckBalloonVoiceData(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "CheckBalloonVoiceData");

	Params::UBalloonBundleWidgetBP_C_CheckBalloonVoiceData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.CheckThinkingFixedWaitType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBalloonBundleWidgetBP_C::CheckThinkingFixedWaitType(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "CheckThinkingFixedWaitType");

	Params::UBalloonBundleWidgetBP_C_CheckThinkingFixedWaitType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.CheckThinkingFixedType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBalloonBundleWidgetBP_C::CheckThinkingFixedType(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "CheckThinkingFixedType");

	Params::UBalloonBundleWidgetBP_C_CheckThinkingFixedType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.GetWaitTimeValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              TimeValue                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloonBundleWidgetBP_C::GetWaitTimeValue(float* TimeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "GetWaitTimeValue");

	Params::UBalloonBundleWidgetBP_C_GetWaitTimeValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TimeValue != nullptr)
		*TimeValue = Parms.TimeValue;

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.Construct_Inner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::Construct_Inner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "Construct_Inner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.Debug_SetMessageFullSkip
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSkip                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBalloonBundleWidgetBP_C::Debug_SetMessageFullSkip(bool bSkip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "Debug_SetMessageFullSkip");

	Params::UBalloonBundleWidgetBP_C_Debug_SetMessageFullSkip_Params Parms{};

	Parms.bSkip = bSkip;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.CheckNext
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Next                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBalloonBundleWidgetBP_C::CheckNext(bool* Next)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "CheckNext");

	Params::UBalloonBundleWidgetBP_C_CheckNext_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Next != nullptr)
		*Next = Parms.Next;

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.CheckDrawTextEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DrawEnd                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBalloonBundleWidgetBP_C::CheckDrawTextEnd(bool* DrawEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "CheckDrawTextEnd");

	Params::UBalloonBundleWidgetBP_C_CheckDrawTextEnd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DrawEnd != nullptr)
		*DrawEnd = Parms.DrawEnd;

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.ChangeTextSpeed
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSLanguage             Language                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloonBundleWidgetBP_C::ChangeTextSpeed(enum class EKSLanguage Language)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "ChangeTextSpeed");

	Params::UBalloonBundleWidgetBP_C_ChangeTextSpeed_Params Parms{};

	Parms.Language = Language;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.CheckAutoSkipMessage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBalloonBundleWidgetBP_C::CheckAutoSkipMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "CheckAutoSkipMessage");

	Params::UBalloonBundleWidgetBP_C_CheckAutoSkipMessage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.GetAutoEventMessage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBalloonBundleWidgetBP_C::GetAutoEventMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "GetAutoEventMessage");

	Params::UBalloonBundleWidgetBP_C_GetAutoEventMessage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloonBundleWidgetBP_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnRightAxisX");

	Params::UBalloonBundleWidgetBP_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloonBundleWidgetBP_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnRightAxisY");

	Params::UBalloonBundleWidgetBP_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloonBundleWidgetBP_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnLeftAxisX");

	Params::UBalloonBundleWidgetBP_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloonBundleWidgetBP_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnLeftAxisY");

	Params::UBalloonBundleWidgetBP_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloonBundleWidgetBP_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnGamePadAxisX");

	Params::UBalloonBundleWidgetBP_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloonBundleWidgetBP_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnGamePadAxisY");

	Params::UBalloonBundleWidgetBP_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBalloonBundleWidgetBP_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnListPaging");

	Params::UBalloonBundleWidgetBP_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloonBundleWidgetBP_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "WorldMapSlowCursorX");

	Params::UBalloonBundleWidgetBP_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloonBundleWidgetBP_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "WorldMapSlowCursorY");

	Params::UBalloonBundleWidgetBP_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloonBundleWidgetBP_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "HelpScrollAxis");

	Params::UBalloonBundleWidgetBP_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloonBundleWidgetBP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "Tick");

	Params::UBalloonBundleWidgetBP_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnEventSpeedChange
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENOTICE_TYPE            NoticeType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNoticeArgs                 NoticeArgs                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBalloonBundleWidgetBP_C::OnEventSpeedChange(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& NoticeArgs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnEventSpeedChange");

	Params::UBalloonBundleWidgetBP_C_OnEventSpeedChange_Params Parms{};

	Parms.NoticeType = NoticeType;
	Parms.NoticeArgs = NoticeArgs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnBattleSpeedChange
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENOTICE_TYPE            NoticeType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNoticeArgs                 NoticeArgs                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBalloonBundleWidgetBP_C::OnBattleSpeedChange(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& NoticeArgs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnBattleSpeedChange");

	Params::UBalloonBundleWidgetBP_C_OnBattleSpeedChange_Params Parms{};

	Parms.NoticeType = NoticeType;
	Parms.NoticeArgs = NoticeArgs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.RestoreEventSkip
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Skip                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBalloonBundleWidgetBP_C::RestoreEventSkip(bool Skip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "RestoreEventSkip");

	Params::UBalloonBundleWidgetBP_C_RestoreEventSkip_Params Parms{};

	Parms.Skip = Skip;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.OnResolutionChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloonBundleWidgetBP_C::OnResolutionChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "OnResolutionChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BalloonBundleWidgetBP.BalloonBundleWidgetBP_C.ExecuteUbergraph_BalloonBundleWidgetBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloonBundleWidgetBP_C::ExecuteUbergraph_BalloonBundleWidgetBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BalloonBundleWidgetBP_C", "ExecuteUbergraph_BalloonBundleWidgetBP");

	Params::UBalloonBundleWidgetBP_C_ExecuteUbergraph_BalloonBundleWidgetBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


