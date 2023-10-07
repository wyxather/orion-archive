#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleDropItemPanelWidget.BattleDropItemPanelWidget_C
// (None)

class UClass* UBattleDropItemPanelWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleDropItemPanelWidget_C");

	return Clss;
}


// BattleDropItemPanelWidget_C BattleDropItemPanelWidget.Default__BattleDropItemPanelWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleDropItemPanelWidget_C* UBattleDropItemPanelWidget_C::GetDefaultObj()
{
	static class UBattleDropItemPanelWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleDropItemPanelWidget_C*>(UBattleDropItemPanelWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.SetTitleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UBattleDropItemPanelWidget_C::SetTitleText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "SetTitleText");

	Params::UBattleDropItemPanelWidget_C_SetTitleText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.SettingDropItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBattleResultItemDropData>DropData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattleDropItemPanelWidget_C::SettingDropItem(TArray<struct FBattleResultItemDropData>& DropData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "SettingDropItem");

	Params::UBattleDropItemPanelWidget_C_SettingDropItem_Params Parms{};

	Parms.DropData = DropData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.DropItemClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::DropItemClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "DropItemClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.DropItemSkip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::DropItemSkip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "DropItemSkip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.IsPlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Playing                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleDropItemPanelWidget_C::IsPlaying(bool* Playing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "IsPlaying");

	Params::UBattleDropItemPanelWidget_C_IsPlaying_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Playing != nullptr)
		*Playing = Parms.Playing;

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.DropItemOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::DropItemOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "DropItemOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleDropItemPanelWidget_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnRightAxisX");

	Params::UBattleDropItemPanelWidget_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleDropItemPanelWidget_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnRightAxisY");

	Params::UBattleDropItemPanelWidget_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleDropItemPanelWidget_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnLeftAxisX");

	Params::UBattleDropItemPanelWidget_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleDropItemPanelWidget_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnLeftAxisY");

	Params::UBattleDropItemPanelWidget_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleDropItemPanelWidget_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnGamePadAxisX");

	Params::UBattleDropItemPanelWidget_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleDropItemPanelWidget_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnGamePadAxisY");

	Params::UBattleDropItemPanelWidget_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleDropItemPanelWidget_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnListPaging");

	Params::UBattleDropItemPanelWidget_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleDropItemPanelWidget_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "WorldMapSlowCursorX");

	Params::UBattleDropItemPanelWidget_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleDropItemPanelWidget_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "WorldMapSlowCursorY");

	Params::UBattleDropItemPanelWidget_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleDropItemPanelWidget_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "HelpScrollAxis");

	Params::UBattleDropItemPanelWidget_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattleDropItemPanelWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDropItemPanelWidget.BattleDropItemPanelWidget_C.ExecuteUbergraph_BattleDropItemPanelWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleDropItemPanelWidget_C::ExecuteUbergraph_BattleDropItemPanelWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDropItemPanelWidget_C", "ExecuteUbergraph_BattleDropItemPanelWidget");

	Params::UBattleDropItemPanelWidget_C_ExecuteUbergraph_BattleDropItemPanelWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


