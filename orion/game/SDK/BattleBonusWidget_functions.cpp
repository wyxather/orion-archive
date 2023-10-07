#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleBonusWidget.BattleBonusWidget_C
// (None)

class UClass* UBattleBonusWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleBonusWidget_C");

	return Clss;
}


// BattleBonusWidget_C BattleBonusWidget.Default__BattleBonusWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleBonusWidget_C* UBattleBonusWidget_C::GetDefaultObj()
{
	static class UBattleBonusWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleBonusWidget_C*>(UBattleBonusWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleBonusWidget.BattleBonusWidget_C.SetExpBonusType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               BreakBonus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               OverKillBonus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleBonusWidget_C::SetExpBonusType(bool BreakBonus, bool OverKillBonus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleBonusWidget_C", "SetExpBonusType");

	Params::UBattleBonusWidget_C_SetExpBonusType_Params Parms{};

	Parms.BreakBonus = BreakBonus;
	Parms.OverKillBonus = OverKillBonus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleBonusWidget.BattleBonusWidget_C.PlayBonusIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleBonusWidget_C::PlayBonusIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleBonusWidget_C", "PlayBonusIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleBonusWidget.BattleBonusWidget_C.SetBattleBonusType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLERESULT_BONUS_TYPEBonusType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleBonusWidget_C::SetBattleBonusType(enum class EBATTLERESULT_BONUS_TYPE BonusType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleBonusWidget_C", "SetBattleBonusType");

	Params::UBattleBonusWidget_C_SetBattleBonusType_Params Parms{};

	Parms.BonusType = BonusType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleBonusWidget.BattleBonusWidget_C.SetLanguege
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleBonusWidget_C::SetLanguege()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleBonusWidget_C", "SetLanguege");



	UObject::ProcessEvent(Func, nullptr);

}

}


