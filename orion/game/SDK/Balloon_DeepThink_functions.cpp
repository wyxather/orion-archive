#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass Balloon_DeepThink.Balloon_DeepThink_C
// (None)

class UClass* UBalloon_DeepThink_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Balloon_DeepThink_C");

	return Clss;
}


// Balloon_DeepThink_C Balloon_DeepThink.Default__Balloon_DeepThink_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBalloon_DeepThink_C* UBalloon_DeepThink_C::GetDefaultObj()
{
	static class UBalloon_DeepThink_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBalloon_DeepThink_C*>(UBalloon_DeepThink_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Balloon_DeepThink.Balloon_DeepThink_C.CheckDrawTextEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::CheckDrawTextEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "CheckDrawTextEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.PlayCloseAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::PlayCloseAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "PlayCloseAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.PlayOpenAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::PlayOpenAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "PlayOpenAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.CloseBalloon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBalloon_DeepThink_C::CloseBalloon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "CloseBalloon");

	Params::UBalloon_DeepThink_C_CloseBalloon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.Init
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAddBalloonParam            InParam                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bAutoTalk                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBalloon_DeepThink_C::Init(struct FAddBalloonParam& InParam, bool bAutoTalk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "Init");

	Params::UBalloon_DeepThink_C_Init_Params Parms{};

	Parms.InParam = InParam;
	Parms.bAutoTalk = bAutoTalk;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.CallNext
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AutoNext                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBalloon_DeepThink_C::CallNext(bool AutoNext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "CallNext");

	Params::UBalloon_DeepThink_C_CallNext_Params Parms{};

	Parms.AutoNext = AutoNext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.UpdateTranslation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::UpdateTranslation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "UpdateTranslation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThink_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnRightAxisX");

	Params::UBalloon_DeepThink_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThink_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnRightAxisY");

	Params::UBalloon_DeepThink_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThink_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnLeftAxisX");

	Params::UBalloon_DeepThink_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThink_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnLeftAxisY");

	Params::UBalloon_DeepThink_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThink_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnGamePadAxisX");

	Params::UBalloon_DeepThink_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThink_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnGamePadAxisY");

	Params::UBalloon_DeepThink_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBalloon_DeepThink_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnListPaging");

	Params::UBalloon_DeepThink_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThink_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "WorldMapSlowCursorX");

	Params::UBalloon_DeepThink_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThink_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "WorldMapSlowCursorY");

	Params::UBalloon_DeepThink_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThink_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "HelpScrollAxis");

	Params::UBalloon_DeepThink_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.WidgetAnimationEvt_Open_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::WidgetAnimationEvt_Open_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "WidgetAnimationEvt_Open_K2Node_WidgetAnimationEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.WidgetAnimationEvt_Close_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::WidgetAnimationEvt_Close_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "WidgetAnimationEvt_Close_K2Node_WidgetAnimationEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThink_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "Tick");

	Params::UBalloon_DeepThink_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.SetTextAnimationWait
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSLanguage             NewLanguage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThink_C::SetTextAnimationWait(enum class EKSLanguage NewLanguage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "SetTextAnimationWait");

	Params::UBalloon_DeepThink_C_SetTextAnimationWait_Params Parms{};

	Parms.NewLanguage = NewLanguage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.ResetAppearance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBalloon_DeepThink_C::ResetAppearance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "ResetAppearance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balloon_DeepThink.Balloon_DeepThink_C.ExecuteUbergraph_Balloon_DeepThink
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloon_DeepThink_C::ExecuteUbergraph_Balloon_DeepThink(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("Balloon_DeepThink_C", "ExecuteUbergraph_Balloon_DeepThink");

	Params::UBalloon_DeepThink_C_ExecuteUbergraph_Balloon_DeepThink_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


