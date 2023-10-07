#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass JobStatusWidget.JobStatusWidget_C
// (None)

class UClass* UJobStatusWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JobStatusWidget_C");

	return Clss;
}


// JobStatusWidget_C JobStatusWidget.Default__JobStatusWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJobStatusWidget_C* UJobStatusWidget_C::GetDefaultObj()
{
	static class UJobStatusWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJobStatusWidget_C*>(UJobStatusWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function JobStatusWidget.JobStatusWidget_C.SetIsDialogOpening
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJobStatusWidget_C::SetIsDialogOpening(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "SetIsDialogOpening");

	Params::UJobStatusWidget_C_SetIsDialogOpening_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.GetIsDialogOpening
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UJobStatusWidget_C::GetIsDialogOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "GetIsDialogOpening");

	Params::UJobStatusWidget_C_GetIsDialogOpening_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function JobStatusWidget.JobStatusWidget_C.ExcludeGuest
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FSavePlayerCharacterData>In                                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FSavePlayerCharacterData>Out                                                              (Parm, OutParm)

void UJobStatusWidget_C::ExcludeGuest(TArray<struct FSavePlayerCharacterData>& In, TArray<struct FSavePlayerCharacterData>* Out)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "ExcludeGuest");

	Params::UJobStatusWidget_C_ExcludeGuest_Params Parms{};

	Parms.In = In;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);

}


// Function JobStatusWidget.JobStatusWidget_C.UpdateMainJob
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::UpdateMainJob()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "UpdateMainJob");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.UpdateJobLicence
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::UpdateJobLicence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "UpdateJobLicence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OpenCharaRemoveDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OpenCharaRemoveDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OpenCharaRemoveDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.JobChangeRemoveSelectedCharaCallback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::JobChangeRemoveSelectedCharaCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "JobChangeRemoveSelectedCharaCallback");

	Params::UJobStatusWidget_C_JobChangeRemoveSelectedCharaCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.MakeSubJobChangeText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (Parm, OutParm)

void UJobStatusWidget_C::MakeSubJobChangeText(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "MakeSubJobChangeText");

	Params::UJobStatusWidget_C_MakeSubJobChangeText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function JobStatusWidget.JobStatusWidget_C.JobChangeConfirmCallback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::JobChangeConfirmCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "JobChangeConfirmCallback");

	Params::UJobStatusWidget_C_JobChangeConfirmCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.JobSupportAbilityAcquisitionCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::JobSupportAbilityAcquisitionCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "JobSupportAbilityAcquisitionCallback");

	Params::UJobStatusWidget_C_JobSupportAbilityAcquisitionCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.JobAbilityConfirmCallback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::JobAbilityConfirmCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "JobAbilityConfirmCallback");

	Params::UJobStatusWidget_C_JobAbilityConfirmCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.GetListFirstCursor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ListCursorPos                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::GetListFirstCursor(int32* ListCursorPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "GetListFirstCursor");

	Params::UJobStatusWidget_C_GetListFirstCursor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ListCursorPos != nullptr)
		*ListCursorPos = Parms.ListCursorPos;

}


// Function JobStatusWidget.JobStatusWidget_C.ChangePlayerSubjobChangeNone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::ChangePlayerSubjobChangeNone(int32 CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "ChangePlayerSubjobChangeNone");

	Params::UJobStatusWidget_C_ChangePlayerSubjobChangeNone_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.ChangeStateSubJobChangeConfirm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMAINMENU_SUBJOB_COMFIRMRETURNFinishType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayOkSe                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJobStatusWidget_C::ChangeStateSubJobChangeConfirm(enum class EMAINMENU_SUBJOB_COMFIRMRETURN FinishType, bool PlayOkSe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "ChangeStateSubJobChangeConfirm");

	Params::UJobStatusWidget_C_ChangeStateSubJobChangeConfirm_Params Parms{};

	Parms.FinishType = FinishType;
	Parms.PlayOkSe = PlayOkSe;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.PreCloseAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanClose                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJobStatusWidget_C::PreCloseAction(bool* CanClose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "PreCloseAction");

	Params::UJobStatusWidget_C_PreCloseAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanClose != nullptr)
		*CanClose = Parms.CanClose;

}


