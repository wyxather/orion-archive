#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass EncountManagerBP.EncountManagerBP_C
// (Actor)

class UClass* AEncountManagerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EncountManagerBP_C");

	return Clss;
}


// EncountManagerBP_C EncountManagerBP.Default__EncountManagerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEncountManagerBP_C* AEncountManagerBP_C::GetDefaultObj()
{
	static class AEncountManagerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEncountManagerBP_C*>(AEncountManagerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EncountManagerBP.EncountManagerBP_C.Debug_GetEncountInfo
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      OutDebugInfo                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void AEncountManagerBP_C::Debug_GetEncountInfo(class FString* OutDebugInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "Debug_GetEncountInfo");

	Params::AEncountManagerBP_C_Debug_GetEncountInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutDebugInfo != nullptr)
		*OutDebugInfo = std::move(Parms.OutDebugInfo);

}


// Function EncountManagerBP.EncountManagerBP_C.GeRareEnemyParameter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRareEnemyParam             CRareCatlinParam                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRareEnemyParam             CRareOctlinParam                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAreaID                 EArea                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::GeRareEnemyParameter(struct FRareEnemyParam* CRareCatlinParam, struct FRareEnemyParam* CRareOctlinParam, enum class EAreaID* EArea)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "GeRareEnemyParameter");

	Params::AEncountManagerBP_C_GeRareEnemyParameter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CRareCatlinParam != nullptr)
		*CRareCatlinParam = std::move(Parms.CRareCatlinParam);

	if (CRareOctlinParam != nullptr)
		*CRareOctlinParam = std::move(Parms.CRareOctlinParam);

	if (EArea != nullptr)
		*EArea = Parms.EArea;

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.GetCurrentEncountVolume
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEncountTriggerData         ChkEncTrg                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        EncountVolumeName                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EncountVolumeDecreaseValue                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEncountVolume              EncountVolumeData                                                (Parm, OutParm)

void AEncountManagerBP_C::GetCurrentEncountVolume(struct FEncountTriggerData& ChkEncTrg, class FName* EncountVolumeName, float* EncountVolumeDecreaseValue, struct FEncountVolume* EncountVolumeData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "GetCurrentEncountVolume");

	Params::AEncountManagerBP_C_GetCurrentEncountVolume_Params Parms{};

	Parms.ChkEncTrg = ChkEncTrg;

	UObject::ProcessEvent(Func, &Parms);

	if (EncountVolumeName != nullptr)
		*EncountVolumeName = Parms.EncountVolumeName;

	if (EncountVolumeDecreaseValue != nullptr)
		*EncountVolumeDecreaseValue = Parms.EncountVolumeDecreaseValue;

	if (EncountVolumeData != nullptr)
		*EncountVolumeData = std::move(Parms.EncountVolumeData);

}


