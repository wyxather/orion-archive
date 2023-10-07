#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenuTutorialListWidget.MainMenuTutorialListWidget_C
// (None)

class UClass* UMainMenuTutorialListWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuTutorialListWidget_C");

	return Clss;
}


// MainMenuTutorialListWidget_C MainMenuTutorialListWidget.Default__MainMenuTutorialListWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuTutorialListWidget_C* UMainMenuTutorialListWidget_C::GetDefaultObj()
{
	static class UMainMenuTutorialListWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuTutorialListWidget_C*>(UMainMenuTutorialListWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuTutorialListWidget.MainMenuTutorialListWidget_C.SetupFooterUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenuFooter_C*               FooterUI                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuTutorialListWidget_C::SetupFooterUI(class UMenuFooter_C* FooterUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuTutorialListWidget_C", "SetupFooterUI");

	Params::UMainMenuTutorialListWidget_C_SetupFooterUI_Params Parms{};

	Parms.FooterUI = FooterUI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuTutorialListWidget.MainMenuTutorialListWidget_C.CreateCategory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FListWidgetCategory> ListWidgetCategory                                               (Parm, OutParm)

void UMainMenuTutorialListWidget_C::CreateCategory(TArray<struct FListWidgetCategory>* ListWidgetCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuTutorialListWidget_C", "CreateCategory");

	Params::UMainMenuTutorialListWidget_C_CreateCategory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ListWidgetCategory != nullptr)
		*ListWidgetCategory = std::move(Parms.ListWidgetCategory);

}


// Function MainMenuTutorialListWidget.MainMenuTutorialListWidget_C.CreateListItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMJListWidgetItemData>ListWidgetItem                                                   (Parm, OutParm)

void UMainMenuTutorialListWidget_C::CreateListItem(TArray<struct FMJListWidgetItemData>* ListWidgetItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuTutorialListWidget_C", "CreateListItem");

	Params::UMainMenuTutorialListWidget_C_CreateListItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ListWidgetItem != nullptr)
		*ListWidgetItem = std::move(Parms.ListWidgetItem);

}


// Function MainMenuTutorialListWidget.MainMenuTutorialListWidget_C.TutorialListEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdxInAll                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuTutorialListWidget_C::TutorialListEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuTutorialListWidget_C", "TutorialListEvent");

	Params::UMainMenuTutorialListWidget_C_TutorialListEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdxInAll = ItemIdxInAll;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuTutorialListWidget.MainMenuTutorialListWidget_C.UpdateOpening
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuTutorialListWidget_C::UpdateOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuTutorialListWidget_C", "UpdateOpening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuTutorialListWidget.MainMenuTutorialListWidget_C.OnOpenFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuTutorialListWidget_C::OnOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuTutorialListWidget_C", "OnOpenFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuTutorialListWidget.MainMenuTutorialListWidget_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuTutorialListWidget_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuTutorialListWidget_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuTutorialListWidget.MainMenuTutorialListWidget_C.UpdateClosing
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuTutorialListWidget_C::UpdateClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuTutorialListWidget_C", "UpdateClosing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuTutorialListWidget.MainMenuTutorialListWidget_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuTutorialListWidget_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuTutorialListWidget_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuTutorialListWidget.MainMenuTutorialListWidget_C.CallListEvent
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdxInAll                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuTutorialListWidget_C::CallListEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuTutorialListWidget_C", "CallListEvent");

	Params::UMainMenuTutorialListWidget_C_CallListEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdxInAll = ItemIdxInAll;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuTutorialListWidget.MainMenuTutorialListWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainMenuTutorialListWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuTutorialListWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuTutorialListWidget.MainMenuTutorialListWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuTutorialListWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuTutorialListWidget_C", "Tick");

	Params::UMainMenuTutorialListWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuTutorialListWidget.MainMenuTutorialListWidget_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuTutorialListWidget_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuTutorialListWidget_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuTutorialListWidget.MainMenuTutorialListWidget_C.ExecuteUbergraph_MainMenuTutorialListWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuTutorialListWidget_C::ExecuteUbergraph_MainMenuTutorialListWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuTutorialListWidget_C", "ExecuteUbergraph_MainMenuTutorialListWidget");

	Params::UMainMenuTutorialListWidget_C_ExecuteUbergraph_MainMenuTutorialListWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


