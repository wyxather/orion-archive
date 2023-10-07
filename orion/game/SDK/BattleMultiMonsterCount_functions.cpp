#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleMultiMonsterCount.BattleMultiMonsterCount_C
// (None)

class UClass* UBattleMultiMonsterCount_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleMultiMonsterCount_C");

	return Clss;
}


// BattleMultiMonsterCount_C BattleMultiMonsterCount.Default__BattleMultiMonsterCount_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleMultiMonsterCount_C* UBattleMultiMonsterCount_C::GetDefaultObj()
{
	static class UBattleMultiMonsterCount_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleMultiMonsterCount_C*>(UBattleMultiMonsterCount_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleMultiMonsterCount.BattleMultiMonsterCount_C.SetLanguage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleMultiMonsterCount_C::SetLanguage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleMultiMonsterCount_C", "SetLanguage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleMultiMonsterCount.BattleMultiMonsterCount_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleMultiMonsterCount_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleMultiMonsterCount_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleMultiMonsterCount.BattleMultiMonsterCount_C.Open
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleMultiMonsterCount_C::Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleMultiMonsterCount_C", "Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleMultiMonsterCount.BattleMultiMonsterCount_C.SetupText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleMultiMonsterCount_C::SetupText(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleMultiMonsterCount_C", "SetupText");

	Params::UBattleMultiMonsterCount_C_SetupText_Params Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleMultiMonsterCount.BattleMultiMonsterCount_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattleMultiMonsterCount_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleMultiMonsterCount_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleMultiMonsterCount.BattleMultiMonsterCount_C.ExecuteUbergraph_BattleMultiMonsterCount
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleMultiMonsterCount_C::ExecuteUbergraph_BattleMultiMonsterCount(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleMultiMonsterCount_C", "ExecuteUbergraph_BattleMultiMonsterCount");

	Params::UBattleMultiMonsterCount_C_ExecuteUbergraph_BattleMultiMonsterCount_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


