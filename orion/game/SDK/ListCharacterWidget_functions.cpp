#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListCharacterWidget.ListCharacterWidget_C
// (None)

class UClass* UListCharacterWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListCharacterWidget_C");

	return Clss;
}


// ListCharacterWidget_C ListCharacterWidget.Default__ListCharacterWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListCharacterWidget_C* UListCharacterWidget_C::GetDefaultObj()
{
	static class UListCharacterWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListCharacterWidget_C*>(UListCharacterWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListCharacterWidget.ListCharacterWidget_C.GetState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ELIST_CHARACTER_CHANGE_STATEReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ELIST_CHARACTER_CHANGE_STATE UListCharacterWidget_C::GetState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "GetState");

	Params::UListCharacterWidget_C_GetState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ListCharacterWidget.ListCharacterWidget_C.PreCloseAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Can_Close                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListCharacterWidget_C::PreCloseAction(bool* Can_Close)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "PreCloseAction");

	Params::UListCharacterWidget_C_PreCloseAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Can_Close != nullptr)
		*Can_Close = Parms.Can_Close;

}


// Function ListCharacterWidget.ListCharacterWidget_C.RemoveGuideData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FGuideData>          TargetData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ECONTROL_GUIDE_BUTTON_TYPEType                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuideData>          OutData                                                          (Parm, OutParm)

void UListCharacterWidget_C::RemoveGuideData(TArray<struct FGuideData>& TargetData, enum class ECONTROL_GUIDE_BUTTON_TYPE Type, TArray<struct FGuideData>* OutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "RemoveGuideData");

	Params::UListCharacterWidget_C_RemoveGuideData_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (OutData != nullptr)
		*OutData = std::move(Parms.OutData);

}


// Function ListCharacterWidget.ListCharacterWidget_C.SetIsOpenInBar
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsBar                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListCharacterWidget_C::SetIsOpenInBar(bool IsBar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "SetIsOpenInBar");

	Params::UListCharacterWidget_C_SetIsOpenInBar_Params Parms{};

	Parms.IsBar = IsBar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.IsFrameAnimationFinish
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Finish                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListCharacterWidget_C::IsFrameAnimationFinish(bool* Finish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "IsFrameAnimationFinish");

	Params::UListCharacterWidget_C_IsFrameAnimationFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Finish != nullptr)
		*Finish = Parms.Finish;

}


// Function ListCharacterWidget.ListCharacterWidget_C.Debug_DecideUI
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::Debug_DecideUI(int32 Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "Debug_DecideUI");

	Params::UListCharacterWidget_C_Debug_DecideUI_Params Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.SetIsRefreshPartyCharacter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsRefreshPartyCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListCharacterWidget_C::SetIsRefreshPartyCharacter(bool IsRefreshPartyCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "SetIsRefreshPartyCharacter");

	Params::UListCharacterWidget_C_SetIsRefreshPartyCharacter_Params Parms{};

	Parms.IsRefreshPartyCharacter = IsRefreshPartyCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.GetMenuFooterRoot
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UOverlay*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UOverlay* UListCharacterWidget_C::GetMenuFooterRoot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "GetMenuFooterRoot");

	Params::UListCharacterWidget_C_GetMenuFooterRoot_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ListCharacterWidget.ListCharacterWidget_C.GetPartyPanelRool
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UOverlay*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UOverlay* UListCharacterWidget_C::GetPartyPanelRool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "GetPartyPanelRool");

	Params::UListCharacterWidget_C_GetPartyPanelRool_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ListCharacterWidget.ListCharacterWidget_C.SetIsIgnoreFadeOnCloseWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsIgnoreFade                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListCharacterWidget_C::SetIsIgnoreFadeOnCloseWidget(bool IsIgnoreFade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "SetIsIgnoreFadeOnCloseWidget");

	Params::UListCharacterWidget_C_SetIsIgnoreFadeOnCloseWidget_Params Parms{};

	Parms.IsIgnoreFade = IsIgnoreFade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.SetupJoinNewMember
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsAddFriendMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlayableCharacterID    NewCharacterID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UListCharacterWidget_C::SetupJoinNewMember(bool IsAddFriendMode, enum class EPlayableCharacterID NewCharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "SetupJoinNewMember");

	Params::UListCharacterWidget_C_SetupJoinNewMember_Params Parms{};

	Parms.IsAddFriendMode = IsAddFriendMode;
	Parms.NewCharacterID = NewCharacterID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ListCharacterWidget.ListCharacterWidget_C.RemoveCharacterConfirmCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::RemoveCharacterConfirmCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "RemoveCharacterConfirmCallback");

	Params::UListCharacterWidget_C_RemoveCharacterConfirmCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.Init
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UListCharacterWidget_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "Init");

	Params::UListCharacterWidget_C_Init_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ListCharacterWidget.ListCharacterWidget_C.CanGetOutOfMainMember_1stSelect
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              MainMemberID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSelectable                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListCharacterWidget_C::CanGetOutOfMainMember_1stSelect(int32 MainMemberID, bool* IsSelectable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "CanGetOutOfMainMember_1stSelect");

	Params::UListCharacterWidget_C_CanGetOutOfMainMember_1stSelect_Params Parms{};

	Parms.MainMemberID = MainMemberID;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSelectable != nullptr)
		*IsSelectable = Parms.IsSelectable;

}


