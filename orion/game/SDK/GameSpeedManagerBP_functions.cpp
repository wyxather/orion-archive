#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass GameSpeedManagerBP.GameSpeedManagerBP_C
// (Actor)

class UClass* AGameSpeedManagerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSpeedManagerBP_C");

	return Clss;
}


// GameSpeedManagerBP_C GameSpeedManagerBP.Default__GameSpeedManagerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGameSpeedManagerBP_C* AGameSpeedManagerBP_C::GetDefaultObj()
{
	static class AGameSpeedManagerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGameSpeedManagerBP_C*>(AGameSpeedManagerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GameSpeedManagerBP.GameSpeedManagerBP_C.EventSpeedUp
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameSpeedManagerBP_C::EventSpeedUp(class UObject* WorldContextObject, bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GameSpeedManagerBP_C", "EventSpeedUp");

	Params::AGameSpeedManagerBP_C_EventSpeedUp_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameSpeedManagerBP.GameSpeedManagerBP_C.BattleSpeedUp
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameSpeedManagerBP_C::BattleSpeedUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GameSpeedManagerBP_C", "BattleSpeedUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameSpeedManagerBP.GameSpeedManagerBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameSpeedManagerBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GameSpeedManagerBP_C", "ReceiveTick");

	Params::AGameSpeedManagerBP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameSpeedManagerBP.GameSpeedManagerBP_C.OnBeginPlay
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameSpeedManagerBP_C::OnBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GameSpeedManagerBP_C", "OnBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameSpeedManagerBP.GameSpeedManagerBP_C.ExecuteUbergraph_GameSpeedManagerBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameSpeedManagerBP_C::ExecuteUbergraph_GameSpeedManagerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GameSpeedManagerBP_C", "ExecuteUbergraph_GameSpeedManagerBP");

	Params::AGameSpeedManagerBP_C_ExecuteUbergraph_GameSpeedManagerBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


