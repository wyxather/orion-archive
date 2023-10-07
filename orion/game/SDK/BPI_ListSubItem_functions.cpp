#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPI_ListSubItem.BPI_ListSubItem_C
// (None)

class UClass* IBPI_ListSubItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_ListSubItem_C");

	return Clss;
}


// BPI_ListSubItem_C BPI_ListSubItem.Default__BPI_ListSubItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_ListSubItem_C* IBPI_ListSubItem_C::GetDefaultObj()
{
	static class IBPI_ListSubItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_ListSubItem_C*>(IBPI_ListSubItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_ListSubItem.BPI_ListSubItem_C.SetSelectIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ListSubItem_C::SetSelectIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_ListSubItem_C", "SetSelectIndex");

	Params::IBPI_ListSubItem_C_SetSelectIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_ListSubItem.BPI_ListSubItem_C.GetItemListWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMJListItemWidget*>   ListWidget                                                       (Parm, OutParm, ContainsInstancedReference)

void IBPI_ListSubItem_C::GetItemListWidget(TArray<class UMJListItemWidget*>* ListWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_ListSubItem_C", "GetItemListWidget");

	Params::IBPI_ListSubItem_C_GetItemListWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ListWidget != nullptr)
		*ListWidget = std::move(Parms.ListWidget);

}


// Function BPI_ListSubItem.BPI_ListSubItem_C.ReOpenHelpWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_ListSubItem_C::ReOpenHelpWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_ListSubItem_C", "ReOpenHelpWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_ListSubItem.BPI_ListSubItem_C.GetItemList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMJListWidgetItemData>ItemList                                                         (Parm, OutParm)

void IBPI_ListSubItem_C::GetItemList(TArray<struct FMJListWidgetItemData>* ItemList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_ListSubItem_C", "GetItemList");

	Params::IBPI_ListSubItem_C_GetItemList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemList != nullptr)
		*ItemList = std::move(Parms.ItemList);

}


// Function BPI_ListSubItem.BPI_ListSubItem_C.OutSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_ListSubItem_C::OutSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_ListSubItem_C", "OutSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_ListSubItem.BPI_ListSubItem_C.GetItemLength
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Length                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ListSubItem_C::GetItemLength(int32* Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_ListSubItem_C", "GetItemLength");

	Params::IBPI_ListSubItem_C_GetItemLength_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Length != nullptr)
		*Length = Parms.Length;

}


// Function BPI_ListSubItem.BPI_ListSubItem_C.MostBottom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_ListSubItem_C::MostBottom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_ListSubItem_C", "MostBottom");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_ListSubItem.BPI_ListSubItem_C.MostTop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_ListSubItem_C::MostTop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_ListSubItem_C", "MostTop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_ListSubItem.BPI_ListSubItem_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_ListSubItem_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_ListSubItem_C", "Setup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_ListSubItem.BPI_ListSubItem_C.OnCursorDown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               End                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_ListSubItem_C::OnCursorDown(bool* End)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_ListSubItem_C", "OnCursorDown");

	Params::IBPI_ListSubItem_C_OnCursorDown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (End != nullptr)
		*End = Parms.End;

}


// Function BPI_ListSubItem.BPI_ListSubItem_C.OnCursorUp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               End                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_ListSubItem_C::OnCursorUp(bool* End)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_ListSubItem_C", "OnCursorUp");

	Params::IBPI_ListSubItem_C_OnCursorUp_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (End != nullptr)
		*End = Parms.End;

}


// Function BPI_ListSubItem.BPI_ListSubItem_C.EnableSelect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_ListSubItem_C::EnableSelect(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPI_ListSubItem_C", "EnableSelect");

	Params::IBPI_ListSubItem_C_EnableSelect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}

}


