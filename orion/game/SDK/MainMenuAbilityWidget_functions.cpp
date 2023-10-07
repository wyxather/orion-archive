#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenuAbilityWidget.MainMenuAbilityWidget_C
// (None)

class UClass* UMainMenuAbilityWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuAbilityWidget_C");

	return Clss;
}


// MainMenuAbilityWidget_C MainMenuAbilityWidget.Default__MainMenuAbilityWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuAbilityWidget_C* UMainMenuAbilityWidget_C::GetDefaultObj()
{
	static class UMainMenuAbilityWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuAbilityWidget_C*>(UMainMenuAbilityWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.CheckCursorSubToMain
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Cursor                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityWidget_C::CheckCursorSubToMain(int32* Cursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "CheckCursorSubToMain");

	Params::UMainMenuAbilityWidget_C_CheckCursorSubToMain_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Cursor != nullptr)
		*Cursor = Parms.Cursor;

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.CheckCursorMainToSub
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Cursor                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityWidget_C::CheckCursorMainToSub(int32* Cursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "CheckCursorMainToSub");

	Params::UMainMenuAbilityWidget_C_CheckCursorMainToSub_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Cursor != nullptr)
		*Cursor = Parms.Cursor;

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.CloseTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::CloseTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "CloseTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.UpdateNewIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::UpdateNewIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "UpdateNewIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.GetHeader
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMenuHeader_C*               PartsMenuHeader                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityWidget_C::GetHeader(class UMenuHeader_C** PartsMenuHeader)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "GetHeader");

	Params::UMainMenuAbilityWidget_C_GetHeader_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PartsMenuHeader != nullptr)
		*PartsMenuHeader = Parms.PartsMenuHeader;

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.SetSubMenuPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Pos                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityWidget_C::SetSubMenuPosition(const struct FVector2D& Pos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "SetSubMenuPosition");

	Params::UMainMenuAbilityWidget_C_SetSubMenuPosition_Params Parms{};

	Parms.Pos = Pos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.Init
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuAbilityWidget_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "Init");

	Params::UMainMenuAbilityWidget_C_Init_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.GetAbilityCinfirmCallback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityWidget_C::GetAbilityCinfirmCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "GetAbilityCinfirmCallback");

	Params::UMainMenuAbilityWidget_C_GetAbilityCinfirmCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.PushPopSupportAbilityChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPush                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuAbilityWidget_C::PushPopSupportAbilityChange(bool IsPush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "PushPopSupportAbilityChange");

	Params::UMainMenuAbilityWidget_C_PushPopSupportAbilityChange_Params Parms{};

	Parms.IsPush = IsPush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.IsChangeStateCloseFinish
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuAbilityWidget_C::IsChangeStateCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "IsChangeStateCloseFinish");

	Params::UMainMenuAbilityWidget_C_IsChangeStateCloseFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.SetReference
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuAbilityWidget_C::SetReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "SetReference");

	Params::UMainMenuAbilityWidget_C_SetReference_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.SubJobOpenList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::SubJobOpenList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "SubJobOpenList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.SetupAbilityListFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ItemFocus                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SelectCategory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallMainList                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuAbilityWidget_C::SetupAbilityListFocus(int32 CategoryIdx, bool ItemFocus, bool SelectCategory, bool CallMainList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "SetupAbilityListFocus");

	Params::UMainMenuAbilityWidget_C_SetupAbilityListFocus_Params Parms{};

	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemFocus = ItemFocus;
	Parms.SelectCategory = SelectCategory;
	Parms.CallMainList = CallMainList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.SetJobListFocus
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavePlayerCharacterData    TargetCharacterData                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CheckMainJob                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              ListFocus                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Complete                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuAbilityWidget_C::SetJobListFocus(struct FSavePlayerCharacterData& TargetCharacterData, bool CheckMainJob, int32* ListFocus, bool* Complete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "SetJobListFocus");

	Params::UMainMenuAbilityWidget_C_SetJobListFocus_Params Parms{};

	Parms.TargetCharacterData = TargetCharacterData;
	Parms.CheckMainJob = CheckMainJob;

	UObject::ProcessEvent(Func, &Parms);

	if (ListFocus != nullptr)
		*ListFocus = Parms.ListFocus;

	if (Complete != nullptr)
		*Complete = Parms.Complete;

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.UpdateSubMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::UpdateSubMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "UpdateSubMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.TickGetSupportAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::TickGetSupportAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "TickGetSupportAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.TickAbilityGetConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::TickAbilityGetConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "TickAbilityGetConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.StartGetAbility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavePlayerCharacterData    CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FJobLearnAbility            AbilityState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityWidget_C::StartGetAbility(struct FSavePlayerCharacterData& CharacterData, struct FJobLearnAbility& AbilityState, int32 JobID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "StartGetAbility");

	Params::UMainMenuAbilityWidget_C_StartGetAbility_Params Parms{};

	Parms.CharacterData = CharacterData;
	Parms.AbilityState = AbilityState;
	Parms.JobID = JobID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.CheckSubAbilityList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::CheckSubAbilityList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "CheckSubAbilityList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.UpdateAttachWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CategoryId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityWidget_C::UpdateAttachWidget(int32 CategoryId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "UpdateAttachWidget");

	Params::UMainMenuAbilityWidget_C_UpdateAttachWidget_Params Parms{};

	Parms.CategoryId = CategoryId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.SubJobAbilityListEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdx                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityWidget_C::SubJobAbilityListEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "SubJobAbilityListEvent");

	Params::UMainMenuAbilityWidget_C_SubJobAbilityListEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdx = ItemIdx;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.ChangeActiveCommandAbilityList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ToSubJobList                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ItemFocus                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SelectCategory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuAbilityWidget_C::ChangeActiveCommandAbilityList(bool ToSubJobList, bool ItemFocus, bool SelectCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "ChangeActiveCommandAbilityList");

	Params::UMainMenuAbilityWidget_C_ChangeActiveCommandAbilityList_Params Parms{};

	Parms.ToSubJobList = ToSubJobList;
	Parms.ItemFocus = ItemFocus;
	Parms.SelectCategory = SelectCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.MainJobAbilityListEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdx                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityWidget_C::MainJobAbilityListEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "MainJobAbilityListEvent");

	Params::UMainMenuAbilityWidget_C_MainJobAbilityListEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdx = ItemIdx;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.CreateListItemSubJob
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMJListWidgetItemData>ListItem                                                         (Parm, OutParm)
// TArray<struct FJobLearnAbility>    JobLearnAbilityList                                              (Parm, OutParm)

