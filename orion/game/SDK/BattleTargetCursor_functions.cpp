#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleTargetCursor.BattleTargetCursor_C
// (None)

class UClass* UBattleTargetCursor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleTargetCursor_C");

	return Clss;
}


// BattleTargetCursor_C BattleTargetCursor.Default__BattleTargetCursor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleTargetCursor_C* UBattleTargetCursor_C::GetDefaultObj()
{
	static class UBattleTargetCursor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleTargetCursor_C*>(UBattleTargetCursor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleTargetCursor.BattleTargetCursor_C.UpdateVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleTargetCursor_C::UpdateVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetCursor_C", "UpdateVisible");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleTargetCursor.BattleTargetCursor_C.HideCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleTargetCursor_C::HideCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetCursor_C", "HideCursor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleTargetCursor.BattleTargetCursor_C.VisibleCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleTargetCursor_C::VisibleCursor(class ABattleCharacterBaseBP_C* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleTargetCursor_C", "VisibleCursor");

	Params::UBattleTargetCursor_C_VisibleCursor_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

}

}


