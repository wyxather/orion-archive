#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass DialogPartInterface.DialogPartInterface_C
// (None)

class UClass* IDialogPartInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogPartInterface_C");

	return Clss;
}


// DialogPartInterface_C DialogPartInterface.Default__DialogPartInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IDialogPartInterface_C* IDialogPartInterface_C::GetDefaultObj()
{
	static class IDialogPartInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IDialogPartInterface_C*>(IDialogPartInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DialogPartInterface.DialogPartInterface_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IDialogPartInterface_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DialogPartInterface_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DialogPartInterface.DialogPartInterface_C.SetPlayerID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IDialogPartInterface_C::SetPlayerID(int32 PlayerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DialogPartInterface_C", "SetPlayerID");

	Params::IDialogPartInterface_C_SetPlayerID_Params Parms{};

	Parms.PlayerID = PlayerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DialogPartInterface.DialogPartInterface_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IDialogPartInterface_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DialogPartInterface_C", "Setup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DialogPartInterface.DialogPartInterface_C.PlayOutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Fast                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IDialogPartInterface_C::PlayOutFocus(bool Fast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DialogPartInterface_C", "PlayOutFocus");

	Params::IDialogPartInterface_C_PlayOutFocus_Params Parms{};

	Parms.Fast = Fast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DialogPartInterface.DialogPartInterface_C.PlayFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Fast                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IDialogPartInterface_C::PlayFocus(bool Fast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("DialogPartInterface_C", "PlayFocus");

	Params::IDialogPartInterface_C_PlayFocus_Params Parms{};

	Parms.Fast = Fast;

	UObject::ProcessEvent(Func, &Parms);

}

}


