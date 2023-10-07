#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass FieldCommandWidgetBattle.FieldCommandWidgetBattle_C
// (None)

class UClass* UFieldCommandWidgetBattle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldCommandWidgetBattle_C");

	return Clss;
}


// FieldCommandWidgetBattle_C FieldCommandWidgetBattle.Default__FieldCommandWidgetBattle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFieldCommandWidgetBattle_C* UFieldCommandWidgetBattle_C::GetDefaultObj()
{
	static class UFieldCommandWidgetBattle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldCommandWidgetBattle_C*>(UFieldCommandWidgetBattle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.On Decide Confirm Ability Dialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectCursorPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsDecide                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFieldCommandWidgetBattle_C::On_Decide_Confirm_Ability_Dialog(int32 SelectCursorPosition, bool IsDecide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "On Decide Confirm Ability Dialog");

	Params::UFieldCommandWidgetBattle_C_On_Decide_Confirm_Ability_Dialog_Params Parms{};

	Parms.SelectCursorPosition = SelectCursorPosition;
	Parms.IsDecide = IsDecide;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OpenConfirmAbilityDialog
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      SelectAbilityList                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetBattle_C::OpenConfirmAbilityDialog(TArray<int32>& SelectAbilityList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OpenConfirmAbilityDialog");

	Params::UFieldCommandWidgetBattle_C_OpenConfirmAbilityDialog_Params Parms{};

	Parms.SelectAbilityList = SelectAbilityList;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.IsExecLearnAbility
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ExecLearnAbility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFieldCommandWidgetBattle_C::IsExecLearnAbility(bool* ExecLearnAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "IsExecLearnAbility");

	Params::UFieldCommandWidgetBattle_C_IsExecLearnAbility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ExecLearnAbility != nullptr)
		*ExecLearnAbility = Parms.ExecLearnAbility;

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OpenForgetAbilityDialog
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      SelectAbilityList                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetBattle_C::OpenForgetAbilityDialog(class FName NPCLabel, TArray<int32>& SelectAbilityList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OpenForgetAbilityDialog");

	Params::UFieldCommandWidgetBattle_C_OpenForgetAbilityDialog_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.SelectAbilityList = SelectAbilityList;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OpenLearnAbilityDialog
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabelName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsAbilityFull                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetBattle_C::OpenLearnAbilityDialog(class FName NPCLabelName, bool IsAbilityFull)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OpenLearnAbilityDialog");

	Params::UFieldCommandWidgetBattle_C_OpenLearnAbilityDialog_Params Parms{};

	Parms.NPCLabelName = NPCLabelName;
	Parms.IsAbilityFull = IsAbilityFull;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OpenFailedDialog
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetBattle_C::OpenFailedDialog(class FName NPCLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OpenFailedDialog");

	Params::UFieldCommandWidgetBattle_C_OpenFailedDialog_Params Parms{};

	Parms.NPCLabel = NPCLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.GetDialogInput
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UFieldCommandWidgetBattle_C::GetDialogInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "GetDialogInput");

	Params::UFieldCommandWidgetBattle_C_GetDialogInput_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OpenNPCDialog
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetBattle_C::OpenNPCDialog(class FName NPCLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OpenNPCDialog");

	Params::UFieldCommandWidgetBattle_C_OpenNPCDialog_Params Parms{};

	Parms.NPCLabel = NPCLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.LearnAbilityCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetBattle_C::LearnAbilityCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "LearnAbilityCallback");

	Params::UFieldCommandWidgetBattle_C_LearnAbilityCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.BattleFailedCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetBattle_C::BattleFailedCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "BattleFailedCallback");

	Params::UFieldCommandWidgetBattle_C_BattleFailedCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.BattleConfirmCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetBattle_C::BattleConfirmCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "BattleConfirmCallback");

	Params::UFieldCommandWidgetBattle_C_BattleConfirmCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.SetReference
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetBattle_C::SetReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "SetReference");

	Params::UFieldCommandWidgetBattle_C_SetReference_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.CloseSelectForgetAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::CloseSelectForgetAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "CloseSelectForgetAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.EventSelectedForGetAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectCursorPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsDecide                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFieldCommandWidgetBattle_C::EventSelectedForGetAbility(int32 SelectCursorPosition, bool IsDecide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "EventSelectedForGetAbility");

	Params::UFieldCommandWidgetBattle_C_EventSelectedForGetAbility_Params Parms{};

	Parms.SelectCursorPosition = SelectCursorPosition;
	Parms.IsDecide = IsDecide;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OpenDialogCommon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DialogText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class FText>                ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class E_FIELDCOMMAND_BATTLE_DIALOG_TYPEShowType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetBattle_C::OpenDialogCommon(class FName NPCLabel, class FText DialogText, TArray<class FText>& ButtonText, enum class E_FIELDCOMMAND_BATTLE_DIALOG_TYPE ShowType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OpenDialogCommon");

	Params::UFieldCommandWidgetBattle_C_OpenDialogCommon_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.DialogText = DialogText;
	Parms.ButtonText = ButtonText;
	Parms.ShowType = ShowType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandWidgetBattle_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "IsRunning");

	Params::UFieldCommandWidgetBattle_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.CloseAnimation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::CloseAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "CloseAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.InitWidgetParts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::InitWidgetParts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "InitWidgetParts");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.SetDialogStatus
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_FIELDCOMMAND_BATTLE_DIALOG_TYPEShowType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetBattle_C::SetDialogStatus(class FName NPCLabel, enum class E_FIELDCOMMAND_BATTLE_DIALOG_TYPE ShowType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "SetDialogStatus");

	Params::UFieldCommandWidgetBattle_C_SetDialogStatus_Params Parms{};

	Parms.NPCLabel = NPCLabel;
	Parms.ShowType = ShowType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.CloseOpponent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::CloseOpponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "CloseOpponent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetBattle_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnRightAxisX");

	Params::UFieldCommandWidgetBattle_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetBattle_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnRightAxisY");

	Params::UFieldCommandWidgetBattle_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetBattle_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnLeftAxisX");

	Params::UFieldCommandWidgetBattle_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetBattle_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnLeftAxisY");

	Params::UFieldCommandWidgetBattle_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetBattle_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnGamePadAxisX");

	Params::UFieldCommandWidgetBattle_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetBattle_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnGamePadAxisY");

	Params::UFieldCommandWidgetBattle_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFieldCommandWidgetBattle_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnListPaging");

	Params::UFieldCommandWidgetBattle_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetBattle_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "WorldMapSlowCursorX");

	Params::UFieldCommandWidgetBattle_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetBattle_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "WorldMapSlowCursorY");

	Params::UFieldCommandWidgetBattle_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetBattle_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "HelpScrollAxis");

	Params::UFieldCommandWidgetBattle_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandWidgetBattle_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandWidgetBattle.FieldCommandWidgetBattle_C.ExecuteUbergraph_FieldCommandWidgetBattle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandWidgetBattle_C::ExecuteUbergraph_FieldCommandWidgetBattle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandWidgetBattle_C", "ExecuteUbergraph_FieldCommandWidgetBattle");

	Params::UFieldCommandWidgetBattle_C_ExecuteUbergraph_FieldCommandWidgetBattle_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


