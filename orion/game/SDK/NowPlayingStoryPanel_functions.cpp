#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass NowPlayingStoryPanel.NowPlayingStoryPanel_C
// (None)

class UClass* UNowPlayingStoryPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NowPlayingStoryPanel_C");

	return Clss;
}


// NowPlayingStoryPanel_C NowPlayingStoryPanel.Default__NowPlayingStoryPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNowPlayingStoryPanel_C* UNowPlayingStoryPanel_C::GetDefaultObj()
{
	static class UNowPlayingStoryPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNowPlayingStoryPanel_C*>(UNowPlayingStoryPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NowPlayingStoryPanel.NowPlayingStoryPanel_C.IsPlayingAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               IsPlaying                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNowPlayingStoryPanel_C::IsPlayingAnim(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NowPlayingStoryPanel_C", "IsPlayingAnim");

	Params::UNowPlayingStoryPanel_C_IsPlayingAnim_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;

}


// Function NowPlayingStoryPanel.NowPlayingStoryPanel_C.IsUIPartsRunning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               IsRunning                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNowPlayingStoryPanel_C::IsUIPartsRunning(bool* IsRunning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NowPlayingStoryPanel_C", "IsUIPartsRunning");

	Params::UNowPlayingStoryPanel_C_IsUIPartsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsRunning != nullptr)
		*IsRunning = Parms.IsRunning;

}


// Function NowPlayingStoryPanel.NowPlayingStoryPanel_C.SetupText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNowPlayingStoryPanel_C::SetupText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NowPlayingStoryPanel_C", "SetupText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NowPlayingStoryPanel.NowPlayingStoryPanel_C.SetPlayingStory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNowPlayingStoryPanel_C::SetPlayingStory(int32 CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NowPlayingStoryPanel_C", "SetPlayingStory");

	Params::UNowPlayingStoryPanel_C_SetPlayingStory_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NowPlayingStoryPanel.NowPlayingStoryPanel_C.InitWidgetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNowPlayingStoryPanel_C::InitWidgetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NowPlayingStoryPanel_C", "InitWidgetData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NowPlayingStoryPanel.NowPlayingStoryPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNowPlayingStoryPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NowPlayingStoryPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NowPlayingStoryPanel.NowPlayingStoryPanel_C.OpenWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNowPlayingStoryPanel_C::OpenWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NowPlayingStoryPanel_C", "OpenWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NowPlayingStoryPanel.NowPlayingStoryPanel_C.CloseWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNowPlayingStoryPanel_C::CloseWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NowPlayingStoryPanel_C", "CloseWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NowPlayingStoryPanel.NowPlayingStoryPanel_C.ExecuteUbergraph_NowPlayingStoryPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNowPlayingStoryPanel_C::ExecuteUbergraph_NowPlayingStoryPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("NowPlayingStoryPanel_C", "ExecuteUbergraph_NowPlayingStoryPanel");

	Params::UNowPlayingStoryPanel_C_ExecuteUbergraph_NowPlayingStoryPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


