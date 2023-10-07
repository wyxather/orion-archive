#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenuMissionRecordGaugeSub.MainMenuMissionRecordGaugeSub_C
// (None)

class UClass* UMainMenuMissionRecordGaugeSub_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuMissionRecordGaugeSub_C");

	return Clss;
}


// MainMenuMissionRecordGaugeSub_C MainMenuMissionRecordGaugeSub.Default__MainMenuMissionRecordGaugeSub_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuMissionRecordGaugeSub_C* UMainMenuMissionRecordGaugeSub_C::GetDefaultObj()
{
	static class UMainMenuMissionRecordGaugeSub_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuMissionRecordGaugeSub_C*>(UMainMenuMissionRecordGaugeSub_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuMissionRecordGaugeSub.MainMenuMissionRecordGaugeSub_C.OutFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuMissionRecordGaugeSub_C::OutFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeSub_C", "OutFocus");

	Params::UMainMenuMissionRecordGaugeSub_C_OutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecordGaugeSub.MainMenuMissionRecordGaugeSub_C.Focus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuMissionRecordGaugeSub_C::Focus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeSub_C", "Focus");

	Params::UMainMenuMissionRecordGaugeSub_C_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuMissionRecordGaugeSub.MainMenuMissionRecordGaugeSub_C.SetupMaterial
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecordGaugeSub_C::SetupMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeSub_C", "SetupMaterial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuMissionRecordGaugeSub.MainMenuMissionRecordGaugeSub_C.SetupReference
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuMissionRecordGaugeSub_C::SetupReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuMissionRecordGaugeSub_C", "SetupReference");



	UObject::ProcessEvent(Func, nullptr);

}

}


