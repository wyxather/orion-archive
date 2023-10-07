#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenuMissionRecordGaugeMain.MainMenuMissionRecordGaugeMain_C
// (None)

class UClass* UMainMenuMissionRecordGaugeMain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuMissionRecordGaugeMain_C");

	return Clss;
}


// MainMenuMissionRecordGaugeMain_C MainMenuMissionRecordGaugeMain.Default__MainMenuMissionRecordGaugeMain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuMissionRecordGaugeMain_C* UMainMenuMissionRecordGaugeMain_C::GetDefaultObj()
{
	static class UMainMenuMissionRecordGaugeMain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuMissionRecordGaugeMain_C*>(UMainMenuMissionRecordGaugeMain_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuMissionRecordGaugeMain.MainMenuMissionRecordGaugeMain_C.SetupMaterial
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecordGaugeMain_C::SetupMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeMain_C", "SetupMaterial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecordGaugeMain.MainMenuMissionRecordGaugeMain_C.SetupReference
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecordGaugeMain_C::SetupReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeMain_C", "SetupReference");



	UObject::ProcessEvent(Func, nullptr);

}

}


