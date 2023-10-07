#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass GuildMenuWidget.GuildMenuWidget_C
// (None)

class UClass* UGuildMenuWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GuildMenuWidget_C");

	return Clss;
}


// GuildMenuWidget_C GuildMenuWidget.Default__GuildMenuWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGuildMenuWidget_C* UGuildMenuWidget_C::GetDefaultObj()
{
	static class UGuildMenuWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGuildMenuWidget_C*>(UGuildMenuWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GuildMenuWidget.GuildMenuWidget_C.AfterLicenseAcquire
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsClose                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildMenuWidget_C::AfterLicenseAcquire(bool* IsClose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "AfterLicenseAcquire");

	Params::UGuildMenuWidget_C_AfterLicenseAcquire_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsClose != nullptr)
		*IsClose = Parms.IsClose;

}


// Function GuildMenuWidget.GuildMenuWidget_C.LicenseAcquireDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::LicenseAcquireDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "LicenseAcquireDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.GetJobID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              JobID                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::GetJobID(int32* JobID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "GetJobID");

	Params::UGuildMenuWidget_C_GetJobID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (JobID != nullptr)
		*JobID = Parms.JobID;

}


// Function GuildMenuWidget.GuildMenuWidget_C.IsRequiredAbility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsMoney                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildMenuWidget_C::IsRequiredAbility(bool* IsMoney)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "IsRequiredAbility");

	Params::UGuildMenuWidget_C_IsRequiredAbility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsMoney != nullptr)
		*IsMoney = Parms.IsMoney;

}


// Function GuildMenuWidget.GuildMenuWidget_C.ResetParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::ResetParam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "ResetParam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.GetNeedMoney
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Need_Money                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::GetNeedMoney(int32* Need_Money)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "GetNeedMoney");

	Params::UGuildMenuWidget_C_GetNeedMoney_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Need_Money != nullptr)
		*Need_Money = Parms.Need_Money;

}


// Function GuildMenuWidget.GuildMenuWidget_C.IsRequiredMoney
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsMoney                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildMenuWidget_C::IsRequiredMoney(bool* IsMoney)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "IsRequiredMoney");

	Params::UGuildMenuWidget_C_IsRequiredMoney_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsMoney != nullptr)
		*IsMoney = Parms.IsMoney;

}


// Function GuildMenuWidget.GuildMenuWidget_C.CheckHeaderFooterAddChild
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::CheckHeaderFooterAddChild()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "CheckHeaderFooterAddChild");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.SetFooterText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGuideData>          GuideData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGuildMenuWidget_C::SetFooterText(TArray<struct FGuideData>& GuideData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "SetFooterText");

	Params::UGuildMenuWidget_C_SetFooterText_Params Parms{};

	Parms.GuideData = GuideData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMenuWidget.GuildMenuWidget_C.SetHeaderText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::SetHeaderText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "SetHeaderText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.SetupHeaderFooter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::SetupHeaderFooter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "SetupHeaderFooter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.PlayReOpenAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::PlayReOpenAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "PlayReOpenAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.EventRequestSetReOpenLicenseMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::EventRequestSetReOpenLicenseMenu(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "EventRequestSetReOpenLicenseMenu");

	Params::UGuildMenuWidget_C_EventRequestSetReOpenLicenseMenu_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMenuWidget.GuildMenuWidget_C.PlayFadeInAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::PlayFadeInAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "PlayFadeInAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.EventRequestSetReOpenSubMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::EventRequestSetReOpenSubMenu(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "EventRequestSetReOpenSubMenu");

	Params::UGuildMenuWidget_C_EventRequestSetReOpenSubMenu_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMenuWidget.GuildMenuWidget_C.EventRequestSetGetLicense
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::EventRequestSetGetLicense(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "EventRequestSetGetLicense");

	Params::UGuildMenuWidget_C_EventRequestSetGetLicense_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMenuWidget.GuildMenuWidget_C.GetRequiredItemText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ItemName                                                         (Parm, OutParm)

