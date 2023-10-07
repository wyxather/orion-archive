#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenuMissionRecordGaugeCoupling.MainMenuMissionRecordGaugeCoupling_C
// (None)

class UClass* UMainMenuMissionRecordGaugeCoupling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuMissionRecordGaugeCoupling_C");

	return Clss;
}


// MainMenuMissionRecordGaugeCoupling_C MainMenuMissionRecordGaugeCoupling.Default__MainMenuMissionRecordGaugeCoupling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuMissionRecordGaugeCoupling_C* UMainMenuMissionRecordGaugeCoupling_C::GetDefaultObj()
{
	static class UMainMenuMissionRecordGaugeCoupling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuMissionRecordGaugeCoupling_C*>(UMainMenuMissionRecordGaugeCoupling_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuMissionRecordGaugeCoupling.MainMenuMissionRecordGaugeCoupling_C.SetupReference
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecordGaugeCoupling_C::SetupReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeCoupling_C", "SetupReference");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecordGaugeCoupling.MainMenuMissionRecordGaugeCoupling_C.SetupMaterial
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecordGaugeCoupling_C::SetupMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeCoupling_C", "SetupMaterial");



	UObject::ProcessEvent(Func, nullptr);

}

}


