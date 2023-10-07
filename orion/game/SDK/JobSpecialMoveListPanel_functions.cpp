#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass JobSpecialMoveListPanel.JobSpecialMoveListPanel_C
// (None)

class UClass* UJobSpecialMoveListPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JobSpecialMoveListPanel_C");

	return Clss;
}


// JobSpecialMoveListPanel_C JobSpecialMoveListPanel.Default__JobSpecialMoveListPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJobSpecialMoveListPanel_C* UJobSpecialMoveListPanel_C::GetDefaultObj()
{
	static class UJobSpecialMoveListPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJobSpecialMoveListPanel_C*>(UJobSpecialMoveListPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.GetItemListWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMJListItemWidget*>   ListWidget                                                       (Parm, OutParm, ContainsInstancedReference)

void UJobSpecialMoveListPanel_C::GetItemListWidget(TArray<class UMJListItemWidget*>* ListWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobSpecialMoveListPanel_C", "GetItemListWidget");

	Params::UJobSpecialMoveListPanel_C_GetItemListWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ListWidget != nullptr)
		*ListWidget = std::move(Parms.ListWidget);

}


// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.GetItemList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMJListWidgetItemData>ItemList                                                         (Parm, OutParm)

void UJobSpecialMoveListPanel_C::GetItemList(TArray<struct FMJListWidgetItemData>* ItemList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobSpecialMoveListPanel_C", "GetItemList");

	Params::UJobSpecialMoveListPanel_C_GetItemList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemList != nullptr)
		*ItemList = std::move(Parms.ItemList);

}


// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.GetItemLength
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Length                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobSpecialMoveListPanel_C::GetItemLength(int32* Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobSpecialMoveListPanel_C", "GetItemLength");

	Params::UJobSpecialMoveListPanel_C_GetItemLength_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Length != nullptr)
		*Length = Parms.Length;

}


// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.OnCursorDown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               End                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJobSpecialMoveListPanel_C::OnCursorDown(bool* End)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobSpecialMoveListPanel_C", "OnCursorDown");

	Params::UJobSpecialMoveListPanel_C_OnCursorDown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (End != nullptr)
		*End = Parms.End;

}


// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.OnCursorUp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               End                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJobSpecialMoveListPanel_C::OnCursorUp(bool* End)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobSpecialMoveListPanel_C", "OnCursorUp");

	Params::UJobSpecialMoveListPanel_C_OnCursorUp_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (End != nullptr)
		*End = Parms.End;

}


// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.EnableSelect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJobSpecialMoveListPanel_C::EnableSelect(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobSpecialMoveListPanel_C", "EnableSelect");

	Params::UJobSpecialMoveListPanel_C_EnableSelect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.OpenHelpText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobSpecialMoveListPanel_C::OpenHelpText(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobSpecialMoveListPanel_C", "OpenHelpText");

	Params::UJobSpecialMoveListPanel_C_OpenHelpText_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.SetParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobSpecialMoveListPanel_C::SetParam(int32 PlayerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobSpecialMoveListPanel_C", "SetParam");

	Params::UJobSpecialMoveListPanel_C_SetParam_Params Parms{};

	Parms.PlayerID = PlayerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.PlayFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobSpecialMoveListPanel_C::PlayFocus(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobSpecialMoveListPanel_C", "PlayFocus");

	Params::UJobSpecialMoveListPanel_C_PlayFocus_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.PlayOutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobSpecialMoveListPanel_C::PlayOutFocus(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobSpecialMoveListPanel_C", "PlayOutFocus");

	Params::UJobSpecialMoveListPanel_C_PlayOutFocus_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UJobSpecialMoveListPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobSpecialMoveListPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobSpecialMoveListPanel_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobSpecialMoveListPanel_C", "Setup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.MostTop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobSpecialMoveListPanel_C::MostTop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobSpecialMoveListPanel_C", "MostTop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.MostBottom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobSpecialMoveListPanel_C::MostBottom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobSpecialMoveListPanel_C", "MostBottom");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.OutSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobSpecialMoveListPanel_C::OutSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobSpecialMoveListPanel_C", "OutSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.ReOpenHelpWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobSpecialMoveListPanel_C::ReOpenHelpWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobSpecialMoveListPanel_C", "ReOpenHelpWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.SetSelectIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobSpecialMoveListPanel_C::SetSelectIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobSpecialMoveListPanel_C", "SetSelectIndex");

	Params::UJobSpecialMoveListPanel_C_SetSelectIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobSpecialMoveListPanel.JobSpecialMoveListPanel_C.ExecuteUbergraph_JobSpecialMoveListPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobSpecialMoveListPanel_C::ExecuteUbergraph_JobSpecialMoveListPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobSpecialMoveListPanel_C", "ExecuteUbergraph_JobSpecialMoveListPanel");

	Params::UJobSpecialMoveListPanel_C_ExecuteUbergraph_JobSpecialMoveListPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


