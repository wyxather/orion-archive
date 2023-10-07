#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass KSPartnerCharacter.KSPartnerCharacter_C
// (Actor, Pawn)

class UClass* AKSPartnerCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KSPartnerCharacter_C");

	return Clss;
}


// KSPartnerCharacter_C KSPartnerCharacter.Default__KSPartnerCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKSPartnerCharacter_C* AKSPartnerCharacter_C::GetDefaultObj()
{
	static class AKSPartnerCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKSPartnerCharacter_C*>(AKSPartnerCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KSPartnerCharacter.KSPartnerCharacter_C.SetDir
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterDir         EDir                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SetIdle                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSPartnerCharacter_C::SetDir(enum class EKSCharacterDir EDir, bool SetIdle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartnerCharacter_C", "SetDir");

	Params::AKSPartnerCharacter_C_SetDir_Params Parms{};

	Parms.EDir = EDir;
	Parms.SetIdle = SetIdle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPartnerCharacter.KSPartnerCharacter_C.IsHunterPartner
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPartnerCharacter_C::IsHunterPartner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartnerCharacter_C", "IsHunterPartner");

	Params::AKSPartnerCharacter_C_IsHunterPartner_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPartnerCharacter.KSPartnerCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AKSPartnerCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartnerCharacter_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPartnerCharacter.KSPartnerCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPartnerCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartnerCharacter_C", "ReceiveTick");

	Params::AKSPartnerCharacter_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPartnerCharacter.KSPartnerCharacter_C.ExecuteUbergraph_KSPartnerCharacter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPartnerCharacter_C::ExecuteUbergraph_KSPartnerCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartnerCharacter_C", "ExecuteUbergraph_KSPartnerCharacter");

	Params::AKSPartnerCharacter_C_ExecuteUbergraph_KSPartnerCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


