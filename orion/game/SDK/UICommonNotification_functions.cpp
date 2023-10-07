#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UICommonNotification.UICommonNotification_C
// (None)

class UClass* UUICommonNotification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UICommonNotification_C");

	return Clss;
}


// UICommonNotification_C UICommonNotification.Default__UICommonNotification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUICommonNotification_C* UUICommonNotification_C::GetDefaultObj()
{
	static class UUICommonNotification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUICommonNotification_C*>(UUICommonNotification_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UICommonNotification.UICommonNotification_C.AddRequestToStack
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCommonNotificationParam    NewItem                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUICommonNotification_C::AddRequestToStack(struct FCommonNotificationParam& NewItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonNotification_C", "AddRequestToStack");

	Params::UUICommonNotification_C_AddRequestToStack_Params Parms{};

	Parms.NewItem = NewItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonNotification.UICommonNotification_C.UpdateNotificationMessage
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCommonNotificationParam    CommonNotificationParam                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUICommonNotification_C::UpdateNotificationMessage(struct FCommonNotificationParam& CommonNotificationParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonNotification_C", "UpdateNotificationMessage");

	Params::UUICommonNotification_C_UpdateNotificationMessage_Params Parms{};

	Parms.CommonNotificationParam = CommonNotificationParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonNotification.UICommonNotification_C.OnResetHiddenFlag
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonNotification_C::OnResetHiddenFlag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonNotification_C", "OnResetHiddenFlag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonNotification.UICommonNotification_C.HideTemporaryInternal
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHidden                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWIDGET_TEMPORARY_HIDE_USERHideUser                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUICommonNotification_C::HideTemporaryInternal(bool IsHidden, enum class EWIDGET_TEMPORARY_HIDE_USER HideUser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonNotification_C", "HideTemporaryInternal");

	Params::UUICommonNotification_C_HideTemporaryInternal_Params Parms{};

	Parms.IsHidden = IsHidden;
	Parms.HideUser = HideUser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonNotification.UICommonNotification_C.GetIsOpenning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsOpening                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUICommonNotification_C::GetIsOpenning(bool* IsOpening)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonNotification_C", "GetIsOpenning");

	Params::UUICommonNotification_C_GetIsOpenning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsOpening != nullptr)
		*IsOpening = Parms.IsOpening;

}


// Function UICommonNotification.UICommonNotification_C.AllInfoClear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonNotification_C::AllInfoClear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonNotification_C", "AllInfoClear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonNotification.UICommonNotification_C.SetPause
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pause                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUICommonNotification_C::SetPause(bool Pause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonNotification_C", "SetPause");

	Params::UUICommonNotification_C_SetPause_Params Parms{};

	Parms.Pause = Pause;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonNotification.UICommonNotification_C.OpenRequest
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCommonNotificationParam    Request                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UUICommonNotification_C::OpenRequest(const struct FCommonNotificationParam& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonNotification_C", "OpenRequest");

	Params::UUICommonNotification_C_OpenRequest_Params Parms{};

	Parms.Request = Request;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonNotification.UICommonNotification_C.UpdateNextMassage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonNotification_C::UpdateNextMassage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonNotification_C", "UpdateNextMassage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonNotification.UICommonNotification_C.UpdateWait
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUICommonNotification_C::UpdateWait(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonNotification_C", "UpdateWait");

	Params::UUICommonNotification_C_UpdateWait_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonNotification.UICommonNotification_C.AddInfoRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCommonNotificationParam    Request                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UUICommonNotification_C::AddInfoRequest(const struct FCommonNotificationParam& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonNotification_C", "AddInfoRequest");

	Params::UUICommonNotification_C_AddInfoRequest_Params Parms{};

	Parms.Request = Request;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonNotification.UICommonNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUICommonNotification_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonNotification_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonNotification.UICommonNotification_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUICommonNotification_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonNotification_C", "Tick");

	Params::UUICommonNotification_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonNotification.UICommonNotification_C.ResetFromTitle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonNotification_C::ResetFromTitle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonNotification_C", "ResetFromTitle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonNotification.UICommonNotification_C.OnCompleteMainStory
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENOTICE_TYPE            NoticeType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNoticeArgs                 Args                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUICommonNotification_C::OnCompleteMainStory(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonNotification_C", "OnCompleteMainStory");

	Params::UUICommonNotification_C_OnCompleteMainStory_Params Parms{};

	Parms.NoticeType = NoticeType;
	Parms.Args = Args;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonNotification.UICommonNotification_C.ExecuteUbergraph_UICommonNotification
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUICommonNotification_C::ExecuteUbergraph_UICommonNotification(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonNotification_C", "ExecuteUbergraph_UICommonNotification");

	Params::UUICommonNotification_C_ExecuteUbergraph_UICommonNotification_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