// Function EncountManagerBP.EncountManagerBP_C.Debug_ScreenShot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Filename                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AEncountManagerBP_C::Debug_ScreenShot(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "Debug_ScreenShot");

	Params::AEncountManagerBP_C_Debug_ScreenShot_Params Parms{};

	Parms.Filename = Filename;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EncountManagerBP.EncountManagerBP_C.StartEightBattle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EnemyGroupID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPlayEventAfterBattle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NBattleMapIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EPlayableCharacterID>MainParty                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<enum class EPlayableCharacterID>SubParty                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::StartEightBattle(class FName EnemyGroupID, bool IsPlayEventAfterBattle, int32 NBattleMapIndex, TArray<enum class EPlayableCharacterID>& MainParty, TArray<enum class EPlayableCharacterID>& SubParty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "StartEightBattle");

	Params::AEncountManagerBP_C_StartEightBattle_Params Parms{};

	Parms.EnemyGroupID = EnemyGroupID;
	Parms.IsPlayEventAfterBattle = IsPlayEventAfterBattle;
	Parms.NBattleMapIndex = NBattleMapIndex;
	Parms.MainParty = MainParty;
	Parms.SubParty = SubParty;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.Debug_SetBattleMode
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_ENCOUNT_TYPE    EBattleMode                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::Debug_SetBattleMode(enum class EBATTLE_ENCOUNT_TYPE EBattleMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "Debug_SetBattleMode");

	Params::AEncountManagerBP_C_Debug_SetBattleMode_Params Parms{};

	Parms.EBattleMode = EBattleMode;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.StartPreparationBattle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EnemyGroupID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPlayEventAfterBattle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NBattleMapIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::StartPreparationBattle(class FName EnemyGroupID, bool IsPlayEventAfterBattle, int32 NBattleMapIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "StartPreparationBattle");

	Params::AEncountManagerBP_C_StartPreparationBattle_Params Parms{};

	Parms.EnemyGroupID = EnemyGroupID;
	Parms.IsPlayEventAfterBattle = IsPlayEventAfterBattle;
	Parms.NBattleMapIndex = NBattleMapIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.Debug_SetEightBattle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PartyLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LevelRange                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bEnableEightBattle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::Debug_SetEightBattle(int32 PartyLevel, int32 LevelRange, bool bEnableEightBattle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "Debug_SetEightBattle");

	Params::AEncountManagerBP_C_Debug_SetEightBattle_Params Parms{};

	Parms.PartyLevel = PartyLevel;
	Parms.LevelRange = LevelRange;
	Parms.bEnableEightBattle = bEnableEightBattle;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.GetSubPartyParam_Old
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FPartyCharacterData> SubPartyData                                                     (Parm, OutParm)

void AEncountManagerBP_C::GetSubPartyParam_Old(TArray<struct FPartyCharacterData>* SubPartyData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "GetSubPartyParam_Old");

	Params::AEncountManagerBP_C_GetSubPartyParam_Old_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SubPartyData != nullptr)
		*SubPartyData = std::move(Parms.SubPartyData);

}


// Function EncountManagerBP.EncountManagerBP_C.GetCurrentEncountTrigger
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEncountTriggerData         ReturnValue                                                      (Parm, OutParm, ReturnParm)

struct FEncountTriggerData AEncountManagerBP_C::GetCurrentEncountTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "GetCurrentEncountTrigger");

	Params::AEncountManagerBP_C_GetCurrentEncountTrigger_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.GetSupportAbilityInvocationValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESUPPORT_AILMENT_TYPE   AilmentType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvocationValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEncountManagerBP_C::GetSupportAbilityInvocationValue(enum class ESUPPORT_AILMENT_TYPE AilmentType, int32* InvocationValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "GetSupportAbilityInvocationValue");

	Params::AEncountManagerBP_C_GetSupportAbilityInvocationValue_Params Parms{};

	Parms.AilmentType = AilmentType;

	UObject::ProcessEvent(Func, &Parms);

	if (InvocationValue != nullptr)
		*InvocationValue = Parms.InvocationValue;

}


// Function EncountManagerBP.EncountManagerBP_C.Debug_CreateRandomPartyData_OLD
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PartyLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseExtraJob                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPartyCharacterData         ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

