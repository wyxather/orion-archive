#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass JobDialogCh.JobDialogCh_C
// (None)

class UClass* UJobDialogCh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JobDialogCh_C");

	return Clss;
}


// JobDialogCh_C JobDialogCh.Default__JobDialogCh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJobDialogCh_C* UJobDialogCh_C::GetDefaultObj()
{
	static class UJobDialogCh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJobDialogCh_C*>(UJobDialogCh_C::StaticClass()->DefaultObject);

	return Default;
}


// Function JobDialogCh.JobDialogCh_C.Open
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobDialogCh_C::Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobDialogCh_C", "Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobDialogCh.JobDialogCh_C.PlayFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Fast                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJobDialogCh_C::PlayFocus(bool Fast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobDialogCh_C", "PlayFocus");

	Params::UJobDialogCh_C_PlayFocus_Params Parms{};

	Parms.Fast = Fast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobDialogCh.JobDialogCh_C.PlayOutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Fast                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJobDialogCh_C::PlayOutFocus(bool Fast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobDialogCh_C", "PlayOutFocus");

	Params::UJobDialogCh_C_PlayOutFocus_Params Parms{};

	Parms.Fast = Fast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobDialogCh.JobDialogCh_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobDialogCh_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobDialogCh_C", "Setup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobDialogCh.JobDialogCh_C.SetPlayerID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobDialogCh_C::SetPlayerID(int32 PlayerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobDialogCh_C", "SetPlayerID");

	Params::UJobDialogCh_C_SetPlayerID_Params Parms{};

	Parms.PlayerID = PlayerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobDialogCh.JobDialogCh_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJobDialogCh_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobDialogCh_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobDialogCh.JobDialogCh_C.ExecuteUbergraph_JobDialogCh
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobDialogCh_C::ExecuteUbergraph_JobDialogCh(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobDialogCh_C", "ExecuteUbergraph_JobDialogCh");

	Params::UJobDialogCh_C_ExecuteUbergraph_JobDialogCh_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


