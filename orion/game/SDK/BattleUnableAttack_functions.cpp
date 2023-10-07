#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleUnableAttack.BattleUnableAttack_C
// (None)

class UClass* UBattleUnableAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleUnableAttack_C");

	return Clss;
}


// BattleUnableAttack_C BattleUnableAttack.Default__BattleUnableAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleUnableAttack_C* UBattleUnableAttack_C::GetDefaultObj()
{
	static class UBattleUnableAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleUnableAttack_C*>(UBattleUnableAttack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleUnableAttack.BattleUnableAttack_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattleUnableAttack_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleUnableAttack_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleUnableAttack.BattleUnableAttack_C.ExecuteUbergraph_BattleUnableAttack
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleUnableAttack_C::ExecuteUbergraph_BattleUnableAttack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleUnableAttack_C", "ExecuteUbergraph_BattleUnableAttack");

	Params::UBattleUnableAttack_C_ExecuteUbergraph_BattleUnableAttack_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