// Function JobStatusWidget.JobStatusWidget_C.UpdateJobPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              JobPoint                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::UpdateJobPoint(int32 JobPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "UpdateJobPoint");

	Params::UJobStatusWidget_C_UpdateJobPoint_Params Parms{};

	Parms.JobPoint = JobPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.ChangeCharacterCommon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Increment                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJobStatusWidget_C::ChangeCharacterCommon(bool Increment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "ChangeCharacterCommon");

	Params::UJobStatusWidget_C_ChangeCharacterCommon_Params Parms{};

	Parms.Increment = Increment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.LShoulderEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::LShoulderEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "LShoulderEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.RShoulderEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::RShoulderEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "RShoulderEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.UpdateJobAbilitySupport
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::UpdateJobAbilitySupport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "UpdateJobAbilitySupport");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.ChangeStateJobSupportAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::ChangeStateJobSupportAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "ChangeStateJobSupportAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.ChangeStateCommon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::ChangeStateCommon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "ChangeStateCommon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.SetAbilityComparisionParameter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavePlayerCharacterData    CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              AbilitySlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AbilityID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::SetAbilityComparisionParameter(struct FSavePlayerCharacterData& CharacterData, int32 AbilitySlot, int32 AbilityID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "SetAbilityComparisionParameter");

	Params::UJobStatusWidget_C_SetAbilityComparisionParameter_Params Parms{};

	Parms.CharacterData = CharacterData;
	Parms.AbilitySlot = AbilitySlot;
	Parms.AbilityID = AbilityID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.CalcCollectionParam
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterParam             BaseParam                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FCharacterParam             JobRevision                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// TArray<int32>                      CollectionParam                                                  (Parm, OutParm)

void UJobStatusWidget_C::CalcCollectionParam(const struct FCharacterParam& BaseParam, const struct FCharacterParam& JobRevision, TArray<int32>* CollectionParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "CalcCollectionParam");

	Params::UJobStatusWidget_C_CalcCollectionParam_Params Parms{};

	Parms.BaseParam = BaseParam;
	Parms.JobRevision = JobRevision;

	UObject::ProcessEvent(Func, &Parms);

	if (CollectionParam != nullptr)
		*CollectionParam = std::move(Parms.CollectionParam);

}


// Function JobStatusWidget.JobStatusWidget_C.GetListTitleIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EJOB_TYPE               JobType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  JobTitleIcon                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::GetListTitleIcon(enum class EJOB_TYPE JobType, class UTexture2D** JobTitleIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "GetListTitleIcon");

	Params::UJobStatusWidget_C_GetListTitleIcon_Params Parms{};

	Parms.JobType = JobType;

	UObject::ProcessEvent(Func, &Parms);

	if (JobTitleIcon != nullptr)
		*JobTitleIcon = Parms.JobTitleIcon;

}


// Function JobStatusWidget.JobStatusWidget_C.CloseJobStatusWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::CloseJobStatusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "CloseJobStatusWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.GetCanChangeJobNum
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CanChangeJobNum                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::GetCanChangeJobNum(int32* CanChangeJobNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "GetCanChangeJobNum");

	Params::UJobStatusWidget_C_GetCanChangeJobNum_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanChangeJobNum != nullptr)
		*CanChangeJobNum = Parms.CanChangeJobNum;

}


// Function JobStatusWidget.JobStatusWidget_C.ChangeStateSubJobSelectMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::ChangeStateSubJobSelectMove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "ChangeStateSubJobSelectMove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.ResetAfterParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::ResetAfterParam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "ResetAfterParam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.CheckCanChangeJobByJobID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanChangeJob                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJobStatusWidget_C::CheckCanChangeJobByJobID(int32 JobID, bool* CanChangeJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "CheckCanChangeJobByJobID");

	Params::UJobStatusWidget_C_CheckCanChangeJobByJobID_Params Parms{};

	Parms.JobID = JobID;

	UObject::ProcessEvent(Func, &Parms);

	if (CanChangeJob != nullptr)
		*CanChangeJob = Parms.CanChangeJob;

}