// Function ListCharacterWidget.ListCharacterWidget_C.IsNewCharacterInMainMember
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Find                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListCharacterWidget_C::IsNewCharacterInMainMember(enum class EPlayableCharacterID CharacterID, bool* Find)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "IsNewCharacterInMainMember");

	Params::UListCharacterWidget_C_IsNewCharacterInMainMember_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

	if (Find != nullptr)
		*Find = Parms.Find;

}


// Function ListCharacterWidget.ListCharacterWidget_C.Setup Join New Member_OLD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsAddFriendMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlayableCharacterID    NewCharacterID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::Setup_Join_New_Member_OLD(bool IsAddFriendMode, enum class EPlayableCharacterID NewCharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "Setup Join New Member_OLD");

	Params::UListCharacterWidget_C_Setup_Join_New_Member_OLD_Params Parms{};

	Parms.IsAddFriendMode = IsAddFriendMode;
	Parms.NewCharacterID = NewCharacterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.TransitionToConfirmRemoveCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::TransitionToConfirmRemoveCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "TransitionToConfirmRemoveCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.InitCursor
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::InitCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "InitCursor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.RedoFromCharacterSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::RedoFromCharacterSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "RedoFromCharacterSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.Update_ConfirmRemoveCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::Update_ConfirmRemoveCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "Update_ConfirmRemoveCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.Update_CharacterSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::Update_CharacterSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "Update_CharacterSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.Update_Fade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::Update_Fade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "Update_Fade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.CheckSubMemberPlayingMainMission
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int32>                      PlayingSubMembers                                                (Parm, OutParm)

void UListCharacterWidget_C::CheckSubMemberPlayingMainMission(TArray<int32>* PlayingSubMembers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "CheckSubMemberPlayingMainMission");

	Params::UListCharacterWidget_C_CheckSubMemberPlayingMainMission_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PlayingSubMembers != nullptr)
		*PlayingSubMembers = std::move(Parms.PlayingSubMembers);

}


// Function ListCharacterWidget.ListCharacterWidget_C.PlaySeByLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SELabel                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsStopSelectSe                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListCharacterWidget_C::PlaySeByLabel(class FName SELabel, bool IsStopSelectSe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "PlaySeByLabel");

	Params::UListCharacterWidget_C_PlaySeByLabel_Params Parms{};

	Parms.SELabel = SELabel;
	Parms.IsStopSelectSe = IsStopSelectSe;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.MoveCursorAfterSelect1stChara
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::MoveCursorAfterSelect1stChara()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "MoveCursorAfterSelect1stChara");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.Update_ErrorMsg
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::Update_ErrorMsg()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "Update_ErrorMsg");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.SelectCharacter_Second
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListCharacterWidget_C::SelectCharacter_Second(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "SelectCharacter_Second");

	Params::UListCharacterWidget_C_SelectCharacter_Second_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ListCharacterWidget.ListCharacterWidget_C.SelectCharacter_First
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListCharacterWidget_C::SelectCharacter_First(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "SelectCharacter_First");

	Params::UListCharacterWidget_C_SelectCharacter_First_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ListCharacterWidget.ListCharacterWidget_C.CanGetOutOfMainMember
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              MainMemberID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSelectable                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListCharacterWidget_C::CanGetOutOfMainMember(int32 MainMemberID, bool* IsSelectable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "CanGetOutOfMainMember");

	Params::UListCharacterWidget_C_CanGetOutOfMainMember_Params Parms{};

	Parms.MainMemberID = MainMemberID;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSelectable != nullptr)
		*IsSelectable = Parms.IsSelectable;

}


