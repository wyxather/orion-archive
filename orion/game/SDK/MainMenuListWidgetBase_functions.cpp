#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenuListWidgetBase.MainMenuListWidgetBase_C
// (None)

class UClass* UMainMenuListWidgetBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuListWidgetBase_C");

	return Clss;
}


// MainMenuListWidgetBase_C MainMenuListWidgetBase.Default__MainMenuListWidgetBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuListWidgetBase_C* UMainMenuListWidgetBase_C::GetDefaultObj()
{
	static class UMainMenuListWidgetBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuListWidgetBase_C*>(UMainMenuListWidgetBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.MenuStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::MenuStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "MenuStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.IsChangeStateCloseFinish
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuListWidgetBase_C::IsChangeStateCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "IsChangeStateCloseFinish");

	Params::UMainMenuListWidgetBase_C_IsChangeStateCloseFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.IsChangeStateOpenFinish
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuListWidgetBase_C::IsChangeStateOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "IsChangeStateOpenFinish");

	Params::UMainMenuListWidgetBase_C_IsChangeStateOpenFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.SetReference
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuListWidgetBase_C::SetReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "SetReference");

	Params::UMainMenuListWidgetBase_C_SetReference_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuListWidgetBase_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "IsRunning");

	Params::UMainMenuListWidgetBase_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.MenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::MenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "MenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.MenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::MenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "MenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.CallCreateListItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::CallCreateListItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "CallCreateListItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.CallCreateCategory
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::CallCreateCategory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "CallCreateCategory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.CallListEvent
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdxInAll                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuListWidgetBase_C::CallListEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "CallListEvent");

	Params::UMainMenuListWidgetBase_C_CallListEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdxInAll = ItemIdxInAll;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.SetListObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListWidget_C*               ListWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            WidgetOpenAnim                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            WidgetCloseAnim                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuListWidgetBase_C::SetListObject(class UListWidget_C* ListWidget, class UWidgetAnimation* WidgetOpenAnim, class UWidgetAnimation* WidgetCloseAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "SetListObject");

	Params::UMainMenuListWidgetBase_C_SetListObject_Params Parms{};

	Parms.ListWidget = ListWidget;
	Parms.WidgetOpenAnim = WidgetOpenAnim;
	Parms.WidgetCloseAnim = WidgetCloseAnim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.ListWidgetPushPop
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPush                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuListWidgetBase_C::ListWidgetPushPop(bool IsPush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "ListWidgetPushPop");

	Params::UMainMenuListWidgetBase_C_ListWidgetPushPop_Params Parms{};

	Parms.IsPush = IsPush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.ConstructEvent
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseCategory                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ELIST_NUM_UNIT_TYPE     NumUnitType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuListWidgetBase_C::ConstructEvent(bool UseCategory, enum class ELIST_NUM_UNIT_TYPE NumUnitType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "ConstructEvent");

	Params::UMainMenuListWidgetBase_C_ConstructEvent_Params Parms{};

	Parms.UseCategory = UseCategory;
	Parms.NumUnitType = NumUnitType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.MenuCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::MenuCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "MenuCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.MenuCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::MenuCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "MenuCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.IsActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuListWidgetBase_C::IsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "IsActive");

	Params::UMainMenuListWidgetBase_C_IsActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.BaseTickEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::BaseTickEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "BaseTickEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.BaseListEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdxInAll                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuListWidgetBase_C::BaseListEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "BaseListEvent");

	Params::UMainMenuListWidgetBase_C_BaseListEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdxInAll = ItemIdxInAll;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.CreateCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FListWidgetCategory> ListWidgetCategory                                               (Parm, OutParm)

void UMainMenuListWidgetBase_C::CreateCategory(TArray<struct FListWidgetCategory>* ListWidgetCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "CreateCategory");

	Params::UMainMenuListWidgetBase_C_CreateCategory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ListWidgetCategory != nullptr)
		*ListWidgetCategory = std::move(Parms.ListWidgetCategory);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.CreateListItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMJListWidgetItemData>ListWidgetItem                                                   (Parm, OutParm)

void UMainMenuListWidgetBase_C::CreateListItem(TArray<struct FMJListWidgetItemData>* ListWidgetItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "CreateListItem");

	Params::UMainMenuListWidgetBase_C_CreateListItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ListWidgetItem != nullptr)
		*ListWidgetItem = std::move(Parms.ListWidgetItem);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.MenuClose
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::MenuClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "MenuClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.MenuOpen
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::MenuOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "MenuOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuListWidgetBase_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnRightAxisX");

	Params::UMainMenuListWidgetBase_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuListWidgetBase_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnRightAxisY");

	Params::UMainMenuListWidgetBase_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuListWidgetBase_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnLeftAxisX");

	Params::UMainMenuListWidgetBase_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuListWidgetBase_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnLeftAxisY");

	Params::UMainMenuListWidgetBase_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuListWidgetBase_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnGamePadAxisX");

	Params::UMainMenuListWidgetBase_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuListWidgetBase_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnGamePadAxisY");

	Params::UMainMenuListWidgetBase_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuListWidgetBase_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnListPaging");

	Params::UMainMenuListWidgetBase_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuListWidgetBase_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "WorldMapSlowCursorX");

	Params::UMainMenuListWidgetBase_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuListWidgetBase_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "WorldMapSlowCursorY");

	Params::UMainMenuListWidgetBase_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuListWidgetBase_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "HelpScrollAxis");

	Params::UMainMenuListWidgetBase_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.UpdateOpening
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::UpdateOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "UpdateOpening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.UpdateClosing
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::UpdateClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "UpdateClosing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnOpenFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnOpenFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuListWidgetBase_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "Tick");

	Params::UMainMenuListWidgetBase_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuListWidgetBase_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuListWidgetBase.MainMenuListWidgetBase_C.ExecuteUbergraph_MainMenuListWidgetBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuListWidgetBase_C::ExecuteUbergraph_MainMenuListWidgetBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuListWidgetBase_C", "ExecuteUbergraph_MainMenuListWidgetBase");

	Params::UMainMenuListWidgetBase_C_ExecuteUbergraph_MainMenuListWidgetBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


