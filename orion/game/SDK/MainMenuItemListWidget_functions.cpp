#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenuItemListWidget.MainMenuItemListWidget_C
// (None)

class UClass* UMainMenuItemListWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuItemListWidget_C");

	return Clss;
}


// MainMenuItemListWidget_C MainMenuItemListWidget.Default__MainMenuItemListWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuItemListWidget_C* UMainMenuItemListWidget_C::GetDefaultObj()
{
	static class UMainMenuItemListWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuItemListWidget_C*>(UMainMenuItemListWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.AvaiableRecoveryItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::AvaiableRecoveryItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "AvaiableRecoveryItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.CheckHPMPAilment
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMJListWidgetItemData       TargetListData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FItemData                   TargetItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuItemListWidget_C::CheckHPMPAilment(struct FMJListWidgetItemData& TargetListData, struct FItemData& TargetItemData, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "CheckHPMPAilment");

	Params::UMainMenuItemListWidget_C_CheckHPMPAilment_Params Parms{};

	Parms.TargetListData = TargetListData;
	Parms.TargetItemData = TargetItemData;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.PlayHolyTorchEvent
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENOTICE_TYPE            NoticeType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNoticeArgs                 Args                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainMenuItemListWidget_C::PlayHolyTorchEvent(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "PlayHolyTorchEvent");

	Params::UMainMenuItemListWidget_C_PlayHolyTorchEvent_Params Parms{};

	Parms.NoticeType = NoticeType;
	Parms.Args = Args;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.NarrationNoteFinishCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::NarrationNoteFinishCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "NarrationNoteFinishCallback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.SetEquipmentPart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEquipmentCategory      EquipCategory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuItemListWidget_C::SetEquipmentPart(enum class EEquipmentCategory EquipCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "SetEquipmentPart");

	Params::UMainMenuItemListWidget_C_SetEquipmentPart_Params Parms{};

	Parms.EquipCategory = EquipCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.ChangeAccesorySlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::ChangeAccesorySlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "ChangeAccesorySlot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.StartEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::StartEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "StartEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.Fixed Remove Confilm Finish Callback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuItemListWidget_C::Fixed_Remove_Confilm_Finish_Callback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "Fixed Remove Confilm Finish Callback");

	Params::UMainMenuItemListWidget_C_Fixed_Remove_Confilm_Finish_Callback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.OpenFixedRemoveConfirmDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuItemListWidget_C::OpenFixedRemoveConfirmDialog(int32 CharaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "OpenFixedRemoveConfirmDialog");

	Params::UMainMenuItemListWidget_C_OpenFixedRemoveConfirmDialog_Params Parms{};

	Parms.CharaID = CharaID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.ChangeAccesoryGuideText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::ChangeAccesoryGuideText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "ChangeAccesoryGuideText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.OpenMaxParameterDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::OpenMaxParameterDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "OpenMaxParameterDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.GetParamText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterParam             CharaParam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FAilmentCharacterParam      AilmentParam                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ParamText                                                        (Parm, OutParm)

void UMainMenuItemListWidget_C::GetParamText(const struct FCharacterParam& CharaParam, const struct FAilmentCharacterParam& AilmentParam, int32 CharaID, class FText* ParamText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "GetParamText");

	Params::UMainMenuItemListWidget_C_GetParamText_Params Parms{};

	Parms.CharaParam = CharaParam;
	Parms.AilmentParam = AilmentParam;
	Parms.CharaID = CharaID;

	UObject::ProcessEvent(Func, &Parms);

	if (ParamText != nullptr)
		*ParamText = Parms.ParamText;

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.UpdateEquippedItemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::UpdateEquippedItemData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "UpdateEquippedItemData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.CloseEquipItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::CloseEquipItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "CloseEquipItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.CalcEquipParamBeforeAfter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::CalcEquipParamBeforeAfter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "CalcEquipParamBeforeAfter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.Is Selected Equipment Item
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuItemListWidget_C::Is_Selected_Equipment_Item()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "Is Selected Equipment Item");

	Params::UMainMenuItemListWidget_C_Is_Selected_Equipment_Item_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.EquipSelectedItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::EquipSelectedItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "EquipSelectedItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.SettingEquipParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuItemListWidget_C::SettingEquipParam(class FName ItemLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "SettingEquipParam");

	Params::UMainMenuItemListWidget_C_SettingEquipParam_Params Parms{};

	Parms.ItemLabel = ItemLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.ResetEquipParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::ResetEquipParam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "ResetEquipParam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.UpdateEquipParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::UpdateEquipParam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "UpdateEquipParam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.FocusEvent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdxInAll                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuItemListWidget_C::FocusEvent(int32 CategoryIdx, int32 ItemIdxInAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "FocusEvent");

	Params::UMainMenuItemListWidget_C_FocusEvent_Params Parms{};

	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdxInAll = ItemIdxInAll;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.DecideItemEvent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdxInAll                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuItemListWidget_C::DecideItemEvent(int32 CategoryIdx, int32 ItemIdxInAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "DecideItemEvent");

	Params::UMainMenuItemListWidget_C_DecideItemEvent_Params Parms{};

	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdxInAll = ItemIdxInAll;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.CallCreateListItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::CallCreateListItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "CallCreateListItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.OpenGuestUnAvalableDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::OpenGuestUnAvalableDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "OpenGuestUnAvalableDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.OnClosedSpecialItemFailedDialog
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuItemListWidget_C::OnClosedSpecialItemFailedDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "OnClosedSpecialItemFailedDialog");

	Params::UMainMenuItemListWidget_C_OnClosedSpecialItemFailedDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.GetAdcancedAbilityFinishCallback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuItemListWidget_C::GetAdcancedAbilityFinishCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "GetAdcancedAbilityFinishCallback");

	Params::UMainMenuItemListWidget_C_GetAdcancedAbilityFinishCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.RefreshList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::RefreshList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "RefreshList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.OnSpecialItemUsed_PlayEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuItemListWidget_C::OnSpecialItemUsed_PlayEvent(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "OnSpecialItemUsed_PlayEvent");

	Params::UMainMenuItemListWidget_C_OnSpecialItemUsed_PlayEvent_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.UseSpecialItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::UseSpecialItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "UseSpecialItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.EndUseItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuItemListWidget_C::EndUseItem(int32 NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "EndUseItem");

	Params::UMainMenuItemListWidget_C_EndUseItem_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.OpenSCPMaxDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::OpenSCPMaxDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "OpenSCPMaxDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.UpdateItemTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainMenuItemListWidget_C::UpdateItemTarget(const struct FItemData& InputPin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "UpdateItemTarget");

	Params::UMainMenuItemListWidget_C_UpdateItemTarget_Params Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.CloseUseItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::CloseUseItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "CloseUseItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.TickEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::TickEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "TickEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.OpenAilmentDialog
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowDialog                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuItemListWidget_C::OpenAilmentDialog(int32 CharaID, bool* ShowDialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "OpenAilmentDialog");

	Params::UMainMenuItemListWidget_C_OpenAilmentDialog_Params Parms{};

	Parms.CharaID = CharaID;

	UObject::ProcessEvent(Func, &Parms);

	if (ShowDialog != nullptr)
		*ShowDialog = Parms.ShowDialog;

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.AilmentDialogSetting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAilment                    Ailment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ExecGrow                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuItemListWidget_C::AilmentDialogSetting(const struct FAilment& Ailment, int32 Type, bool* ExecGrow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "AilmentDialogSetting");

	Params::UMainMenuItemListWidget_C_AilmentDialogSetting_Params Parms{};

	Parms.Ailment = Ailment;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (ExecGrow != nullptr)
		*ExecGrow = Parms.ExecGrow;

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.CancelEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::CancelEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "CancelEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.DecideEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::DecideEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "DecideEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.CheckSelectItemUsable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemData                   ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELIST_ITEM_STATUS       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ELIST_ITEM_STATUS UMainMenuItemListWidget_C::CheckSelectItemUsable(struct FItemData& ItemData, class FName ItemLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "CheckSelectItemUsable");

	Params::UMainMenuItemListWidget_C_CheckSelectItemUsable_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.ItemLabel = ItemLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.CreateListItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMJListWidgetItemData>ListWidgetItem                                                   (Parm, OutParm)

