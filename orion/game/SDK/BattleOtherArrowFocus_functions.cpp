#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleOtherArrowFocus.BattleOtherArrowFocus_C
// (None)

class UClass* UBattleOtherArrowFocus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleOtherArrowFocus_C");

	return Clss;
}


// BattleOtherArrowFocus_C BattleOtherArrowFocus.Default__BattleOtherArrowFocus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleOtherArrowFocus_C* UBattleOtherArrowFocus_C::GetDefaultObj()
{
	static class UBattleOtherArrowFocus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleOtherArrowFocus_C*>(UBattleOtherArrowFocus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleOtherArrowFocus.BattleOtherArrowFocus_C.UpdateVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleOtherArrowFocus_C::UpdateVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleOtherArrowFocus_C", "UpdateVisible");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleOtherArrowFocus.BattleOtherArrowFocus_C.HideCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleOtherArrowFocus_C::HideCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleOtherArrowFocus_C", "HideCursor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleOtherArrowFocus.BattleOtherArrowFocus_C.VisibleCursor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleOtherArrowFocus_C::VisibleCursor(class ABattleCharacterBaseBP_C* TargetCharacter, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleOtherArrowFocus_C", "VisibleCursor");

	Params::UBattleOtherArrowFocus_C_VisibleCursor_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}

}


