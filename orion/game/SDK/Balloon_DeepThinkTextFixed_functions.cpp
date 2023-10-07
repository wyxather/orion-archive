#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C
// (None)

class UClass* UBalloon_DeepThinkTextFixed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Balloon_DeepThinkTextFixed_C");

	return Clss;
}


// Balloon_DeepThinkTextFixed_C Balloon_DeepThinkTextFixed.Default__Balloon_DeepThinkTextFixed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBalloon_DeepThinkTextFixed_C* UBalloon_DeepThinkTextFixed_C::GetDefaultObj()
{
	static class UBalloon_DeepThinkTextFixed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBalloon_DeepThinkTextFixed_C*>(UBalloon_DeepThinkTextFixed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.PlayCloseAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::PlayCloseAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "PlayCloseAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.CloseAnimationFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::CloseAnimationFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "CloseAnimationFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.Open Animation Finish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::Open_Animation_Finish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "Open Animation Finish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.ApplyAnimationParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AlphaParam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThinkTextFixed_C::ApplyAnimationParam(float AlphaParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "ApplyAnimationParam");

	Params::UBalloon_DeepThinkTextFixed_C_ApplyAnimationParam_Params Parms{};

	Parms.AlphaParam = AlphaParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.PlayOpenAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::PlayOpenAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "PlayOpenAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.CheckDrawEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::CheckDrawEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "CheckDrawEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.GetCurrentCanvas
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCanvasPanel*                Canvas                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThinkTextFixed_C::GetCurrentCanvas(class UCanvasPanel** Canvas)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "GetCurrentCanvas");

	Params::UBalloon_DeepThinkTextFixed_C_GetCurrentCanvas_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Canvas != nullptr)
		*Canvas = Parms.Canvas;

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.SetPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBALLOON_TEXT_POS       Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThinkTextFixed_C::SetPosition(enum class EBALLOON_TEXT_POS Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "SetPosition");

	Params::UBalloon_DeepThinkTextFixed_C_SetPosition_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.CalcPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::CalcPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "CalcPosition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.CloseBalloon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBalloon_DeepThinkTextFixed_C::CloseBalloon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "CloseBalloon");

	Params::UBalloon_DeepThinkTextFixed_C_CloseBalloon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.Init
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAddBalloonParam            InParam                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bAutoTalk                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBalloon_DeepThinkTextFixed_C::Init(struct FAddBalloonParam& InParam, bool bAutoTalk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "Init");

	Params::UBalloon_DeepThinkTextFixed_C_Init_Params Parms{};

	Parms.InParam = InParam;
	Parms.bAutoTalk = bAutoTalk;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.CallNext
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AutoNext                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBalloon_DeepThinkTextFixed_C::CallNext(bool AutoNext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "CallNext");

	Params::UBalloon_DeepThinkTextFixed_C_CallNext_Params Parms{};

	Parms.AutoNext = AutoNext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.UpdateTranslation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::UpdateTranslation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "UpdateTranslation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.Next
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::Next()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "Next");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThinkTextFixed_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnRightAxisX");

	Params::UBalloon_DeepThinkTextFixed_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThinkTextFixed_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnRightAxisY");

	Params::UBalloon_DeepThinkTextFixed_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThinkTextFixed_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnLeftAxisX");

	Params::UBalloon_DeepThinkTextFixed_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThinkTextFixed_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnLeftAxisY");

	Params::UBalloon_DeepThinkTextFixed_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThinkTextFixed_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnGamePadAxisX");

	Params::UBalloon_DeepThinkTextFixed_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThinkTextFixed_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnGamePadAxisY");

	Params::UBalloon_DeepThinkTextFixed_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBalloon_DeepThinkTextFixed_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnListPaging");

	Params::UBalloon_DeepThinkTextFixed_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThinkTextFixed_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "WorldMapSlowCursorX");

	Params::UBalloon_DeepThinkTextFixed_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThinkTextFixed_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "WorldMapSlowCursorY");

	Params::UBalloon_DeepThinkTextFixed_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThinkTextFixed_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "HelpScrollAxis");

	Params::UBalloon_DeepThinkTextFixed_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.WidgetAnimationEvt_Open_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::WidgetAnimationEvt_Open_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "WidgetAnimationEvt_Open_K2Node_WidgetAnimationEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.WidgetAnimationEvt_Close_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::WidgetAnimationEvt_Close_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "WidgetAnimationEvt_Close_K2Node_WidgetAnimationEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.PlayOpenAnimFromCurveData_DEPRECATED
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::PlayOpenAnimFromCurveData_DEPRECATED()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "PlayOpenAnimFromCurveData_DEPRECATED");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.PlayCloseAnimFromCurveData
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::PlayCloseAnimFromCurveData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "PlayCloseAnimFromCurveData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThinkTextFixed_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "Tick");

	Params::UBalloon_DeepThinkTextFixed_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.SetTextAnimationWait
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSLanguage             NewLanguage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThinkTextFixed_C::SetTextAnimationWait(enum class EKSLanguage NewLanguage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "SetTextAnimationWait");

	Params::UBalloon_DeepThinkTextFixed_C_SetTextAnimationWait_Params Parms{};

	Parms.NewLanguage = NewLanguage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.ResetAppearance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThinkTextFixed_C::ResetAppearance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "ResetAppearance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThinkTextFixed.Balloon_DeepThinkTextFixed_C.ExecuteUbergraph_Balloon_DeepThinkTextFixed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThinkTextFixed_C::ExecuteUbergraph_Balloon_DeepThinkTextFixed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThinkTextFixed_C", "ExecuteUbergraph_Balloon_DeepThinkTextFixed");

	Params::UBalloon_DeepThinkTextFixed_C_ExecuteUbergraph_Balloon_DeepThinkTextFixed_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


