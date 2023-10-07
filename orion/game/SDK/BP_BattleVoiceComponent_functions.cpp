#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_BattleVoiceComponent.BP_BattleVoiceComponent_C
// (None)

class UClass* UBP_BattleVoiceComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleVoiceComponent_C");

	return Clss;
}


// BP_BattleVoiceComponent_C BP_BattleVoiceComponent.Default__BP_BattleVoiceComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BattleVoiceComponent_C* UBP_BattleVoiceComponent_C::GetDefaultObj()
{
	static class UBP_BattleVoiceComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BattleVoiceComponent_C*>(UBP_BattleVoiceComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BattleVoiceComponent.BP_BattleVoiceComponent_C.OnFinishAudio
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_BattleVoiceComponent_C::OnFinishAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleVoiceComponent_C", "OnFinishAudio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BattleVoiceComponent.BP_BattleVoiceComponent_C.CheckOnTakeDamageVoice
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EBATTLE_VOICE_TYPE      VoiceType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_BattleVoiceComponent_C::CheckOnTakeDamageVoice(enum class EBATTLE_VOICE_TYPE VoiceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleVoiceComponent_C", "CheckOnTakeDamageVoice");

	Params::UBP_BattleVoiceComponent_C_CheckOnTakeDamageVoice_Params Parms{};

	Parms.VoiceType = VoiceType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_BattleVoiceComponent.BP_BattleVoiceComponent_C.ResetVoiceFlagForPreAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_BattleVoiceComponent_C::ResetVoiceFlagForPreAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleVoiceComponent_C", "ResetVoiceFlagForPreAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BattleVoiceComponent.BP_BattleVoiceComponent_C.CheckBattleVoiceData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleVoiceSetData         BattleVoiceData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBattleVoiceSetData         ConditionData                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        VoiceLabel                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleVoiceComponent_C::CheckBattleVoiceData(const struct FBattleVoiceSetData& BattleVoiceData, const struct FBattleVoiceSetData& ConditionData, bool* Enable, class FName* VoiceLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleVoiceComponent_C", "CheckBattleVoiceData");

	Params::UBP_BattleVoiceComponent_C_CheckBattleVoiceData_Params Parms{};

	Parms.BattleVoiceData = BattleVoiceData;
	Parms.ConditionData = ConditionData;

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

	if (VoiceLabel != nullptr)
		*VoiceLabel = Parms.VoiceLabel;

}


// Function BP_BattleVoiceComponent.BP_BattleVoiceComponent_C.InsertBattleVoiceData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBattleVoiceSetData> VoiceDataArray                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FBattleVoiceSetData         NewVoiceData                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BattleVoiceComponent_C::InsertBattleVoiceData(TArray<struct FBattleVoiceSetData>& VoiceDataArray, const struct FBattleVoiceSetData& NewVoiceData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleVoiceComponent_C", "InsertBattleVoiceData");

	Params::UBP_BattleVoiceComponent_C_InsertBattleVoiceData_Params Parms{};

	Parms.VoiceDataArray = VoiceDataArray;
	Parms.NewVoiceData = NewVoiceData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BattleVoiceComponent.BP_BattleVoiceComponent_C.PlayBattleVoice
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_VOICE_TYPE      EBattleVoiceType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBattleVoiceSetData         CPlayCondition                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_BattleVoiceComponent_C::PlayBattleVoice(enum class EBATTLE_VOICE_TYPE EBattleVoiceType, const struct FBattleVoiceSetData& CPlayCondition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleVoiceComponent_C", "PlayBattleVoice");

	Params::UBP_BattleVoiceComponent_C_PlayBattleVoice_Params Parms{};

	Parms.EBattleVoiceType = EBattleVoiceType;
	Parms.CPlayCondition = CPlayCondition;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_BattleVoiceComponent.BP_BattleVoiceComponent_C.InitBattleVoice
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StrBattleVoiceID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_BattleVoiceComponent_C::InitBattleVoice(class FName StrBattleVoiceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleVoiceComponent_C", "InitBattleVoice");

	Params::UBP_BattleVoiceComponent_C_InitBattleVoice_Params Parms{};

	Parms.StrBattleVoiceID = StrBattleVoiceID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_BattleVoiceComponent.BP_BattleVoiceComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_BattleVoiceComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleVoiceComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BattleVoiceComponent.BP_BattleVoiceComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleVoiceComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleVoiceComponent_C", "ReceiveTick");

	Params::UBP_BattleVoiceComponent_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BattleVoiceComponent.BP_BattleVoiceComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleVoiceComponent_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleVoiceComponent_C", "ReceiveEndPlay");

	Params::UBP_BattleVoiceComponent_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BattleVoiceComponent.BP_BattleVoiceComponent_C.ExecuteUbergraph_BP_BattleVoiceComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleVoiceComponent_C::ExecuteUbergraph_BP_BattleVoiceComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_BattleVoiceComponent_C", "ExecuteUbergraph_BP_BattleVoiceComponent");

	Params::UBP_BattleVoiceComponent_C_ExecuteUbergraph_BP_BattleVoiceComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