void UGuildMenuWidget_C::GetRequiredItemText(class FText* ItemName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "GetRequiredItemText");

	Params::UGuildMenuWidget_C_GetRequiredItemText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemName != nullptr)
		*ItemName = Parms.ItemName;

}


// Function GuildMenuWidget.GuildMenuWidget_C.GetTalkLabel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                Label                                                            (Parm, OutParm)

void UGuildMenuWidget_C::GetTalkLabel(TArray<class FName>* Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "GetTalkLabel");

	Params::UGuildMenuWidget_C_GetTalkLabel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Label != nullptr)
		*Label = std::move(Parms.Label);

}


// Function GuildMenuWidget.GuildMenuWidget_C.ReOpenSubMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::ReOpenSubMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "ReOpenSubMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.ReOpenLicenseMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::ReOpenLicenseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "ReOpenLicenseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.GetLicense
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::GetLicense()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "GetLicense");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.UpdateEventView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::UpdateEventView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "UpdateEventView");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.SubMenuDecide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::SubMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "SubMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.GetCompleteEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        EventLabel                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::GetCompleteEvent(class FName* EventLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "GetCompleteEvent");

	Params::UGuildMenuWidget_C_GetCompleteEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EventLabel != nullptr)
		*EventLabel = Parms.EventLabel;

}


// Function GuildMenuWidget.GuildMenuWidget_C.ConfirmCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::ConfirmCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "ConfirmCallback");

	Params::UGuildMenuWidget_C_ConfirmCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMenuWidget.GuildMenuWidget_C.AcquiredCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::AcquiredCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "AcquiredCallback");

	Params::UGuildMenuWidget_C_AcquiredCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMenuWidget.GuildMenuWidget_C.LicenseMenuDecide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::LicenseMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "LicenseMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OpenConfirmDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OpenConfirmDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OpenConfirmDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OpenAcquiredDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OpenAcquiredDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OpenAcquiredDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.SubMenuCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::SubMenuCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "SubMenuCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.SubMenuCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::SubMenuCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "SubMenuCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.FirstTaskUnCleared
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::FirstTaskUnCleared()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "FirstTaskUnCleared");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.FirstTaskClear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::FirstTaskClear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "FirstTaskClear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.TaskClear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::TaskClear(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "TaskClear");

	Params::UGuildMenuWidget_C_TaskClear_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMenuWidget.GuildMenuWidget_C.IsChangeStateCloseFinish
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGuildMenuWidget_C::IsChangeStateCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "IsChangeStateCloseFinish");

	Params::UGuildMenuWidget_C_IsChangeStateCloseFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GuildMenuWidget.GuildMenuWidget_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.ReOpenGuildMenu
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGuildMenuWidget_C::ReOpenGuildMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "ReOpenGuildMenu");

	Params::UGuildMenuWidget_C_ReOpenGuildMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GuildMenuWidget.GuildMenuWidget_C.GetReOpenFlag
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGuildMenuWidget_C::GetReOpenFlag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "GetReOpenFlag");

	Params::UGuildMenuWidget_C_GetReOpenFlag_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GuildMenuWidget.GuildMenuWidget_C.EventRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::EventRequest(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "EventRequest");

	Params::UGuildMenuWidget_C_EventRequest_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMenuWidget.GuildMenuWidget_C.CheckFirstFlowEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::CheckFirstFlowEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "CheckFirstFlowEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OpenSubList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OpenSubList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OpenSubList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OpenLicenseMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OpenLicenseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OpenLicenseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGuildMenuWidget_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "IsRunning");

	Params::UGuildMenuWidget_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GuildMenuWidget.GuildMenuWidget_C.IsChangeStateOpenFinish
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGuildMenuWidget_C::IsChangeStateOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "IsChangeStateOpenFinish");

	Params::UGuildMenuWidget_C_IsChangeStateOpenFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GuildMenuWidget.GuildMenuWidget_C.TransfromFromTop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::TransfromFromTop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "TransfromFromTop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGUILD_MENU_STATE       NextState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::SetState(enum class EGUILD_MENU_STATE NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "SetState");

	Params::UGuildMenuWidget_C_SetState_Params Parms{};

	Parms.NextState = NextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMenuWidget.GuildMenuWidget_C.UpdateState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::UpdateState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "UpdateState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.Open
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.SetReference
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGuildMenuWidget_C::SetReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "SetReference");

	Params::UGuildMenuWidget_C_SetReference_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GuildMenuWidget.GuildMenuWidget_C.Init
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGuildMenuWidget_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "Init");

	Params::UGuildMenuWidget_C_Init_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GuildMenuWidget.GuildMenuWidget_C.SetupMenuList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::SetupMenuList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "SetupMenuList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.IsCancelAnimationPlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsPlaying                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildMenuWidget_C::IsCancelAnimationPlaying(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "IsCancelAnimationPlaying");

	Params::UGuildMenuWidget_C_IsCancelAnimationPlaying_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;

}