// Function JobStatusWidget.JobStatusWidget_C.ChangeStateSubJobAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::ChangeStateSubJobAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "ChangeStateSubJobAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.CharacterDataUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::CharacterDataUpdate(int32 CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "CharacterDataUpdate");

	Params::UJobStatusWidget_C_CharacterDataUpdate_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.UpdateJobAbilityConfirm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::UpdateJobAbilityConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "UpdateJobAbilityConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.SetDialogWidgetParts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobAbilityConfirmParts_C*   JobAbilityConfirmParts                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::SetDialogWidgetParts(class UJobAbilityConfirmParts_C* JobAbilityConfirmParts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "SetDialogWidgetParts");

	Params::UJobStatusWidget_C_SetDialogWidgetParts_Params Parms{};

	Parms.JobAbilityConfirmParts = JobAbilityConfirmParts;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.ChangeStateJobAbilityConfirm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FJobLearnAbility            AbilityState                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UJobStatusWidget_C::ChangeStateJobAbilityConfirm(int32 JobID, const struct FJobLearnAbility& AbilityState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "ChangeStateJobAbilityConfirm");

	Params::UJobStatusWidget_C_ChangeStateJobAbilityConfirm_Params Parms{};

	Parms.JobID = JobID;
	Parms.AbilityState = AbilityState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.CreateAcquisitionListCategory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FListWidgetCategory         ListWidgetCategoryData                                           (Parm, OutParm)

void UJobStatusWidget_C::CreateAcquisitionListCategory(int32 JobID, struct FListWidgetCategory* ListWidgetCategoryData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "CreateAcquisitionListCategory");

	Params::UJobStatusWidget_C_CreateAcquisitionListCategory_Params Parms{};

	Parms.JobID = JobID;

	UObject::ProcessEvent(Func, &Parms);

	if (ListWidgetCategoryData != nullptr)
		*ListWidgetCategoryData = std::move(Parms.ListWidgetCategoryData);

}


// Function JobStatusWidget.JobStatusWidget_C.OpenCurrentMainJobAcquisitionAbilityList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlayAnimation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJobStatusWidget_C::OpenCurrentMainJobAcquisitionAbilityList(bool PlayAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OpenCurrentMainJobAcquisitionAbilityList");

	Params::UJobStatusWidget_C_OpenCurrentMainJobAcquisitionAbilityList_Params Parms{};

	Parms.PlayAnimation = PlayAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.JobAbilityAcquisitionEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdx                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::JobAbilityAcquisitionEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "JobAbilityAcquisitionEvent");

	Params::UJobStatusWidget_C_JobAbilityAcquisitionEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdx = ItemIdx;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.SetJobComparisonParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::SetJobComparisonParameter(int32 JobID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "SetJobComparisonParameter");

	Params::UJobStatusWidget_C_SetJobComparisonParameter_Params Parms{};

	Parms.JobID = JobID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.SetupCharacterParameter
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavePlayerCharacterData    CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UJobStatusWidget_C::SetupCharacterParameter(const struct FSavePlayerCharacterData& CharacterData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "SetupCharacterParameter");

	Params::UJobStatusWidget_C_SetupCharacterParameter_Params Parms{};

	Parms.CharacterData = CharacterData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.ChangeCurrentCharacterSubJob
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChangeJobID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::ChangeCurrentCharacterSubJob(int32 ChangeJobID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "ChangeCurrentCharacterSubJob");

	Params::UJobStatusWidget_C_ChangeCurrentCharacterSubJob_Params Parms{};

	Parms.ChangeJobID = ChangeJobID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.OpenCurrentSubJobAcquisitionAbilityList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayAnimation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJobStatusWidget_C::OpenCurrentSubJobAcquisitionAbilityList(int32 JobID, bool PlayAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OpenCurrentSubJobAcquisitionAbilityList");

	Params::UJobStatusWidget_C_OpenCurrentSubJobAcquisitionAbilityList_Params Parms{};

	Parms.JobID = JobID;
	Parms.PlayAnimation = PlayAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.CloseAcquisitionAbilityList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::CloseAcquisitionAbilityList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "CloseAcquisitionAbilityList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OpenAcquisitionAbilityList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavePlayerCharacterData    CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               PlayAnimation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJobStatusWidget_C::OpenAcquisitionAbilityList(int32 JobID, struct FSavePlayerCharacterData& CharacterData, bool PlayAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OpenAcquisitionAbilityList");

	Params::UJobStatusWidget_C_OpenAcquisitionAbilityList_Params Parms{};

	Parms.JobID = JobID;
	Parms.CharacterData = CharacterData;
	Parms.PlayAnimation = PlayAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.ChangeStateSubJob
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::ChangeStateSubJob()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "ChangeStateSubJob");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.SetupDefaultFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::SetupDefaultFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "SetupDefaultFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.ChangeStateSelectCharacter
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::ChangeStateSelectCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "ChangeStateSelectCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.NowSelectCategoryFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::NowSelectCategoryFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "NowSelectCategoryFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.NowSelectCategoryDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::NowSelectCategoryDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "NowSelectCategoryDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.AddIntArray
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int32>                      Base                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                      Add                                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                      Result                                                           (Parm, OutParm)