struct FPartyCharacterData AEncountManagerBP_C::Debug_CreateRandomPartyData_OLD(int32 CharacterID, int32 PartyLevel, bool UseExtraJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "Debug_CreateRandomPartyData_OLD");

	Params::AEncountManagerBP_C_Debug_CreateRandomPartyData_OLD_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.PartyLevel = PartyLevel;
	Parms.UseExtraJob = UseExtraJob;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.Debug_CreateRandomPartyData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PartyLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseExtraJob                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::Debug_CreateRandomPartyData(int32 CharacterID, int32 PartyLevel, bool UseExtraJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "Debug_CreateRandomPartyData");

	Params::AEncountManagerBP_C_Debug_CreateRandomPartyData_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.PartyLevel = PartyLevel;
	Parms.UseExtraJob = UseExtraJob;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.Debug_SetBattleRandomParty
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PartyLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LevelRange                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PartyNum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseExtraJob                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseRandomParty                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::Debug_SetBattleRandomParty(int32 PartyLevel, int32 LevelRange, int32 PartyNum, bool UseExtraJob, bool UseRandomParty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "Debug_SetBattleRandomParty");

	Params::AEncountManagerBP_C_Debug_SetBattleRandomParty_Params Parms{};

	Parms.PartyLevel = PartyLevel;
	Parms.LevelRange = LevelRange;
	Parms.PartyNum = PartyNum;
	Parms.UseExtraJob = UseExtraJob;
	Parms.UseRandomParty = UseRandomParty;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.SetEncounter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEncountManagerBP_C::SetEncounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "SetEncounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EncountManagerBP.EncountManagerBP_C.SequenceRequestCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEncountManagerBP_C::SequenceRequestCallback(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "SequenceRequestCallback");

	Params::AEncountManagerBP_C_SequenceRequestCallback_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EncountManagerBP.EncountManagerBP_C.AddSequeceRequestFromEncountType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEncountManagerBP_C::AddSequeceRequestFromEncountType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "AddSequeceRequestFromEncountType");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EncountManagerBP.EncountManagerBP_C.Debug_GetActiveEncountVolumeLabel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName AEncountManagerBP_C::Debug_GetActiveEncountVolumeLabel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "Debug_GetActiveEncountVolumeLabel");

	Params::AEncountManagerBP_C_Debug_GetActiveEncountVolumeLabel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.RestoreEncountVolumeFromSaveData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::RestoreEncountVolumeFromSaveData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "RestoreEncountVolumeFromSaveData");

	Params::AEncountManagerBP_C_RestoreEncountVolumeFromSaveData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.Debug_StartViewerBattle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::Debug_StartViewerBattle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "Debug_StartViewerBattle");

	Params::AEncountManagerBP_C_Debug_StartViewerBattle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.Debug_SetBattleViewerSituation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_START_TYPE      FixedSituation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseFixedSituation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::Debug_SetBattleViewerSituation(enum class EBATTLE_START_TYPE FixedSituation, bool UseFixedSituation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "Debug_SetBattleViewerSituation");

	Params::AEncountManagerBP_C_Debug_SetBattleViewerSituation_Params Parms{};

	Parms.FixedSituation = FixedSituation;
	Parms.UseFixedSituation = UseFixedSituation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.Debug_SetBattleViewerParty
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EPlayableCharacterID>PartyList                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               UseBattleViewerParty                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::Debug_SetBattleViewerParty(TArray<enum class EPlayableCharacterID>& PartyList, bool UseBattleViewerParty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "Debug_SetBattleViewerParty");

	Params::AEncountManagerBP_C_Debug_SetBattleViewerParty_Params Parms{};

	Parms.PartyList = PartyList;
	Parms.UseBattleViewerParty = UseBattleViewerParty;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.Debug_SetBattleViewerMode
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_VIEWER_MODE     ViewerMode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::Debug_SetBattleViewerMode(enum class EBATTLE_VIEWER_MODE ViewerMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "Debug_SetBattleViewerMode");

	Params::AEncountManagerBP_C_Debug_SetBattleViewerMode_Params Parms{};

	Parms.ViewerMode = ViewerMode;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.Debug_SetBattleViewerMap
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ViewerMapID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsWaterSide                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseBattleViewerMap                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::Debug_SetBattleViewerMap(class FName ViewerMapID, bool IsWaterSide, bool UseBattleViewerMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "Debug_SetBattleViewerMap");

	Params::AEncountManagerBP_C_Debug_SetBattleViewerMap_Params Parms{};

	Parms.ViewerMapID = ViewerMapID;
	Parms.IsWaterSide = IsWaterSide;
	Parms.UseBattleViewerMap = UseBattleViewerMap;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.BattleStartExec
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::BattleStartExec()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "BattleStartExec");

	Params::AEncountManagerBP_C_BattleStartExec_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.Debug_SetBattleViewerEnemy
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EnemyGroupID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                EnemyIDList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        PlacementID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::Debug_SetBattleViewerEnemy(class FName EnemyGroupID, TArray<class FName>& EnemyIDList, class FName PlacementID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "Debug_SetBattleViewerEnemy");

	Params::AEncountManagerBP_C_Debug_SetBattleViewerEnemy_Params Parms{};

	Parms.EnemyGroupID = EnemyGroupID;
	Parms.EnemyIDList = EnemyIDList;
	Parms.PlacementID = PlacementID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.Debug_GetDisableStepRandom
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEncountManagerBP_C::Debug_GetDisableStepRandom(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "Debug_GetDisableStepRandom");

	Params::AEncountManagerBP_C_Debug_GetDisableStepRandom_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function EncountManagerBP.EncountManagerBP_C.Debug_SetEncountSoon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::Debug_SetEncountSoon(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "Debug_SetEncountSoon");

	Params::AEncountManagerBP_C_Debug_SetEncountSoon_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.Debug_SetDisableStepRandom
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::Debug_SetDisableStepRandom(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "Debug_SetDisableStepRandom");

	Params::AEncountManagerBP_C_Debug_SetDisableStepRandom_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.Debug_GetFixedEncount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Fixed                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEncountManagerBP_C::Debug_GetFixedEncount(bool* Fixed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "Debug_GetFixedEncount");

	Params::AEncountManagerBP_C_Debug_GetFixedEncount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Fixed != nullptr)
		*Fixed = Parms.Fixed;

}


