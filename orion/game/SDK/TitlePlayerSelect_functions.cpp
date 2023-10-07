#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass TitlePlayerSelect.TitlePlayerSelect_C
// (None)

class UClass* UTitlePlayerSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TitlePlayerSelect_C");

	return Clss;
}


// TitlePlayerSelect_C TitlePlayerSelect.Default__TitlePlayerSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTitlePlayerSelect_C* UTitlePlayerSelect_C::GetDefaultObj()
{
	static class UTitlePlayerSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTitlePlayerSelect_C*>(UTitlePlayerSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TitlePlayerSelect.TitlePlayerSelect_C.Initialize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitlePlayerSelect_C::Initialize(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "Initialize");

	Params::UTitlePlayerSelect_C_Initialize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.SetupNewGame
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    PlayerCharaId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitlePlayerSelect_C::SetupNewGame(enum class EPlayableCharacterID PlayerCharaId, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "SetupNewGame");

	Params::UTitlePlayerSelect_C_SetupNewGame_Params Parms{};

	Parms.PlayerCharaId = PlayerCharaId;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.onDecidePlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnDecidePlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "onDecidePlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.IsChangingTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTitlePlayerSelect_C::IsChangingTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "IsChangingTime");

	Params::UTitlePlayerSelect_C_IsChangingTime_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.SetCurrentTime
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitlePlayerSelect_C::SetCurrentTime(float CurrentTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "SetCurrentTime");

	Params::UTitlePlayerSelect_C_SetCurrentTime_Params Parms{};

	Parms.CurrentTime = CurrentTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.ChangeTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETimeZoneType           Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsInitialize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsTimeChanged                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitlePlayerSelect_C::ChangeTime(enum class ETimeZoneType Time, bool IsInitialize, bool* IsTimeChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "ChangeTime");

	Params::UTitlePlayerSelect_C_ChangeTime_Params Parms{};

	Parms.Time = Time;
	Parms.IsInitialize = IsInitialize;

	UObject::ProcessEvent(Func, &Parms);

	if (IsTimeChanged != nullptr)
		*IsTimeChanged = Parms.IsTimeChanged;

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnFinishedFadeIn
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnFinishedFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnFinishedFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnFinishedFadeOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnFinishedFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnFinishedFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnFocusPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelect                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitlePlayerSelect_C::OnFocusPlayer(bool IsSelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnFocusPlayer");

	Params::UTitlePlayerSelect_C_OnFocusPlayer_Params Parms{};

	Parms.IsSelect = IsSelect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.StartMainStory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitlePlayerSelect_C::StartMainStory(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "StartMainStory");

	Params::UTitlePlayerSelect_C_StartMainStory_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.SetupFirstSaveData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::SetupFirstSaveData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "SetupFirstSaveData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.End
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.IsEnd
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTitlePlayerSelect_C::IsEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "IsEnd");

	Params::UTitlePlayerSelect_C_IsEnd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.Start
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitlePlayerSelect_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnRightAxisX");

	Params::UTitlePlayerSelect_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitlePlayerSelect_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnRightAxisY");

	Params::UTitlePlayerSelect_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitlePlayerSelect_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnGamePadAxisX");

	Params::UTitlePlayerSelect_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitlePlayerSelect_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnGamePadAxisY");

	Params::UTitlePlayerSelect_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitlePlayerSelect_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnListPaging");

	Params::UTitlePlayerSelect_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitlePlayerSelect_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "HelpScrollAxis");

	Params::UTitlePlayerSelect_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitlePlayerSelect_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnLeftAxisY");

	Params::UTitlePlayerSelect_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitlePlayerSelect_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnLeftAxisX");

	Params::UTitlePlayerSelect_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitlePlayerSelect_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitlePlayerSelect_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "WorldMapSlowCursorX");

	Params::UTitlePlayerSelect_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitlePlayerSelect_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "WorldMapSlowCursorY");

	Params::UTitlePlayerSelect_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitlePlayerSelect.TitlePlayerSelect_C.ExecuteUbergraph_TitlePlayerSelect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitlePlayerSelect_C::ExecuteUbergraph_TitlePlayerSelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitlePlayerSelect_C", "ExecuteUbergraph_TitlePlayerSelect");

	Params::UTitlePlayerSelect_C_ExecuteUbergraph_TitlePlayerSelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


