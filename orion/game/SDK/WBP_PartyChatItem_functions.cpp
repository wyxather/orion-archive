#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PartyChatItem.WBP_PartyChatItem_C
// (None)

class UClass* UWBP_PartyChatItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PartyChatItem_C");

	return Clss;
}


// WBP_PartyChatItem_C WBP_PartyChatItem.Default__WBP_PartyChatItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PartyChatItem_C* UWBP_PartyChatItem_C::GetDefaultObj()
{
	static class UWBP_PartyChatItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PartyChatItem_C*>(UWBP_PartyChatItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PartyChatItem.WBP_PartyChatItem_C.SetCursorVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_PartyChatItem_C::SetCursorVisibility(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartyChatItem_C", "SetCursorVisibility");

	Params::UWBP_PartyChatItem_C_SetCursorVisibility_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartyChatItem.WBP_PartyChatItem_C.ResetEntryItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartyChatItem_C::ResetEntryItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartyChatItem_C", "ResetEntryItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyChatItem.WBP_PartyChatItem_C.OnChangedEntryItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartyChatItem_C::OnChangedEntryItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartyChatItem_C", "OnChangedEntryItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyChatItem.WBP_PartyChatItem_C.RemoveNewIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartyChatItem_C::RemoveNewIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartyChatItem_C", "RemoveNewIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyChatItem.WBP_PartyChatItem_C.SetNewIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartyChatItem_C::SetNewIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartyChatItem_C", "SetNewIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyChatItem.WBP_PartyChatItem_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartyChatItem_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartyChatItem_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyChatItem.WBP_PartyChatItem_C.SetTitleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartyChatItem_C::SetTitleText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartyChatItem_C", "SetTitleText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyChatItem.WBP_PartyChatItem_C.SetPlayerIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartyChatItem_C::SetPlayerIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartyChatItem_C", "SetPlayerIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyChatItem.WBP_PartyChatItem_C.PlayOutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsImmediate                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_PartyChatItem_C::PlayOutFocus(bool IsImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartyChatItem_C", "PlayOutFocus");

	Params::UWBP_PartyChatItem_C_PlayOutFocus_Params Parms{};

	Parms.IsImmediate = IsImmediate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartyChatItem.WBP_PartyChatItem_C.PlayFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsImmediate                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_PartyChatItem_C::PlayFocus(bool IsImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartyChatItem_C", "PlayFocus");

	Params::UWBP_PartyChatItem_C_PlayFocus_Params Parms{};

	Parms.IsImmediate = IsImmediate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartyChatItem.WBP_PartyChatItem_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPartyChat                  PartyChatData                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PartyChatItem_C::Setup(const struct FPartyChat& PartyChatData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartyChatItem_C", "Setup");

	Params::UWBP_PartyChatItem_C_Setup_Params Parms{};

	Parms.PartyChatData = PartyChatData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartyChatItem.WBP_PartyChatItem_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_PartyChatItem_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartyChatItem_C", "BP_OnItemExpansionChanged");

	Params::UWBP_PartyChatItem_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartyChatItem.WBP_PartyChatItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PartyChatItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartyChatItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyChatItem.WBP_PartyChatItem_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartyChatItem_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartyChatItem_C", "OnListItemObjectSet");

	Params::UWBP_PartyChatItem_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartyChatItem.WBP_PartyChatItem_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_PartyChatItem_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartyChatItem_C", "BP_OnItemSelectionChanged");

	Params::UWBP_PartyChatItem_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartyChatItem.WBP_PartyChatItem_C.OnScrolled
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartyChatItem_C::OnScrolled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartyChatItem_C", "OnScrolled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyChatItem.WBP_PartyChatItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartyChatItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartyChatItem_C", "Tick");

	Params::UWBP_PartyChatItem_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartyChatItem.WBP_PartyChatItem_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_PartyChatItem_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartyChatItem_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyChatItem.WBP_PartyChatItem_C.ExecuteUbergraph_WBP_PartyChatItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartyChatItem_C::ExecuteUbergraph_WBP_PartyChatItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_PartyChatItem_C", "ExecuteUbergraph_WBP_PartyChatItem");

	Params::UWBP_PartyChatItem_C_ExecuteUbergraph_WBP_PartyChatItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


