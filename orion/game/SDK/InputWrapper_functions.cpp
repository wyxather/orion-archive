#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass InputWrapper.InputWrapper_C
// (None)

class UClass* UInputWrapper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputWrapper_C");

	return Clss;
}


// InputWrapper_C InputWrapper.Default__InputWrapper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInputWrapper_C* UInputWrapper_C::GetDefaultObj()
{
	static class UInputWrapper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputWrapper_C*>(UInputWrapper_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InputWrapper.InputWrapper_C.PopInput
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputWrapper_C::PopInput(class AActor** Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "PopInput");

	Params::UInputWrapper_C_PopInput_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Target != nullptr)
		*Target = Parms.Target;

}


// Function InputWrapper.InputWrapper_C.PushInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputWrapper_C::PushInput(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "PushInput");

	Params::UInputWrapper_C_PushInput_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputWrapper.InputWrapper_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputWrapper_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnRightAxisX");

	Params::UInputWrapper_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputWrapper.InputWrapper_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputWrapper_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnRightAxisY");

	Params::UInputWrapper_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputWrapper.InputWrapper_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputWrapper_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnLeftAxisX");

	Params::UInputWrapper_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputWrapper.InputWrapper_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputWrapper_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnLeftAxisY");

	Params::UInputWrapper_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputWrapper.InputWrapper_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputWrapper_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnGamePadAxisX");

	Params::UInputWrapper_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputWrapper.InputWrapper_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputWrapper_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnGamePadAxisY");

	Params::UInputWrapper_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputWrapper.InputWrapper_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputWrapper_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "WorldMapSlowCursorX");

	Params::UInputWrapper_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputWrapper.InputWrapper_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputWrapper_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "WorldMapSlowCursorY");

	Params::UInputWrapper_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputWrapper.InputWrapper_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInputWrapper_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnListPaging");

	Params::UInputWrapper_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputWrapper.InputWrapper_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputWrapper_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "HelpScrollAxis");

	Params::UInputWrapper_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputWrapper.InputWrapper_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputWrapper_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputWrapper.InputWrapper_C.ExecuteUbergraph_InputWrapper
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputWrapper_C::ExecuteUbergraph_InputWrapper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("InputWrapper_C", "ExecuteUbergraph_InputWrapper");

	Params::UInputWrapper_C_ExecuteUbergraph_InputWrapper_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


