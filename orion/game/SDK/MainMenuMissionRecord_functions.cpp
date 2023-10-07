#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenuMissionRecord.MainMenuMissionRecord_C
// (None)

class UClass* UMainMenuMissionRecord_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuMissionRecord_C");

	return Clss;
}


// MainMenuMissionRecord_C MainMenuMissionRecord.Default__MainMenuMissionRecord_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuMissionRecord_C* UMainMenuMissionRecord_C::GetDefaultObj()
{
	static class UMainMenuMissionRecord_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuMissionRecord_C*>(UMainMenuMissionRecord_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.PreCloseAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuMissionRecord_C::PreCloseAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "PreCloseAction");

	Params::UMainMenuMissionRecord_C_PreCloseAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMAINMENU_SEQ_MISSIONRECORDStatus                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::SetStatus(enum class EMAINMENU_SEQ_MISSIONRECORD Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "SetStatus");

	Params::UMainMenuMissionRecord_C_SetStatus_Params Parms{};

	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.InsertSpaceByLanguage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSTextBlock*                TextBlock                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::InsertSpaceByLanguage(class UKSTextBlock* TextBlock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "InsertSpaceByLanguage");

	Params::UMainMenuMissionRecord_C_InsertSpaceByLanguage_Params Parms{};

	Parms.TextBlock = TextBlock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.UpdateStoryInfoText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::UpdateStoryInfoText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "UpdateStoryInfoText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ResetRenderPhase
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::ResetRenderPhase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "ResetRenderPhase");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ProlougeReminiscenceConfirmDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::ProlougeReminiscenceConfirmDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "ProlougeReminiscenceConfirmDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnClosePartyChatList
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnClosePartyChatList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnClosePartyChatList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnOpenPartyChatList
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnOpenPartyChatList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnOpenPartyChatList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.UnPlayableProlugeReminiscenceDialog_FinalChapter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::UnPlayableProlugeReminiscenceDialog_FinalChapter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "UnPlayableProlugeReminiscenceDialog_FinalChapter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CheckReminiscence
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::CheckReminiscence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "CheckReminiscence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.UnPlayableProlougeReminiscenceCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::UnPlayableProlougeReminiscenceCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "UnPlayableProlougeReminiscenceCallback");

	Params::UMainMenuMissionRecord_C_UnPlayableProlougeReminiscenceCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.UnPlayableProlugeReminiscenceDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::UnPlayableProlugeReminiscenceDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "UnPlayableProlugeReminiscenceDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.MakeAreaID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::MakeAreaID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "MakeAreaID");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OpenProfessorConfirmDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OpenProfessorConfirmDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OpenProfessorConfirmDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ProfessorPrologeConfirmDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::ProfessorPrologeConfirmDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "ProfessorPrologeConfirmDialog");

	Params::UMainMenuMissionRecord_C_ProfessorPrologeConfirmDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.GetReleasedBarPartyChatLabels
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class FName> UMainMenuMissionRecord_C::GetReleasedBarPartyChatLabels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "GetReleasedBarPartyChatLabels");

	Params::UMainMenuMissionRecord_C_GetReleasedBarPartyChatLabels_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.GetReleasedPartyChatLabelsByMainStoryIds
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MainStoryIds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class FName> UMainMenuMissionRecord_C::GetReleasedPartyChatLabelsByMainStoryIds(TArray<int32>& MainStoryIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "GetReleasedPartyChatLabelsByMainStoryIds");

	Params::UMainMenuMissionRecord_C_GetReleasedPartyChatLabelsByMainStoryIds_Params Parms{};

	Parms.MainStoryIds = MainStoryIds;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetWorldMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_3DWorldMapWidget_C*     WorldMapUI                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::SetWorldMap(class UWBP_3DWorldMapWidget_C* WorldMapUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "SetWorldMap");

	Params::UMainMenuMissionRecord_C_SetWorldMap_Params Parms{};

	Parms.WorldMapUI = WorldMapUI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.IsProlougeReminiscence
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CategoryIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuMissionRecord_C::IsProlougeReminiscence(int32 CategoryIndex, enum class EPlayableCharacterID CharacterID, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "IsProlougeReminiscence");

	Params::UMainMenuMissionRecord_C_IsProlougeReminiscence_Params Parms{};

	Parms.CategoryIndex = CategoryIndex;
	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SearchNextPage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Next                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuMissionRecord_C::SearchNextPage(bool Next)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "SearchNextPage");

	Params::UMainMenuMissionRecord_C_SearchNextPage_Params Parms{};

	Parms.Next = Next;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.InitCategoryIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::InitCategoryIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "InitCategoryIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.GetReminisceneDetailText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPlayableCharacterID    PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DetaiText                                                        (Parm, OutParm)