// Function ListCharacterWidget.ListCharacterWidget_C.RefreshMainMember
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::RefreshMainMember()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "RefreshMainMember");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.Update_CharacterChangeAnime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::Update_CharacterChangeAnime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "Update_CharacterChangeAnime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.PlaySE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMENU_SE_TYPE           SeType                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsStopSelectSe                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListCharacterWidget_C::PlaySE(enum class EMENU_SE_TYPE SeType, bool IsStopSelectSe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "PlaySE");

	Params::UListCharacterWidget_C_PlaySE_Params Parms{};

	Parms.SeType = SeType;
	Parms.IsStopSelectSe = IsStopSelectSe;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.SelectAnima
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::SelectAnima(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "SelectAnima");

	Params::UListCharacterWidget_C_SelectAnima_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.IsCursorSelect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              StateType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSelect                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListCharacterWidget_C::IsCursorSelect(int32 StateType, bool* IsSelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "IsCursorSelect");

	Params::UListCharacterWidget_C_IsCursorSelect_Params Parms{};

	Parms.StateType = StateType;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSelect != nullptr)
		*IsSelect = Parms.IsSelect;

}


// Function ListCharacterWidget.ListCharacterWidget_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UListCharacterWidget_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "IsRunning");

	Params::UListCharacterWidget_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ListCharacterWidget.ListCharacterWidget_C.SetGuideUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::SetGuideUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "SetGuideUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.DecideMainSelectCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Add                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AddDirection                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::DecideMainSelectCursor(int32 Add, int32 AddDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "DecideMainSelectCursor");

	Params::UListCharacterWidget_C_DecideMainSelectCursor_Params Parms{};

	Parms.Add = Add;
	Parms.AddDirection = AddDirection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.AllRefrash
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      MainMember                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                      SubMember                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UListCharacterWidget_C::AllRefrash(TArray<int32>& MainMember, TArray<int32>& SubMember)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "AllRefrash");

	Params::UListCharacterWidget_C_AllRefrash_Params Parms{};

	Parms.MainMember = MainMember;
	Parms.SubMember = SubMember;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.RefreshSelectCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::RefreshSelectCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "RefreshSelectCursor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.InitParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::InitParam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "InitParam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.UpdateButtonY
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Rersult                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListCharacterWidget_C::UpdateButtonY(bool* Rersult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "UpdateButtonY");

	Params::UListCharacterWidget_C_UpdateButtonY_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Rersult != nullptr)
		*Rersult = Parms.Rersult;

}


