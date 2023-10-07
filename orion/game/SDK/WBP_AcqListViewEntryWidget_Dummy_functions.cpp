#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_AcqListViewEntryWidget_Dummy.WBP_AcqListViewEntryWidget_Dummy_C
// (None)

class UClass* UWBP_AcqListViewEntryWidget_Dummy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_AcqListViewEntryWidget_Dummy_C");

	return Clss;
}


// WBP_AcqListViewEntryWidget_Dummy_C WBP_AcqListViewEntryWidget_Dummy.Default__WBP_AcqListViewEntryWidget_Dummy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_AcqListViewEntryWidget_Dummy_C* UWBP_AcqListViewEntryWidget_Dummy_C::GetDefaultObj()
{
	static class UWBP_AcqListViewEntryWidget_Dummy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_AcqListViewEntryWidget_Dummy_C*>(UWBP_AcqListViewEntryWidget_Dummy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_AcqListViewEntryWidget_Dummy.WBP_AcqListViewEntryWidget_Dummy_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_AcqListViewEntryWidget_Dummy_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewEntryWidget_Dummy_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AcqListViewEntryWidget_Dummy.WBP_AcqListViewEntryWidget_Dummy_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_AcqListViewEntryWidget_Dummy_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewEntryWidget_Dummy_C", "BP_OnItemExpansionChanged");

	Params::UWBP_AcqListViewEntryWidget_Dummy_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AcqListViewEntryWidget_Dummy.WBP_AcqListViewEntryWidget_Dummy_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_AcqListViewEntryWidget_Dummy_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewEntryWidget_Dummy_C", "BP_OnItemSelectionChanged");

	Params::UWBP_AcqListViewEntryWidget_Dummy_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AcqListViewEntryWidget_Dummy.WBP_AcqListViewEntryWidget_Dummy_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AcqListViewEntryWidget_Dummy_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewEntryWidget_Dummy_C", "OnListItemObjectSet");

	Params::UWBP_AcqListViewEntryWidget_Dummy_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AcqListViewEntryWidget_Dummy.WBP_AcqListViewEntryWidget_Dummy_C.ExecuteUbergraph_WBP_AcqListViewEntryWidget_Dummy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AcqListViewEntryWidget_Dummy_C::ExecuteUbergraph_WBP_AcqListViewEntryWidget_Dummy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_AcqListViewEntryWidget_Dummy_C", "ExecuteUbergraph_WBP_AcqListViewEntryWidget_Dummy");

	Params::UWBP_AcqListViewEntryWidget_Dummy_C_ExecuteUbergraph_WBP_AcqListViewEntryWidget_Dummy_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