void UMainMenuMissionRecord_C::GetReminisceneDetailText(enum class EPlayableCharacterID PlayerID, class FText* DetaiText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "GetReminisceneDetailText");

	Params::UMainMenuMissionRecord_C_GetReminisceneDetailText_Params Parms{};

	Parms.PlayerID = PlayerID;

	UObject::ProcessEvent(Func, &Parms);

	if (DetaiText != nullptr)
		*DetaiText = Parms.DetaiText;

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CheckOpenReminiscence
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Open                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuMissionRecord_C::CheckOpenReminiscence(bool* Open)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "CheckOpenReminiscence");

	Params::UMainMenuMissionRecord_C_CheckOpenReminiscence_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Open != nullptr)
		*Open = Parms.Open;

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetCategoryIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::SetCategoryIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "SetCategoryIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CheckExtraStoryOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsOpen                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuMissionRecord_C::CheckExtraStoryOpen(bool* IsOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "CheckExtraStoryOpen");

	Params::UMainMenuMissionRecord_C_CheckExtraStoryOpen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsOpen != nullptr)
		*IsOpen = Parms.IsOpen;

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.PartyChatReady
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuMissionRecord_C::PartyChatReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "PartyChatReady");

	Params::UMainMenuMissionRecord_C_PartyChatReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.PartyChatStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuMissionRecord_C::PartyChatStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "PartyChatStart");

	Params::UMainMenuMissionRecord_C_PartyChatStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.PartyChatFinish
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuMissionRecord_C::PartyChatFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "PartyChatFinish");

	Params::UMainMenuMissionRecord_C_PartyChatFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ReOpenPartyChatList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::ReOpenPartyChatList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "ReOpenPartyChatList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetupFlipbookSelectSelectSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::SetupFlipbookSelectSelectSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "SetupFlipbookSelectSelectSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetupFlipbookSelectWait
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::SetupFlipbookSelectWait()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "SetupFlipbookSelectWait");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetExtraStoryGuideData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::SetExtraStoryGuideData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "SetExtraStoryGuideData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetupFlipbookFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::SetupFlipbookFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "SetupFlipbookFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CreateExtraMissionListItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEXTRA_STORY_CATEGORY   ExCategory                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::CreateExtraMissionListItem(enum class EEXTRA_STORY_CATEGORY ExCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "CreateExtraMissionListItem");

	Params::UMainMenuMissionRecord_C_CreateExtraMissionListItem_Params Parms{};

	Parms.ExCategory = ExCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CreateExtraMissionListCategory
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEXTRA_STORY_CATEGORY   ExtraCategory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::CreateExtraMissionListCategory(enum class EEXTRA_STORY_CATEGORY ExtraCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "CreateExtraMissionListCategory");

	Params::UMainMenuMissionRecord_C_CreateExtraMissionListCategory_Params Parms{};

	Parms.ExtraCategory = ExtraCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ExtraMissionEvent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdxInAll                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::ExtraMissionEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "ExtraMissionEvent");

	Params::UMainMenuMissionRecord_C_ExtraMissionEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdxInAll = ItemIdxInAll;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CreateExtraMissionList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEXTRA_STORY_CATEGORY   ExtraCategory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::CreateExtraMissionList(enum class EEXTRA_STORY_CATEGORY ExtraCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "CreateExtraMissionList");

	Params::UMainMenuMissionRecord_C_CreateExtraMissionList_Params Parms{};

	Parms.ExtraCategory = ExtraCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ExtraMissionSetup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::ExtraMissionSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "ExtraMissionSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetSubStoryGuideData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::SetSubStoryGuideData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "SetSubStoryGuideData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetPartyChatGuideData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::SetPartyChatGuideData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "SetPartyChatGuideData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetCategoryGuideData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::SetCategoryGuideData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "SetCategoryGuideData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetMainStoryGuideData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CategoryIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::SetMainStoryGuideData(int32 CategoryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "SetMainStoryGuideData");

	Params::UMainMenuMissionRecord_C_SetMainStoryGuideData_Params Parms{};

	Parms.CategoryIndex = CategoryIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.Check Party Chat List
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMISSIONRECORD_TYPE     Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuMissionRecord_C::Check_Party_Chat_List(enum class EMISSIONRECORD_TYPE Type, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "Check Party Chat List");

	Params::UMainMenuMissionRecord_C_Check_Party_Chat_List_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.UpdateCategoryIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BeforeIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NextIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::UpdateCategoryIcon(int32 BeforeIndex, int32 NextIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "UpdateCategoryIcon");

	Params::UMainMenuMissionRecord_C_UpdateCategoryIcon_Params Parms{};

	Parms.BeforeIndex = BeforeIndex;
	Parms.NextIndex = NextIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ChangeMissionType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuMissionRecord_C::ChangeMissionType(bool IsUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "ChangeMissionType");

	Params::UMainMenuMissionRecord_C_ChangeMissionType_Params Parms{};

	Parms.IsUp = IsUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ProlougeReminiscenceCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::ProlougeReminiscenceCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "ProlougeReminiscenceCallback");

	Params::UMainMenuMissionRecord_C_ProlougeReminiscenceCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ButtonXEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::ButtonXEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "ButtonXEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.PlayProlougeReminiscenceDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::PlayProlougeReminiscenceDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "PlayProlougeReminiscenceDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.PlayTheaterEventRequestCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::PlayTheaterEventRequestCallback(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "PlayTheaterEventRequestCallback");

	Params::UMainMenuMissionRecord_C_PlayTheaterEventRequestCallback_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetReOpenFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MissionReOpen                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuMissionRecord_C::SetReOpenFlag(bool MissionReOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "SetReOpenFlag");

	Params::UMainMenuMissionRecord_C_SetReOpenFlag_Params Parms{};

	Parms.MissionReOpen = MissionReOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.IsChangeStateOpenFinish
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuMissionRecord_C::IsChangeStateOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "IsChangeStateOpenFinish");

	Params::UMainMenuMissionRecord_C_IsChangeStateOpenFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetReference
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuMissionRecord_C::SetReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "SetReference");

	Params::UMainMenuMissionRecord_C_SetReference_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ReOpenList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChapterListWidget_C*        TargetList                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::ReOpenList(class UChapterListWidget_C* TargetList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "ReOpenList");

	Params::UMainMenuMissionRecord_C_ReOpenList_Params Parms{};

	Parms.TargetList = TargetList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.GetAllAreaListItemData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMAINMENU_MISSION_RECORD_DATA>MissionList                                                      (Parm, OutParm)