// Function EncountManagerBP.EncountManagerBP_C.Debug_SetFixedEnemyGroupID
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        GrounpID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::Debug_SetFixedEnemyGroupID(class FName GrounpID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "Debug_SetFixedEnemyGroupID");

	Params::AEncountManagerBP_C_Debug_SetFixedEnemyGroupID_Params Parms{};

	Parms.GrounpID = GrounpID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.Debug_SetFixedEncount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Fixed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::Debug_SetFixedEncount(bool Fixed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "Debug_SetFixedEncount");

	Params::AEncountManagerBP_C_Debug_SetFixedEncount_Params Parms{};

	Parms.Fixed = Fixed;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.Debug_SetFixedSituation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Situation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::Debug_SetFixedSituation(int32 Situation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "Debug_SetFixedSituation");

	Params::AEncountManagerBP_C_Debug_SetFixedSituation_Params Parms{};

	Parms.Situation = Situation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.Debug_GetEncountSoon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEncountManagerBP_C::Debug_GetEncountSoon(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "Debug_GetEncountSoon");

	Params::AEncountManagerBP_C_Debug_GetEncountSoon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function EncountManagerBP.EncountManagerBP_C.GetDangerLevel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 AEncountManagerBP_C::GetDangerLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "GetDangerLevel");

	Params::AEncountManagerBP_C_GetDangerLevel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.GetEncountCameraRotation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                    EncountSign                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEncountManagerBP_C::GetEncountCameraRotation(struct FRotator* EncountSign)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "GetEncountCameraRotation");

	Params::AEncountManagerBP_C_GetEncountCameraRotation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EncountSign != nullptr)
		*EncountSign = std::move(Parms.EncountSign);

}


