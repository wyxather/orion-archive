#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleResultPanelWidget.BattleResultPanelWidget_C
// (None)

class UClass* UBattleResultPanelWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleResultPanelWidget_C");

	return Clss;
}


// BattleResultPanelWidget_C BattleResultPanelWidget.Default__BattleResultPanelWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleResultPanelWidget_C* UBattleResultPanelWidget_C::GetDefaultObj()
{
	static class UBattleResultPanelWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleResultPanelWidget_C*>(UBattleResultPanelWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.StartResultPlayerCountup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMain                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleResultPanelWidget_C::StartResultPlayerCountup(bool IsMain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "StartResultPlayerCountup");

	Params::UBattleResultPanelWidget_C_StartResultPlayerCountup_Params Parms{};

	Parms.IsMain = IsMain;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.SubPartyAnimFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::SubPartyAnimFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "SubPartyAnimFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.SubPartyOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::SubPartyOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "SubPartyOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.SetResultCharacter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBase*>MainPartyList                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class ABattleCharacterBase*>SubPartyList                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattleResultPanelWidget_C::SetResultCharacter(TArray<class ABattleCharacterBase*>& MainPartyList, TArray<class ABattleCharacterBase*>& SubPartyList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "SetResultCharacter");

	Params::UBattleResultPanelWidget_C_SetResultCharacter_Params Parms{};

	Parms.MainPartyList = MainPartyList;
	Parms.SubPartyList = SubPartyList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.SetHeaderTextMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::SetHeaderTextMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "SetHeaderTextMaterial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.CheckTutorial
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TutorialOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleResultPanelWidget_C::CheckTutorial(bool* TutorialOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "CheckTutorial");

	Params::UBattleResultPanelWidget_C_CheckTutorial_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TutorialOpen != nullptr)
		*TutorialOpen = Parms.TutorialOpen;

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.SetLanguage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::SetLanguage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "SetLanguage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.CallBackDropItemOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::CallBackDropItemOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "CallBackDropItemOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.DropItemOpen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::DropItemOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "DropItemOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.CallBackClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::CallBackClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "CallBackClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.WaitCountup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::WaitCountup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "WaitCountup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.Start Result Player Countup Inner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::Start_Result_Player_Countup_Inner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "Start Result Player Countup Inner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.SetBattleResult
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GetExp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GetJobPoint                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GetMoney                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BreakBonus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OneTurnKillBonus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NoDamageBonus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OverKillBonus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBattleResultItemDropData>DropItem                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattleResultPanelWidget_C::SetBattleResult(int32 GetExp, int32 GetJobPoint, int32 GetMoney, int32 BreakBonus, int32 OneTurnKillBonus, int32 NoDamageBonus, int32 OverKillBonus, TArray<struct FBattleResultItemDropData>& DropItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "SetBattleResult");

	Params::UBattleResultPanelWidget_C_SetBattleResult_Params Parms{};

	Parms.GetExp = GetExp;
	Parms.GetJobPoint = GetJobPoint;
	Parms.GetMoney = GetMoney;
	Parms.BreakBonus = BreakBonus;
	Parms.OneTurnKillBonus = OneTurnKillBonus;
	Parms.NoDamageBonus = NoDamageBonus;
	Parms.OverKillBonus = OverKillBonus;
	Parms.DropItem = DropItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.BattleResultOpen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::BattleResultOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "BattleResultOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.SetupPlayerInfo
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::SetupPlayerInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "SetupPlayerInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.CheckResultOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Playing                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleResultPanelWidget_C::CheckResultOpen(bool* Playing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "CheckResultOpen");

	Params::UBattleResultPanelWidget_C_CheckResultOpen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Playing != nullptr)
		*Playing = Parms.Playing;

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleResultPanelWidget_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnRightAxisX");

	Params::UBattleResultPanelWidget_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleResultPanelWidget_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnRightAxisY");

	Params::UBattleResultPanelWidget_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleResultPanelWidget_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnLeftAxisX");

	Params::UBattleResultPanelWidget_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleResultPanelWidget_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnLeftAxisY");

	Params::UBattleResultPanelWidget_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleResultPanelWidget_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnGamePadAxisX");

	Params::UBattleResultPanelWidget_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleResultPanelWidget_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnGamePadAxisY");

	Params::UBattleResultPanelWidget_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleResultPanelWidget_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnListPaging");

	Params::UBattleResultPanelWidget_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleResultPanelWidget_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "WorldMapSlowCursorX");

	Params::UBattleResultPanelWidget_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleResultPanelWidget_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "WorldMapSlowCursorY");

	Params::UBattleResultPanelWidget_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleResultPanelWidget_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "HelpScrollAxis");

	Params::UBattleResultPanelWidget_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.SupporterReturnDialogOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::SupporterReturnDialogOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "SupporterReturnDialogOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.AutoProgressResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleResultPanelWidget_C::AutoProgressResult()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "AutoProgressResult");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleResultPanelWidget.BattleResultPanelWidget_C.ExecuteUbergraph_BattleResultPanelWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleResultPanelWidget_C::ExecuteUbergraph_BattleResultPanelWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleResultPanelWidget_C", "ExecuteUbergraph_BattleResultPanelWidget");

	Params::UBattleResultPanelWidget_C_ExecuteUbergraph_BattleResultPanelWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


