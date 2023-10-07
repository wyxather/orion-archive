#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MapNameNotificationWidget.MapNameNotificationWidget_C
// (None)

class UClass* UMapNameNotificationWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapNameNotificationWidget_C");

	return Clss;
}


// MapNameNotificationWidget_C MapNameNotificationWidget.Default__MapNameNotificationWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMapNameNotificationWidget_C* UMapNameNotificationWidget_C::GetDefaultObj()
{
	static class UMapNameNotificationWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapNameNotificationWidget_C*>(UMapNameNotificationWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MapNameNotificationWidget.MapNameNotificationWidget_C.IsSuccessCloseRequest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapNameNotificationWidget_C::IsSuccessCloseRequest(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MapNameNotificationWidget_C", "IsSuccessCloseRequest");

	Params::UMapNameNotificationWidget_C_IsSuccessCloseRequest_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function MapNameNotificationWidget.MapNameNotificationWidget_C.OnResetHiddenFlag
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMapNameNotificationWidget_C::OnResetHiddenFlag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MapNameNotificationWidget_C", "OnResetHiddenFlag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapNameNotificationWidget.MapNameNotificationWidget_C.PlayOpenAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsKeep                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapNameNotificationWidget_C::PlayOpenAnim(bool IsKeep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MapNameNotificationWidget_C", "PlayOpenAnim");

	Params::UMapNameNotificationWidget_C_PlayOpenAnim_Params Parms{};

	Parms.IsKeep = IsKeep;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapNameNotificationWidget.MapNameNotificationWidget_C.HideTemporaryInternal
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHidden                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWIDGET_TEMPORARY_HIDE_USERHideUser                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapNameNotificationWidget_C::HideTemporaryInternal(bool IsHidden, enum class EWIDGET_TEMPORARY_HIDE_USER HideUser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MapNameNotificationWidget_C", "HideTemporaryInternal");

	Params::UMapNameNotificationWidget_C_HideTemporaryInternal_Params Parms{};

	Parms.IsHidden = IsHidden;
	Parms.HideUser = HideUser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapNameNotificationWidget.MapNameNotificationWidget_C.OpenEventAreaUI
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RegionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MapName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    EmblemTexture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMapNameNotificationWidget_C::OpenEventAreaUI(class FName RegionName, class FName MapName, class UTexture* EmblemTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MapNameNotificationWidget_C", "OpenEventAreaUI");

	Params::UMapNameNotificationWidget_C_OpenEventAreaUI_Params Parms{};

	Parms.RegionName = RegionName;
	Parms.MapName = MapName;
	Parms.EmblemTexture = EmblemTexture;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapNameNotificationWidget.MapNameNotificationWidget_C.ResetNotification
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMapNameNotificationWidget_C::ResetNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MapNameNotificationWidget_C", "ResetNotification");

	Params::UMapNameNotificationWidget_C_ResetNotification_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapNameNotificationWidget.MapNameNotificationWidget_C.CloseAreaUIDelay
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMapNameNotificationWidget_C::CloseAreaUIDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MapNameNotificationWidget_C", "CloseAreaUIDelay");

	Params::UMapNameNotificationWidget_C_CloseAreaUIDelay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapNameNotificationWidget.MapNameNotificationWidget_C.CloseAreaUI
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMapNameNotificationWidget_C::CloseAreaUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MapNameNotificationWidget_C", "CloseAreaUI");

	Params::UMapNameNotificationWidget_C_CloseAreaUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapNameNotificationWidget.MapNameNotificationWidget_C.OpenAreaUI
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RegionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MapName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EncounterLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DangerLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsOpenKeep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                    EmblemTexture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NotificationFormat                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMapNameNotificationWidget_C::OpenAreaUI(class FName RegionName, class FName MapName, int32 EncounterLevel, int32 DangerLevel, bool IsOpenKeep, class UTexture* EmblemTexture, class FName NotificationFormat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MapNameNotificationWidget_C", "OpenAreaUI");

	Params::UMapNameNotificationWidget_C_OpenAreaUI_Params Parms{};

	Parms.RegionName = RegionName;
	Parms.MapName = MapName;
	Parms.EncounterLevel = EncounterLevel;
	Parms.DangerLevel = DangerLevel;
	Parms.IsOpenKeep = IsOpenKeep;
	Parms.EmblemTexture = EmblemTexture;
	Parms.NotificationFormat = NotificationFormat;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapNameNotificationWidget.MapNameNotificationWidget_C.SetLevelChangeVisible
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMapNameNotificationWidget_C::SetLevelChangeVisible(enum class ESlateVisibility IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MapNameNotificationWidget_C", "SetLevelChangeVisible");

	Params::UMapNameNotificationWidget_C_SetLevelChangeVisible_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapNameNotificationWidget.MapNameNotificationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMapNameNotificationWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MapNameNotificationWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapNameNotificationWidget.MapNameNotificationWidget_C.WidgetAnimationEvt_AreaNameOpen_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void UMapNameNotificationWidget_C::WidgetAnimationEvt_AreaNameOpen_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MapNameNotificationWidget_C", "WidgetAnimationEvt_AreaNameOpen_K2Node_WidgetAnimationEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapNameNotificationWidget.MapNameNotificationWidget_C.WidgetAnimationEvt_AreaNameOpenKeep_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)
// Parameters:

void UMapNameNotificationWidget_C::WidgetAnimationEvt_AreaNameOpenKeep_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MapNameNotificationWidget_C", "WidgetAnimationEvt_AreaNameOpenKeep_K2Node_WidgetAnimationEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapNameNotificationWidget.MapNameNotificationWidget_C.WidgetAnimationEvt_AreaNameCloseDelay_K2Node_WidgetAnimationEvent_3
// (BlueprintEvent)
// Parameters:

void UMapNameNotificationWidget_C::WidgetAnimationEvt_AreaNameCloseDelay_K2Node_WidgetAnimationEvent_3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MapNameNotificationWidget_C", "WidgetAnimationEvt_AreaNameCloseDelay_K2Node_WidgetAnimationEvent_3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapNameNotificationWidget.MapNameNotificationWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapNameNotificationWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MapNameNotificationWidget_C", "Tick");

	Params::UMapNameNotificationWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapNameNotificationWidget.MapNameNotificationWidget_C.WidgetAnimationEvt_AreaNameClose2_K2Node_WidgetAnimationEvent_2
// (BlueprintEvent)
// Parameters:

void UMapNameNotificationWidget_C::WidgetAnimationEvt_AreaNameClose2_K2Node_WidgetAnimationEvent_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MapNameNotificationWidget_C", "WidgetAnimationEvt_AreaNameClose2_K2Node_WidgetAnimationEvent_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapNameNotificationWidget.MapNameNotificationWidget_C.ExecuteUbergraph_MapNameNotificationWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapNameNotificationWidget_C::ExecuteUbergraph_MapNameNotificationWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MapNameNotificationWidget_C", "ExecuteUbergraph_MapNameNotificationWidget");

	Params::UMapNameNotificationWidget_C_ExecuteUbergraph_MapNameNotificationWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


