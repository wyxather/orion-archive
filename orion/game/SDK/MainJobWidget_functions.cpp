#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MainJobWidget.MainJobWidget_C
// (None)

class UClass* UMainJobWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainJobWidget_C");

	return Clss;
}


// MainJobWidget_C MainJobWidget.Default__MainJobWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainJobWidget_C* UMainJobWidget_C::GetDefaultObj()
{
	static class UMainJobWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainJobWidget_C*>(UMainJobWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainJobWidget.MainJobWidget_C.UpdateEquipJobInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectJobID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavePlayerCharacterData    PlayerData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainJobWidget_C::UpdateEquipJobInfo(int32 SelectJobID, const struct FSavePlayerCharacterData& PlayerData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainJobWidget_C", "UpdateEquipJobInfo");

	Params::UMainJobWidget_C_UpdateEquipJobInfo_Params Parms{};

	Parms.SelectJobID = SelectJobID;
	Parms.PlayerData = PlayerData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainJobWidget.MainJobWidget_C.Decide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainJobWidget_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainJobWidget_C", "Decide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainJobWidget.MainJobWidget_C.SetupText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainJobWidget_C::SetupText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainJobWidget_C", "SetupText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainJobWidget.MainJobWidget_C.OutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainJobWidget_C::OutFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainJobWidget_C", "OutFocus");

	Params::UMainJobWidget_C_OutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainJobWidget.MainJobWidget_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainJobWidget_C::Focus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainJobWidget_C", "Focus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainJobWidget.MainJobWidget_C.SetupWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavePlayerCharacterData    CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainJobWidget_C::SetupWidget(struct FSavePlayerCharacterData& CharacterData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainJobWidget_C", "SetupWidget");

	Params::UMainJobWidget_C_SetupWidget_Params Parms{};

	Parms.CharacterData = CharacterData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainJobWidget.MainJobWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainJobWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainJobWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainJobWidget.MainJobWidget_C.ExecuteUbergraph_MainJobWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainJobWidget_C::ExecuteUbergraph_MainJobWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainJobWidget_C", "ExecuteUbergraph_MainJobWidget");

	Params::UMainJobWidget_C_ExecuteUbergraph_MainJobWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