// TArray<struct FMJListWidgetItemData>ItemList                                                         (Parm, OutParm)

void UMainMenuMissionRecord_C::GetAllAreaListItemData(TArray<struct FMAINMENU_MISSION_RECORD_DATA>* MissionList, TArray<struct FMJListWidgetItemData>* ItemList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "GetAllAreaListItemData");

	Params::UMainMenuMissionRecord_C_GetAllAreaListItemData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MissionList != nullptr)
		*MissionList = std::move(Parms.MissionList);

	if (ItemList != nullptr)
		*ItemList = std::move(Parms.ItemList);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ShowList
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::ShowList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "ShowList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CursorRightEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::CursorRightEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "CursorRightEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CursorLeftEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::CursorLeftEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "CursorLeftEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.DecideEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::DecideEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "DecideEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CancelEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::CancelEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "CancelEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ToWorldMap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ToWorldMap                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuMissionRecord_C::ToWorldMap(bool* ToWorldMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "ToWorldMap");

	Params::UMainMenuMissionRecord_C_ToWorldMap_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ToWorldMap != nullptr)
		*ToWorldMap = Parms.ToWorldMap;

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.IsEventPreview
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               EventPreview                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuMissionRecord_C::IsEventPreview(bool* EventPreview)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "IsEventPreview");

	Params::UMainMenuMissionRecord_C_IsEventPreview_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EventPreview != nullptr)
		*EventPreview = Parms.EventPreview;

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ConstructEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::ConstructEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "ConstructEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.LBEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::LBEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "LBEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.RBEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::RBEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "RBEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SearchNextTypeData
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PrebMode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NextTypePos                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::SearchNextTypeData(int32 Type, bool PrebMode, int32* NextTypePos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "SearchNextTypeData");

	Params::UMainMenuMissionRecord_C_SearchNextTypeData_Params Parms{};

	Parms.Type = Type;
	Parms.PrebMode = PrebMode;

	UObject::ProcessEvent(Func, &Parms);

	if (NextTypePos != nullptr)
		*NextTypePos = Parms.NextTypePos;

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ListSetupCommon
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// bool                               IsStoryOnly                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuMissionRecord_C::ListSetupCommon(FDelegateProperty_& Delegate, bool IsStoryOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "ListSetupCommon");

	Params::UMainMenuMissionRecord_C_ListSetupCommon_Params Parms{};

	Parms.Delegate = Delegate;
	Parms.IsStoryOnly = IsStoryOnly;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.GetAreaListItemData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AreaID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMAINMENU_MISSION_RECORD_DATA>MissionList                                                      (Parm, OutParm)
