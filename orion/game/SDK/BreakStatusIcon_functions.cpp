#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BreakStatusIcon.BreakStatusIcon_C
// (None)

class UClass* UBreakStatusIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BreakStatusIcon_C");

	return Clss;
}


// BreakStatusIcon_C BreakStatusIcon.Default__BreakStatusIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBreakStatusIcon_C* UBreakStatusIcon_C::GetDefaultObj()
{
	static class UBreakStatusIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBreakStatusIcon_C*>(UBreakStatusIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BreakStatusIcon.BreakStatusIcon_C.PlayShieldChange_Down
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBreakStatusIcon_C::PlayShieldChange_Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BreakStatusIcon_C", "PlayShieldChange_Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BreakStatusIcon.BreakStatusIcon_C.PlayShieldChange_UP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBreakStatusIcon_C::PlayShieldChange_UP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BreakStatusIcon_C", "PlayShieldChange_UP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BreakStatusIcon.BreakStatusIcon_C.ResumeBreak
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBreakStatusIcon_C::ResumeBreak()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BreakStatusIcon_C", "ResumeBreak");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BreakStatusIcon.BreakStatusIcon_C.PlayBreakLoop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBreakStatusIcon_C::PlayBreakLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BreakStatusIcon_C", "PlayBreakLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BreakStatusIcon.BreakStatusIcon_C.GetSheldPoint
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UBreakStatusIcon_C::GetSheldPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BreakStatusIcon_C", "GetSheldPoint");

	Params::UBreakStatusIcon_C_GetSheldPoint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BreakStatusIcon.BreakStatusIcon_C.SetupCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleEnemyBP_C*            Enemy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBreakStatusIcon_C::SetupCharacter(class ABattleEnemyBP_C* Enemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BreakStatusIcon_C", "SetupCharacter");

	Params::UBreakStatusIcon_C_SetupCharacter_Params Parms{};

	Parms.Enemy = Enemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BreakStatusIcon.BreakStatusIcon_C.PlayBreak
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBreakStatusIcon_C::PlayBreak()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BreakStatusIcon_C", "PlayBreak");



	UObject::ProcessEvent(Func, nullptr);

}

}


