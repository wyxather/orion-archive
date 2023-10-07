#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass UIControlInterface.UIControlInterface_C
// (None)

class UClass* IUIControlInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIControlInterface_C");

	return Clss;
}


// UIControlInterface_C UIControlInterface.Default__UIControlInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IUIControlInterface_C* IUIControlInterface_C::GetDefaultObj()
{
	static class IUIControlInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IUIControlInterface_C*>(IUIControlInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UIControlInterface.UIControlInterface_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUIControlInterface_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "HelpScrollAxis");

	Params::IUIControlInterface_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIControlInterface.UIControlInterface_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUIControlInterface_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "WorldMapSlowCursorY");

	Params::IUIControlInterface_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIControlInterface.UIControlInterface_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUIControlInterface_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "WorldMapSlowCursorX");

	Params::IUIControlInterface_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIControlInterface.UIControlInterface_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IUIControlInterface_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnListPaging");

	Params::IUIControlInterface_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIControlInterface.UIControlInterface_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUIControlInterface_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnGamePadAxisY");

	Params::IUIControlInterface_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIControlInterface.UIControlInterface_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUIControlInterface_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnGamePadAxisX");

	Params::IUIControlInterface_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIControlInterface.UIControlInterface_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUIControlInterface_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnLeftAxisY");

	Params::IUIControlInterface_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIControlInterface.UIControlInterface_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUIControlInterface_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnLeftAxisX");

	Params::IUIControlInterface_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIControlInterface.UIControlInterface_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUIControlInterface_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnRightAxisY");

	Params::IUIControlInterface_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIControlInterface.UIControlInterface_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUIControlInterface_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnRightAxisX");

	Params::IUIControlInterface_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIControlInterface.UIControlInterface_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIControlInterface.UIControlInterface_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIControlInterface_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIControlInterface_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}

}