// Function EncountManagerBP.EncountManagerBP_C.GetViewerParameter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_VIEWER_MODE     EViewerMode                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                AstrEnemyIDList                                                  (Parm, OutParm)
// class FName                        StrPlacementID                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::GetViewerParameter(enum class EBATTLE_VIEWER_MODE* EViewerMode, TArray<class FName>* AstrEnemyIDList, class FName* StrPlacementID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "GetViewerParameter");

	Params::AEncountManagerBP_C_GetViewerParameter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EViewerMode != nullptr)
		*EViewerMode = Parms.EViewerMode;

	if (AstrEnemyIDList != nullptr)
		*AstrEnemyIDList = std::move(Parms.AstrEnemyIDList);

	if (StrPlacementID != nullptr)
		*StrPlacementID = Parms.StrPlacementID;

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.SettingBattleParam
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::SettingBattleParam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "SettingBattleParam");

	Params::AEncountManagerBP_C_SettingBattleParam_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.StartEventBattle
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EncountVolumeID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEventBGM                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SingleBattle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsNextEvent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlayableCharacterID    FixFirstOrderPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::StartEventBattle(class FName EncountVolumeID, bool IsEventBGM, bool SingleBattle, enum class EPlayableCharacterID CharacterID, bool IsNextEvent, enum class EPlayableCharacterID FixFirstOrderPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "StartEventBattle");

	Params::AEncountManagerBP_C_StartEventBattle_Params Parms{};

	Parms.EncountVolumeID = EncountVolumeID;
	Parms.IsEventBGM = IsEventBGM;
	Parms.SingleBattle = SingleBattle;
	Parms.CharacterID = CharacterID;
	Parms.IsNextEvent = IsNextEvent;
	Parms.FixFirstOrderPlayer = FixFirstOrderPlayer;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.StartRevealBattle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EnemyGroupID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPlayEventAfterBattle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NBattleMapIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::StartRevealBattle(class FName EnemyGroupID, bool IsPlayEventAfterBattle, int32 NBattleMapIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "StartRevealBattle");

	Params::AEncountManagerBP_C_StartRevealBattle_Params Parms{};

	Parms.EnemyGroupID = EnemyGroupID;
	Parms.IsPlayEventAfterBattle = IsPlayEventAfterBattle;
	Parms.NBattleMapIndex = NBattleMapIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.StartInvadeBattle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EnemyGroupID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_START_TYPE      StartType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPlayEventAfterBattle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NBattleMapIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::StartInvadeBattle(class FName EnemyGroupID, enum class EBATTLE_START_TYPE StartType, bool IsPlayEventAfterBattle, int32 NBattleMapIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "StartInvadeBattle");

	Params::AEncountManagerBP_C_StartInvadeBattle_Params Parms{};

	Parms.EnemyGroupID = EnemyGroupID;
	Parms.StartType = StartType;
	Parms.IsPlayEventAfterBattle = IsPlayEventAfterBattle;
	Parms.NBattleMapIndex = NBattleMapIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.StartRobBattle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EnemyGroupID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_START_TYPE      StartType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPlayEventAfterBattle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NBattleMapIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::StartRobBattle(class FName EnemyGroupID, enum class EBATTLE_START_TYPE StartType, bool IsPlayEventAfterBattle, int32 NBattleMapIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "StartRobBattle");

	Params::AEncountManagerBP_C_StartRobBattle_Params Parms{};

	Parms.EnemyGroupID = EnemyGroupID;
	Parms.StartType = StartType;
	Parms.IsPlayEventAfterBattle = IsPlayEventAfterBattle;
	Parms.NBattleMapIndex = NBattleMapIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.StartBoutBattle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EnemyGroupID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPlayEventAfterBattle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NBattleMapIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayableCharacterID    EBattleCHaraID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::StartBoutBattle(class FName EnemyGroupID, bool IsPlayEventAfterBattle, int32 NBattleMapIndex, enum class EPlayableCharacterID EBattleCHaraID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "StartBoutBattle");

	Params::AEncountManagerBP_C_StartBoutBattle_Params Parms{};

	Parms.EnemyGroupID = EnemyGroupID;
	Parms.IsPlayEventAfterBattle = IsPlayEventAfterBattle;
	Parms.NBattleMapIndex = NBattleMapIndex;
	Parms.EBattleCHaraID = EBattleCHaraID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.RestoreEncount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::RestoreEncount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "RestoreEncount");

	Params::AEncountManagerBP_C_RestoreEncount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.BackupEncount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::BackupEncount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "BackupEncount");

	Params::AEncountManagerBP_C_BackupEncount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.SetForceStopEncountStep
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NForceStopEncountStepCount                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::SetForceStopEncountStep(int32 NForceStopEncountStepCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "SetForceStopEncountStep");

	Params::AEncountManagerBP_C_SetForceStopEncountStep_Params Parms{};

	Parms.NForceStopEncountStepCount = NForceStopEncountStepCount;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.GetEncountType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EBATTLE_ENCOUNT_TYPE    EncountType                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEncountManagerBP_C::GetEncountType(enum class EBATTLE_ENCOUNT_TYPE* EncountType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "GetEncountType");

	Params::AEncountManagerBP_C_GetEncountType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EncountType != nullptr)
		*EncountType = Parms.EncountType;

}


