#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass PurchaselistWidget.PurchaselistWidget_C
// (None)

class UClass* UPurchaselistWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PurchaselistWidget_C");

	return Clss;
}


// PurchaselistWidget_C PurchaselistWidget.Default__PurchaselistWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPurchaselistWidget_C* UPurchaselistWidget_C::GetDefaultObj()
{
	static class UPurchaselistWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPurchaselistWidget_C*>(UPurchaselistWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PurchaselistWidget.PurchaselistWidget_C.SetPercenTextByLanguage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMJListItemWidget*           NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELIST_NUM_UNIT_TYPE     UnitType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaselistWidget_C::SetPercenTextByLanguage(class UMJListItemWidget* NewParam, enum class ELIST_NUM_UNIT_TYPE UnitType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "SetPercenTextByLanguage");

	Params::UPurchaselistWidget_C_SetPercenTextByLanguage_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.UnitType = UnitType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaselistWidget.PurchaselistWidget_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDIALOG_STATE           Status                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaselistWidget_C::SetState(enum class EDIALOG_STATE Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "SetState");

	Params::UPurchaselistWidget_C_SetState_Params Parms{};

	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaselistWidget.PurchaselistWidget_C.UpdateHelpWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::UpdateHelpWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "UpdateHelpWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.SetHelpVisiblity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HelpVisiblity                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Play_SE                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPurchaselistWidget_C::SetHelpVisiblity(bool HelpVisiblity, bool Play_SE)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "SetHelpVisiblity");

	Params::UPurchaselistWidget_C_SetHelpVisiblity_Params Parms{};

	Parms.HelpVisiblity = HelpVisiblity;
	Parms.Play_SE = Play_SE;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaselistWidget.PurchaselistWidget_C.SelectDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::SelectDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "SelectDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.SelectFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPurchaselistWidget_C::SelectFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "SelectFocus");

	Params::UPurchaselistWidget_C_SelectFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaselistWidget.PurchaselistWidget_C.SetUnitType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_NUM_UNIT_TYPE     UnitType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaselistWidget_C::SetUnitType(enum class ELIST_NUM_UNIT_TYPE UnitType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "SetUnitType");

	Params::UPurchaselistWidget_C_SetUnitType_Params Parms{};

	Parms.UnitType = UnitType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaselistWidget.PurchaselistWidget_C.AddListItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::AddListItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "AddListItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.SetVisibleDetailText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPurchaselistWidget_C::SetVisibleDetailText(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "SetVisibleDetailText");

	Params::UPurchaselistWidget_C_SetVisibleDetailText_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaselistWidget.PurchaselistWidget_C.CursorReset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::CursorReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "CursorReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPurchaselistWidget_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "IsRunning");

	Params::UPurchaselistWidget_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PurchaselistWidget.PurchaselistWidget_C.CloseList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::CloseList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "CloseList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.GetCursorPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CursorPosition                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaselistWidget_C::GetCursorPosition(int32* CursorPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "GetCursorPosition");

	Params::UPurchaselistWidget_C_GetCursorPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CursorPosition != nullptr)
		*CursorPosition = Parms.CursorPosition;

}


// Function PurchaselistWidget.PurchaselistWidget_C.CursorUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewCursor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaselistWidget_C::CursorUpdate(int32 NewCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "CursorUpdate");

	Params::UPurchaselistWidget_C_CursorUpdate_Params Parms{};

	Parms.NewCursor = NewCursor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaselistWidget.PurchaselistWidget_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OpenList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OpenList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OpenList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.SetListItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMJListWidgetItemData>ListItemData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CursorReset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPurchaselistWidget_C::SetListItem(TArray<struct FMJListWidgetItemData>& ListItemData, bool CursorReset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "SetListItem");

	Params::UPurchaselistWidget_C_SetListItem_Params Parms{};

	Parms.ListItemData = ListItemData;
	Parms.CursorReset = CursorReset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaselistWidget.PurchaselistWidget_C.SetListColumn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Col1                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Col2                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Col3                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaselistWidget_C::SetListColumn(class FName Col1, class FName Col2, class FName Col3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "SetListColumn");

	Params::UPurchaselistWidget_C_SetListColumn_Params Parms{};

	Parms.Col1 = Col1;
	Parms.Col2 = Col2;
	Parms.Col3 = Col3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaselistWidget.PurchaselistWidget_C.SetCaption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CaptionText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UPurchaselistWidget_C::SetCaption(class FText CaptionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "SetCaption");

	Params::UPurchaselistWidget_C_SetCaption_Params Parms{};

	Parms.CaptionText = CaptionText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaselistWidget_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnRightAxisX");

	Params::UPurchaselistWidget_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaselistWidget_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnRightAxisY");

	Params::UPurchaselistWidget_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaselistWidget_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnLeftAxisX");

	Params::UPurchaselistWidget_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaselistWidget_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnLeftAxisY");

	Params::UPurchaselistWidget_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaselistWidget_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnGamePadAxisX");

	Params::UPurchaselistWidget_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaselistWidget_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnGamePadAxisY");

	Params::UPurchaselistWidget_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPurchaselistWidget_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnListPaging");

	Params::UPurchaselistWidget_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaselistWidget_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "WorldMapSlowCursorX");

	Params::UPurchaselistWidget_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaselistWidget.PurchaselistWidget_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaselistWidget_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "WorldMapSlowCursorY");

	Params::UPurchaselistWidget_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaselistWidget.PurchaselistWidget_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaselistWidget_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "HelpScrollAxis");

	Params::UPurchaselistWidget_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaselistWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "Tick");

	Params::UPurchaselistWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPurchaselistWidget_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PurchaselistWidget.PurchaselistWidget_C.ExecuteUbergraph_PurchaselistWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaselistWidget_C::ExecuteUbergraph_PurchaselistWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "ExecuteUbergraph_PurchaselistWidget");

	Params::UPurchaselistWidget_C_ExecuteUbergraph_PurchaselistWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaselistWidget.PurchaselistWidget_C.SelectedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectCursorPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaselistWidget_C::SelectedEvent__DelegateSignature(int32 SelectCursorPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("PurchaselistWidget_C", "SelectedEvent__DelegateSignature");

	Params::UPurchaselistWidget_C_SelectedEvent__DelegateSignature_Params Parms{};

	Parms.SelectCursorPosition = SelectCursorPosition;

	UObject::ProcessEvent(Func, &Parms);

}

}


