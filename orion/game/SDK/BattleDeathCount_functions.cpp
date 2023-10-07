#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BattleDeathCount.BattleDeathCount_C
// (None)

class UClass* UBattleDeathCount_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleDeathCount_C");

	return Clss;
}


// BattleDeathCount_C BattleDeathCount.Default__BattleDeathCount_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleDeathCount_C* UBattleDeathCount_C::GetDefaultObj()
{
	static class UBattleDeathCount_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleDeathCount_C*>(UBattleDeathCount_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleDeathCount.BattleDeathCount_C.ResumeDeathCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDeathCount_C::ResumeDeathCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDeathCount_C", "ResumeDeathCount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDeathCount.BattleDeathCount_C.HideDeathCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDeathCount_C::HideDeathCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDeathCount_C", "HideDeathCount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDeathCount.BattleDeathCount_C.CallBackEndAnimationFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDeathCount_C::CallBackEndAnimationFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDeathCount_C", "CallBackEndAnimationFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDeathCount.BattleDeathCount_C.BreakDeathCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDeathCount_C::BreakDeathCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDeathCount_C", "BreakDeathCount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDeathCount.BattleDeathCount_C.ExecDoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleDeathCount_C::ExecDoom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDeathCount_C", "ExecDoom");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleDeathCount.BattleDeathCount_C.StartNormalDeathCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleDeathCount_C::StartNormalDeathCount(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDeathCount_C", "StartNormalDeathCount");

	Params::UBattleDeathCount_C_StartNormalDeathCount_Params Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDeathCount.BattleDeathCount_C.StartGalderaDeathCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ColorType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleDeathCount_C::StartGalderaDeathCount(int32 Count, int32 ColorType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDeathCount_C", "StartGalderaDeathCount");

	Params::UBattleDeathCount_C_StartGalderaDeathCount_Params Parms{};

	Parms.Count = Count;
	Parms.ColorType = ColorType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleDeathCount.BattleDeathCount_C.SetDeathCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleDeathCount_C::SetDeathCount(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleDeathCount_C", "SetDeathCount");

	Params::UBattleDeathCount_C_SetDeathCount_Params Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}

}


