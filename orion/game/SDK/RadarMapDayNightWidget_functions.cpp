#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass RadarMapDayNightWidget.RadarMapDayNightWidget_C
// (None)

class UClass* URadarMapDayNightWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadarMapDayNightWidget_C");

	return Clss;
}


// RadarMapDayNightWidget_C RadarMapDayNightWidget.Default__RadarMapDayNightWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URadarMapDayNightWidget_C* URadarMapDayNightWidget_C::GetDefaultObj()
{
	static class URadarMapDayNightWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URadarMapDayNightWidget_C*>(URadarMapDayNightWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RadarMapDayNightWidget.RadarMapDayNightWidget_C.InitWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadarMapDayNightWidget_C::InitWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMapDayNightWidget_C", "InitWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMapDayNightWidget.RadarMapDayNightWidget_C.OnStartTimeZoneChange
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENOTICE_TYPE            NoticeType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNoticeArgs                 Args                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URadarMapDayNightWidget_C::OnStartTimeZoneChange(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMapDayNightWidget_C", "OnStartTimeZoneChange");

	Params::URadarMapDayNightWidget_C_OnStartTimeZoneChange_Params Parms{};

	Parms.NoticeType = NoticeType;
	Parms.Args = Args;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadarMapDayNightWidget.RadarMapDayNightWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URadarMapDayNightWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMapDayNightWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadarMapDayNightWidget.RadarMapDayNightWidget_C.ExecuteUbergraph_RadarMapDayNightWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadarMapDayNightWidget_C::ExecuteUbergraph_RadarMapDayNightWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMapDayNightWidget_C", "ExecuteUbergraph_RadarMapDayNightWidget");

	Params::URadarMapDayNightWidget_C_ExecuteUbergraph_RadarMapDayNightWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