// Function GuildMenuWidget.GuildMenuWidget_C.InitGuildListIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::InitGuildListIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "InitGuildListIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.StopAllPanelAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::StopAllPanelAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "StopAllPanelAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.DefaultAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::DefaultAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "DefaultAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.SetCursorPosFromState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMAINMENUSTATE          MainMenuState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AnimFast                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildMenuWidget_C::SetCursorPosFromState(enum class EMAINMENUSTATE MainMenuState, bool AnimFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "SetCursorPosFromState");

	Params::UGuildMenuWidget_C_SetCursorPosFromState_Params Parms{};

	Parms.MainMenuState = MainMenuState;
	Parms.AnimFast = AnimFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMenuWidget.GuildMenuWidget_C.SetCursorPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CursorPosition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::SetCursorPosition(int32 CursorPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "SetCursorPosition");

	Params::UGuildMenuWidget_C_SetCursorPosition_Params Parms{};

	Parms.CursorPosition = CursorPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMenuWidget.GuildMenuWidget_C.NowSelectFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::NowSelectFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "NowSelectFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.NowSelectOutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::NowSelectOutFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "NowSelectOutFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.GetSelectData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMainMenuItemPanel_C*        Item                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::GetSelectData(class UMainMenuItemPanel_C** Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "GetSelectData");

	Params::UGuildMenuWidget_C_GetSelectData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = Parms.Item;

}


// Function GuildMenuWidget.GuildMenuWidget_C.NowSelectCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::NowSelectCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "NowSelectCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.NowSelectDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::NowSelectDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "NowSelectDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.Cursor Up
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::Cursor_Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "Cursor Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnRightAxisX");

	Params::UGuildMenuWidget_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnRightAxisY");

	Params::UGuildMenuWidget_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnLeftAxisX");

	Params::UGuildMenuWidget_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnLeftAxisY");

	Params::UGuildMenuWidget_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnGamePadAxisX");

	Params::UGuildMenuWidget_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnGamePadAxisY");

	Params::UGuildMenuWidget_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildMenuWidget_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnListPaging");

	Params::UGuildMenuWidget_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "WorldMapSlowCursorX");

	Params::UGuildMenuWidget_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMenuWidget.GuildMenuWidget_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "WorldMapSlowCursorY");

	Params::UGuildMenuWidget_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMenuWidget.GuildMenuWidget_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "HelpScrollAxis");

	Params::UGuildMenuWidget_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnOpenFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnOpenFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.UpdateOpening
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::UpdateOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "UpdateOpening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.UpdateClosing
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::UpdateClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "UpdateClosing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "OnAnimationFinished");

	Params::UGuildMenuWidget_C_OnAnimationFinished_Params Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GuildMenuWidget.GuildMenuWidget_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuildMenuWidget_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GuildMenuWidget.GuildMenuWidget_C.ExecuteUbergraph_GuildMenuWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenuWidget_C::ExecuteUbergraph_GuildMenuWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GuildMenuWidget_C", "ExecuteUbergraph_GuildMenuWidget");

	Params::UGuildMenuWidget_C_ExecuteUbergraph_GuildMenuWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