// Function EncountManagerBP.EncountManagerBP_C.AddEncountTrigger
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSTriggerBase*              Trigger                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::AddEncountTrigger(class AKSTriggerBase* Trigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "AddEncountTrigger");

	Params::AEncountManagerBP_C_AddEncountTrigger_Params Parms{};

	Parms.Trigger = Trigger;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.ResetTrigger
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::ResetTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "ResetTrigger");

	Params::AEncountManagerBP_C_ResetTrigger_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.SetAfterMainMenu
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::SetAfterMainMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "SetAfterMainMenu");

	Params::AEncountManagerBP_C_SetAfterMainMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.ResetEncountStep
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::ResetEncountStep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "ResetEncountStep");

	Params::AEncountManagerBP_C_ResetEncountStep_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.GetEncountTriggerID
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              TriggerID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEncountManagerBP_C::GetEncountTriggerID(int32* TriggerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "GetEncountTriggerID");

	Params::AEncountManagerBP_C_GetEncountTriggerID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TriggerID != nullptr)
		*TriggerID = Parms.TriggerID;

}


// Function EncountManagerBP.EncountManagerBP_C.RefleshEncountVolume
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::RefleshEncountVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "RefleshEncountVolume");

	Params::AEncountManagerBP_C_RefleshEncountVolume_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.SetEncountVolume
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEncountTriggerData         TriggerData                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::SetEncountVolume(const struct FEncountTriggerData& TriggerData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "SetEncountVolume");

	Params::AEncountManagerBP_C_SetEncountVolume_Params Parms{};

	Parms.TriggerData = TriggerData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.ResetEncountVolume
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::ResetEncountVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "ResetEncountVolume");

	Params::AEncountManagerBP_C_ResetEncountVolume_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.GetLiquidationSkip
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               SkipLiquidation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEncountManagerBP_C::GetLiquidationSkip(bool* SkipLiquidation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "GetLiquidationSkip");

	Params::AEncountManagerBP_C_GetLiquidationSkip_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SkipLiquidation != nullptr)
		*SkipLiquidation = Parms.SkipLiquidation;

}


// Function EncountManagerBP.EncountManagerBP_C.SetLiquidationSkip
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SkipLiquidation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountManagerBP_C::SetLiquidationSkip(bool SkipLiquidation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "SetLiquidationSkip");

	Params::AEncountManagerBP_C_SetLiquidationSkip_Params Parms{};

	Parms.SkipLiquidation = SkipLiquidation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.CalcEncounterLevel
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LevelId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EncounterLevel                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DangerLevel                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEncountManagerBP_C::CalcEncounterLevel(int32 LevelId, int32* EncounterLevel, int32* DangerLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "CalcEncounterLevel");

	Params::AEncountManagerBP_C_CalcEncounterLevel_Params Parms{};

	Parms.LevelId = LevelId;

	UObject::ProcessEvent(Func, &Parms);

	if (EncounterLevel != nullptr)
		*EncounterLevel = Parms.EncounterLevel;

	if (DangerLevel != nullptr)
		*DangerLevel = Parms.DangerLevel;

}


// Function EncountManagerBP.EncountManagerBP_C.GetEncounterLevel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 AEncountManagerBP_C::GetEncounterLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "GetEncounterLevel");

	Params::AEncountManagerBP_C_GetEncounterLevel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountManagerBP.EncountManagerBP_C.GetEncountParam_Old
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FPartyCharacterData> PartyData                                                        (Parm, OutParm)
// class FName                        EnemyGropID                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEventBGM                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EBATTLE_ENCOUNT_TYPE    EncountType                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEncountManagerBP_C::GetEncountParam_Old(TArray<struct FPartyCharacterData>* PartyData, class FName* EnemyGropID, bool* IsEventBGM, enum class EBATTLE_ENCOUNT_TYPE* EncountType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "GetEncountParam_Old");

	Params::AEncountManagerBP_C_GetEncountParam_Old_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PartyData != nullptr)
		*PartyData = std::move(Parms.PartyData);

	if (EnemyGropID != nullptr)
		*EnemyGropID = Parms.EnemyGropID;

	if (IsEventBGM != nullptr)
		*IsEventBGM = Parms.IsEventBGM;

	if (EncountType != nullptr)
		*EncountType = Parms.EncountType;

}


