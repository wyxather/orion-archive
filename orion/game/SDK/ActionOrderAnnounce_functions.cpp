#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ActionOrderAnnounce.ActionOrderAnnounce_C
// (None)

class UClass* UActionOrderAnnounce_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActionOrderAnnounce_C");

	return Clss;
}


// ActionOrderAnnounce_C ActionOrderAnnounce.Default__ActionOrderAnnounce_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActionOrderAnnounce_C* UActionOrderAnnounce_C::GetDefaultObj()
{
	static class UActionOrderAnnounce_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActionOrderAnnounce_C*>(UActionOrderAnnounce_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActionOrderAnnounce.ActionOrderAnnounce_C.PlayDebuffOutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderAnnounce_C::PlayDebuffOutFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderAnnounce_C", "PlayDebuffOutFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderAnnounce.ActionOrderAnnounce_C.PlayDebuffFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderAnnounce_C::PlayDebuffFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderAnnounce_C", "PlayDebuffFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderAnnounce.ActionOrderAnnounce_C.PlayBuffOutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderAnnounce_C::PlayBuffOutFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderAnnounce_C", "PlayBuffOutFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderAnnounce.ActionOrderAnnounce_C.PlayBuffFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionOrderAnnounce_C::PlayBuffFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderAnnounce_C", "PlayBuffFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionOrderAnnounce.ActionOrderAnnounce_C.SetCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionOrderAnnounce_C::SetCharacter(class ABattleCharacterBaseBP_C* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionOrderAnnounce_C", "SetCharacter");

	Params::UActionOrderAnnounce_C_SetCharacter_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}

}