void UJobStatusWidget_C::AddIntArray(TArray<int32>& Base, TArray<int32>& Add, TArray<int32>* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "AddIntArray");

	Params::UJobStatusWidget_C_AddIntArray_Params Parms{};

	Parms.Base = Base;
	Parms.Add = Add;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}


// Function JobStatusWidget.JobStatusWidget_C.SetupText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::SetupText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "SetupText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.CancelEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::CancelEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "CancelEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.DecideEvent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::DecideEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "DecideEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.CursorRightEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::CursorRightEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "CursorRightEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.CursorLeftEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::CursorLeftEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "CursorLeftEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.CursorDownEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::CursorDownEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "CursorDownEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.CursorUpEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::CursorUpEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "CursorUpEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.TickEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::TickEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "TickEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UJobStatusWidget_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "IsRunning");

	Params::UJobStatusWidget_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function JobStatusWidget.JobStatusWidget_C.SetupPlayerData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavePlayerCharacterData    CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UJobStatusWidget_C::SetupPlayerData(const struct FSavePlayerCharacterData& CharacterData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "SetupPlayerData");

	Params::UJobStatusWidget_C_SetupPlayerData_Params Parms{};

	Parms.CharacterData = CharacterData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.UpdateCategoryCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewCursor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::UpdateCategoryCursor(int32 NewCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "UpdateCategoryCursor");

	Params::UJobStatusWidget_C_UpdateCategoryCursor_Params Parms{};

	Parms.NewCursor = NewCursor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.SetupCategoryWidget
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::SetupCategoryWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "SetupCategoryWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OpenJobStatus
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSavePlayerCharacterData>CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UListWidget_C*               AbilityAcquisitionList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::OpenJobStatus(TArray<struct FSavePlayerCharacterData>& CharacterData, class UListWidget_C*& AbilityAcquisitionList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OpenJobStatus");

	Params::UJobStatusWidget_C_OpenJobStatus_Params Parms{};

	Parms.CharacterData = CharacterData;
	Parms.AbilityAcquisitionList = AbilityAcquisitionList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnRightAxisX");

	Params::UJobStatusWidget_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnRightAxisY");

	Params::UJobStatusWidget_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnLeftAxisX");

	Params::UJobStatusWidget_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnLeftAxisY");

	Params::UJobStatusWidget_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnGamePadAxisX");

	Params::UJobStatusWidget_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnGamePadAxisY");

	Params::UJobStatusWidget_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJobStatusWidget_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnListPaging");

	Params::UJobStatusWidget_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "WorldMapSlowCursorX");

	Params::UJobStatusWidget_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "WorldMapSlowCursorY");

	Params::UJobStatusWidget_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "HelpScrollAxis");

	Params::UJobStatusWidget_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "Tick");

	Params::UJobStatusWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobStatusWidget.JobStatusWidget_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobStatusWidget_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobStatusWidget.JobStatusWidget_C.ExecuteUbergraph_JobStatusWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobStatusWidget_C::ExecuteUbergraph_JobStatusWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobStatusWidget_C", "ExecuteUbergraph_JobStatusWidget");

	Params::UJobStatusWidget_C_ExecuteUbergraph_JobStatusWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