// TArray<struct FMJListWidgetItemData>ItemList                                                         (Parm, OutParm)

void UMainMenuMissionRecord_C::GetAreaListItemData(int32 AreaID, TArray<struct FMAINMENU_MISSION_RECORD_DATA>* MissionList, TArray<struct FMJListWidgetItemData>* ItemList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "GetAreaListItemData");

	Params::UMainMenuMissionRecord_C_GetAreaListItemData_Params Parms{};

	Parms.AreaID = AreaID;

	UObject::ProcessEvent(Func, &Parms);

	if (MissionList != nullptr)
		*MissionList = std::move(Parms.MissionList);

	if (ItemList != nullptr)
		*ItemList = std::move(Parms.ItemList);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SubMissionEvent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdxInAll                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::SubMissionEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "SubMissionEvent");

	Params::UMainMenuMissionRecord_C_SubMissionEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdxInAll = ItemIdxInAll;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CreateSubMissionListItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AreaID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::CreateSubMissionListItem(int32 AreaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "CreateSubMissionListItem");

	Params::UMainMenuMissionRecord_C_CreateSubMissionListItem_Params Parms{};

	Parms.AreaID = AreaID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CreateSubMissionListCategory
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AreaID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::CreateSubMissionListCategory(int32 AreaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "CreateSubMissionListCategory");

	Params::UMainMenuMissionRecord_C_CreateSubMissionListCategory_Params Parms{};

	Parms.AreaID = AreaID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CreateSubMissionList
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AreaID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::CreateSubMissionList(int32 AreaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "CreateSubMissionList");

	Params::UMainMenuMissionRecord_C_CreateSubMissionList_Params Parms{};

	Parms.AreaID = AreaID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetHeaderFooterText
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        HeaderTextLabel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        FooterTextLabel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuideData>          FooterGuide                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainMenuMissionRecord_C::SetHeaderFooterText(class FName HeaderTextLabel, class FName FooterTextLabel, TArray<struct FGuideData>& FooterGuide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "SetHeaderFooterText");

	Params::UMainMenuMissionRecord_C_SetHeaderFooterText_Params Parms{};

	Parms.HeaderTextLabel = HeaderTextLabel;
	Parms.FooterTextLabel = FooterTextLabel;
	Parms.FooterGuide = FooterGuide;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetHeaderFooterUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenuHeader_C*               HeaderUI                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMenuFooter_C*               FooterUI                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::SetHeaderFooterUI(class UMenuHeader_C* HeaderUI, class UMenuFooter_C* FooterUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "SetHeaderFooterUI");

	Params::UMainMenuMissionRecord_C_SetHeaderFooterUI_Params Parms{};

	Parms.HeaderUI = HeaderUI;
	Parms.FooterUI = FooterUI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.UpdateGaugePosition
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Tick                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFinish                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsPlayFocus                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuMissionRecord_C::UpdateGaugePosition(float Tick, bool* IsFinish, bool* IsPlayFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "UpdateGaugePosition");

	Params::UMainMenuMissionRecord_C_UpdateGaugePosition_Params Parms{};

	Parms.Tick = Tick;

	UObject::ProcessEvent(Func, &Parms);

	if (IsFinish != nullptr)
		*IsFinish = Parms.IsFinish;

	if (IsPlayFocus != nullptr)
		*IsPlayFocus = Parms.IsPlayFocus;

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetGaugeMoveData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                      XPositionData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               GaugeMoveRight                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void UMainMenuMissionRecord_C::SetGaugeMoveData(TArray<float>& XPositionData, bool& GaugeMoveRight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "SetGaugeMoveData");

	Params::UMainMenuMissionRecord_C_SetGaugeMoveData_Params Parms{};

	Parms.XPositionData = XPositionData;
	Parms.GaugeMoveRight = GaugeMoveRight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetGaugeMove
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               GaugeMoveRight                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMAINMENU_SEQ_MISSIONRECORDMoveEndRetState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      XPositionData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainMenuMissionRecord_C::SetGaugeMove(bool GaugeMoveRight, enum class EMAINMENU_SEQ_MISSIONRECORD MoveEndRetState, TArray<float>& XPositionData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "SetGaugeMove");

	Params::UMainMenuMissionRecord_C_SetGaugeMove_Params Parms{};

	Parms.GaugeMoveRight = GaugeMoveRight;
	Parms.MoveEndRetState = MoveEndRetState;
	Parms.XPositionData = XPositionData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SetGaugePositionSort
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                      SortYPostion                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainMenuMissionRecord_C::SetGaugePositionSort(TArray<float>& SortYPostion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "SetGaugePositionSort");

	Params::UMainMenuMissionRecord_C_SetGaugePositionSort_Params Parms{};

	Parms.SortYPostion = SortYPostion;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.SubMissionSetup
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::SubMissionSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "SubMissionSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.UpdateCursorSelect
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMoveRight                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuMissionRecord_C::UpdateCursorSelect(bool IsMoveRight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "UpdateCursorSelect");

	Params::UMainMenuMissionRecord_C_UpdateCursorSelect_Params Parms{};

	Parms.IsMoveRight = IsMoveRight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.MainMissionEvent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdxInAll                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::MainMissionEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "MainMissionEvent");

	Params::UMainMenuMissionRecord_C_MainMissionEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdxInAll = ItemIdxInAll;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CreateMainMissionListItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::CreateMainMissionListItem(enum class EPlayableCharacterID CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "CreateMainMissionListItem");

	Params::UMainMenuMissionRecord_C_CreateMainMissionListItem_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CreateMainMissionListCategory
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::CreateMainMissionListCategory(enum class EPlayableCharacterID CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "CreateMainMissionListCategory");

	Params::UMainMenuMissionRecord_C_CreateMainMissionListCategory_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.CreateMainMissionList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::CreateMainMissionList(enum class EPlayableCharacterID CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "CreateMainMissionList");

	Params::UMainMenuMissionRecord_C_CreateMainMissionList_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.TickEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::TickEvent(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "TickEvent");

	Params::UMainMenuMissionRecord_C_TickEvent_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.MainMissionSetup
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::MainMissionSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "MainMissionSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.Close
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.Open
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuMissionRecord_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "IsRunning");

	Params::UMainMenuMissionRecord_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnRightAxisX");

	Params::UMainMenuMissionRecord_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnRightAxisY");

	Params::UMainMenuMissionRecord_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnLeftAxisX");

	Params::UMainMenuMissionRecord_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnLeftAxisY");

	Params::UMainMenuMissionRecord_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnGamePadAxisX");

	Params::UMainMenuMissionRecord_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnGamePadAxisY");

	Params::UMainMenuMissionRecord_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuMissionRecord_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnListPaging");

	Params::UMainMenuMissionRecord_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "WorldMapSlowCursorX");

	Params::UMainMenuMissionRecord_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "WorldMapSlowCursorY");

	Params::UMainMenuMissionRecord_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "HelpScrollAxis");

	Params::UMainMenuMissionRecord_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.UpdateOpening
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::UpdateOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "UpdateOpening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnOpenFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnOpenFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.UpdateClosing
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::UpdateClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "UpdateClosing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.MainMissionPlayConfirmCallback
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::MainMissionPlayConfirmCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "MainMissionPlayConfirmCallback");

	Params::UMainMenuMissionRecord_C_MainMissionPlayConfirmCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.OnFinishFadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::OnFinishFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "OnFinishFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ExtraMissionPlayConfirmCallback
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::ExtraMissionPlayConfirmCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "ExtraMissionPlayConfirmCallback");

	Params::UMainMenuMissionRecord_C_ExtraMissionPlayConfirmCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ProlougeReminiscenceCallback_Internal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecord_C::ProlougeReminiscenceCallback_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "ProlougeReminiscenceCallback_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecord.MainMenuMissionRecord_C.ExecuteUbergraph_MainMenuMissionRecord
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuMissionRecord_C::ExecuteUbergraph_MainMenuMissionRecord(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecord_C", "ExecuteUbergraph_MainMenuMissionRecord");

	Params::UMainMenuMissionRecord_C_ExecuteUbergraph_MainMenuMissionRecord_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


