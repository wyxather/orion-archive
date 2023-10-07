#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenuMissionRecordGaugeExtra.MainMenuMissionRecordGaugeExtra_C
// (None)

class UClass* UMainMenuMissionRecordGaugeExtra_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuMissionRecordGaugeExtra_C");

	return Clss;
}


// MainMenuMissionRecordGaugeExtra_C MainMenuMissionRecordGaugeExtra.Default__MainMenuMissionRecordGaugeExtra_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuMissionRecordGaugeExtra_C* UMainMenuMissionRecordGaugeExtra_C::GetDefaultObj()
{
	static class UMainMenuMissionRecordGaugeExtra_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuMissionRecordGaugeExtra_C*>(UMainMenuMissionRecordGaugeExtra_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuMissionRecordGaugeExtra.MainMenuMissionRecordGaugeExtra_C.SetupReference
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecordGaugeExtra_C::SetupReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeExtra_C", "SetupReference");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecordGaugeExtra.MainMenuMissionRecordGaugeExtra_C.SetupMaterial
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecordGaugeExtra_C::SetupMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeExtra_C", "SetupMaterial");



	UObject::ProcessEvent(Func, nullptr);

}

}