// Function ListCharacterWidget.ListCharacterWidget_C.UpdateMainSelectCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceAnim                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListCharacterWidget_C::UpdateMainSelectCursor(bool ForceAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "UpdateMainSelectCursor");

	Params::UListCharacterWidget_C_UpdateMainSelectCursor_Params Parms{};

	Parms.ForceAnim = ForceAnim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.UpdateCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::UpdateCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "UpdateCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.SetSubNowRowColumn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::SetSubNowRowColumn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "SetSubNowRowColumn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.DecideSubSelectCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Add                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AddDirection                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::DecideSubSelectCursor(int32 Add, int32 AddDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "DecideSubSelectCursor");

	Params::UListCharacterWidget_C_DecideSubSelectCursor_Params Parms{};

	Parms.Add = Add;
	Parms.AddDirection = AddDirection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.UpdateDecide
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListCharacterWidget_C::UpdateDecide(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "UpdateDecide");

	Params::UListCharacterWidget_C_UpdateDecide_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ListCharacterWidget.ListCharacterWidget_C.AddLeftRightSelectCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Add                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::AddLeftRightSelectCursor(int32 Add)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "AddLeftRightSelectCursor");

	Params::UListCharacterWidget_C_AddLeftRightSelectCursor_Params Parms{};

	Parms.Add = Add;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.SetSubRowColumn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::SetSubRowColumn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "SetSubRowColumn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.AddUpDownSelectCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Add                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::AddUpDownSelectCursor(int32 Add)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "AddUpDownSelectCursor");

	Params::UListCharacterWidget_C_AddUpDownSelectCursor_Params Parms{};

	Parms.Add = Add;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.UpdateSubSelectCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceAnim                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListCharacterWidget_C::UpdateSubSelectCursor(bool ForceAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "UpdateSubSelectCursor");

	Params::UListCharacterWidget_C_UpdateSubSelectCursor_Params Parms{};

	Parms.ForceAnim = ForceAnim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.IsClosingState
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UListCharacterWidget_C::IsClosingState(int32 State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "IsClosingState");

	Params::UListCharacterWidget_C_IsClosingState_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ListCharacterWidget.ListCharacterWidget_C.SetSubMemberPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavePlayerCharacterData    CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UListCharacterWidget_C::SetSubMemberPanel(int32 Index, const struct FSavePlayerCharacterData& CharacterData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "SetSubMemberPanel");

	Params::UListCharacterWidget_C_SetSubMemberPanel_Params Parms{};

	Parms.Index = Index;
	Parms.CharacterData = CharacterData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.Update_Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::Update_Select()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "Update_Select");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.EndStateEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::EndStateEvent(int32 CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "EndStateEvent");

	Params::UListCharacterWidget_C_EndStateEvent_Params Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.BeginStateEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::BeginStateEvent(int32 CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "BeginStateEvent");

	Params::UListCharacterWidget_C_BeginStateEvent_Params Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.UpdateEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::UpdateEvent(int32 CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "UpdateEvent");

	Params::UListCharacterWidget_C_UpdateEvent_Params Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.CloseEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::CloseEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "CloseEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.InitUIParts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::InitUIParts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "InitUIParts");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OpenEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OpenEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OpenEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnRightAxisX");

	Params::UListCharacterWidget_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnRightAxisY");

	Params::UListCharacterWidget_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnLeftAxisX");

	Params::UListCharacterWidget_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnLeftAxisY");

	Params::UListCharacterWidget_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnGamePadAxisX");

	Params::UListCharacterWidget_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnGamePadAxisY");

	Params::UListCharacterWidget_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UListCharacterWidget_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnListPaging");

	Params::UListCharacterWidget_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "WorldMapSlowCursorX");

	Params::UListCharacterWidget_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "WorldMapSlowCursorY");

	Params::UListCharacterWidget_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "HelpScrollAxis");

	Params::UListCharacterWidget_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnBeginState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PrevState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::OnBeginState(int32 PrevState, int32 CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnBeginState");

	Params::UListCharacterWidget_C_OnBeginState_Params Parms{};

	Parms.PrevState = PrevState;
	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnUpdateState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::OnUpdateState(int32 CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnUpdateState");

	Params::UListCharacterWidget_C_OnUpdateState_Params Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnEndState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NextState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::OnEndState(int32 CurrentState, int32 NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnEndState");

	Params::UListCharacterWidget_C_OnEndState_Params Parms{};

	Parms.CurrentState = CurrentState;
	Parms.NextState = NextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "Tick");

	Params::UListCharacterWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListCharacterWidget.ListCharacterWidget_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListCharacterWidget_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ListCharacterWidget.ListCharacterWidget_C.ExecuteUbergraph_ListCharacterWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListCharacterWidget_C::ExecuteUbergraph_ListCharacterWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListCharacterWidget_C", "ExecuteUbergraph_ListCharacterWidget");

	Params::UListCharacterWidget_C_ExecuteUbergraph_ListCharacterWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


