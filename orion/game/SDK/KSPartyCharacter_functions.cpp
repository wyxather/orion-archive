#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass KSPartyCharacter.KSPartyCharacter_C
// (Actor, Pawn)

class UClass* AKSPartyCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KSPartyCharacter_C");

	return Clss;
}


// KSPartyCharacter_C KSPartyCharacter.Default__KSPartyCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKSPartyCharacter_C* AKSPartyCharacter_C::GetDefaultObj()
{
	static class AKSPartyCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKSPartyCharacter_C*>(AKSPartyCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KSPartyCharacter.KSPartyCharacter_C.IsFollowNpcCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPartyCharacter_C::IsFollowNpcCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartyCharacter_C", "IsFollowNpcCharacter");

	Params::AKSPartyCharacter_C_IsFollowNpcCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPartyCharacter.KSPartyCharacter_C.IsPartyCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPartyCharacter_C::IsPartyCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartyCharacter_C", "IsPartyCharacter");

	Params::AKSPartyCharacter_C_IsPartyCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPartyCharacter.KSPartyCharacter_C.SetWaitHistoryIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPartyCharacter_C::SetWaitHistoryIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartyCharacter_C", "SetWaitHistoryIndex");

	Params::AKSPartyCharacter_C_SetWaitHistoryIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPartyCharacter.KSPartyCharacter_C.RefreshCurrentLocation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSPartyCharacter_C::RefreshCurrentLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartyCharacter_C", "RefreshCurrentLocation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPartyCharacter.KSPartyCharacter_C.GetHunterPartnerFbComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHunterPartnerFbComponent*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UHunterPartnerFbComponent* AKSPartyCharacter_C::GetHunterPartnerFbComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartyCharacter_C", "GetHunterPartnerFbComponent");

	Params::AKSPartyCharacter_C_GetHunterPartnerFbComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPartyCharacter.KSPartyCharacter_C.RefreshLocationHistoryIndex
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSPartyCharacter_C::RefreshLocationHistoryIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartyCharacter_C", "RefreshLocationHistoryIndex");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPartyCharacter.KSPartyCharacter_C.GetFormationNumber
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              FormationNumber                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPartyCharacter_C::GetFormationNumber(int32* FormationNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartyCharacter_C", "GetFormationNumber");

	Params::AKSPartyCharacter_C_GetFormationNumber_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FormationNumber != nullptr)
		*FormationNumber = Parms.FormationNumber;

}


// Function KSPartyCharacter.KSPartyCharacter_C.GetFollowIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              FollowIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPartyCharacter_C::GetFollowIndex(int32* FollowIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartyCharacter_C", "GetFollowIndex");

	Params::AKSPartyCharacter_C_GetFollowIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FollowIndex != nullptr)
		*FollowIndex = Parms.FollowIndex;

}


// Function KSPartyCharacter.KSPartyCharacter_C.Debug_GetDebugFollowInfo
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString AKSPartyCharacter_C::Debug_GetDebugFollowInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartyCharacter_C", "Debug_GetDebugFollowInfo");

	Params::AKSPartyCharacter_C_Debug_GetDebugFollowInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPartyCharacter.KSPartyCharacter_C.Debug_GetDebugInfo
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString AKSPartyCharacter_C::Debug_GetDebugInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartyCharacter_C", "Debug_GetDebugInfo");

	Params::AKSPartyCharacter_C_Debug_GetDebugInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPartyCharacter.KSPartyCharacter_C.GetPartyCharaPropertyComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPartyCharaPropertyComponent*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UPartyCharaPropertyComponent* AKSPartyCharacter_C::GetPartyCharaPropertyComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartyCharacter_C", "GetPartyCharaPropertyComponent");

	Params::AKSPartyCharacter_C_GetPartyCharaPropertyComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPartyCharacter.KSPartyCharacter_C.UpdateMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSPartyCharacter_C::UpdateMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartyCharacter_C", "UpdateMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPartyCharacter.KSPartyCharacter_C.UpdateFollow
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPartyCharacter_C::UpdateFollow(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartyCharacter_C", "UpdateFollow");

	Params::AKSPartyCharacter_C_UpdateFollow_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPartyCharacter.KSPartyCharacter_C.UpdateFollowMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPartyCharacter_C::UpdateFollowMove(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartyCharacter_C", "UpdateFollowMove");

	Params::AKSPartyCharacter_C_UpdateFollowMove_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPartyCharacter.KSPartyCharacter_C.SetFollowEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSPartyCharacter_C::SetFollowEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartyCharacter_C", "SetFollowEnable");

	Params::AKSPartyCharacter_C_SetFollowEnable_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPartyCharacter.KSPartyCharacter_C.GetFollowTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPartyCharacter_C::GetFollowTarget(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartyCharacter_C", "GetFollowTarget");

	Params::AKSPartyCharacter_C_GetFollowTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function KSPartyCharacter.KSPartyCharacter_C.SetFollowTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSCharacterBase*            FollowTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPartner                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSPartyCharacter_C::SetFollowTarget(int32 Index, class AKSCharacterBase* FollowTarget, bool IsPartner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartyCharacter_C", "SetFollowTarget");

	Params::AKSPartyCharacter_C_SetFollowTarget_Params Parms{};

	Parms.Index = Index;
	Parms.FollowTarget = FollowTarget;
	Parms.IsPartner = IsPartner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPartyCharacter.KSPartyCharacter_C.UpdateMove
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPartyCharacter_C::UpdateMove(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartyCharacter_C", "UpdateMove");

	Params::AKSPartyCharacter_C_UpdateMove_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPartyCharacter.KSPartyCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AKSPartyCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartyCharacter_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPartyCharacter.KSPartyCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPartyCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartyCharacter_C", "ReceiveTick");

	Params::AKSPartyCharacter_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPartyCharacter.KSPartyCharacter_C.SetCharacterLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     InLocation                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         InDir                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPartyCharacter_C::SetCharacterLocation(struct FVector& InLocation, enum class EKSCharacterDir InDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartyCharacter_C", "SetCharacterLocation");

	Params::AKSPartyCharacter_C_SetCharacterLocation_Params Parms{};

	Parms.InLocation = InLocation;
	Parms.InDir = InDir;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPartyCharacter.KSPartyCharacter_C.SetCharacterEnable
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSPartyCharacter_C::SetCharacterEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartyCharacter_C", "SetCharacterEnable");

	Params::AKSPartyCharacter_C_SetCharacterEnable_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPartyCharacter.KSPartyCharacter_C.ExecuteUbergraph_KSPartyCharacter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPartyCharacter_C::ExecuteUbergraph_KSPartyCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPartyCharacter_C", "ExecuteUbergraph_KSPartyCharacter");

	Params::AKSPartyCharacter_C_ExecuteUbergraph_KSPartyCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


