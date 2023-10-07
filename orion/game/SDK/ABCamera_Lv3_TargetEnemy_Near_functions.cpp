#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass ABCamera_Lv3_TargetEnemy_Near.SequenceDirector_C
// (None)

class UClass* USequenceDirector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequenceDirector_C");

	return Clss;
}


// SequenceDirector_C ABCamera_Lv3_TargetEnemy_Near.Default__SequenceDirector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USequenceDirector_C* USequenceDirector_C::GetDefaultObj()
{
	static class USequenceDirector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USequenceDirector_C*>(USequenceDirector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABCamera_Lv3_TargetEnemy_Near.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABCamera_Lv3_TargetEnemy_Near.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABCamera_Lv3_TargetEnemy_Near.SequenceDirector_C.PlayVibration
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        VibrationID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVibrationPower         Power                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::PlayVibration(class FName VibrationID, enum class EVibrationPower Power)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "PlayVibration");

	Params::USequenceDirector_C_PlayVibration_Params Parms{};

	Parms.VibrationID = VibrationID;
	Parms.Power = Power;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABCamera_Lv3_TargetEnemy_Near.SequenceDirector_C.PlaySE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SEID                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::PlaySE(class FName SEID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "PlaySE");

	Params::USequenceDirector_C_PlaySE_Params Parms{};

	Parms.SEID = SEID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABCamera_Lv3_TargetEnemy_Near.SequenceDirector_C.RemoveBoostEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::RemoveBoostEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "RemoveBoostEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABCamera_Lv3_TargetEnemy_Near.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
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


