#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MapDangerWidget.MapDangerWidget_C
// (None)

class UClass* UMapDangerWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapDangerWidget_C");

	return Clss;
}


// MapDangerWidget_C MapDangerWidget.Default__MapDangerWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMapDangerWidget_C* UMapDangerWidget_C::GetDefaultObj()
{
	static class UMapDangerWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapDangerWidget_C*>(UMapDangerWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MapDangerWidget.MapDangerWidget_C.StopDangerAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMapDangerWidget_C::StopDangerAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MapDangerWidget_C", "StopDangerAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapDangerWidget.MapDangerWidget_C.CloseDangerPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDelay                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapDangerWidget_C::CloseDangerPoint(bool IsDelay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MapDangerWidget_C", "CloseDangerPoint");

	Params::UMapDangerWidget_C_CloseDangerPoint_Params Parms{};

	Parms.IsDelay = IsDelay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapDangerWidget.MapDangerWidget_C.OpenDangerPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DangerCount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DangerLv                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsKeep                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapDangerWidget_C::OpenDangerPoint(int32 DangerCount, int32 DangerLv, bool IsKeep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MapDangerWidget_C", "OpenDangerPoint");

	Params::UMapDangerWidget_C_OpenDangerPoint_Params Parms{};

	Parms.DangerCount = DangerCount;
	Parms.DangerLv = DangerLv;
	Parms.IsKeep = IsKeep;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapDangerWidget.MapDangerWidget_C.InitDangerPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMapDangerWidget_C::InitDangerPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MapDangerWidget_C", "InitDangerPoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapDangerWidget.MapDangerWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMapDangerWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MapDangerWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapDangerWidget.MapDangerWidget_C.ExecuteUbergraph_MapDangerWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapDangerWidget_C::ExecuteUbergraph_MapDangerWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MapDangerWidget_C", "ExecuteUbergraph_MapDangerWidget");

	Params::UMapDangerWidget_C_ExecuteUbergraph_MapDangerWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


