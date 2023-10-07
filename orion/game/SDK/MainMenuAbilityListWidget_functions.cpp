#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenuAbilityListWidget.MainMenuAbilityListWidget_C
// (None)

class UClass* UMainMenuAbilityListWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuAbilityListWidget_C");

	return Clss;
}


// MainMenuAbilityListWidget_C MainMenuAbilityListWidget.Default__MainMenuAbilityListWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuAbilityListWidget_C* UMainMenuAbilityListWidget_C::GetDefaultObj()
{
	static class UMainMenuAbilityListWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuAbilityListWidget_C*>(UMainMenuAbilityListWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.UpdateAbilityTarget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAbilityDataBase            ABILITY                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               OutFocusFast                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuAbilityListWidget_C::UpdateAbilityTarget(struct FAbilityDataBase& ABILITY, bool OutFocusFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "UpdateAbilityTarget");

	Params::UMainMenuAbilityListWidget_C_UpdateAbilityTarget_Params Parms{};

	Parms.ABILITY = ABILITY;
	Parms.OutFocusFast = OutFocusFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.CancelEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityListWidget_C::CancelEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "CancelEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.DecideEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityListWidget_C::DecideEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "DecideEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.SetPartyList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPartyCharacterList_C*       PartyListUI                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityListWidget_C::SetPartyList(class UPartyCharacterList_C* PartyListUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "SetPartyList");

	Params::UMainMenuAbilityListWidget_C_SetPartyList_Params Parms{};

	Parms.PartyListUI = PartyListUI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.CheckSelectAbility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FAbilityDataBase            AbilityData                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSavePlayerCharacterData    CharaData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               HasCompensationMagic                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ELIST_ITEM_STATUS       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ELIST_ITEM_STATUS UMainMenuAbilityListWidget_C::CheckSelectAbility(const struct FAbilityDataBase& AbilityData, const struct FSavePlayerCharacterData& CharaData, bool HasCompensationMagic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "CheckSelectAbility");

	Params::UMainMenuAbilityListWidget_C_CheckSelectAbility_Params Parms{};

	Parms.AbilityData = AbilityData;
	Parms.CharaData = CharaData;
	Parms.HasCompensationMagic = HasCompensationMagic;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.CreateListItemCommon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavePlayerCharacterData    CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FJobLearnAbility>    JobAbility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<bool>                       AcquisitionFlag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CategoryType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMJListWidgetItemData>ListWidgetItemData                                               (Parm, OutParm)
// TArray<struct FAbilityDataBase>    AbilityList                                                      (Parm, OutParm)

void UMainMenuAbilityListWidget_C::CreateListItemCommon(struct FSavePlayerCharacterData& CharacterData, TArray<struct FJobLearnAbility>& JobAbility, TArray<bool>& AcquisitionFlag, int32 CategoryType, TArray<struct FMJListWidgetItemData>* ListWidgetItemData, TArray<struct FAbilityDataBase>* AbilityList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "CreateListItemCommon");

	Params::UMainMenuAbilityListWidget_C_CreateListItemCommon_Params Parms{};

	Parms.CharacterData = CharacterData;
	Parms.JobAbility = JobAbility;
	Parms.AcquisitionFlag = AcquisitionFlag;
	Parms.CategoryType = CategoryType;

	UObject::ProcessEvent(Func, &Parms);

	if (ListWidgetItemData != nullptr)
		*ListWidgetItemData = std::move(Parms.ListWidgetItemData);

	if (AbilityList != nullptr)
		*AbilityList = std::move(Parms.AbilityList);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.UseSelectAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityListWidget_C::UseSelectAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "UseSelectAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.UpdateUseAilment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityListWidget_C::UpdateUseAilment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "UpdateUseAilment");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.SetupFooterUICharacterList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsAllSelect                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuAbilityListWidget_C::SetupFooterUICharacterList(bool IsAllSelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "SetupFooterUICharacterList");

	Params::UMainMenuAbilityListWidget_C_SetupFooterUICharacterList_Params Parms{};

	Parms.IsAllSelect = IsAllSelect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.SetupFooterUIAbilityList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityListWidget_C::SetupFooterUIAbilityList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "SetupFooterUIAbilityList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.SetFooterUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenuFooter_C*               FooterUI                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityListWidget_C::SetFooterUI(class UMenuFooter_C* FooterUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "SetFooterUI");

	Params::UMainMenuAbilityListWidget_C_SetFooterUI_Params Parms{};

	Parms.FooterUI = FooterUI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.SetAbilityUseMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityListWidget_C::SetAbilityUseMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "SetAbilityUseMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.AbilityListEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdxInAll                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityListWidget_C::AbilityListEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "AbilityListEvent");

	Params::UMainMenuAbilityListWidget_C_AbilityListEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdxInAll = ItemIdxInAll;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.CreateListItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMJListWidgetItemData>ListWidgetItem                                                   (Parm, OutParm)

void UMainMenuAbilityListWidget_C::CreateListItem(TArray<struct FMJListWidgetItemData>* ListWidgetItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "CreateListItem");

	Params::UMainMenuAbilityListWidget_C_CreateListItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ListWidgetItem != nullptr)
		*ListWidgetItem = std::move(Parms.ListWidgetItem);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.CreateCategory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FListWidgetCategory> ListWidgetCategory                                               (Parm, OutParm)

void UMainMenuAbilityListWidget_C::CreateCategory(TArray<struct FListWidgetCategory>* ListWidgetCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "CreateCategory");

	Params::UMainMenuAbilityListWidget_C_CreateCategory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ListWidgetCategory != nullptr)
		*ListWidgetCategory = std::move(Parms.ListWidgetCategory);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.UpdateOpening
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityListWidget_C::UpdateOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "UpdateOpening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityListWidget_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.OnOpenFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityListWidget_C::OnOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "OnOpenFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.UpdateClosing
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityListWidget_C::UpdateClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "UpdateClosing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityListWidget_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainMenuAbilityListWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityListWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "Tick");

	Params::UMainMenuAbilityListWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.CallListEvent
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdxInAll                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityListWidget_C::CallListEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "CallListEvent");

	Params::UMainMenuAbilityListWidget_C_CallListEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdxInAll = ItemIdxInAll;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.MenuCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityListWidget_C::MenuCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "MenuCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.MenuCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityListWidget_C::MenuCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "MenuCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityListWidget_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.MenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityListWidget_C::MenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "MenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.MenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityListWidget_C::MenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "MenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityListWidget.MainMenuAbilityListWidget_C.ExecuteUbergraph_MainMenuAbilityListWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityListWidget_C::ExecuteUbergraph_MainMenuAbilityListWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityListWidget_C", "ExecuteUbergraph_MainMenuAbilityListWidget");

	Params::UMainMenuAbilityListWidget_C_ExecuteUbergraph_MainMenuAbilityListWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


