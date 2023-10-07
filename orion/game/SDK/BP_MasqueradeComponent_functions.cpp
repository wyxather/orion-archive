#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_MasqueradeComponent.BP_MasqueradeComponent_C
// (None)

class UClass* UBP_MasqueradeComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasqueradeComponent_C");

	return Clss;
}


// BP_MasqueradeComponent_C BP_MasqueradeComponent.Default__BP_MasqueradeComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MasqueradeComponent_C* UBP_MasqueradeComponent_C::GetDefaultObj()
{
	static class UBP_MasqueradeComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MasqueradeComponent_C*>(UBP_MasqueradeComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.GetMasqueradeCharacterID
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPlayableCharacterID    ECharaID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasqueradeComponent_C::GetMasqueradeCharacterID(enum class EPlayableCharacterID* ECharaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MasqueradeComponent_C", "GetMasqueradeCharacterID");

	Params::UBP_MasqueradeComponent_C_GetMasqueradeCharacterID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ECharaID != nullptr)
		*ECharaID = Parms.ECharaID;

}


// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.PlayMasqueradeBattleVoice
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EBATTLE_VOICE_TYPE      EBattleVoiceType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBattleVoiceSetData         CPlayCondition                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_MasqueradeComponent_C::PlayMasqueradeBattleVoice(enum class EBATTLE_VOICE_TYPE EBattleVoiceType, const struct FBattleVoiceSetData& CPlayCondition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MasqueradeComponent_C", "PlayMasqueradeBattleVoice");

	Params::UBP_MasqueradeComponent_C_PlayMasqueradeBattleVoice_Params Parms{};

	Parms.EBattleVoiceType = EBattleVoiceType;
	Parms.CPlayCondition = CPlayCondition;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.GetMasqueradeCommandNameSecondJob
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UBP_MasqueradeComponent_C::GetMasqueradeCommandNameSecondJob()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MasqueradeComponent_C", "GetMasqueradeCommandNameSecondJob");

	Params::UBP_MasqueradeComponent_C_GetMasqueradeCommandNameSecondJob_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.GetMasqueradeCommandNameFirstJob
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UBP_MasqueradeComponent_C::GetMasqueradeCommandNameFirstJob()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MasqueradeComponent_C", "GetMasqueradeCommandNameFirstJob");

	Params::UBP_MasqueradeComponent_C_GetMasqueradeCommandNameFirstJob_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.GetMasqueradeCommandDetailSecondJob
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UBP_MasqueradeComponent_C::GetMasqueradeCommandDetailSecondJob()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MasqueradeComponent_C", "GetMasqueradeCommandDetailSecondJob");

	Params::UBP_MasqueradeComponent_C_GetMasqueradeCommandDetailSecondJob_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.GetMasqueradeCommandDetailFirstJob
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UBP_MasqueradeComponent_C::GetMasqueradeCommandDetailFirstJob()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MasqueradeComponent_C", "GetMasqueradeCommandDetailFirstJob");

	Params::UBP_MasqueradeComponent_C_GetMasqueradeCommandDetailFirstJob_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.GetMasqueradeCommandListSecondJob
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class FName> UBP_MasqueradeComponent_C::GetMasqueradeCommandListSecondJob()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MasqueradeComponent_C", "GetMasqueradeCommandListSecondJob");

	Params::UBP_MasqueradeComponent_C_GetMasqueradeCommandListSecondJob_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.GetMasqueradeCommandListFirstJob
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class FName> UBP_MasqueradeComponent_C::GetMasqueradeCommandListFirstJob()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MasqueradeComponent_C", "GetMasqueradeCommandListFirstJob");

	Params::UBP_MasqueradeComponent_C_GetMasqueradeCommandListFirstJob_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.GetMasqueradeEquipWeaponList
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<enum class EWEAPON_CATEGORY>ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<enum class EWEAPON_CATEGORY> UBP_MasqueradeComponent_C::GetMasqueradeEquipWeaponList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MasqueradeComponent_C", "GetMasqueradeEquipWeaponList");

	Params::UBP_MasqueradeComponent_C_GetMasqueradeEquipWeaponList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.ResumeMasquerade
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_MasqueradeComponent_C::ResumeMasquerade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MasqueradeComponent_C", "ResumeMasquerade");

	Params::UBP_MasqueradeComponent_C_ResumeMasquerade_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.ExecMasquerade
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CTarget                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NInvocationTurn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_MasqueradeComponent_C::ExecMasquerade(class ABattleCharacterBase* CTarget, int32 NInvocationTurn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MasqueradeComponent_C", "ExecMasquerade");

	Params::UBP_MasqueradeComponent_C_ExecMasquerade_Params Parms{};

	Parms.CTarget = CTarget;
	Parms.NInvocationTurn = NInvocationTurn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_MasqueradeComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MasqueradeComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasqueradeComponent.BP_MasqueradeComponent_C.ExecuteUbergraph_BP_MasqueradeComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasqueradeComponent_C::ExecuteUbergraph_BP_MasqueradeComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MasqueradeComponent_C", "ExecuteUbergraph_BP_MasqueradeComponent");

	Params::UBP_MasqueradeComponent_C_ExecuteUbergraph_BP_MasqueradeComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


