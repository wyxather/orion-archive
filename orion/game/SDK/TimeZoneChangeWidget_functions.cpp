#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass TimeZoneChangeWidget.TimeZoneChangeWidget_C
// (None)

class UClass* UTimeZoneChangeWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeZoneChangeWidget_C");

	return Clss;
}


// TimeZoneChangeWidget_C TimeZoneChangeWidget.Default__TimeZoneChangeWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTimeZoneChangeWidget_C* UTimeZoneChangeWidget_C::GetDefaultObj()
{
	static class UTimeZoneChangeWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeZoneChangeWidget_C*>(UTimeZoneChangeWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TimeZoneChangeWidget.TimeZoneChangeWidget_C.HideTemporaryInternal
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHidden                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWIDGET_TEMPORARY_HIDE_USERHideUser                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeZoneChangeWidget_C::HideTemporaryInternal(bool IsHidden, enum class EWIDGET_TEMPORARY_HIDE_USER HideUser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TimeZoneChangeWidget_C", "HideTemporaryInternal");

	Params::UTimeZoneChangeWidget_C_HideTemporaryInternal_Params Parms{};

	Parms.IsHidden = IsHidden;
	Parms.HideUser = HideUser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeZoneChangeWidget.TimeZoneChangeWidget_C.SetReference
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTimeZoneChangeWidget_C::SetReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TimeZoneChangeWidget_C", "SetReference");

	Params::UTimeZoneChangeWidget_C_SetReference_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TimeZoneChangeWidget.TimeZoneChangeWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeZoneChangeWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TimeZoneChangeWidget_C", "Tick");

	Params::UTimeZoneChangeWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeZoneChangeWidget.TimeZoneChangeWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTimeZoneChangeWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TimeZoneChangeWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TimeZoneChangeWidget.TimeZoneChangeWidget_C.RefreshLanguage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSLanguage             NewLanguage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeZoneChangeWidget_C::RefreshLanguage(enum class EKSLanguage NewLanguage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TimeZoneChangeWidget_C", "RefreshLanguage");

	Params::UTimeZoneChangeWidget_C_RefreshLanguage_Params Parms{};

	Parms.NewLanguage = NewLanguage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimeZoneChangeWidget.TimeZoneChangeWidget_C.ExecuteUbergraph_TimeZoneChangeWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimeZoneChangeWidget_C::ExecuteUbergraph_TimeZoneChangeWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TimeZoneChangeWidget_C", "ExecuteUbergraph_TimeZoneChangeWidget");

	Params::UTimeZoneChangeWidget_C_ExecuteUbergraph_TimeZoneChangeWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


