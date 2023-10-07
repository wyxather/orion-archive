#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPC_StoryManager.BPC_StoryManager_C
// (Actor)

class UClass* ABPC_StoryManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPC_StoryManager_C");

	return Clss;
}


// BPC_StoryManager_C BPC_StoryManager.Default__BPC_StoryManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPC_StoryManager_C* ABPC_StoryManager_C::GetDefaultObj()
{
	static class ABPC_StoryManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPC_StoryManager_C*>(ABPC_StoryManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPC_StoryManager.BPC_StoryManager_C.OnClosedSubStoryResultDialog
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_StoryManager_C::OnClosedSubStoryResultDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_StoryManager_C", "OnClosedSubStoryResultDialog");

	Params::ABPC_StoryManager_C_OnClosedSubStoryResultDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_StoryManager.BPC_StoryManager_C.PushSubStoryNotification
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_StoryManager_C::PushSubStoryNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_StoryManager_C", "PushSubStoryNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_StoryManager.BPC_StoryManager_C.Debug_StartAutoPlay
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ScenarioFileName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABPC_StoryManager_C::Debug_StartAutoPlay(const class FString& ScenarioFileName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_StoryManager_C", "Debug_StartAutoPlay");

	Params::ABPC_StoryManager_C_Debug_StartAutoPlay_Params Parms{};

	Parms.ScenarioFileName = ScenarioFileName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_StoryManager.BPC_StoryManager_C.CompleteFakeSubStory
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SubStoryLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABPC_StoryManager_C::CompleteFakeSubStory(class FName SubStoryLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_StoryManager_C", "CompleteFakeSubStory");

	Params::ABPC_StoryManager_C_CompleteFakeSubStory_Params Parms{};

	Parms.SubStoryLabel = SubStoryLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPC_StoryManager.BPC_StoryManager_C.OnFinishSubStoryCompleteEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_StoryManager_C::OnFinishSubStoryCompleteEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_StoryManager_C", "OnFinishSubStoryCompleteEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_StoryManager.BPC_StoryManager_C.OnFinishSubStoryStartEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_StoryManager_C::OnFinishSubStoryStartEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_StoryManager_C", "OnFinishSubStoryStartEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_StoryManager.BPC_StoryManager_C.ShowSubStoryResult
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_StoryManager_C::ShowSubStoryResult()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_StoryManager_C", "ShowSubStoryResult");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_StoryManager.BPC_StoryManager_C.Temp_SubStoryResult
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SubStoryLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_StoryManager_C::Temp_SubStoryResult(class FName SubStoryLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_StoryManager_C", "Temp_SubStoryResult");

	Params::ABPC_StoryManager_C_Temp_SubStoryResult_Params Parms{};

	Parms.SubStoryLabel = SubStoryLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_StoryManager.BPC_StoryManager_C.ShowSubStoryStartUI
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPC_StoryManager_C::ShowSubStoryStartUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_StoryManager_C", "ShowSubStoryStartUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_StoryManager.BPC_StoryManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_StoryManager_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_StoryManager_C", "ReceiveTick");

	Params::ABPC_StoryManager_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_StoryManager.BPC_StoryManager_C.ExecuteUbergraph_BPC_StoryManager
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_StoryManager_C::ExecuteUbergraph_BPC_StoryManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BPC_StoryManager_C", "ExecuteUbergraph_BPC_StoryManager");

	Params::ABPC_StoryManager_C_ExecuteUbergraph_BPC_StoryManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


