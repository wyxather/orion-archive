#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleWindowEffect.BattleWindowEffect_C
// (None)

class UClass* UBattleWindowEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleWindowEffect_C");

	return Clss;
}


// BattleWindowEffect_C BattleWindowEffect.Default__BattleWindowEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleWindowEffect_C* UBattleWindowEffect_C::GetDefaultObj()
{
	static class UBattleWindowEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleWindowEffect_C*>(UBattleWindowEffect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleWindowEffect.BattleWindowEffect_C.StartMagicUpFieldEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWindowEffect_C::StartMagicUpFieldEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWindowEffect_C", "StartMagicUpFieldEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWindowEffect.BattleWindowEffect_C.StartEvasionUpFieldEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWindowEffect_C::StartEvasionUpFieldEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWindowEffect_C", "StartEvasionUpFieldEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWindowEffect.BattleWindowEffect_C.StartHPMaxPoisonEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWindowEffect_C::StartHPMaxPoisonEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWindowEffect_C", "StartHPMaxPoisonEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWindowEffect.BattleWindowEffect_C.StartDisableMagicMenuEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWindowEffect_C::StartDisableMagicMenuEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWindowEffect_C", "StartDisableMagicMenuEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWindowEffect.BattleWindowEffect_C.CallbackFinishWindowEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWindowEffect_C::CallbackFinishWindowEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWindowEffect_C", "CallbackFinishWindowEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWindowEffect.BattleWindowEffect_C.StartFatalPoisonEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWindowEffect_C::StartFatalPoisonEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWindowEffect_C", "StartFatalPoisonEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleWindowEffect.BattleWindowEffect_C.FinishWindowEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleWindowEffect_C::FinishWindowEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleWindowEffect_C", "FinishWindowEffect");



	UObject::ProcessEvent(Func, nullptr);

}

}


