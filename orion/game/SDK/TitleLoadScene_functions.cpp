#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass TitleLoadScene.TitleLoadScene_C
// (None)

class UClass* UTitleLoadScene_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TitleLoadScene_C");

	return Clss;
}


// TitleLoadScene_C TitleLoadScene.Default__TitleLoadScene_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTitleLoadScene_C* UTitleLoadScene_C::GetDefaultObj()
{
	static class UTitleLoadScene_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTitleLoadScene_C*>(UTitleLoadScene_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TitleLoadScene.TitleLoadScene_C.Initialize
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleLoadScene_C::Initialize(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "Initialize");

	Params::UTitleLoadScene_C_Initialize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function TitleLoadScene.TitleLoadScene_C.SequenceRequestCallback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleLoadScene_C::SequenceRequestCallback(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "SequenceRequestCallback");

	Params::UTitleLoadScene_C_SequenceRequestCallback_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleLoadScene.TitleLoadScene_C.AllowPushToUIManager
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTitleLoadScene_C::AllowPushToUIManager()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "AllowPushToUIManager");

	Params::UTitleLoadScene_C_AllowPushToUIManager_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleLoadScene.TitleLoadScene_C.IsEnd
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTitleLoadScene_C::IsEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "IsEnd");

	Params::UTitleLoadScene_C_IsEnd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleLoadScene.TitleLoadScene_C.UpdateOnTick
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::UpdateOnTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "UpdateOnTick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.SelectUpMove
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::SelectUpMove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "SelectUpMove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.SelectDownMove
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::SelectDownMove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "SelectDownMove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.SelectButton
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleLoadScene_C::SelectButton(int32 Select)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "SelectButton");

	Params::UTitleLoadScene_C_SelectButton_Params Parms{};

	Parms.Select = Select;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleLoadScene.TitleLoadScene_C.UpdateButtonImage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::UpdateButtonImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "UpdateButtonImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleLoadScene_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnRightAxisX");

	Params::UTitleLoadScene_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleLoadScene.TitleLoadScene_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleLoadScene_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnRightAxisY");

	Params::UTitleLoadScene_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleLoadScene_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnLeftAxisX");

	Params::UTitleLoadScene_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleLoadScene.TitleLoadScene_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleLoadScene_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnLeftAxisY");

	Params::UTitleLoadScene_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleLoadScene.TitleLoadScene_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleLoadScene_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnGamePadAxisX");

	Params::UTitleLoadScene_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleLoadScene.TitleLoadScene_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleLoadScene_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnGamePadAxisY");

	Params::UTitleLoadScene_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleLoadScene.TitleLoadScene_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleLoadScene_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnListPaging");

	Params::UTitleLoadScene_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleLoadScene_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "WorldMapSlowCursorX");

	Params::UTitleLoadScene_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleLoadScene.TitleLoadScene_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleLoadScene_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "WorldMapSlowCursorY");

	Params::UTitleLoadScene_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleLoadScene.TitleLoadScene_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleLoadScene_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "HelpScrollAxis");

	Params::UTitleLoadScene_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleLoadScene.TitleLoadScene_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.Start
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleLoadScene_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "Tick");

	Params::UTitleLoadScene_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleLoadScene.TitleLoadScene_C.End
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleLoadScene_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleLoadScene.TitleLoadScene_C.ExecuteUbergraph_TitleLoadScene
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleLoadScene_C::ExecuteUbergraph_TitleLoadScene(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleLoadScene_C", "ExecuteUbergraph_TitleLoadScene");

	Params::UTitleLoadScene_C_ExecuteUbergraph_TitleLoadScene_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


