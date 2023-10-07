#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass StatusMenuWidget.StatusMenuWidget_C
// (None)

class UClass* UStatusMenuWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatusMenuWidget_C");

	return Clss;
}


// StatusMenuWidget_C StatusMenuWidget.Default__StatusMenuWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatusMenuWidget_C* UStatusMenuWidget_C::GetDefaultObj()
{
	static class UStatusMenuWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatusMenuWidget_C*>(UStatusMenuWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StatusMenuWidget.StatusMenuWidget_C.SetSpecialActionText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ActionIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPanelWidget*>        PanelTop                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UKSTextBlock*>        TextName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UKSTextBlock*>        TextDetail                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UStatusMenuWidget_C::SetSpecialActionText(int32 ActionIndex, TArray<class UPanelWidget*>& PanelTop, TArray<class UKSTextBlock*>& TextName, TArray<class UKSTextBlock*>& TextDetail)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "SetSpecialActionText");

	Params::UStatusMenuWidget_C_SetSpecialActionText_Params Parms{};

	Parms.ActionIndex = ActionIndex;
	Parms.PanelTop = PanelTop;
	Parms.TextName = TextName;
	Parms.TextDetail = TextDetail;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuWidget.StatusMenuWidget_C.GetFCData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMJFieldCommandType     Day_Time_FC                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMJFieldCommandType     Night_FC                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusMenuWidget_C::GetFCData(int32 CharacterID, enum class EMJFieldCommandType* Day_Time_FC, enum class EMJFieldCommandType* Night_FC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "GetFCData");

	Params::UStatusMenuWidget_C_GetFCData_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

	if (Day_Time_FC != nullptr)
		*Day_Time_FC = Parms.Day_Time_FC;

	if (Night_FC != nullptr)
		*Night_FC = Parms.Night_FC;

}


// Function StatusMenuWidget.StatusMenuWidget_C.Update Selected Character
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::Update_Selected_Character()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "Update Selected Character");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.SetReference
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UStatusMenuWidget_C::SetReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "SetReference");

	Params::UStatusMenuWidget_C_SetReference_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StatusMenuWidget.StatusMenuWidget_C.Init
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UStatusMenuWidget_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "Init");

	Params::UStatusMenuWidget_C_Init_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StatusMenuWidget.StatusMenuWidget_C.SetupUIParts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::SetupUIParts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "SetupUIParts");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.SetCharacterID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::SetCharacterID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "SetCharacterID");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.SetGuideUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGuest                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatusMenuWidget_C::SetGuideUI(bool IsGuest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "SetGuideUI");

	Params::UStatusMenuWidget_C_SetGuideUI_Params Parms{};

	Parms.IsGuest = IsGuest;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuWidget.StatusMenuWidget_C.SetPlayerTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::SetPlayerTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "SetPlayerTexture");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.Special Action
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::Special_Action()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "Special Action");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.Params
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::Params()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "Params");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.UpdateEquipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::UpdateEquipment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "UpdateEquipment");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.BaseStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::BaseStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "BaseStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.Update Status Display
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::Update_Status_Display()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "Update Status Display");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.Down Cursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::Down_Cursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "Down Cursor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.Up Cursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::Up_Cursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "Up Cursor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.SetCharacterIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::SetCharacterIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "SetCharacterIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.SetupIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListCategoryWidget_C*       CategoryIcon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusMenuWidget_C::SetupIcon(class UListCategoryWidget_C* CategoryIcon, class UTexture2D* Texture, class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "SetupIcon");

	Params::UStatusMenuWidget_C_SetupIcon_Params Parms{};

	Parms.CategoryIcon = CategoryIcon;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function StatusMenuWidget.StatusMenuWidget_C.ReserveCategoryTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Num                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusMenuWidget_C::ReserveCategoryTab(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "ReserveCategoryTab");

	Params::UStatusMenuWidget_C_ReserveCategoryTab_Params Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuWidget.StatusMenuWidget_C.GetCurrentState_Local
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESTATUS_MENU_STATE      CurrentState                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusMenuWidget_C::GetCurrentState_Local(enum class ESTATUS_MENU_STATE* CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "GetCurrentState_Local");

	Params::UStatusMenuWidget_C_GetCurrentState_Local_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentState != nullptr)
		*CurrentState = Parms.CurrentState;

}


