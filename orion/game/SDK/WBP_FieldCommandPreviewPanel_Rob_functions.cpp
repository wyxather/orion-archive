#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C
// (None)

class UClass* UWBP_FieldCommandPreviewPanel_Rob_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FieldCommandPreviewPanel_Rob_C");

	return Clss;
}


// WBP_FieldCommandPreviewPanel_Rob_C WBP_FieldCommandPreviewPanel_Rob.Default__WBP_FieldCommandPreviewPanel_Rob_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FieldCommandPreviewPanel_Rob_C* UWBP_FieldCommandPreviewPanel_Rob_C::GetDefaultObj()
{
	static class UWBP_FieldCommandPreviewPanel_Rob_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FieldCommandPreviewPanel_Rob_C*>(UWBP_FieldCommandPreviewPanel_Rob_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.IsAllItemOverMaxCount
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                ItemLabels                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FieldCommandPreviewPanel_Rob_C::IsAllItemOverMaxCount(TArray<class FName>& ItemLabels, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Rob_C", "IsAllItemOverMaxCount");

	Params::UWBP_FieldCommandPreviewPanel_Rob_C_IsAllItemOverMaxCount_Params Parms{};

	Parms.ItemLabels = ItemLabels;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.GetAdditionalFooterGuide
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FGuideData>          Flow                                                             (Parm, OutParm)

void UWBP_FieldCommandPreviewPanel_Rob_C::GetAdditionalFooterGuide(TArray<struct FGuideData>* Flow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Rob_C", "GetAdditionalFooterGuide");

	Params::UWBP_FieldCommandPreviewPanel_Rob_C_GetAdditionalFooterGuide_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Flow != nullptr)
		*Flow = std::move(Parms.Flow);

}


// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.Open
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FieldCommandPreviewPanel_Rob_C::Open(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Rob_C", "Open");

	Params::UWBP_FieldCommandPreviewPanel_Rob_C_Open_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.ToggleHelpWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Rob_C::ToggleHelpWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Rob_C", "ToggleHelpWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.OnClosedFailedDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Rob_C::OnClosedFailedDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Rob_C", "OnClosedFailedDialog");

	Params::UWBP_FieldCommandPreviewPanel_Rob_C_OnClosedFailedDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.OnClosedConfirmDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Rob_C::OnClosedConfirmDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Rob_C", "OnClosedConfirmDialog");

	Params::UWBP_FieldCommandPreviewPanel_Rob_C_OnClosedConfirmDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.MakeItemListText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        NPC_Label                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UWBP_FieldCommandPreviewPanel_Rob_C::MakeItemListText(class FName NPC_Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Rob_C", "MakeItemListText");

	Params::UWBP_FieldCommandPreviewPanel_Rob_C_MakeItemListText_Params Parms{};

	Parms.NPC_Label = NPC_Label;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.OnSelectItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectCursorPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Rob_C::OnSelectItem(int32 SelectCursorPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Rob_C", "OnSelectItem");

	Params::UWBP_FieldCommandPreviewPanel_Rob_C_OnSelectItem_Params Parms{};

	Parms.SelectCursorPosition = SelectCursorPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.Decide
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFieldCommandPreviewPanelDecideAnswerNewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Rob_C::Decide(enum class EFieldCommandPreviewPanelDecideAnswer* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Rob_C", "Decide");

	Params::UWBP_FieldCommandPreviewPanel_Rob_C_Decide_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Rob_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Rob_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Rob_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Rob_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.OutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FieldCommandPreviewPanel_Rob_C::OutFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Rob_C", "OutFocus");

	Params::UWBP_FieldCommandPreviewPanel_Rob_C_OutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FieldCommandPreviewPanel_Rob_C::Focus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Rob_C", "Focus");

	Params::UWBP_FieldCommandPreviewPanel_Rob_C_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.MakeListItemData
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMJListWidgetItemData>ItemListData                                                     (Parm, OutParm)
// TArray<class FName>                UnAcquiredItemsForRob                                            (Parm, OutParm)

void UWBP_FieldCommandPreviewPanel_Rob_C::MakeListItemData(class FName NPCLabel, TArray<struct FMJListWidgetItemData>* ItemListData, TArray<class FName>* UnAcquiredItemsForRob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Rob_C", "MakeListItemData");

	Params::UWBP_FieldCommandPreviewPanel_Rob_C_MakeListItemData_Params Parms{};

	Parms.NPCLabel = NPCLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemListData != nullptr)
		*ItemListData = std::move(Parms.ItemListData);

	if (UnAcquiredItemsForRob != nullptr)
		*UnAcquiredItemsForRob = std::move(Parms.UnAcquiredItemsForRob);

}


// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.SetupNpcStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Rob_C::SetupNpcStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Rob_C", "SetupNpcStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.SetupPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_FCv2_FieldCommandFlowBase_C*Flow                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Rob_C::SetupPanel(class ABP_FCv2_FieldCommandFlowBase_C* Flow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Rob_C", "SetupPanel");

	Params::UWBP_FieldCommandPreviewPanel_Rob_C_SetupPanel_Params Parms{};

	Parms.Flow = Flow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Rob.WBP_FieldCommandPreviewPanel_Rob_C.IsFocusablePanel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FieldCommandPreviewPanel_Rob_C::IsFocusablePanel(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Rob_C", "IsFocusablePanel");

	Params::UWBP_FieldCommandPreviewPanel_Rob_C_IsFocusablePanel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}

}