// Function EncountManagerBP.EncountManagerBP_C.GetEncountCameraPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     EncountCameraPosition                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEncountManagerBP_C::GetEncountCameraPosition(struct FVector* EncountCameraPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "GetEncountCameraPosition");

	Params::AEncountManagerBP_C_GetEncountCameraPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EncountCameraPosition != nullptr)
		*EncountCameraPosition = std::move(Parms.EncountCameraPosition);

}


// Function EncountManagerBP.EncountManagerBP_C.GetEncountPlayerDir
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EKSCharacterDir         NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEncountManagerBP_C::GetEncountPlayerDir(enum class EKSCharacterDir* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "GetEncountPlayerDir");

	Params::AEncountManagerBP_C_GetEncountPlayerDir_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function EncountManagerBP.EncountManagerBP_C.GetEncountPlayerPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     EncountPlayerPosition                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEncountManagerBP_C::GetEncountPlayerPosition(struct FVector* EncountPlayerPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "GetEncountPlayerPosition");

	Params::AEncountManagerBP_C_GetEncountPlayerPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EncountPlayerPosition != nullptr)
		*EncountPlayerPosition = std::move(Parms.EncountPlayerPosition);

}


// Function EncountManagerBP.EncountManagerBP_C.CalcDecreaseStepCount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DashRevision                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AbilityRevision                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EquipmentRevision                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DecreaseValue                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEncountManagerBP_C::CalcDecreaseStepCount(float DashRevision, float AbilityRevision, float EquipmentRevision, float* DecreaseValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "CalcDecreaseStepCount");

	Params::AEncountManagerBP_C_CalcDecreaseStepCount_Params Parms{};

	Parms.DashRevision = DashRevision;
	Parms.AbilityRevision = AbilityRevision;
	Parms.EquipmentRevision = EquipmentRevision;

	UObject::ProcessEvent(Func, &Parms);

	if (DecreaseValue != nullptr)
		*DecreaseValue = Parms.DecreaseValue;

}


// Function EncountManagerBP.EncountManagerBP_C.CharacterIDToPartyData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPartyCharacterData         PartyCharacterData                                               (Parm, OutParm, HasGetValueTypeHash)

void AEncountManagerBP_C::CharacterIDToPartyData(int32 CharacterID, struct FPartyCharacterData* PartyCharacterData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "CharacterIDToPartyData");

	Params::AEncountManagerBP_C_CharacterIDToPartyData_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

	if (PartyCharacterData != nullptr)
		*PartyCharacterData = std::move(Parms.PartyCharacterData);

}


// Function EncountManagerBP.EncountManagerBP_C.StartEventBattleByEncountVolume
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EncountVolumeID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEventBGM                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEncountManagerBP_C::StartEventBattleByEncountVolume(class FName EncountVolumeID, bool IsEventBGM)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "StartEventBattleByEncountVolume");

	Params::AEncountManagerBP_C_StartEventBattleByEncountVolume_Params Parms{};

	Parms.EncountVolumeID = EncountVolumeID;
	Parms.IsEventBGM = IsEventBGM;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EncountManagerBP.EncountManagerBP_C.JudgeBattleSituation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        GroupID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_START_TYPE      StartType                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEncountManagerBP_C::JudgeBattleSituation(class FName GroupID, enum class EBATTLE_START_TYPE* StartType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "JudgeBattleSituation");

	Params::AEncountManagerBP_C_JudgeBattleSituation_Params Parms{};

	Parms.GroupID = GroupID;

	UObject::ProcessEvent(Func, &Parms);

	if (StartType != nullptr)
		*StartType = Parms.StartType;

}