void UMainMenuItemListWidget_C::CreateListItem(TArray<struct FMJListWidgetItemData>* ListWidgetItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "CreateListItem");

	Params::UMainMenuItemListWidget_C_CreateListItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ListWidgetItem != nullptr)
		*ListWidgetItem = std::move(Parms.ListWidgetItem);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.CreateCategory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FListWidgetCategory> ListWidgetCategory                                               (Parm, OutParm)

void UMainMenuItemListWidget_C::CreateCategory(TArray<struct FListWidgetCategory>* ListWidgetCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "CreateCategory");

	Params::UMainMenuItemListWidget_C_CreateCategory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ListWidgetCategory != nullptr)
		*ListWidgetCategory = std::move(Parms.ListWidgetCategory);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.SetupFooterUICharacterList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsAllSelect                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuItemListWidget_C::SetupFooterUICharacterList(bool IsAllSelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "SetupFooterUICharacterList");

	Params::UMainMenuItemListWidget_C_SetupFooterUICharacterList_Params Parms{};

	Parms.IsAllSelect = IsAllSelect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.SetupFooterUIItemList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::SetupFooterUIItemList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "SetupFooterUIItemList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.SetFooterUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenuFooter_C*               FooterUI                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuItemListWidget_C::SetFooterUI(class UMenuFooter_C* FooterUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "SetFooterUI");

	Params::UMainMenuItemListWidget_C_SetFooterUI_Params Parms{};

	Parms.FooterUI = FooterUI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.SetPartyList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPartyCharacterList_C*       PartyList                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuItemListWidget_C::SetPartyList(class UPartyCharacterList_C* PartyList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "SetPartyList");

	Params::UMainMenuItemListWidget_C_SetPartyList_Params Parms{};

	Parms.PartyList = PartyList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.UseSelectItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::UseSelectItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "UseSelectItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.SetItemUseMode
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::SetItemUseMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "SetItemUseMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.UpdateUseAilment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::UpdateUseAilment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "UpdateUseAilment");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.ItemListEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdxInAll                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuItemListWidget_C::ItemListEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "ItemListEvent");

	Params::UMainMenuItemListWidget_C_ItemListEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdxInAll = ItemIdxInAll;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.UpdateOpening
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::UpdateOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "UpdateOpening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.OnOpenFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::OnOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "OnOpenFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.UpdateClosing
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::UpdateClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "UpdateClosing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuItemListWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "Tick");

	Params::UMainMenuItemListWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.MenuCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::MenuCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "MenuCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.MenuCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::MenuCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "MenuCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.CallListEvent
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELIST_EVENT_TYPE        EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIdxInAll                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuItemListWidget_C::CallListEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdxInAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "CallListEvent");

	Params::UMainMenuItemListWidget_C_CallListEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.CategoryIdx = CategoryIdx;
	Parms.ItemIdxInAll = ItemIdxInAll;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.MenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::MenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "MenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.MenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::MenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "MenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.MenuStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuItemListWidget_C::MenuStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "MenuStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuItemListWidget.MainMenuItemListWidget_C.ExecuteUbergraph_MainMenuItemListWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuItemListWidget_C::ExecuteUbergraph_MainMenuItemListWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuItemListWidget_C", "ExecuteUbergraph_MainMenuItemListWidget");

	Params::UMainMenuItemListWidget_C_ExecuteUbergraph_MainMenuItemListWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