void UMainMenuAbilityWidget_C::CreateListItemSubJob(TArray<struct FMJListWidgetItemData>* ListItem, TArray<struct FJobLearnAbility>* JobLearnAbilityList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "CreateListItemSubJob");

	Params::UMainMenuAbilityWidget_C_CreateListItemSubJob_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ListItem != nullptr)
		*ListItem = std::move(Parms.ListItem);

	if (JobLearnAbilityList != nullptr)
		*JobLearnAbilityList = std::move(Parms.JobLearnAbilityList);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.CreateListItemMainJob
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMJListWidgetItemData>ListItem                                                         (Parm, OutParm)
// TArray<struct FJobLearnAbility>    JobLearnAbilityList                                              (Parm, OutParm)

void UMainMenuAbilityWidget_C::CreateListItemMainJob(TArray<struct FMJListWidgetItemData>* ListItem, TArray<struct FJobLearnAbility>* JobLearnAbilityList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "CreateListItemMainJob");

	Params::UMainMenuAbilityWidget_C_CreateListItemMainJob_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ListItem != nullptr)
		*ListItem = std::move(Parms.ListItem);

	if (JobLearnAbilityList != nullptr)
		*JobLearnAbilityList = std::move(Parms.JobLearnAbilityList);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.CreateCategory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FListWidgetCategory> ListWidgetCategory                                               (Parm, OutParm)

void UMainMenuAbilityWidget_C::CreateCategory(TArray<struct FListWidgetCategory>* ListWidgetCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "CreateCategory");

	Params::UMainMenuAbilityWidget_C_CreateCategory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ListWidgetCategory != nullptr)
		*ListWidgetCategory = std::move(Parms.ListWidgetCategory);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OpenCommandAbilityGet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OpenCommandAbilityGet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OpenCommandAbilityGet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.ChangeSelectSubMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuAbilityWidget_C::ChangeSelectSubMenu(bool IsUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "ChangeSelectSubMenu");

	Params::UMainMenuAbilityWidget_C_ChangeSelectSubMenu_Params Parms{};

	Parms.IsUp = IsUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OpenSupportAbilityChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OpenSupportAbilityChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OpenSupportAbilityChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.PreCloseAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanClose                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuAbilityWidget_C::PreCloseAction(bool* CanClose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "PreCloseAction");

	Params::UMainMenuAbilityWidget_C_PreCloseAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanClose != nullptr)
		*CanClose = Parms.CanClose;

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.MenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::MenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "MenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.ConstructEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::ConstructEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "ConstructEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuAbilityWidget_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "IsRunning");

	Params::UMainMenuAbilityWidget_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.TickEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityWidget_C::TickEvent(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "TickEvent");

	Params::UMainMenuAbilityWidget_C_TickEvent_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.MenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::MenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "MenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.MenuClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::MenuClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "MenuClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.MenuOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::MenuOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "MenuOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityWidget_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnRightAxisX");

	Params::UMainMenuAbilityWidget_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityWidget_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnRightAxisY");

	Params::UMainMenuAbilityWidget_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityWidget_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnLeftAxisX");

	Params::UMainMenuAbilityWidget_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityWidget_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnLeftAxisY");

	Params::UMainMenuAbilityWidget_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityWidget_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnGamePadAxisX");

	Params::UMainMenuAbilityWidget_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityWidget_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnGamePadAxisY");

	Params::UMainMenuAbilityWidget_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuAbilityWidget_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnListPaging");

	Params::UMainMenuAbilityWidget_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityWidget_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "WorldMapSlowCursorX");

	Params::UMainMenuAbilityWidget_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityWidget_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "WorldMapSlowCursorY");

	Params::UMainMenuAbilityWidget_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityWidget_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "HelpScrollAxis");

	Params::UMainMenuAbilityWidget_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.UpdateOpening
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::UpdateOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "UpdateOpening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnOpenFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnOpenFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.UpdateClosing
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::UpdateClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "UpdateClosing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "Tick");

	Params::UMainMenuAbilityWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuAbilityWidget_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuAbilityWidget.MainMenuAbilityWidget_C.ExecuteUbergraph_MainMenuAbilityWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuAbilityWidget_C::ExecuteUbergraph_MainMenuAbilityWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuAbilityWidget_C", "ExecuteUbergraph_MainMenuAbilityWidget");

	Params::UMainMenuAbilityWidget_C_ExecuteUbergraph_MainMenuAbilityWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