// Function EncountManagerBP.EncountManagerBP_C.SetItemEncountEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NoEncountMin                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NoEncountMax                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEncountManagerBP_C::SetItemEncountEffect(float Percent, int32 NoEncountMin, int32 NoEncountMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "SetItemEncountEffect");

	Params::AEncountManagerBP_C_SetItemEncountEffect_Params Parms{};

	Parms.Percent = Percent;
	Parms.NoEncountMin = NoEncountMin;
	Parms.NoEncountMax = NoEncountMax;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EncountManagerBP.EncountManagerBP_C.CalcEncountStepCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEncountManagerBP_C::CalcEncountStepCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "CalcEncountStepCount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EncountManagerBP.EncountManagerBP_C.SetAbilityEncountEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DownPercent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NoEncountMin                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NoEncountMax                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEncountManagerBP_C::SetAbilityEncountEffect(float DownPercent, int32 NoEncountMin, int32 NoEncountMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "SetAbilityEncountEffect");

	Params::AEncountManagerBP_C_SetAbilityEncountEffect_Params Parms{};

	Parms.DownPercent = DownPercent;
	Parms.NoEncountMin = NoEncountMin;
	Parms.NoEncountMax = NoEncountMax;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EncountManagerBP.EncountManagerBP_C.UpdatePlayerStep
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Update                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEncountManagerBP_C::UpdatePlayerStep(bool* Update)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "UpdatePlayerStep");

	Params::AEncountManagerBP_C_UpdatePlayerStep_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Update != nullptr)
		*Update = Parms.Update;

}


// Function EncountManagerBP.EncountManagerBP_C.PlayerStepCounter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEncountManagerBP_C::PlayerStepCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "PlayerStepCounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EncountManagerBP.EncountManagerBP_C.CreatePartyData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FPartyCharacterData> PartyData                                                        (Parm, OutParm)

void AEncountManagerBP_C::CreatePartyData(TArray<struct FPartyCharacterData>* PartyData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "CreatePartyData");

	Params::AEncountManagerBP_C_CreatePartyData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PartyData != nullptr)
		*PartyData = std::move(Parms.PartyData);

}


// Function EncountManagerBP.EncountManagerBP_C.GetEncountEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               EncountEnable                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEncountManagerBP_C::GetEncountEnable(bool* EncountEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "GetEncountEnable");

	Params::AEncountManagerBP_C_GetEncountEnable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EncountEnable != nullptr)
		*EncountEnable = Parms.EncountEnable;

}


// Function EncountManagerBP.EncountManagerBP_C.SetEncountEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EncountEnable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEncountManagerBP_C::SetEncountEnable(bool EncountEnable, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "SetEncountEnable");

	Params::AEncountManagerBP_C_SetEncountEnable_Params Parms{};

	Parms.EncountEnable = EncountEnable;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function EncountManagerBP.EncountManagerBP_C.IsExecEncount
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Encount                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEncountManagerBP_C::IsExecEncount(bool* Encount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "IsExecEncount");

	Params::AEncountManagerBP_C_IsExecEncount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Encount != nullptr)
		*Encount = Parms.Encount;

}


// Function EncountManagerBP.EncountManagerBP_C.ClearEncountDataAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEncountManagerBP_C::ClearEncountDataAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "ClearEncountDataAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EncountManagerBP.EncountManagerBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEncountManagerBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "ReceiveTick");

	Params::AEncountManagerBP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EncountManagerBP.EncountManagerBP_C.BattleSequenceStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEncountManagerBP_C::BattleSequenceStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "BattleSequenceStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EncountManagerBP.EncountManagerBP_C.PlayEventBattleStartFlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEncountManagerBP_C::PlayEventBattleStartFlow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "PlayEventBattleStartFlow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EncountManagerBP.EncountManagerBP_C.PlayBattleStartFlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    EmotionEffext                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEncountManagerBP_C::PlayBattleStartFlow(class UParticleSystemComponent* EmotionEffext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "PlayBattleStartFlow");

	Params::AEncountManagerBP_C_PlayBattleStartFlow_Params Parms{};

	Parms.EmotionEffext = EmotionEffext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EncountManagerBP.EncountManagerBP_C.OnBeginPlay
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEncountManagerBP_C::OnBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "OnBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EncountManagerBP.EncountManagerBP_C.ExecuteUbergraph_EncountManagerBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEncountManagerBP_C::ExecuteUbergraph_EncountManagerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountManagerBP_C", "ExecuteUbergraph_EncountManagerBP");

	Params::AEncountManagerBP_C_ExecuteUbergraph_EncountManagerBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