// Function StatusMenuWidget.StatusMenuWidget_C.CloseMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "CloseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.SetNextState_Local
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESTATUS_MENU_STATE      NextState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusMenuWidget_C::SetNextState_Local(enum class ESTATUS_MENU_STATE NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "SetNextState_Local");

	Params::UStatusMenuWidget_C_SetNextState_Local_Params Parms{};

	Parms.NextState = NextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OpenMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OpenMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OpenMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UStatusMenuWidget_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "IsRunning");

	Params::UStatusMenuWidget_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StatusMenuWidget.StatusMenuWidget_C.IsClosingState
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UStatusMenuWidget_C::IsClosingState(int32 State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "IsClosingState");

	Params::UStatusMenuWidget_C_IsClosingState_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnEndState_Local
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESTATUS_MENU_STATE      CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESTATUS_MENU_STATE      NextState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusMenuWidget_C::OnEndState_Local(enum class ESTATUS_MENU_STATE CurrentState, enum class ESTATUS_MENU_STATE NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnEndState_Local");

	Params::UStatusMenuWidget_C_OnEndState_Local_Params Parms{};

	Parms.CurrentState = CurrentState;
	Parms.NextState = NextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnBeginState_Local
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESTATUS_MENU_STATE      PrevState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESTATUS_MENU_STATE      CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusMenuWidget_C::OnBeginState_Local(enum class ESTATUS_MENU_STATE PrevState, enum class ESTATUS_MENU_STATE CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnBeginState_Local");

	Params::UStatusMenuWidget_C_OnBeginState_Local_Params Parms{};

	Parms.PrevState = PrevState;
	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnUpdateState_Local
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESTATUS_MENU_STATE      CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusMenuWidget_C::OnUpdateState_Local(enum class ESTATUS_MENU_STATE CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnUpdateState_Local");

	Params::UStatusMenuWidget_C_OnUpdateState_Local_Params Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusMenuWidget_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnRightAxisX");

	Params::UStatusMenuWidget_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusMenuWidget_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnRightAxisY");

	Params::UStatusMenuWidget_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusMenuWidget_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnLeftAxisX");

	Params::UStatusMenuWidget_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusMenuWidget_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnLeftAxisY");

	Params::UStatusMenuWidget_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusMenuWidget_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnGamePadAxisX");

	Params::UStatusMenuWidget_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusMenuWidget_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnGamePadAxisY");

	Params::UStatusMenuWidget_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatusMenuWidget_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnListPaging");

	Params::UStatusMenuWidget_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusMenuWidget_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "WorldMapSlowCursorX");

	Params::UStatusMenuWidget_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuWidget.StatusMenuWidget_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusMenuWidget_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "WorldMapSlowCursorY");

	Params::UStatusMenuWidget_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuWidget.StatusMenuWidget_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusMenuWidget_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "HelpScrollAxis");

	Params::UStatusMenuWidget_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusMenuWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "Tick");

	Params::UStatusMenuWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnUpdateState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusMenuWidget_C::OnUpdateState(int32 CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnUpdateState");

	Params::UStatusMenuWidget_C_OnUpdateState_Params Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnBeginState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PrevState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusMenuWidget_C::OnBeginState(int32 PrevState, int32 CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnBeginState");

	Params::UStatusMenuWidget_C_OnBeginState_Params Parms{};

	Parms.PrevState = PrevState;
	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnEndState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NextState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusMenuWidget_C::OnEndState(int32 CurrentState, int32 NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnEndState");

	Params::UStatusMenuWidget_C_OnEndState_Params Parms{};

	Parms.CurrentState = CurrentState;
	Parms.NextState = NextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusMenuWidget.StatusMenuWidget_C.UpdateOpening
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::UpdateOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "UpdateOpening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnOpenFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnOpenFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.UpdateClosing
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::UpdateClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "UpdateClosing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStatusMenuWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusMenuWidget.StatusMenuWidget_C.ExecuteUbergraph_StatusMenuWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusMenuWidget_C::ExecuteUbergraph_StatusMenuWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StatusMenuWidget_C", "ExecuteUbergraph_StatusMenuWidget");

	Params::UStatusMenuWidget_C_ExecuteUbergraph_StatusMenuWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


