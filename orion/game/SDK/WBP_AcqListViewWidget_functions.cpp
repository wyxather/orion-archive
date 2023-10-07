#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_AcqListViewWidget.WBP_AcqListViewWidget_C
// (None)

class UClass* UWBP_AcqListViewWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_AcqListViewWidget_C");

	return Clss;
}


// WBP_AcqListViewWidget_C WBP_AcqListViewWidget.Default__WBP_AcqListViewWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_AcqListViewWidget_C* UWBP_AcqListViewWidget_C::GetDefaultObj()
{
	static class UWBP_AcqListViewWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_AcqListViewWidget_C*>(UWBP_AcqListViewWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.SetScrollOffset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ScrollOffset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AcqListViewWidget_C::SetScrollOffset(float ScrollOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "SetScrollOffset");

	Params::UWBP_AcqListViewWidget_C_SetScrollOffset_Params Parms{};

	Parms.ScrollOffset = ScrollOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.UpdateSelectedItem
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   DisplayRange                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AcqListViewWidget_C::UpdateSelectedItem(int32 Index, struct FIntPoint& DisplayRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "UpdateSelectedItem");

	Params::UWBP_AcqListViewWidget_C_UpdateSelectedItem_Params Parms{};

	Parms.Index = Index;
	Parms.DisplayRange = DisplayRange;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.PagingCursor
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              Dir                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AcqListViewWidget_C::PagingCursor(uint8 Dir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "PagingCursor");

	Params::UWBP_AcqListViewWidget_C_PagingCursor_Params Parms{};

	Parms.Dir = Dir;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnPaging_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              Dir                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AcqListViewWidget_C::OnPaging_Internal(uint8 Dir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnPaging_Internal");

	Params::UWBP_AcqListViewWidget_C_OnPaging_Internal_Params Parms{};

	Parms.Dir = Dir;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.GetSelectedIndex
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWBP_AcqListViewWidget_C::GetSelectedIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "GetSelectedIndex");

	Params::UWBP_AcqListViewWidget_C_GetSelectedIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.GetEntryItems
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UAcqListViewEntryItemBase*>ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm)

TArray<class UAcqListViewEntryItemBase*> UWBP_AcqListViewWidget_C::GetEntryItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "GetEntryItems");

	Params::UWBP_AcqListViewWidget_C_GetEntryItems_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnCancel_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnCancel_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnCancel_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnDecide_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnDecide_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnDecide_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.Setup
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UAcqListViewEntryItemBase*>EntryItems                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_AcqListViewWidget_C::Setup(TArray<class UAcqListViewEntryItemBase*>& EntryItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "Setup");

	Params::UWBP_AcqListViewWidget_C_Setup_Params Parms{};

	Parms.EntryItems = EntryItems;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.SetSelectedIndex
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AcqListViewWidget_C::SetSelectedIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "SetSelectedIndex");

	Params::UWBP_AcqListViewWidget_C_SetSelectedIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.GetListView
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAcqListView*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UAcqListView* UWBP_AcqListViewWidget_C::GetListView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "GetListView");

	Params::UWBP_AcqListViewWidget_C_GetListView_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.GetEntryItemNum
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWBP_AcqListViewWidget_C::GetEntryItemNum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "GetEntryItemNum");

	Params::UWBP_AcqListViewWidget_C_GetEntryItemNum_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.SetEntryItems
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UAcqListViewEntryItemBase*>EntryItems                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_AcqListViewWidget_C::SetEntryItems(TArray<class UAcqListViewEntryItemBase*>& EntryItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "SetEntryItems");

	Params::UWBP_AcqListViewWidget_C_SetEntryItems_Params Parms{};

	Parms.EntryItems = EntryItems;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.ClearEntryItems
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::ClearEntryItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "ClearEntryItems");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.MoveCursor
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              Dir                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AcqListViewWidget_C::MoveCursor(uint8 Dir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "MoveCursor");

	Params::UWBP_AcqListViewWidget_C_MoveCursor_Params Parms{};

	Parms.Dir = Dir;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnCursorDown_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnCursorDown_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnCursorDown_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnCursorUp_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnCursorUp_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnCursorUp_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AcqListViewWidget_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnRightAxisX");

	Params::UWBP_AcqListViewWidget_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AcqListViewWidget_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnRightAxisY");

	Params::UWBP_AcqListViewWidget_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AcqListViewWidget_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnLeftAxisX");

	Params::UWBP_AcqListViewWidget_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AcqListViewWidget_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnLeftAxisY");

	Params::UWBP_AcqListViewWidget_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AcqListViewWidget_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnGamePadAxisX");

	Params::UWBP_AcqListViewWidget_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AcqListViewWidget_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnGamePadAxisY");

	Params::UWBP_AcqListViewWidget_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AcqListViewWidget_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "WorldMapSlowCursorX");

	Params::UWBP_AcqListViewWidget_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AcqListViewWidget_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "WorldMapSlowCursorY");

	Params::UWBP_AcqListViewWidget_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AcqListViewWidget_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "HelpScrollAxis");

	Params::UWBP_AcqListViewWidget_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_AcqListViewWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "PreConstruct");

	Params::UWBP_AcqListViewWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewWidget_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_AcqListViewWidget_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "OnListPaging");

	Params::UWBP_AcqListViewWidget_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AcqListViewWidget.WBP_AcqListViewWidget_C.ExecuteUbergraph_WBP_AcqListViewWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AcqListViewWidget_C::ExecuteUbergraph_WBP_AcqListViewWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewWidget_C", "ExecuteUbergraph_WBP_AcqListViewWidget");

	Params::UWBP_AcqListViewWidget_C_ExecuteUbergraph_WBP_AcqListViewWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


