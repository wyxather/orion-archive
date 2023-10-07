#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass RadarMapRippleWidgets.RadarMapRippleWidgets_C
// (None)

class UClass* URadarMapRippleWidgets_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadarMapRippleWidgets_C");

	return Clss;
}


// RadarMapRippleWidgets_C RadarMapRippleWidgets.Default__RadarMapRippleWidgets_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URadarMapRippleWidgets_C* URadarMapRippleWidgets_C::GetDefaultObj()
{
	static class URadarMapRippleWidgets_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URadarMapRippleWidgets_C*>(URadarMapRippleWidgets_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RadarMapRippleWidgets.RadarMapRippleWidgets_C.SetRippleColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameColor              NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadarMapRippleWidgets_C::SetRippleColor(enum class EGameColor NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMapRippleWidgets_C", "SetRippleColor");

	Params::URadarMapRippleWidgets_C_SetRippleColor_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadarMapRippleWidgets.RadarMapRippleWidgets_C.SetMainScenario
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URadarMapRippleWidgets_C::SetMainScenario(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("RadarMapRippleWidgets_C", "SetMainScenario");

	Params::URadarMapRippleWidgets_C_SetMainScenario_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}

}


