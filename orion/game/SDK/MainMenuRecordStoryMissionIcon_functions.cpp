#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenuRecordStoryMissionIcon.MainMenuRecordStoryMissionIcon_C
// (None)

class UClass* UMainMenuRecordStoryMissionIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuRecordStoryMissionIcon_C");

	return Clss;
}


// MainMenuRecordStoryMissionIcon_C MainMenuRecordStoryMissionIcon.Default__MainMenuRecordStoryMissionIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuRecordStoryMissionIcon_C* UMainMenuRecordStoryMissionIcon_C::GetDefaultObj()
{
	static class UMainMenuRecordStoryMissionIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuRecordStoryMissionIcon_C*>(UMainMenuRecordStoryMissionIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuRecordStoryMissionIcon.MainMenuRecordStoryMissionIcon_C.Set
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuRecordStoryMissionIcon_C::Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuRecordStoryMissionIcon_C", "Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuRecordStoryMissionIcon.MainMenuRecordStoryMissionIcon_C.PlayOutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuRecordStoryMissionIcon_C::PlayOutFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuRecordStoryMissionIcon_C", "PlayOutFocus");

	Params::UMainMenuRecordStoryMissionIcon_C_PlayOutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuRecordStoryMissionIcon.MainMenuRecordStoryMissionIcon_C.PlayFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuRecordStoryMissionIcon_C::PlayFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuRecordStoryMissionIcon_C", "PlayFocus");

	Params::UMainMenuRecordStoryMissionIcon_C_PlayFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuRecordStoryMissionIcon.MainMenuRecordStoryMissionIcon_C.SetEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuRecordStoryMissionIcon_C::SetEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuRecordStoryMissionIcon_C", "SetEnable");

	Params::UMainMenuRecordStoryMissionIcon_C_SetEnable_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuRecordStoryMissionIcon.MainMenuRecordStoryMissionIcon_C.SetTexutre
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMISSIONRECORD_TYPE     Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuRecordStoryMissionIcon_C::SetTexutre(enum class EMISSIONRECORD_TYPE Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuRecordStoryMissionIcon_C", "SetTexutre");

	Params::UMainMenuRecordStoryMissionIcon_C_SetTexutre_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuRecordStoryMissionIcon.MainMenuRecordStoryMissionIcon_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuRecordStoryMissionIcon_C::NewEventDispatcher_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuRecordStoryMissionIcon_C", "NewEventDispatcher_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


