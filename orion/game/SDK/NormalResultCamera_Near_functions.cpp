#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass NormalResultCamera_Near.SequenceDirector_C
// (None)

class UClass* USequenceDirector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequenceDirector_C");

	return Clss;
}


// SequenceDirector_C NormalResultCamera_Near.Default__SequenceDirector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USequenceDirector_C* USequenceDirector_C::GetDefaultObj()
{
	static class USequenceDirector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USequenceDirector_C*>(USequenceDirector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NormalResultCamera_Near.SequenceDirector_C.WaitResultUIFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::WaitResultUIFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "WaitResultUIFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NormalResultCamera_Near.SequenceDirector_C.StartFade
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::StartFade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "StartFade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NormalResultCamera_Near.SequenceDirector_C.ExecResultDash
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::ExecResultDash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ExecResultDash");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NormalResultCamera_Near.SequenceDirector_C.PlayAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAction      BattleActionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::PlayAction(class ABattleCharacterBase* Character, enum class EKSCharacterAction BattleActionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "PlayAction");

	Params::USequenceDirector_C_PlayAction_Params Parms{};

	Parms.Character = Character;
	Parms.BattleActionID = BattleActionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NormalResultCamera_Near.SequenceDirector_C.OpenResultUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::OpenResultUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "OpenResultUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NormalResultCamera_Near.SequenceDirector_C.JumpToFrame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Frame                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::JumpToFrame(int32 Frame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "JumpToFrame");

	Params::USequenceDirector_C_JumpToFrame_Params Parms{};

	Parms.Frame = Frame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NormalResultCamera_Near.SequenceDirector_C.RandomJumpToFrame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Rate                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Frame                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::RandomJumpToFrame(float Rate, int32 Frame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "RandomJumpToFrame");

	Params::USequenceDirector_C_RandomJumpToFrame_Params Parms{};

	Parms.Rate = Rate;
	Parms.Frame = Frame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NormalResultCamera_Near.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


