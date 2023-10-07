#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BattleCharacterBaseBP.BattleCharacterBaseBP_C
// (Actor)

class UClass* ABattleCharacterBaseBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleCharacterBaseBP_C");

	return Clss;
}


// BattleCharacterBaseBP_C BattleCharacterBaseBP.Default__BattleCharacterBaseBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABattleCharacterBaseBP_C* ABattleCharacterBaseBP_C::GetDefaultObj()
{
	static class ABattleCharacterBaseBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABattleCharacterBaseBP_C*>(ABattleCharacterBaseBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetupActionOrderBlindFast
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::SetupActionOrderBlindFast(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetupActionOrderBlindFast");

	Params::ABattleCharacterBaseBP_C_SetupActionOrderBlindFast_Params Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckEnableSetCharaTransform
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::CheckEnableSetCharaTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CheckEnableSetCharaTransform");

	Params::ABattleCharacterBaseBP_C_CheckEnableSetCharaTransform_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SubActionTurnCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::SubActionTurnCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SubActionTurnCount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsGarderaAbility
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        AbilityName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::IsGarderaAbility(class FName AbilityName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "IsGarderaAbility");

	Params::ABattleCharacterBaseBP_C_IsGarderaAbility_Params Parms{};

	Parms.AbilityName = AbilityName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.PlayBreakUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::PlayBreakUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "PlayBreakUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetExcitementPoint
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CEnforcer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NBoostLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::SetExcitementPoint(class ABattleCharacterBase* CEnforcer, int32 NBoostLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetExcitementPoint");

	Params::ABattleCharacterBaseBP_C_SetExcitementPoint_Params Parms{};

	Parms.CEnforcer = CEnforcer;
	Parms.NBoostLevel = NBoostLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckDiseaseInAdvance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::CheckDiseaseInAdvance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CheckDiseaseInAdvance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsSelecterEffectVisibleSealAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::IsSelecterEffectVisibleSealAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "IsSelecterEffectVisibleSealAction");

	Params::ABattleCharacterBaseBP_C_IsSelecterEffectVisibleSealAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsSelecterEffectVisibleBribe
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::IsSelecterEffectVisibleBribe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "IsSelecterEffectVisibleBribe");

	Params::ABattleCharacterBaseBP_C_IsSelecterEffectVisibleBribe_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsSelecterEffectVisibleNormal
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::IsSelecterEffectVisibleNormal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "IsSelecterEffectVisibleNormal");

	Params::ABattleCharacterBaseBP_C_IsSelecterEffectVisibleNormal_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterGroggy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGroggy                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               EnableCurrentAction                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               EnableNextAction                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::GetCharacterGroggy(bool* IsGroggy, bool* EnableCurrentAction, bool* EnableNextAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetCharacterGroggy");

	Params::ABattleCharacterBaseBP_C_GetCharacterGroggy_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsGroggy != nullptr)
		*IsGroggy = Parms.IsGroggy;

	if (EnableCurrentAction != nullptr)
		*EnableCurrentAction = Parms.EnableCurrentAction;

	if (EnableNextAction != nullptr)
		*EnableNextAction = Parms.EnableNextAction;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsCharacterSupporter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::IsCharacterSupporter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "IsCharacterSupporter");

	Params::ABattleCharacterBaseBP_C_IsCharacterSupporter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug Draw Character Parameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::Debug_Draw_Character_Parameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug Draw Character Parameter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.OnTakeDisease
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CEnforcer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDISEASE_TYPE           EDiseaseType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDISEASE_CATEGORY       EDiseaseCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NInvocationValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NBoostLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsNewDisease                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::OnTakeDisease(class ABattleCharacterBase* CEnforcer, enum class EDISEASE_TYPE EDiseaseType, enum class EDISEASE_CATEGORY EDiseaseCategory, int32 NInvocationValue, int32 NBoostLevel, bool bIsNewDisease)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "OnTakeDisease");

	Params::ABattleCharacterBaseBP_C_OnTakeDisease_Params Parms{};

	Parms.CEnforcer = CEnforcer;
	Parms.EDiseaseType = EDiseaseType;
	Parms.EDiseaseCategory = EDiseaseCategory;
	Parms.NInvocationValue = NInvocationValue;
	Parms.NBoostLevel = NBoostLevel;
	Parms.bIsNewDisease = bIsNewDisease;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCursorPosition
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABattleCharacterBaseBP_C::GetCursorPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetCursorPosition");

	Params::ABattleCharacterBaseBP_C_GetCursorPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetReplayStatus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsSelfTurn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EBATTLE_REPLAY_CHARA_STATUSEReplayStatus                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetReplayStatus(bool bIsSelfTurn, enum class EBATTLE_REPLAY_CHARA_STATUS* EReplayStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetReplayStatus");

	Params::ABattleCharacterBaseBP_C_GetReplayStatus_Params Parms{};

	Parms.bIsSelfTurn = bIsSelfTurn;

	UObject::ProcessEvent(Func, &Parms);

	if (EReplayStatus != nullptr)
		*EReplayStatus = Parms.EReplayStatus;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ResumeSubStatusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::ResumeSubStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ResumeSubStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.HideSubStatusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::HideSubStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "HideSubStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SearchEquipmentAilment
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAILMENT_TYPE           AilmentType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAilmentHandler>     AilmentHandler                                                   (Parm, OutParm)
// bool                               Find                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SearchEquipmentAilment(enum class EAILMENT_TYPE AilmentType, TArray<struct FAilmentHandler>* AilmentHandler, bool* Find)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SearchEquipmentAilment");

	Params::ABattleCharacterBaseBP_C_SearchEquipmentAilment_Params Parms{};

	Parms.AilmentType = AilmentType;

	UObject::ProcessEvent(Func, &Parms);

	if (AilmentHandler != nullptr)
		*AilmentHandler = std::move(Parms.AilmentHandler);

	if (Find != nullptr)
		*Find = Parms.Find;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetDiseaseResist
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EDISEASE_TYPE           EDiseaseType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_RESIST       EResistResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetDiseaseResist(enum class EDISEASE_TYPE EDiseaseType, enum class EATTRIBUTE_RESIST* EResistResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetDiseaseResist");

	Params::ABattleCharacterBaseBP_C_GetDiseaseResist_Params Parms{};

	Parms.EDiseaseType = EDiseaseType;

	UObject::ProcessEvent(Func, &Parms);

	if (EResistResult != nullptr)
		*EResistResult = Parms.EResistResult;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.PlayBattleVoice
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_VOICE_TYPE      EBattleVoiceType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBattleVoiceSetData         CPlayCondition                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bIsSkipDiseaseCheck                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::PlayBattleVoice(enum class EBATTLE_VOICE_TYPE EBattleVoiceType, const struct FBattleVoiceSetData& CPlayCondition, bool bIsSkipDiseaseCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "PlayBattleVoice");

	Params::ABattleCharacterBaseBP_C_PlayBattleVoice_Params Parms{};

	Parms.EBattleVoiceType = EBattleVoiceType;
	Parms.CPlayCondition = CPlayCondition;
	Parms.bIsSkipDiseaseCheck = bIsSkipDiseaseCheck;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_Shrink
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ExtensionTurn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDISEASE_CATEGORY       ExtensionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::ExecDisease_Shrink(int32 ExtensionTurn, enum class EDISEASE_CATEGORY ExtensionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ExecDisease_Shrink");

	Params::ABattleCharacterBaseBP_C_ExecDisease_Shrink_Params Parms{};

	Parms.ExtensionTurn = ExtensionTurn;
	Parms.ExtensionType = ExtensionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.PlayActionOrderIconDisappear
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::PlayActionOrderIconDisappear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "PlayActionOrderIconDisappear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.RemoveDiseaseForSequencer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        DiseaseName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::RemoveDiseaseForSequencer(class FName DiseaseName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "RemoveDiseaseForSequencer");

	Params::ABattleCharacterBaseBP_C_RemoveDiseaseForSequencer_Params Parms{};

	Parms.DiseaseName = DiseaseName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.AddDiseaseForSequencer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        DiseaseName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvocationValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvocationTurn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::AddDiseaseForSequencer(class FName DiseaseName, int32 InvocationValue, int32 InvocationTurn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "AddDiseaseForSequencer");

	Params::ABattleCharacterBaseBP_C_AddDiseaseForSequencer_Params Parms{};

	Parms.DiseaseName = DiseaseName;
	Parms.InvocationValue = InvocationValue;
	Parms.InvocationTurn = InvocationTurn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_Possession
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TurnSkip                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::ExecDisease_Possession(bool* TurnSkip, float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ExecDisease_Possession");

	Params::ABattleCharacterBaseBP_C_ExecDisease_Possession_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TurnSkip != nullptr)
		*TurnSkip = Parms.TurnSkip;

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CalcDisease_SPRegenerationValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecDiseaseHandler         DiseaseData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              RecoveryValue                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::CalcDisease_SPRegenerationValue(struct FExecDiseaseHandler& DiseaseData, int32* RecoveryValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CalcDisease_SPRegenerationValue");

	Params::ABattleCharacterBaseBP_C_CalcDisease_SPRegenerationValue_Params Parms{};

	Parms.DiseaseData = DiseaseData;

	UObject::ProcessEvent(Func, &Parms);

	if (RecoveryValue != nullptr)
		*RecoveryValue = Parms.RecoveryValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CalcDisease_HPRegenerationValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecDiseaseHandler         DiseaseData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              RecoveryValue                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::CalcDisease_HPRegenerationValue(struct FExecDiseaseHandler& DiseaseData, int32* RecoveryValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CalcDisease_HPRegenerationValue");

	Params::ABattleCharacterBaseBP_C_CalcDisease_HPRegenerationValue_Params Parms{};

	Parms.DiseaseData = DiseaseData;

	UObject::ProcessEvent(Func, &Parms);

	if (RecoveryValue != nullptr)
		*RecoveryValue = Parms.RecoveryValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.EndBattleTurnForSubParty
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FWaitTime                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::EndBattleTurnForSubParty(float* FWaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "EndBattleTurnForSubParty");

	Params::ABattleCharacterBaseBP_C_EndBattleTurnForSubParty_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FWaitTime != nullptr)
		*FWaitTime = Parms.FWaitTime;

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckPreparationSealing
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECOMMAND_SUB_MENU_TYPE  ESubMenuType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::CheckPreparationSealing(enum class ECOMMAND_SUB_MENU_TYPE ESubMenuType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CheckPreparationSealing");

	Params::ABattleCharacterBaseBP_C_CheckPreparationSealing_Params Parms{};

	Parms.ESubMenuType = ESubMenuType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SwitchDiseaseEffectVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SwitchDiseaseEffectVisibility(bool Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SwitchDiseaseEffectVisibility");

	Params::ABattleCharacterBaseBP_C_SwitchDiseaseEffectVisibility_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SearchEquipmentAilmentForUnique
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAILMENT_TYPE           AilmentType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAilment                    Ailment                                                          (Parm, OutParm, HasGetValueTypeHash)
// struct FAilmentHandler             AilmentHandler                                                   (Parm, OutParm, NoDestructor)
// bool                               Find                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SearchEquipmentAilmentForUnique(enum class EAILMENT_TYPE AilmentType, struct FAilment* Ailment, struct FAilmentHandler* AilmentHandler, bool* Find)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SearchEquipmentAilmentForUnique");

	Params::ABattleCharacterBaseBP_C_SearchEquipmentAilmentForUnique_Params Parms{};

	Parms.AilmentType = AilmentType;

	UObject::ProcessEvent(Func, &Parms);

	if (Ailment != nullptr)
		*Ailment = std::move(Parms.Ailment);

	if (AilmentHandler != nullptr)
		*AilmentHandler = std::move(Parms.AilmentHandler);

	if (Find != nullptr)
		*Find = Parms.Find;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckEnableBreakAct
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActionOrderData            CurrentOrderData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::CheckEnableBreakAct(struct FActionOrderData& CurrentOrderData, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CheckEnableBreakAct");

	Params::ABattleCharacterBaseBP_C_CheckEnableBreakAct_Params Parms{};

	Parms.CurrentOrderData = CurrentOrderData;

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecGetBackBoostPoint
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ExecRegeneration                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::ExecGetBackBoostPoint(bool* ExecRegeneration, float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ExecGetBackBoostPoint");

	Params::ABattleCharacterBaseBP_C_ExecGetBackBoostPoint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ExecRegeneration != nullptr)
		*ExecRegeneration = Parms.ExecRegeneration;

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetDamageBPMax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::SetDamageBPMax(int32 DamageValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetDamageBPMax");

	Params::ABattleCharacterBaseBP_C_SetDamageBPMax_Params Parms{};

	Parms.DamageValue = DamageValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.RemoveDiseaseAllForCharm
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ExecRemove                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::RemoveDiseaseAllForCharm(bool* ExecRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "RemoveDiseaseAllForCharm");

	Params::ABattleCharacterBaseBP_C_RemoveDiseaseAllForCharm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ExecRemove != nullptr)
		*ExecRemove = Parms.ExecRemove;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.UpdateDisease_Charm
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TurnSkip                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::UpdateDisease_Charm(bool* TurnSkip, float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "UpdateDisease_Charm");

	Params::ABattleCharacterBaseBP_C_UpdateDisease_Charm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TurnSkip != nullptr)
		*TurnSkip = Parms.TurnSkip;

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.UpdateDisease_Frozen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TurnSkip                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::UpdateDisease_Frozen(bool* TurnSkip, float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "UpdateDisease_Frozen");

	Params::ABattleCharacterBaseBP_C_UpdateDisease_Frozen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TurnSkip != nullptr)
		*TurnSkip = Parms.TurnSkip;

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsCharacterDisableAction
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::IsCharacterDisableAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "IsCharacterDisableAction");

	Params::ABattleCharacterBaseBP_C_IsCharacterDisableAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.OnTakeDisease_ForStealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDISEASE_TYPE           DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::OnTakeDisease_ForStealth(enum class EDISEASE_TYPE DiseaseType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "OnTakeDisease_ForStealth");

	Params::ABattleCharacterBaseBP_C_OnTakeDisease_ForStealth_Params Parms{};

	Parms.DiseaseType = DiseaseType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.UpdateChargeActionCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::UpdateChargeActionCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "UpdateChargeActionCount");

	Params::ABattleCharacterBaseBP_C_UpdateChargeActionCount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.PopChargeActionData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleAdditiveOrderData    ReturnValue                                                      (Parm, OutParm, ReturnParm)

struct FBattleAdditiveOrderData ABattleCharacterBaseBP_C::PopChargeActionData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "PopChargeActionData");

	Params::ABattleCharacterBaseBP_C_PopChargeActionData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.AddChargeActionData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StrAbilityName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABattleCharacterBase*>AcTargetList                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::AddChargeActionData(class FName StrAbilityName, TArray<class ABattleCharacterBase*>& AcTargetList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "AddChargeActionData");

	Params::ABattleCharacterBaseBP_C_AddChargeActionData_Params Parms{};

	Parms.StrAbilityName = StrAbilityName;
	Parms.AcTargetList = AcTargetList;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_Frozen
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TurnSkip                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::ExecDisease_Frozen(bool* TurnSkip, float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ExecDisease_Frozen");

	Params::ABattleCharacterBaseBP_C_ExecDisease_Frozen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TurnSkip != nullptr)
		*TurnSkip = Parms.TurnSkip;

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckCharacterReviveEnable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bReviveAndRecovery                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::CheckCharacterReviveEnable(bool bReviveAndRecovery)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CheckCharacterReviveEnable");

	Params::ABattleCharacterBaseBP_C_CheckCharacterReviveEnable_Params Parms{};

	Parms.bReviveAndRecovery = bReviveAndRecovery;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsCharacterPinch
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::IsCharacterPinch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "IsCharacterPinch");

	Params::ABattleCharacterBaseBP_C_IsCharacterPinch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SearchDiseaseByCategoryForAI
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDISEASE_CATEGORY       DiseaseCategory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::SearchDiseaseByCategoryForAI(enum class EDISEASE_CATEGORY DiseaseCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SearchDiseaseByCategoryForAI");

	Params::ABattleCharacterBaseBP_C_SearchDiseaseByCategoryForAI_Params Parms{};

	Parms.DiseaseCategory = DiseaseCategory;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_DarkFrame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ExecPoison                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::ExecDisease_DarkFrame(bool* ExecPoison, float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ExecDisease_DarkFrame");

	Params::ABattleCharacterBaseBP_C_ExecDisease_DarkFrame_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ExecPoison != nullptr)
		*ExecPoison = Parms.ExecPoison;

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckWrapAroundEnable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FActionOrderData            CTargetOrderData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
// enum class EACTION_ORDER_TYPE      ERequestType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsNextTurn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bMoveForward                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::CheckWrapAroundEnable(const struct FActionOrderData& CTargetOrderData, enum class EACTION_ORDER_TYPE ERequestType, bool bIsNextTurn, bool bMoveForward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CheckWrapAroundEnable");

	Params::ABattleCharacterBaseBP_C_CheckWrapAroundEnable_Params Parms{};

	Parms.CTargetOrderData = CTargetOrderData;
	Parms.ERequestType = ERequestType;
	Parms.bIsNextTurn = bIsNextTurn;
	Parms.bMoveForward = bMoveForward;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckOverTakeEnable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FActionOrderData            CTargetOrderData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
// enum class EACTION_ORDER_TYPE      ERequestType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsNextTurn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::CheckOverTakeEnable(const struct FActionOrderData& CTargetOrderData, enum class EACTION_ORDER_TYPE ERequestType, bool bIsNextTurn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CheckOverTakeEnable");

	Params::ABattleCharacterBaseBP_C_CheckOverTakeEnable_Params Parms{};

	Parms.CTargetOrderData = CTargetOrderData;
	Parms.ERequestType = ERequestType;
	Parms.bIsNextTurn = bIsNextTurn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckShuffleEnable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::CheckShuffleEnable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CheckShuffleEnable");

	Params::ABattleCharacterBaseBP_C_CheckShuffleEnable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.RemoveDiseaseForAI
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDISEASE_TYPE           DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::RemoveDiseaseForAI(enum class EDISEASE_TYPE DiseaseType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "RemoveDiseaseForAI");

	Params::ABattleCharacterBaseBP_C_RemoveDiseaseForAI_Params Parms{};

	Parms.DiseaseType = DiseaseType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SearchDiseaseForAI
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDISEASE_TYPE           DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::SearchDiseaseForAI(enum class EDISEASE_TYPE DiseaseType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SearchDiseaseForAI");

	Params::ABattleCharacterBaseBP_C_SearchDiseaseForAI_Params Parms{};

	Parms.DiseaseType = DiseaseType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.AddDiseaseForAI
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        DiseaseName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvocationValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvocationTurn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::AddDiseaseForAI(class FName DiseaseName, int32 InvocationValue, int32 InvocationTurn, class ABattleCharacterBase* Enforcer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "AddDiseaseForAI");

	Params::ABattleCharacterBaseBP_C_AddDiseaseForAI_Params Parms{};

	Parms.DiseaseName = DiseaseName;
	Parms.InvocationValue = InvocationValue;
	Parms.InvocationTurn = InvocationTurn;
	Parms.Enforcer = Enforcer;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetNextActionOrderData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              NOrderIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionOrderData            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)

struct FActionOrderData ABattleCharacterBaseBP_C::GetNextActionOrderData(int32 NOrderIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetNextActionOrderData");

	Params::ABattleCharacterBaseBP_C_GetNextActionOrderData_Params Parms{};

	Parms.NOrderIndex = NOrderIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetActionTimeForCurrentTurn
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EACTION_ORDER_TYPE      EType                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FDelayRatio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABattleCharacterBaseBP_C::GetActionTimeForCurrentTurn(enum class EACTION_ORDER_TYPE EType, float FDelayRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetActionTimeForCurrentTurn");

	Params::ABattleCharacterBaseBP_C_GetActionTimeForCurrentTurn_Params Parms{};

	Parms.EType = EType;
	Parms.FDelayRatio = FDelayRatio;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetActionTimeForNextTurn
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EACTION_ORDER_TYPE      EType                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FDelayRatio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABattleCharacterBaseBP_C::GetActionTimeForNextTurn(enum class EACTION_ORDER_TYPE EType, float FDelayRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetActionTimeForNextTurn");

	Params::ABattleCharacterBaseBP_C_GetActionTimeForNextTurn_Params Parms{};

	Parms.EType = EType;
	Parms.FDelayRatio = FDelayRatio;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.PlayActionOrderIconRemove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RemoveCurrentOrder                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               RemoveNextOrder                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::PlayActionOrderIconRemove(bool RemoveCurrentOrder, bool RemoveNextOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "PlayActionOrderIconRemove");

	Params::ABattleCharacterBaseBP_C_PlayActionOrderIconRemove_Params Parms{};

	Parms.RemoveCurrentOrder = RemoveCurrentOrder;
	Parms.RemoveNextOrder = RemoveNextOrder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetDiseaseEffectPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetDiseaseEffectPosition(struct FVector* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetDiseaseEffectPosition");

	Params::ABattleCharacterBaseBP_C_GetDiseaseEffectPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.BeginCharacterOrder
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FWaitTime                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::BeginCharacterOrder(float* FWaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "BeginCharacterOrder");

	Params::ABattleCharacterBaseBP_C_BeginCharacterOrder_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FWaitTime != nullptr)
		*FWaitTime = Parms.FWaitTime;

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.OnTakeDisease_ForDIseaseControl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDISEASE_TYPE           DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvocationValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::OnTakeDisease_ForDIseaseControl(enum class EDISEASE_TYPE DiseaseType, int32 InvocationValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "OnTakeDisease_ForDIseaseControl");

	Params::ABattleCharacterBaseBP_C_OnTakeDisease_ForDIseaseControl_Params Parms{};

	Parms.DiseaseType = DiseaseType;
	Parms.InvocationValue = InvocationValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.OnTakeDisease_ForActionOrder
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDISEASE_TYPE           DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::OnTakeDisease_ForActionOrder(enum class EDISEASE_TYPE DiseaseType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "OnTakeDisease_ForActionOrder");

	Params::ABattleCharacterBaseBP_C_OnTakeDisease_ForActionOrder_Params Parms{};

	Parms.DiseaseType = DiseaseType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.OnTakeDisease_ForTextMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDISEASE_TYPE           DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDISEASE_CATEGORY       DiseaseCategory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::OnTakeDisease_ForTextMessage(enum class EDISEASE_TYPE DiseaseType, enum class EDISEASE_CATEGORY DiseaseCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "OnTakeDisease_ForTextMessage");

	Params::ABattleCharacterBaseBP_C_OnTakeDisease_ForTextMessage_Params Parms{};

	Parms.DiseaseType = DiseaseType;
	Parms.DiseaseCategory = DiseaseCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_ReboundSealAction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TurnSkip                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::ExecDisease_ReboundSealAction(bool* TurnSkip, float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ExecDisease_ReboundSealAction");

	Params::ABattleCharacterBaseBP_C_ExecDisease_ReboundSealAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TurnSkip != nullptr)
		*TurnSkip = Parms.TurnSkip;

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetupActionOrderSealAction
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::SetupActionOrderSealAction(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetupActionOrderSealAction");

	Params::ABattleCharacterBaseBP_C_SetupActionOrderSealAction_Params Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Exec Change Permanent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChangeNum                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Exec_Change_Permanent(int32 ChangeNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Exec Change Permanent");

	Params::ABattleCharacterBaseBP_C_Exec_Change_Permanent_Params Parms{};

	Parms.ChangeNum = ChangeNum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecSettingNextOrder
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FRequestActionOrderData>AcActionOrderData                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bNextTurnOnly                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bRequest                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::ExecSettingNextOrder(TArray<struct FRequestActionOrderData>& AcActionOrderData, bool bNextTurnOnly, bool bRequest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ExecSettingNextOrder");

	Params::ABattleCharacterBaseBP_C_ExecSettingNextOrder_Params Parms{};

	Parms.AcActionOrderData = AcActionOrderData;
	Parms.bNextTurnOnly = bNextTurnOnly;
	Parms.bRequest = bRequest;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.InterruptCurrentOrder
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRequestActionOrderData     CActionOrderData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABattleCharacterBaseBP_C::InterruptCurrentOrder(const struct FRequestActionOrderData& CActionOrderData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "InterruptCurrentOrder");

	Params::ABattleCharacterBaseBP_C_InterruptCurrentOrder_Params Parms{};

	Parms.CActionOrderData = CActionOrderData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.MoveLastNextOrder
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::MoveLastNextOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "MoveLastNextOrder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsCharacterGroggy
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsGroggy                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bEnableCurrentAction                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bEnableNextAction                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::IsCharacterGroggy(bool* bIsGroggy, bool* bEnableCurrentAction, bool* bEnableNextAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "IsCharacterGroggy");

	Params::ABattleCharacterBaseBP_C_IsCharacterGroggy_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsGroggy != nullptr)
		*bIsGroggy = Parms.bIsGroggy;

	if (bEnableCurrentAction != nullptr)
		*bEnableCurrentAction = Parms.bEnableCurrentAction;

	if (bEnableNextAction != nullptr)
		*bEnableNextAction = Parms.bEnableNextAction;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetBattleEffectSocket
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bGround                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USceneComponent* ABattleCharacterBaseBP_C::GetBattleEffectSocket(bool bGround)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetBattleEffectSocket");

	Params::ABattleCharacterBaseBP_C_GetBattleEffectSocket_Params Parms{};

	Parms.bGround = bGround;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetDefaultWarpPosition
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABattleCharacterBaseBP_C::GetDefaultWarpPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetDefaultWarpPosition");

	Params::ABattleCharacterBaseBP_C_GetDefaultWarpPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Remove Oldest Disease
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDISEASE_CATEGORY       RemoveCategory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Complete                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::Remove_Oldest_Disease(enum class EDISEASE_CATEGORY RemoveCategory, bool* Complete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Remove Oldest Disease");

	Params::ABattleCharacterBaseBP_C_Remove_Oldest_Disease_Params Parms{};

	Parms.RemoveCategory = RemoveCategory;

	UObject::ProcessEvent(Func, &Parms);

	if (Complete != nullptr)
		*Complete = Parms.Complete;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_Extension
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ExtensionTurn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDISEASE_CATEGORY       ExtensionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::ExecDisease_Extension(int32 ExtensionTurn, enum class EDISEASE_CATEGORY ExtensionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ExecDisease_Extension");

	Params::ABattleCharacterBaseBP_C_ExecDisease_Extension_Params Parms{};

	Parms.ExtensionTurn = ExtensionTurn;
	Parms.ExtensionType = ExtensionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsCharacterReady
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::IsCharacterReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "IsCharacterReady");

	Params::ABattleCharacterBaseBP_C_IsCharacterReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckBoostPointMax
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::CheckBoostPointMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CheckBoostPointMax");

	Params::ABattleCharacterBaseBP_C_CheckBoostPointMax_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetupActionOrderBribe
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::SetupActionOrderBribe(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetupActionOrderBribe");

	Params::ABattleCharacterBaseBP_C_SetupActionOrderBribe_Params Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetupActionOrderBlind
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::SetupActionOrderBlind(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetupActionOrderBlind");

	Params::ABattleCharacterBaseBP_C_SetupActionOrderBlind_Params Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsCharacterBreak
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::IsCharacterBreak()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "IsCharacterBreak");

	Params::ABattleCharacterBaseBP_C_IsCharacterBreak_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.PlayActionOrderIconBreak
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::PlayActionOrderIconBreak()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "PlayActionOrderIconBreak");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.PlayActionOrderIconDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::PlayActionOrderIconDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "PlayActionOrderIconDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetupActionOrderIconCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::SetupActionOrderIconCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetupActionOrderIconCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ConvertDiseaseToEffectSocket
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EDISEASE_TYPE           DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDEBUFF_ATTACHSOCKET_TYPENewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::ConvertDiseaseToEffectSocket(enum class EDISEASE_TYPE DiseaseType, enum class EDEBUFF_ATTACHSOCKET_TYPE* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ConvertDiseaseToEffectSocket");

	Params::ABattleCharacterBaseBP_C_ConvertDiseaseToEffectSocket_Params Parms{};

	Parms.DiseaseType = DiseaseType;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetShieldPointMax
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NShieldMax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::SetShieldPointMax(int32 NShieldMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetShieldPointMax");

	Params::ABattleCharacterBaseBP_C_SetShieldPointMax_Params Parms{};

	Parms.NShieldMax = NShieldMax;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckLastOrderInTurn
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::CheckLastOrderInTurn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CheckLastOrderInTurn");

	Params::ABattleCharacterBaseBP_C_CheckLastOrderInTurn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckFirstOrderInTurn
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::CheckFirstOrderInTurn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CheckFirstOrderInTurn");

	Params::ABattleCharacterBaseBP_C_CheckFirstOrderInTurn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetAnimationCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AKSCharacterBase*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AKSCharacterBase* ABattleCharacterBaseBP_C::GetAnimationCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetAnimationCharacter");

	Params::ABattleCharacterBaseBP_C_GetAnimationCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterEvation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetCharacterEvation(int32* Result, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetCharacterEvation");

	Params::ABattleCharacterBaseBP_C_GetCharacterEvation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterConcentrate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetCharacterConcentrate(int32* Result, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetCharacterConcentrate");

	Params::ABattleCharacterBaseBP_C_GetCharacterConcentrate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterAccuracy
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetCharacterAccuracy(int32* Result, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetCharacterAccuracy");

	Params::ABattleCharacterBaseBP_C_GetCharacterAccuracy_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterAgility
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetCharacterAgility(int32* Result, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetCharacterAgility");

	Params::ABattleCharacterBaseBP_C_GetCharacterAgility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterDefence
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetCharacterDefence(enum class EAILMENT_CALC_TYPE CalcType, int32* Result, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetCharacterDefence");

	Params::ABattleCharacterBaseBP_C_GetCharacterDefence_Params Parms{};

	Parms.CalcType = CalcType;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterAttack
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        DamageTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetCharacterAttack(enum class EAILMENT_CALC_TYPE CalcType, class ABattleCharacterBase* DamageTarget, int32* Result, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetCharacterAttack");

	Params::ABattleCharacterBaseBP_C_GetCharacterAttack_Params Parms{};

	Parms.CalcType = CalcType;
	Parms.DamageTarget = DamageTarget;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetPlayableCharacterID
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPlayableCharacterID    ECharaID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetPlayableCharacterID(enum class EPlayableCharacterID* ECharaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetPlayableCharacterID");

	Params::ABattleCharacterBaseBP_C_GetPlayableCharacterID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ECharaID != nullptr)
		*ECharaID = Parms.ECharaID;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterID
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              NCharaID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetCharacterID(int32* NCharaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetCharacterID");

	Params::ABattleCharacterBaseBP_C_GetCharacterID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NCharaID != nullptr)
		*NCharaID = Parms.NCharaID;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetAnimationActorForAttach
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AActor* ABattleCharacterBaseBP_C::GetAnimationActorForAttach()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetAnimationActorForAttach");

	Params::ABattleCharacterBaseBP_C_GetAnimationActorForAttach_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsCharacterEnemy
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::IsCharacterEnemy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "IsCharacterEnemy");

	Params::ABattleCharacterBaseBP_C_IsCharacterEnemy_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ResetWeaponItemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::ResetWeaponItemData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ResetWeaponItemData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Get Equipment Weapon Texture
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWEAPON_CATEGORY        WeaponCategory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWEAPON_STANCE          WeaponStance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsNPC                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  WeaponTexture                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Get_Equipment_Weapon_Texture(enum class EWEAPON_CATEGORY WeaponCategory, enum class EWEAPON_STANCE WeaponStance, bool IsNPC, class UTexture2D** WeaponTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Get Equipment Weapon Texture");

	Params::ABattleCharacterBaseBP_C_Get_Equipment_Weapon_Texture_Params Parms{};

	Parms.WeaponCategory = WeaponCategory;
	Parms.WeaponStance = WeaponStance;
	Parms.IsNPC = IsNPC;

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponTexture != nullptr)
		*WeaponTexture = Parms.WeaponTexture;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetWeaponItemData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWEAPON_CATEGORY        WeaponCategory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Bool                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   ItemData                                                         (Parm, OutParm)

void ABattleCharacterBaseBP_C::GetWeaponItemData(enum class EWEAPON_CATEGORY WeaponCategory, bool* Bool, struct FItemData* ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetWeaponItemData");

	Params::ABattleCharacterBaseBP_C_GetWeaponItemData_Params Parms{};

	Parms.WeaponCategory = WeaponCategory;

	UObject::ProcessEvent(Func, &Parms);

	if (Bool != nullptr)
		*Bool = Parms.Bool;

	if (ItemData != nullptr)
		*ItemData = std::move(Parms.ItemData);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.AddWeaponItemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWEAPON_CATEGORY        WeaponCategory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABattleCharacterBaseBP_C::AddWeaponItemData(enum class EWEAPON_CATEGORY WeaponCategory, const struct FItemData& ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "AddWeaponItemData");

	Params::ABattleCharacterBaseBP_C_AddWeaponItemData_Params Parms{};

	Parms.WeaponCategory = WeaponCategory;
	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsCharacterDead
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::IsCharacterDead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "IsCharacterDead");

	Params::ABattleCharacterBaseBP_C_IsCharacterDead_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetBoostPointMax
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NBoostMax                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::SetBoostPointMax(int32 NBoostMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetBoostPointMax");

	Params::ABattleCharacterBaseBP_C_SetBoostPointMax_Params Parms{};

	Parms.NBoostMax = NBoostMax;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.InitializeActionOrderData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleCharacterBaseBP_C::InitializeActionOrderData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "InitializeActionOrderData");

	Params::ABattleCharacterBaseBP_C_InitializeActionOrderData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterNPCFlag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               NPCFlag                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::GetCharacterNPCFlag(bool* NPCFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetCharacterNPCFlag");

	Params::ABattleCharacterBaseBP_C_GetCharacterNPCFlag_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NPCFlag != nullptr)
		*NPCFlag = Parms.NPCFlag;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.PlayEnemyBlink
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::PlayEnemyBlink()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "PlayEnemyBlink");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.OnPostAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::OnPostAction(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "OnPostAction");

	Params::ABattleCharacterBaseBP_C_OnPostAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.OrderCountControl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceNextOrder                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::OrderCountControl(bool ForceNextOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "OrderCountControl");

	Params::ABattleCharacterBaseBP_C_OrderCountControl_Params Parms{};

	Parms.ForceNextOrder = ForceNextOrder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetVisibleDiseaseEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SetVisibleDiseaseEffect(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetVisibleDiseaseEffect");

	Params::ABattleCharacterBaseBP_C_SetVisibleDiseaseEffect_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.RemoveBreakEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::RemoveBreakEffect(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "RemoveBreakEffect");

	Params::ABattleCharacterBaseBP_C_RemoveBreakEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetSupporterEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SetSupporterEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetSupporterEnable");

	Params::ABattleCharacterBaseBP_C_SetSupporterEnable_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.DestroyExCurseOfDeadEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::DestroyExCurseOfDeadEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "DestroyExCurseOfDeadEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetSettledStealItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Settled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SetSettledStealItem(bool Settled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetSettledStealItem");

	Params::ABattleCharacterBaseBP_C_SetSettledStealItem_Params Parms{};

	Parms.Settled = Settled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Get Replay Disease Mask OLD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              DiseaseMask                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Get_Replay_Disease_Mask_OLD(int32* DiseaseMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Get Replay Disease Mask OLD");

	Params::ABattleCharacterBaseBP_C_Get_Replay_Disease_Mask_OLD_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DiseaseMask != nullptr)
		*DiseaseMask = Parms.DiseaseMask;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetDebugDrawParameterPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetDebugDrawParameterPosition(struct FVector* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetDebugDrawParameterPosition");

	Params::ABattleCharacterBaseBP_C_GetDebugDrawParameterPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckEnableLastAct
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::CheckEnableLastAct(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CheckEnableLastAct");

	Params::ABattleCharacterBaseBP_C_CheckEnableLastAct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.On Post Remove Disease
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecDiseaseHandler         DiseaseData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// enum class EDISEASE_TYPE           DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::On_Post_Remove_Disease(const struct FExecDiseaseHandler& DiseaseData, enum class EDISEASE_TYPE DiseaseType, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "On Post Remove Disease");

	Params::ABattleCharacterBaseBP_C_On_Post_Remove_Disease_Params Parms{};

	Parms.DiseaseData = DiseaseData;
	Parms.DiseaseType = DiseaseType;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_GetSupportCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Count                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Debug_GetSupportCount(int32* Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug_GetSupportCount");

	Params::ABattleCharacterBaseBP_C_Debug_GetSupportCount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_GetSupportPoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Point                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Debug_GetSupportPoint(int32* Point)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug_GetSupportPoint");

	Params::ABattleCharacterBaseBP_C_Debug_GetSupportPoint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Point != nullptr)
		*Point = Parms.Point;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_GetMoney
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Money                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Debug_GetMoney(int32* Money)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug_GetMoney");

	Params::ABattleCharacterBaseBP_C_Debug_GetMoney_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Money != nullptr)
		*Money = Parms.Money;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_GetJobPoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              JobPoint                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Debug_GetJobPoint(int32* JobPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug_GetJobPoint");

	Params::ABattleCharacterBaseBP_C_Debug_GetJobPoint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (JobPoint != nullptr)
		*JobPoint = Parms.JobPoint;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_GetExp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Exp                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Debug_GetExp(int32* Exp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug_GetExp");

	Params::ABattleCharacterBaseBP_C_Debug_GetExp_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Exp != nullptr)
		*Exp = Parms.Exp;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetDamageForPoison
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_DAMAGE_TYPE     DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LastHit                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SetDamageForPoison(int32 DamageValue, enum class EBATTLE_DAMAGE_TYPE DamageType, bool LastHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetDamageForPoison");

	Params::ABattleCharacterBaseBP_C_SetDamageForPoison_Params Parms{};

	Parms.DamageValue = DamageValue;
	Parms.DamageType = DamageType;
	Parms.LastHit = LastHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.AddActionTurnCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::AddActionTurnCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "AddActionTurnCount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.RemoveDiseaseAllForHarden
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ExecRemove                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::RemoveDiseaseAllForHarden(bool* ExecRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "RemoveDiseaseAllForHarden");

	Params::ABattleCharacterBaseBP_C_RemoveDiseaseAllForHarden_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ExecRemove != nullptr)
		*ExecRemove = Parms.ExecRemove;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.RemoveDiseaseAllForStealth
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ExecRemove                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::RemoveDiseaseAllForStealth(bool* ExecRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "RemoveDiseaseAllForStealth");

	Params::ABattleCharacterBaseBP_C_RemoveDiseaseAllForStealth_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ExecRemove != nullptr)
		*ExecRemove = Parms.ExecRemove;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_GetUseAbilityList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                AbilityLabelList                                                 (Parm, OutParm)
// int32                              SelectIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Debug_GetUseAbilityList(TArray<class FText>* AbilityLabelList, int32* SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug_GetUseAbilityList");

	Params::ABattleCharacterBaseBP_C_Debug_GetUseAbilityList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AbilityLabelList != nullptr)
		*AbilityLabelList = std::move(Parms.AbilityLabelList);

	if (SelectIndex != nullptr)
		*SelectIndex = Parms.SelectIndex;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetFixedUseAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Debug_SetFixedUseAbility(class FName Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug_SetFixedUseAbility");

	Params::ABattleCharacterBaseBP_C_Debug_SetFixedUseAbility_Params Parms{};

	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ResumePermanentDisease
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::ResumePermanentDisease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ResumePermanentDisease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SavePermanentDisease
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::SavePermanentDisease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SavePermanentDisease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetBattleCharacterID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BattleCharacterID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::SetBattleCharacterID(int32 BattleCharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetBattleCharacterID");

	Params::ABattleCharacterBaseBP_C_SetBattleCharacterID_Params Parms{};

	Parms.BattleCharacterID = BattleCharacterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetBattleCharacterID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              BattleCharacterID                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetBattleCharacterID(int32* BattleCharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetBattleCharacterID");

	Params::ABattleCharacterBaseBP_C_GetBattleCharacterID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BattleCharacterID != nullptr)
		*BattleCharacterID = Parms.BattleCharacterID;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.AddExCurseOfDeadEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ColorType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::AddExCurseOfDeadEffect(int32 ColorType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "AddExCurseOfDeadEffect");

	Params::ABattleCharacterBaseBP_C_AddExCurseOfDeadEffect_Params Parms{};

	Parms.ColorType = ColorType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ResetDamageUICount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::ResetDamageUICount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ResetDamageUICount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.AddDamageUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::AddDamageUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "AddDamageUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.UpdateStatusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::UpdateStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "UpdateStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.UpdateDisease_ExCurseOfDead
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Remove                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::UpdateDisease_ExCurseOfDead(bool* Remove, float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "UpdateDisease_ExCurseOfDead");

	Params::ABattleCharacterBaseBP_C_UpdateDisease_ExCurseOfDead_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Remove != nullptr)
		*Remove = Parms.Remove;

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckEnableEscape
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::CheckEnableEscape(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CheckEnableEscape");

	Params::ABattleCharacterBaseBP_C_CheckEnableEscape_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckEnableCounter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AttackHit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::CheckEnableCounter(bool AttackHit, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CheckEnableCounter");

	Params::ABattleCharacterBaseBP_C_CheckEnableCounter_Params Parms{};

	Parms.AttackHit = AttackHit;

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckEnableHideOut
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::CheckEnableHideOut(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CheckEnableHideOut");

	Params::ABattleCharacterBaseBP_C_CheckEnableHideOut_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_EscapeFailed
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TurnSkip                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::ExecDisease_EscapeFailed(bool* TurnSkip, float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ExecDisease_EscapeFailed");

	Params::ABattleCharacterBaseBP_C_ExecDisease_EscapeFailed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TurnSkip != nullptr)
		*TurnSkip = Parms.TurnSkip;

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SearchWeaponAbilityUP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TotalInvocationValue                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Find                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SearchWeaponAbilityUP(int32* TotalInvocationValue, bool* Find)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SearchWeaponAbilityUP");

	Params::ABattleCharacterBaseBP_C_SearchWeaponAbilityUP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TotalInvocationValue != nullptr)
		*TotalInvocationValue = Parms.TotalInvocationValue;

	if (Find != nullptr)
		*Find = Parms.Find;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SearchMagicAbilityUP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EATTRIBUTE_TYPE         Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalInvocationValue                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Find                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SearchMagicAbilityUP(enum class EATTRIBUTE_TYPE Attribute, int32* TotalInvocationValue, bool* Find)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SearchMagicAbilityUP");

	Params::ABattleCharacterBaseBP_C_SearchMagicAbilityUP_Params Parms{};

	Parms.Attribute = Attribute;

	UObject::ProcessEvent(Func, &Parms);

	if (TotalInvocationValue != nullptr)
		*TotalInvocationValue = Parms.TotalInvocationValue;

	if (Find != nullptr)
		*Find = Parms.Find;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetSettledStealMoney
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Settled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SetSettledStealMoney(bool Settled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetSettledStealMoney");

	Params::ABattleCharacterBaseBP_C_SetSettledStealMoney_Params Parms{};

	Parms.Settled = Settled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.UpdateDisease_DragIn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Remove                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::UpdateDisease_DragIn(bool* Remove, float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "UpdateDisease_DragIn");

	Params::ABattleCharacterBaseBP_C_UpdateDisease_DragIn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Remove != nullptr)
		*Remove = Parms.Remove;

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetActionTurnCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ActionTurnCount                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetActionTurnCount(int32* ActionTurnCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetActionTurnCount");

	Params::ABattleCharacterBaseBP_C_GetActionTurnCount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ActionTurnCount != nullptr)
		*ActionTurnCount = Parms.ActionTurnCount;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetTotalBreakCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Count                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetTotalBreakCount(int32* Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetTotalBreakCount");

	Params::ABattleCharacterBaseBP_C_GetTotalBreakCount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetDamageHPMax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HPMinimum                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsRatio                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SetDamageHPMax(float Damage, int32 HPMinimum, bool IsRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetDamageHPMax");

	Params::ABattleCharacterBaseBP_C_SetDamageHPMax_Params Parms{};

	Parms.Damage = Damage;
	Parms.HPMinimum = HPMinimum;
	Parms.IsRatio = IsRatio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.OnPreRemoveDisease
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExecDiseaseHandler         DiseaseData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// enum class EDISEASE_TYPE           DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::OnPreRemoveDisease(const struct FExecDiseaseHandler& DiseaseData, enum class EDISEASE_TYPE DiseaseType, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "OnPreRemoveDisease");

	Params::ABattleCharacterBaseBP_C_OnPreRemoveDisease_Params Parms{};

	Parms.DiseaseData = DiseaseData;
	Parms.DiseaseType = DiseaseType;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_Stone
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TurnSkip                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::ExecDisease_Stone(bool* TurnSkip, float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ExecDisease_Stone");

	Params::ABattleCharacterBaseBP_C_ExecDisease_Stone_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TurnSkip != nullptr)
		*TurnSkip = Parms.TurnSkip;

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SearchMainWeaponAilment
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAILMENT_TYPE           AilmentType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAilment                    Ailment                                                          (Parm, OutParm, HasGetValueTypeHash)
// struct FAilmentHandler             AilmentHandler                                                   (Parm, OutParm, NoDestructor)
// bool                               Find                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SearchMainWeaponAilment(enum class EAILMENT_TYPE AilmentType, struct FAilment* Ailment, struct FAilmentHandler* AilmentHandler, bool* Find)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SearchMainWeaponAilment");

	Params::ABattleCharacterBaseBP_C_SearchMainWeaponAilment_Params Parms{};

	Parms.AilmentType = AilmentType;

	UObject::ProcessEvent(Func, &Parms);

	if (Ailment != nullptr)
		*Ailment = std::move(Parms.Ailment);

	if (AilmentHandler != nullptr)
		*AilmentHandler = std::move(Parms.AilmentHandler);

	if (Find != nullptr)
		*Find = Parms.Find;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.FinishDamageUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::FinishDamageUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "FinishDamageUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.EnemyEscape
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::EnemyEscape()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "EnemyEscape");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_Silence
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::ExecDisease_Silence(float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ExecDisease_Silence");

	Params::ABattleCharacterBaseBP_C_ExecDisease_Silence_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetRecoveryLevelRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LevelRatio                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BaseDEF                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetRecoveryLevelRatio(enum class EAILMENT_CALC_TYPE CalcType, float* LevelRatio, int32* BaseDEF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetRecoveryLevelRatio");

	Params::ABattleCharacterBaseBP_C_GetRecoveryLevelRatio_Params Parms{};

	Parms.CalcType = CalcType;

	UObject::ProcessEvent(Func, &Parms);

	if (LevelRatio != nullptr)
		*LevelRatio = Parms.LevelRatio;

	if (BaseDEF != nullptr)
		*BaseDEF = Parms.BaseDEF;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SearchDiseaseByCategory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDISEASE_CATEGORY       DiseaseCategory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FExecDiseaseHandler> ExecHandler                                                      (Parm, OutParm, ContainsInstancedReference)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SearchDiseaseByCategory(enum class EDISEASE_CATEGORY DiseaseCategory, TArray<struct FExecDiseaseHandler>* ExecHandler, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SearchDiseaseByCategory");

	Params::ABattleCharacterBaseBP_C_SearchDiseaseByCategory_Params Parms{};

	Parms.DiseaseCategory = DiseaseCategory;

	UObject::ProcessEvent(Func, &Parms);

	if (ExecHandler != nullptr)
		*ExecHandler = std::move(Parms.ExecHandler);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckDiseaseSuccess
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDisease                    DiseaseData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::CheckDiseaseSuccess(const struct FDisease& DiseaseData, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CheckDiseaseSuccess");

	Params::ABattleCharacterBaseBP_C_CheckDiseaseSuccess_Params Parms{};

	Parms.DiseaseData = DiseaseData;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetDamageLevelRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LevelRatio                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BaseATK                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetDamageLevelRatio(enum class EAILMENT_CALC_TYPE CalcType, float* LevelRatio, int32* BaseATK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetDamageLevelRatio");

	Params::ABattleCharacterBaseBP_C_GetDamageLevelRatio_Params Parms{};

	Parms.CalcType = CalcType;

	UObject::ProcessEvent(Func, &Parms);

	if (LevelRatio != nullptr)
		*LevelRatio = Parms.LevelRatio;

	if (BaseATK != nullptr)
		*BaseATK = Parms.BaseATK;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_OnDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::ExecDisease_OnDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ExecDisease_OnDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_Stun
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TurnSkip                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::ExecDisease_Stun(bool* TurnSkip, float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ExecDisease_Stun");

	Params::ABattleCharacterBaseBP_C_ExecDisease_Stun_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TurnSkip != nullptr)
		*TurnSkip = Parms.TurnSkip;

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_Fear
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::ExecDisease_Fear(float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ExecDisease_Fear");

	Params::ABattleCharacterBaseBP_C_ExecDisease_Fear_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetDebugTameRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              TameRate                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetDebugTameRate(float* TameRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetDebugTameRate");

	Params::ABattleCharacterBaseBP_C_GetDebugTameRate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TameRate != nullptr)
		*TameRate = Parms.TameRate;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.OnTakeDamageHP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWEAPON_CATEGORY        WeaponType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         AttributeType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAILMENT_CALC_TYPE_OLD  CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::OnTakeDamageHP(class ABattleCharacterBaseBP_C* Enforcer, int32 DamageValue, enum class EWEAPON_CATEGORY WeaponType, enum class EATTRIBUTE_TYPE AttributeType, enum class EAILMENT_CALC_TYPE_OLD CalcType, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "OnTakeDamageHP");

	Params::ABattleCharacterBaseBP_C_OnTakeDamageHP_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.DamageValue = DamageValue;
	Parms.WeaponType = WeaponType;
	Parms.AttributeType = AttributeType;
	Parms.CalcType = CalcType;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.InitializeMultiActionOrderData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::InitializeMultiActionOrderData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "InitializeMultiActionOrderData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Get Disease Effect Label
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDisease                    DiseaseData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Label                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SpawnGround                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseAttach                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ChargeAction                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::Get_Disease_Effect_Label(class ABattleCharacterBase* Target, const struct FDisease& DiseaseData, class FName* Label, bool* SpawnGround, bool* UseAttach, bool* ChargeAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Get Disease Effect Label");

	Params::ABattleCharacterBaseBP_C_Get_Disease_Effect_Label_Params Parms{};

	Parms.Target = Target;
	Parms.DiseaseData = DiseaseData;

	UObject::ProcessEvent(Func, &Parms);

	if (Label != nullptr)
		*Label = Parms.Label;

	if (SpawnGround != nullptr)
		*SpawnGround = Parms.SpawnGround;

	if (UseAttach != nullptr)
		*UseAttach = Parms.UseAttach;

	if (ChargeAction != nullptr)
		*ChargeAction = Parms.ChargeAction;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.NoticePlayActionCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionCommand                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::NoticePlayActionCommand(class FName ActionCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "NoticePlayActionCommand");

	Params::ABattleCharacterBaseBP_C_NoticePlayActionCommand_Params Parms{};

	Parms.ActionCommand = ActionCommand;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.RemoveDiseaseAll
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ExecRemove                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::RemoveDiseaseAll(bool* ExecRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "RemoveDiseaseAll");

	Params::ABattleCharacterBaseBP_C_RemoveDiseaseAll_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ExecRemove != nullptr)
		*ExecRemove = Parms.ExecRemove;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.RemoveDiseaseByCategory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDISEASE_CATEGORY       DiseaseCategory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceRemove                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ExecRemove                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::RemoveDiseaseByCategory(enum class EDISEASE_CATEGORY DiseaseCategory, bool ForceRemove, bool* ExecRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "RemoveDiseaseByCategory");

	Params::ABattleCharacterBaseBP_C_RemoveDiseaseByCategory_Params Parms{};

	Parms.DiseaseCategory = DiseaseCategory;
	Parms.ForceRemove = ForceRemove;

	UObject::ProcessEvent(Func, &Parms);

	if (ExecRemove != nullptr)
		*ExecRemove = Parms.ExecRemove;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_MPRegeneration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ExecRegeneration                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::ExecDisease_MPRegeneration(bool* ExecRegeneration, float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ExecDisease_MPRegeneration");

	Params::ABattleCharacterBaseBP_C_ExecDisease_MPRegeneration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ExecRegeneration != nullptr)
		*ExecRegeneration = Parms.ExecRegeneration;

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_HPRegeneration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ExecRegeneration                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::ExecDisease_HPRegeneration(bool* ExecRegeneration, float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ExecDisease_HPRegeneration");

	Params::ABattleCharacterBaseBP_C_ExecDisease_HPRegeneration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ExecRegeneration != nullptr)
		*ExecRegeneration = Parms.ExecRegeneration;

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_Poison
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ExecPoison                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::ExecDisease_Poison(bool* ExecPoison, float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ExecDisease_Poison");

	Params::ABattleCharacterBaseBP_C_ExecDisease_Poison_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ExecPoison != nullptr)
		*ExecPoison = Parms.ExecPoison;

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_Blind
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::ExecDisease_Blind(float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ExecDisease_Blind");

	Params::ABattleCharacterBaseBP_C_ExecDisease_Blind_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_Sleep
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TurnSkip                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::ExecDisease_Sleep(bool* TurnSkip, float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ExecDisease_Sleep");

	Params::ABattleCharacterBaseBP_C_ExecDisease_Sleep_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TurnSkip != nullptr)
		*TurnSkip = Parms.TurnSkip;

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.UpdateDiseaseCounter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDISEASE_TYPE           Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Remove                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::UpdateDiseaseCounter(enum class EDISEASE_TYPE Type, bool* Remove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "UpdateDiseaseCounter");

	Params::ABattleCharacterBaseBP_C_UpdateDiseaseCounter_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (Remove != nullptr)
		*Remove = Parms.Remove;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetInvadeData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FInvadeData                 EnemyData                                                        (Parm, OutParm)

void ABattleCharacterBaseBP_C::GetInvadeData(struct FInvadeData* EnemyData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetInvadeData");

	Params::ABattleCharacterBaseBP_C_GetInvadeData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EnemyData != nullptr)
		*EnemyData = std::move(Parms.EnemyData);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetEnemyData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FEnemyData                  EnemyData                                                        (Parm, OutParm, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetEnemyData(struct FEnemyData* EnemyData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetEnemyData");

	Params::ABattleCharacterBaseBP_C_GetEnemyData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EnemyData != nullptr)
		*EnemyData = std::move(Parms.EnemyData);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CalcMP_Ratio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MP_Ratio                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CalcMP                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::CalcMP_Ratio(int32 MP_Ratio, int32* CalcMP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CalcMP_Ratio");

	Params::ABattleCharacterBaseBP_C_CalcMP_Ratio_Params Parms{};

	Parms.MP_Ratio = MP_Ratio;

	UObject::ProcessEvent(Func, &Parms);

	if (CalcMP != nullptr)
		*CalcMP = Parms.CalcMP;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckNextBreakRestore
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Restore                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::CheckNextBreakRestore(bool* Restore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CheckNextBreakRestore");

	Params::ABattleCharacterBaseBP_C_CheckNextBreakRestore_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Restore != nullptr)
		*Restore = Parms.Restore;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CalcNextTurnWaitTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::CalcNextTurnWaitTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CalcNextTurnWaitTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CalcCurrentTurnWaitTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::CalcCurrentTurnWaitTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CalcCurrentTurnWaitTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.BeginAddBoostPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::BeginAddBoostPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "BeginAddBoostPoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCONDiseaseRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DiseaseRatio                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetCONDiseaseRatio(float* DiseaseRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetCONDiseaseRatio");

	Params::ABattleCharacterBaseBP_C_GetCONDiseaseRatio_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DiseaseRatio != nullptr)
		*DiseaseRatio = Parms.DiseaseRatio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetEVADiseaseRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DiseaseRatio                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetEVADiseaseRatio(float* DiseaseRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetEVADiseaseRatio");

	Params::ABattleCharacterBaseBP_C_GetEVADiseaseRatio_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DiseaseRatio != nullptr)
		*DiseaseRatio = Parms.DiseaseRatio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetACCDiseaseRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DiseaseRatio                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetACCDiseaseRatio(float* DiseaseRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetACCDiseaseRatio");

	Params::ABattleCharacterBaseBP_C_GetACCDiseaseRatio_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DiseaseRatio != nullptr)
		*DiseaseRatio = Parms.DiseaseRatio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_AGI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Debug_SetCharaParam_AGI(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug_SetCharaParam_AGI");

	Params::ABattleCharacterBaseBP_C_Debug_SetCharaParam_AGI_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_CON
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Debug_SetCharaParam_CON(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug_SetCharaParam_CON");

	Params::ABattleCharacterBaseBP_C_Debug_SetCharaParam_CON_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_EVA
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Debug_SetCharaParam_EVA(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug_SetCharaParam_EVA");

	Params::ABattleCharacterBaseBP_C_Debug_SetCharaParam_EVA_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_ACC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Debug_SetCharaParam_ACC(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug_SetCharaParam_ACC");

	Params::ABattleCharacterBaseBP_C_Debug_SetCharaParam_ACC_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_MDEF
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Debug_SetCharaParam_MDEF(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug_SetCharaParam_MDEF");

	Params::ABattleCharacterBaseBP_C_Debug_SetCharaParam_MDEF_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_MATK
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Debug_SetCharaParam_MATK(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug_SetCharaParam_MATK");

	Params::ABattleCharacterBaseBP_C_Debug_SetCharaParam_MATK_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_DEF
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Debug_SetCharaParam_DEF(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug_SetCharaParam_DEF");

	Params::ABattleCharacterBaseBP_C_Debug_SetCharaParam_DEF_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_ATK
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Debug_SetCharaParam_ATK(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug_SetCharaParam_ATK");

	Params::ABattleCharacterBaseBP_C_Debug_SetCharaParam_ATK_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_SPMAX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Debug_SetCharaParam_SPMAX(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug_SetCharaParam_SPMAX");

	Params::ABattleCharacterBaseBP_C_Debug_SetCharaParam_SPMAX_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_BPMAX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Debug_SetCharaParam_BPMAX(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug_SetCharaParam_BPMAX");

	Params::ABattleCharacterBaseBP_C_Debug_SetCharaParam_BPMAX_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_SP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Debug_SetCharaParam_SP(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug_SetCharaParam_SP");

	Params::ABattleCharacterBaseBP_C_Debug_SetCharaParam_SP_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Debug_SetCharaParam_BP(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug_SetCharaParam_BP");

	Params::ABattleCharacterBaseBP_C_Debug_SetCharaParam_BP_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_MPMAX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Debug_SetCharaParam_MPMAX(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug_SetCharaParam_MPMAX");

	Params::ABattleCharacterBaseBP_C_Debug_SetCharaParam_MPMAX_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_HPMAX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Debug_SetCharaParam_HPMAX(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug_SetCharaParam_HPMAX");

	Params::ABattleCharacterBaseBP_C_Debug_SetCharaParam_HPMAX_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_MP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Debug_SetCharaParam_MP(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug_SetCharaParam_MP");

	Params::ABattleCharacterBaseBP_C_Debug_SetCharaParam_MP_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_HP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::Debug_SetCharaParam_HP(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Debug_SetCharaParam_HP");

	Params::ABattleCharacterBaseBP_C_Debug_SetCharaParam_HP_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.HideStatusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::HideStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "HideStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ResumeStatusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::ResumeStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ResumeStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetGuardEffectPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetGuardEffectPosition(struct FVector* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetGuardEffectPosition");

	Params::ABattleCharacterBaseBP_C_GetGuardEffectPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetDamageUIPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              RevisionCount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     WorldPos                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetDamageUIPosition(int32 RevisionCount, struct FVector* WorldPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetDamageUIPosition");

	Params::ABattleCharacterBaseBP_C_GetDamageUIPosition_Params Parms{};

	Parms.RevisionCount = RevisionCount;

	UObject::ProcessEvent(Func, &Parms);

	if (WorldPos != nullptr)
		*WorldPos = std::move(Parms.WorldPos);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.PlayCharacterAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterAction      ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::PlayCharacterAction(enum class EKSCharacterAction ActionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "PlayCharacterAction");

	Params::ABattleCharacterBaseBP_C_PlayCharacterAction_Params Parms{};

	Parms.ActionType = ActionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetBreakPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::SetBreakPoint(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetBreakPoint");

	Params::ABattleCharacterBaseBP_C_SetBreakPoint_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetTakeDamageDiseaseRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageRatio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetTakeDamageDiseaseRatio(enum class EAILMENT_CALC_TYPE CalcType, enum class EATTRIBUTE_TYPE Attribute, float* DamageRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetTakeDamageDiseaseRatio");

	Params::ABattleCharacterBaseBP_C_GetTakeDamageDiseaseRatio_Params Parms{};

	Parms.CalcType = CalcType;
	Parms.Attribute = Attribute;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageRatio != nullptr)
		*DamageRatio = Parms.DamageRatio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetOnHitDamageDiseaseRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleCharacterBaseBP_C*    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsBoost                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsConvergence                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWEAPON_CATEGORY        Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EABILITY_TYPE           AbilityType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCompensation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsCritical                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActionCommandBase*          ActionCommand                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DiseaseRatio                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetOnHitDamageDiseaseRatio(class ABattleCharacterBaseBP_C* Target, bool IsBoost, bool IsConvergence, enum class EAILMENT_CALC_TYPE CalcType, enum class EWEAPON_CATEGORY Weapon, enum class EATTRIBUTE_TYPE Attribute, enum class EABILITY_TYPE AbilityType, bool IsCompensation, bool IsCritical, class AActionCommandBase* ActionCommand, float* DiseaseRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetOnHitDamageDiseaseRatio");

	Params::ABattleCharacterBaseBP_C_GetOnHitDamageDiseaseRatio_Params Parms{};

	Parms.Target = Target;
	Parms.IsBoost = IsBoost;
	Parms.IsConvergence = IsConvergence;
	Parms.CalcType = CalcType;
	Parms.Weapon = Weapon;
	Parms.Attribute = Attribute;
	Parms.AbilityType = AbilityType;
	Parms.IsCompensation = IsCompensation;
	Parms.IsCritical = IsCritical;
	Parms.ActionCommand = ActionCommand;

	UObject::ProcessEvent(Func, &Parms);

	if (DiseaseRatio != nullptr)
		*DiseaseRatio = Parms.DiseaseRatio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetDamage_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::SetDamage_BP(int32 DamageValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetDamage_BP");

	Params::ABattleCharacterBaseBP_C_SetDamage_BP_Params Parms{};

	Parms.DamageValue = DamageValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetDamage_MP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::SetDamage_MP(int32 DamageValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetDamage_MP");

	Params::ABattleCharacterBaseBP_C_SetDamage_MP_Params Parms{};

	Parms.DamageValue = DamageValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterNameID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        TextID                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetCharacterNameID(class FName* TextID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetCharacterNameID");

	Params::ABattleCharacterBaseBP_C_GetCharacterNameID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TextID != nullptr)
		*TextID = Parms.TextID;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetAnalyze
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AnalyzeEnable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SetAnalyze(bool AnalyzeEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetAnalyze");

	Params::ABattleCharacterBaseBP_C_SetAnalyze_Params Parms{};

	Parms.AnalyzeEnable = AnalyzeEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetAGIDiseaseRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DiseaseRatio                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetAGIDiseaseRatio(float* DiseaseRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetAGIDiseaseRatio");

	Params::ABattleCharacterBaseBP_C_GetAGIDiseaseRatio_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DiseaseRatio != nullptr)
		*DiseaseRatio = Parms.DiseaseRatio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.UpdateDiseaseTurnCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::UpdateDiseaseTurnCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "UpdateDiseaseTurnCount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ClearCoverCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::ClearCoverCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ClearCoverCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.AddCoverCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    CoverCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::AddCoverCharacter(class ABattleCharacterBaseBP_C* CoverCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "AddCoverCharacter");

	Params::ABattleCharacterBaseBP_C_AddCoverCharacter_Params Parms{};

	Parms.CoverCharacter = CoverCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.EndActionCovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    EndCoverCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::EndActionCovered(class ABattleCharacterBaseBP_C* EndCoverCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "EndActionCovered");

	Params::ABattleCharacterBaseBP_C_EndActionCovered_Params Parms{};

	Parms.EndCoverCharacter = EndCoverCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.StartActionCovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    CoveredCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::StartActionCovered(class ABattleCharacterBaseBP_C* CoveredCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "StartActionCovered");

	Params::ABattleCharacterBaseBP_C_StartActionCovered_Params Parms{};

	Parms.CoveredCharacter = CoveredCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetCoverTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    CoverTarget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::SetCoverTarget(class ABattleCharacterBaseBP_C* CoverTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetCoverTarget");

	Params::ABattleCharacterBaseBP_C_SetCoverTarget_Params Parms{};

	Parms.CoverTarget = CoverTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCoveredCharacter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    CoverdCharacter                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCoverd                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::GetCoveredCharacter(class ABattleCharacterBaseBP_C** CoverdCharacter, bool* IsCoverd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetCoveredCharacter");

	Params::ABattleCharacterBaseBP_C_GetCoveredCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CoverdCharacter != nullptr)
		*CoverdCharacter = Parms.CoverdCharacter;

	if (IsCoverd != nullptr)
		*IsCoverd = Parms.IsCoverd;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetSupporter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleSupporterBP_C*        Supporter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::SetSupporter(class ABattleSupporterBP_C* Supporter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetSupporter");

	Params::ABattleCharacterBaseBP_C_SetSupporter_Params Parms{};

	Parms.Supporter = Supporter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.JudgeCover
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::JudgeCover(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "JudgeCover");

	Params::ABattleCharacterBaseBP_C_JudgeCover_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetCoverEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SetCoverEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetCoverEnable");

	Params::ABattleCharacterBaseBP_C_SetCoverEnable_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CoverStepOutForRandom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::CoverStepOutForRandom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CoverStepOutForRandom");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.RemoveDisease
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDISEASE_TYPE           DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceRemove                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ExecRemove                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::RemoveDisease(enum class EDISEASE_TYPE DiseaseType, bool ForceRemove, bool* ExecRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "RemoveDisease");

	Params::ABattleCharacterBaseBP_C_RemoveDisease_Params Parms{};

	Parms.DiseaseType = DiseaseType;
	Parms.ForceRemove = ForceRemove;

	UObject::ProcessEvent(Func, &Parms);

	if (ExecRemove != nullptr)
		*ExecRemove = Parms.ExecRemove;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.BeginBattleTurn
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::BeginBattleTurn(float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "BeginBattleTurn");

	Params::ABattleCharacterBaseBP_C_BeginBattleTurn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.HoldBoostPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Point                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::HoldBoostPoint(int32 Point)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "HoldBoostPoint");

	Params::ABattleCharacterBaseBP_C_HoldBoostPoint_Params Parms{};

	Parms.Point = Point;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.PlayBattleAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_ACTION_TYPE     ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::PlayBattleAction(enum class EBATTLE_ACTION_TYPE ActionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "PlayBattleAction");

	Params::ABattleCharacterBaseBP_C_PlayBattleAction_Params Parms{};

	Parms.ActionType = ActionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetMDEFDiseaseRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DiseaseRatio                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetMDEFDiseaseRatio(float* DiseaseRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetMDEFDiseaseRatio");

	Params::ABattleCharacterBaseBP_C_GetMDEFDiseaseRatio_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DiseaseRatio != nullptr)
		*DiseaseRatio = Parms.DiseaseRatio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetDEFDiseaseRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DiseaseRatio                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetDEFDiseaseRatio(float* DiseaseRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetDEFDiseaseRatio");

	Params::ABattleCharacterBaseBP_C_GetDEFDiseaseRatio_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DiseaseRatio != nullptr)
		*DiseaseRatio = Parms.DiseaseRatio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetUseItemRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetUseItemRatio(float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetUseItemRatio");

	Params::ABattleCharacterBaseBP_C_GetUseItemRatio_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetAgilityOld
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Agility                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetAgilityOld(int32* Agility, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetAgilityOld");

	Params::ABattleCharacterBaseBP_C_GetAgilityOld_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Agility != nullptr)
		*Agility = Parms.Agility;

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetSupporter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleSupporterBP_C*        Supporter                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSupporter                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::GetSupporter(class ABattleSupporterBP_C** Supporter, bool* IsSupporter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetSupporter");

	Params::ABattleCharacterBaseBP_C_GetSupporter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Supporter != nullptr)
		*Supporter = Parms.Supporter;

	if (IsSupporter != nullptr)
		*IsSupporter = Parms.IsSupporter;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetBattleAI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_BattleAI_Base_C*         BattleAI                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetBattleAI(class UBP_BattleAI_Base_C** BattleAI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetBattleAI");

	Params::ABattleCharacterBaseBP_C_GetBattleAI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BattleAI != nullptr)
		*BattleAI = Parms.BattleAI;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CoverStepOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::CoverStepOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CoverStepOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CoverStepInForRandom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::CoverStepInForRandom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CoverStepInForRandom");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CoverStepIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::CoverStepIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CoverStepIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCoverEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::GetCoverEnable(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetCoverEnable");

	Params::ABattleCharacterBaseBP_C_GetCoverEnable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetTargetSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SetTargetSelect(bool Select)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetTargetSelect");

	Params::ABattleCharacterBaseBP_C_SetTargetSelect_Params Parms{};

	Parms.Select = Select;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterActiveIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*                  OrderIcon                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  FrontIcon                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   IconUV                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   PixelScale                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CharaOffset                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CharaScale                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InvertX                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  WeaponIcon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CharaFootPivot                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetCharacterActiveIcon(class UTexture2D** OrderIcon, class UTexture2D** FrontIcon, struct FVector2D* IconUV, struct FVector2D* PixelScale, struct FVector2D* CharaOffset, float* CharaScale, float* InvertX, class UTexture2D** WeaponIcon, struct FVector2D* CharaFootPivot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetCharacterActiveIcon");

	Params::ABattleCharacterBaseBP_C_GetCharacterActiveIcon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OrderIcon != nullptr)
		*OrderIcon = Parms.OrderIcon;

	if (FrontIcon != nullptr)
		*FrontIcon = Parms.FrontIcon;

	if (IconUV != nullptr)
		*IconUV = std::move(Parms.IconUV);

	if (PixelScale != nullptr)
		*PixelScale = std::move(Parms.PixelScale);

	if (CharaOffset != nullptr)
		*CharaOffset = std::move(Parms.CharaOffset);

	if (CharaScale != nullptr)
		*CharaScale = Parms.CharaScale;

	if (InvertX != nullptr)
		*InvertX = Parms.InvertX;

	if (WeaponIcon != nullptr)
		*WeaponIcon = Parms.WeaponIcon;

	if (CharaFootPivot != nullptr)
		*CharaFootPivot = std::move(Parms.CharaFootPivot);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterOrderIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*                  OrderIcon                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   IconUV                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   PixelScale                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CharaOffset                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Scale                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InvertX                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CharaFootPivot                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CharacterSwitch                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::GetCharacterOrderIcon(class UTexture2D** OrderIcon, struct FVector2D* IconUV, struct FVector2D* PixelScale, struct FVector2D* CharaOffset, float* Scale, float* InvertX, struct FVector2D* CharaFootPivot, bool* CharacterSwitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetCharacterOrderIcon");

	Params::ABattleCharacterBaseBP_C_GetCharacterOrderIcon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OrderIcon != nullptr)
		*OrderIcon = Parms.OrderIcon;

	if (IconUV != nullptr)
		*IconUV = std::move(Parms.IconUV);

	if (PixelScale != nullptr)
		*PixelScale = std::move(Parms.PixelScale);

	if (CharaOffset != nullptr)
		*CharaOffset = std::move(Parms.CharaOffset);

	if (Scale != nullptr)
		*Scale = Parms.Scale;

	if (InvertX != nullptr)
		*InvertX = Parms.InvertX;

	if (CharaFootPivot != nullptr)
		*CharaFootPivot = std::move(Parms.CharaFootPivot);

	if (CharacterSwitch != nullptr)
		*CharacterSwitch = Parms.CharacterSwitch;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CommandPreview
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>                       AttributeList                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABattleCharacterBaseBP_C::CommandPreview(class ABattleCharacterBaseBP_C* Enforcer, TArray<bool>& AttributeList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CommandPreview");

	Params::ABattleCharacterBaseBP_C_CommandPreview_Params Parms{};

	Parms.Enforcer = Enforcer;
	Parms.AttributeList = AttributeList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetWeakVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWEAPON_CATEGORY        Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EATTRIBUTE_TYPE         Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CheckGroup                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SetWeakVisible(enum class EWEAPON_CATEGORY Weapon, enum class EATTRIBUTE_TYPE Attribute, bool CheckGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetWeakVisible");

	Params::ABattleCharacterBaseBP_C_SetWeakVisible_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.Attribute = Attribute;
	Parms.CheckGroup = CheckGroup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetWeaponRegist_OLD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWEAPON_CATEGORY        AttackWeapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CheckWeakLock                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EATTRIBUTE_RESIST       AttributeResist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetWeaponRegist_OLD(enum class EWEAPON_CATEGORY AttackWeapon, bool CheckWeakLock, enum class EATTRIBUTE_RESIST* AttributeResist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetWeaponRegist_OLD");

	Params::ABattleCharacterBaseBP_C_GetWeaponRegist_OLD_Params Parms{};

	Parms.AttackWeapon = AttackWeapon;
	Parms.CheckWeakLock = CheckWeakLock;

	UObject::ProcessEvent(Func, &Parms);

	if (AttributeResist != nullptr)
		*AttributeResist = Parms.AttributeResist;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.UpdateBreakCounter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Restore                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::UpdateBreakCounter(bool* Restore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "UpdateBreakCounter");

	Params::ABattleCharacterBaseBP_C_UpdateBreakCounter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Restore != nullptr)
		*Restore = Parms.Restore;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SearchDisease
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDISEASE_TYPE           DiseaseType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FExecDiseaseHandler         ExecHandler                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SearchDisease(enum class EDISEASE_TYPE DiseaseType, struct FExecDiseaseHandler* ExecHandler, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SearchDisease");

	Params::ABattleCharacterBaseBP_C_SearchDisease_Params Parms{};

	Parms.DiseaseType = DiseaseType;

	UObject::ProcessEvent(Func, &Parms);

	if (ExecHandler != nullptr)
		*ExecHandler = std::move(Parms.ExecHandler);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.AddDisease
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDiseaseHandler             AddDiseaseHandler                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBaseBP_C*    Enforcer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BoostLv                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AddRandomTurn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDISEASE_TYPE           AddType                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::AddDisease(const struct FDiseaseHandler& AddDiseaseHandler, class ABattleCharacterBaseBP_C* Enforcer, int32 BoostLv, int32 AddRandomTurn, bool* Success, enum class EDISEASE_TYPE* AddType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "AddDisease");

	Params::ABattleCharacterBaseBP_C_AddDisease_Params Parms{};

	Parms.AddDiseaseHandler = AddDiseaseHandler;
	Parms.Enforcer = Enforcer;
	Parms.BoostLv = BoostLv;
	Parms.AddRandomTurn = AddRandomTurn;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (AddType != nullptr)
		*AddType = Parms.AddType;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckBoostMax
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               BoostMax                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::CheckBoostMax(bool* BoostMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CheckBoostMax");

	Params::ABattleCharacterBaseBP_C_CheckBoostMax_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BoostMax != nullptr)
		*BoostMax = Parms.BoostMax;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetEvasionOld
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Evasion                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetEvasionOld(int32* Evasion, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetEvasionOld");

	Params::ABattleCharacterBaseBP_C_GetEvasionOld_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Evasion != nullptr)
		*Evasion = Parms.Evasion;

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetAccuracyOld
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Accuracy                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetAccuracyOld(int32* Accuracy, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetAccuracyOld");

	Params::ABattleCharacterBaseBP_C_GetAccuracyOld_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Accuracy != nullptr)
		*Accuracy = Parms.Accuracy;

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetConcentrateOld
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Concentrate                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetConcentrateOld(int32* Concentrate, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetConcentrateOld");

	Params::ABattleCharacterBaseBP_C_GetConcentrateOld_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Concentrate != nullptr)
		*Concentrate = Parms.Concentrate;

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.UpdateBreakGaugeUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::UpdateBreakGaugeUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "UpdateBreakGaugeUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.UpdateBoostGaugeUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::UpdateBoostGaugeUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "UpdateBoostGaugeUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetBreakPointDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Break                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SetBreakPointDamage(int32 DamageValue, bool* Break)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetBreakPointDamage");

	Params::ABattleCharacterBaseBP_C_SetBreakPointDamage_Params Parms{};

	Parms.DamageValue = DamageValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Break != nullptr)
		*Break = Parms.Break;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ResetBreakPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::ResetBreakPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ResetBreakPoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SubBreakPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SubValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::SubBreakPoint(int32 SubValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SubBreakPoint");

	Params::ABattleCharacterBaseBP_C_SubBreakPoint_Params Parms{};

	Parms.SubValue = SubValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.AddBreakPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AddValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::AddBreakPoint(int32 AddValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "AddBreakPoint");

	Params::ABattleCharacterBaseBP_C_AddBreakPoint_Params Parms{};

	Parms.AddValue = AddValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetBoostPoint_OLD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Use                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SetBoostPoint_OLD(int32 Value, bool Use)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetBoostPoint_OLD");

	Params::ABattleCharacterBaseBP_C_SetBoostPoint_OLD_Params Parms{};

	Parms.Value = Value;
	Parms.Use = Use;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetFullBoostPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::SetFullBoostPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetFullBoostPoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SubBoostPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SubValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Use                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SubBoostPoint(int32 SubValue, bool Use)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SubBoostPoint");

	Params::ABattleCharacterBaseBP_C_SubBoostPoint_Params Parms{};

	Parms.SubValue = SubValue;
	Parms.Use = Use;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.AddBoostPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AddValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::AddBoostPoint(int32 AddValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "AddBoostPoint");

	Params::ABattleCharacterBaseBP_C_AddBoostPoint_Params Parms{};

	Parms.AddValue = AddValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.InitBreakPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BreakMax                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::InitBreakPoint(int32 BreakMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "InitBreakPoint");

	Params::ABattleCharacterBaseBP_C_InitBreakPoint_Params Parms{};

	Parms.BreakMax = BreakMax;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.InitBoostPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InitPoint                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BoostMax                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::InitBoostPoint(int32 InitPoint, int32 BoostMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "InitBoostPoint");

	Params::ABattleCharacterBaseBP_C_InitBoostPoint_Params Parms{};

	Parms.InitPoint = InitPoint;
	Parms.BoostMax = BoostMax;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetRowID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::SetRowID(class FName RowId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetRowID");

	Params::ABattleCharacterBaseBP_C_SetRowID_Params Parms{};

	Parms.RowId = RowId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetRowID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        RowId                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetRowID(class FName* RowId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetRowID");

	Params::ABattleCharacterBaseBP_C_GetRowID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RowId != nullptr)
		*RowId = Parms.RowId;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetEffectSpawnPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Ground                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetEffectSpawnPosition(bool Ground, struct FVector* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetEffectSpawnPosition");

	Params::ABattleCharacterBaseBP_C_GetEffectSpawnPosition_Params Parms{};

	Parms.Ground = Ground;

	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetMP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewMP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverHeal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CurrentMP                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::SetMP(int32 NewMP, bool bOverHeal, int32* CurrentMP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetMP");

	Params::ABattleCharacterBaseBP_C_SetMP_Params Parms{};

	Parms.NewMP = NewMP;
	Parms.bOverHeal = bOverHeal;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentMP != nullptr)
		*CurrentMP = Parms.CurrentMP;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetHP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewHP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverHeal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CurrentHP                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::SetHP(int32 NewHP, bool bOverHeal, int32* CurrentHP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetHP");

	Params::ABattleCharacterBaseBP_C_SetHP_Params Parms{};

	Parms.NewHP = NewHP;
	Parms.bOverHeal = bOverHeal;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentHP != nullptr)
		*CurrentHP = Parms.CurrentHP;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.PlayDamageUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_DAMAGE_TYPE     DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::PlayDamageUI(int32 DamageValue, enum class EBATTLE_DAMAGE_TYPE DamageType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "PlayDamageUI");

	Params::ABattleCharacterBaseBP_C_PlayDamageUI_Params Parms{};

	Parms.DamageValue = DamageValue;
	Parms.DamageType = DamageType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.PlayMissUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::PlayMissUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "PlayMissUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetMATKDiseaseRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DiseaseRatio                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetMATKDiseaseRatio(float* DiseaseRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetMATKDiseaseRatio");

	Params::ABattleCharacterBaseBP_C_GetMATKDiseaseRatio_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DiseaseRatio != nullptr)
		*DiseaseRatio = Parms.DiseaseRatio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.UpdateSideCharacterUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::UpdateSideCharacterUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "UpdateSideCharacterUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetupWaitTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::SetupWaitTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetupWaitTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetATKDiseaseRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DiseaseRatio                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetATKDiseaseRatio(float* DiseaseRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetATKDiseaseRatio");

	Params::ABattleCharacterBaseBP_C_GetATKDiseaseRatio_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DiseaseRatio != nullptr)
		*DiseaseRatio = Parms.DiseaseRatio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Update Animation State OLD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::Update_Animation_State_OLD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Update Animation State OLD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetEnemyKindRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              WeaponType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CompatibleRatio                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetEnemyKindRate(int32 WeaponType, float* CompatibleRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetEnemyKindRate");

	Params::ABattleCharacterBaseBP_C_GetEnemyKindRate_Params Parms{};

	Parms.WeaponType = WeaponType;

	UObject::ProcessEvent(Func, &Parms);

	if (CompatibleRatio != nullptr)
		*CompatibleRatio = Parms.CompatibleRatio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetAttributeResist_OLD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EATTRIBUTE_TYPE         AttackAttribute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CheckWeakLock                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EATTRIBUTE_RESIST       AttributeResist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetAttributeResist_OLD(enum class EATTRIBUTE_TYPE AttackAttribute, bool CheckWeakLock, enum class EATTRIBUTE_RESIST* AttributeResist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetAttributeResist_OLD");

	Params::ABattleCharacterBaseBP_C_GetAttributeResist_OLD_Params Parms{};

	Parms.AttackAttribute = AttackAttribute;
	Parms.CheckWeakLock = CheckWeakLock;

	UObject::ProcessEvent(Func, &Parms);

	if (AttributeResist != nullptr)
		*AttributeResist = Parms.AttributeResist;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterDefenseOld
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_CALC_TYPE      CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetCharacterDefenseOld(enum class EAILMENT_CALC_TYPE CalcType, int32* Result, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetCharacterDefenseOld");

	Params::ABattleCharacterBaseBP_C_GetCharacterDefenseOld_Params Parms{};

	Parms.CalcType = CalcType;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterAttackOld
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAILMENT_CALC_TYPE_OLD  CalcType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        DamageTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ratio                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetCharacterAttackOld(enum class EAILMENT_CALC_TYPE_OLD CalcType, class ABattleCharacterBase* DamageTarget, int32* Result, float* Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetCharacterAttackOld");

	Params::ABattleCharacterBaseBP_C_GetCharacterAttackOld_Params Parms{};

	Parms.CalcType = CalcType;
	Parms.DamageTarget = DamageTarget;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Ratio != nullptr)
		*Ratio = Parms.Ratio;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetBattleParameter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FCharacterParam             Param                                                            (Parm, OutParm, NoDestructor)

void ABattleCharacterBaseBP_C::GetBattleParameter(struct FCharacterParam* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetBattleParameter");

	Params::ABattleCharacterBaseBP_C_GetBattleParameter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = std::move(Parms.Param);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsPlayingMove
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Moved                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::IsPlayingMove(bool* Moved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "IsPlayingMove");

	Params::ABattleCharacterBaseBP_C_IsPlayingMove_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Moved != nullptr)
		*Moved = Parms.Moved;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckMP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              UseMP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::CheckMP(int32 UseMP, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CheckMP");

	Params::ABattleCharacterBaseBP_C_CheckMP_Params Parms{};

	Parms.UseMP = UseMP;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.UseMP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              UseMP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::UseMP(int32 UseMP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "UseMP");

	Params::ABattleCharacterBaseBP_C_UseMP_Params Parms{};

	Parms.UseMP = UseMP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetSelectMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SetSelectMaterial(bool Select)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetSelectMaterial");

	Params::ABattleCharacterBaseBP_C_SetSelectMaterial_Params Parms{};

	Parms.Select = Select;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsGuard
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              GuardRatio                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GuardEnable                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::IsGuard(int32* GuardRatio, bool* GuardEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "IsGuard");

	Params::ABattleCharacterBaseBP_C_IsGuard_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GuardRatio != nullptr)
		*GuardRatio = Parms.GuardRatio;

	if (GuardEnable != nullptr)
		*GuardEnable = Parms.GuardEnable;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetGuard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               GuardEnable                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SetGuard(bool GuardEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetGuard");

	Params::ABattleCharacterBaseBP_C_SetGuard_Params Parms{};

	Parms.GuardEnable = GuardEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CreateAnimCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::CreateAnimCharacter(class FName ActionLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CreateAnimCharacter");

	Params::ABattleCharacterBaseBP_C_CreateAnimCharacter_Params Parms{};

	Parms.ActionLabel = ActionLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.BeginCharacterTurn_OLD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WaitTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::BeginCharacterTurn_OLD(float* WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "BeginCharacterTurn_OLD");

	Params::ABattleCharacterBaseBP_C_BeginCharacterTurn_OLD_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WaitTime != nullptr)
		*WaitTime = Parms.WaitTime;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_DAMAGE_TYPE     DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LastHit                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               InstantDeath                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SetDamage(int32 DamageValue, enum class EBATTLE_DAMAGE_TYPE DamageType, bool LastHit, bool InstantDeath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetDamage");

	Params::ABattleCharacterBaseBP_C_SetDamage_Params Parms{};

	Parms.DamageValue = DamageValue;
	Parms.DamageType = DamageType;
	Parms.LastHit = LastHit;
	Parms.InstantDeath = InstantDeath;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.EndStatusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::EndStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "EndStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.BeginStatusUI
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::BeginStatusUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "BeginStatusUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetMP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              MP                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MPMax                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetMP(int32* MP, int32* MPMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetMP");

	Params::ABattleCharacterBaseBP_C_GetMP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MP != nullptr)
		*MP = Parms.MP;

	if (MPMax != nullptr)
		*MPMax = Parms.MPMax;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetHP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              HP                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HPMax                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::GetHP(int32* HP, int32* HPMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "GetHP");

	Params::ABattleCharacterBaseBP_C_GetHP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HP != nullptr)
		*HP = Parms.HP;

	if (HPMax != nullptr)
		*HPMax = Parms.HPMax;

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Anim_StepIn__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::Anim_StepIn__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Anim_StepIn__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Anim_StepIn__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::Anim_StepIn__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Anim_StepIn__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Anim_StepOut__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::Anim_StepOut__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Anim_StepOut__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Anim_StepOut__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::Anim_StepOut__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "Anim_StepOut__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ForceMovementTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::ForceMovementTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ForceMovementTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ForceMovementTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::ForceMovementTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ForceMovementTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.PlayHideoutAction__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::PlayHideoutAction__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "PlayHideoutAction__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.PlayHideoutAction__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::PlayHideoutAction__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "PlayHideoutAction__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.OnLoaded_2D59B0DC4715851A30B6B3BCB5715B51
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::OnLoaded_2D59B0DC4715851A30B6B3BCB5715B51(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "OnLoaded_2D59B0DC4715851A30B6B3BCB5715B51");

	Params::ABattleCharacterBaseBP_C_OnLoaded_2D59B0DC4715851A30B6B3BCB5715B51_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.StepIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::StepIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "StepIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.StepOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::StepOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "StepOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ReceiveTick");

	Params::ABattleCharacterBaseBP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.FinishStepOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::FinishStepOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "FinishStepOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.PlayEvasionAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHideOut                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::PlayEvasionAction(bool IsHideOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "PlayEvasionAction");

	Params::ABattleCharacterBaseBP_C_PlayEvasionAction_Params Parms{};

	Parms.IsHideOut = IsHideOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetCharaTransform
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CTransform                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SetCharaTransform(const struct FTransform& CTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetCharaTransform");

	Params::ABattleCharacterBaseBP_C_SetCharaTransform_Params Parms{};

	Parms.CTransform = CTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetupBaseTransform
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_CHARA_POSITION_RESET_TYPEEResetType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bEnableDeadCharacterControl                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SetupBaseTransform(enum class EBATTLE_CHARA_POSITION_RESET_TYPE EResetType, bool bEnableDeadCharacterControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetupBaseTransform");

	Params::ABattleCharacterBaseBP_C_SetupBaseTransform_Params Parms{};

	Parms.EResetType = EResetType;
	Parms.bEnableDeadCharacterControl = bEnableDeadCharacterControl;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CreateBattleAI
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UBattleAIBase> CBattleAIClass                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
// bool                               bAutoInitialize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::CreateBattleAI(TSoftClassPtr<class UBattleAIBase>& CBattleAIClass, bool bAutoInitialize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CreateBattleAI");

	Params::ABattleCharacterBaseBP_C_CreateBattleAI_Params Parms{};

	Parms.CBattleAIClass = CBattleAIClass;
	Parms.bAutoInitialize = bAutoInitialize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.OnFinish_CreateBattleAI
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::OnFinish_CreateBattleAI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "OnFinish_CreateBattleAI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CreateBattleEffectSocket
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     VEffectOffset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::CreateBattleEffectSocket(const struct FVector& VEffectOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "CreateBattleEffectSocket");

	Params::ABattleCharacterBaseBP_C_CreateBattleEffectSocket_Params Parms{};

	Parms.VEffectOffset = VEffectOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetCanoeTransform
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CTransform                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SetCanoeTransform(const struct FTransform& CTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetCanoeTransform");

	Params::ABattleCharacterBaseBP_C_SetCanoeTransform_Params Parms{};

	Parms.CTransform = CTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ResetCanoeTransform
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::ResetCanoeTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ResetCanoeTransform");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetCharacterOpacity
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FOpacity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::SetCharacterOpacity(float FOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetCharacterOpacity");

	Params::ABattleCharacterBaseBP_C_SetCharacterOpacity_Params Parms{};

	Parms.FOpacity = FOpacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetForceMovementTimelineCurve
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveFloat*                 CMovementRatio                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveVector*                CMovementOffset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 COpacityCurve                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FTimelineLength                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::SetForceMovementTimelineCurve(class UCurveFloat* CMovementRatio, class UCurveVector* CMovementOffset, class UCurveFloat* COpacityCurve, float FTimelineLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetForceMovementTimelineCurve");

	Params::ABattleCharacterBaseBP_C_SetForceMovementTimelineCurve_Params Parms{};

	Parms.CMovementRatio = CMovementRatio;
	Parms.CMovementOffset = CMovementOffset;
	Parms.COpacityCurve = COpacityCurve;
	Parms.FTimelineLength = FTimelineLength;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.StartForceMovementTimeline
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::StartForceMovementTimeline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "StartForceMovementTimeline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.StopForceMovementTimeline
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::StopForceMovementTimeline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "StopForceMovementTimeline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetVisibleCanoe
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SetVisibleCanoe(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetVisibleCanoe");

	Params::ABattleCharacterBaseBP_C_SetVisibleCanoe_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetPotentialityAction_BodyColor
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                CColor                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::SetPotentialityAction_BodyColor(const struct FLinearColor& CColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetPotentialityAction_BodyColor");

	Params::ABattleCharacterBaseBP_C_SetPotentialityAction_BodyColor_Params Parms{};

	Parms.CColor = CColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetPotentialityAction_EyesColor
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FAlpha                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::SetPotentialityAction_EyesColor(float FAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetPotentialityAction_EyesColor");

	Params::ABattleCharacterBaseBP_C_SetPotentialityAction_EyesColor_Params Parms{};

	Parms.FAlpha = FAlpha;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.FinishChangePartySequence
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::FinishChangePartySequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "FinishChangePartySequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecRevive
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        CEnforcer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NReviveHP                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOverHeal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bUseRecoveryUI                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bUseReviveVoice                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::ExecRevive(class ABattleCharacterBase* CEnforcer, int32 NReviveHP, bool bOverHeal, bool bUseRecoveryUI, bool bUseReviveVoice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ExecRevive");

	Params::ABattleCharacterBaseBP_C_ExecRevive_Params Parms{};

	Parms.CEnforcer = CEnforcer;
	Parms.NReviveHP = NReviveHP;
	Parms.bOverHeal = bOverHeal;
	Parms.bUseRecoveryUI = bUseRecoveryUI;
	Parms.bUseReviveVoice = bUseReviveVoice;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetDeadFlagForReplay
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDeadFlag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCharacterBaseBP_C::SetDeadFlagForReplay(bool bDeadFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetDeadFlagForReplay");

	Params::ABattleCharacterBaseBP_C_SetDeadFlagForReplay_Params Parms{};

	Parms.bDeadFlag = bDeadFlag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ResetBattleCharacterForReplay
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::ResetBattleCharacterForReplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ResetBattleCharacterForReplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ResetVoiceFlagForPreAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleCharacterBaseBP_C::ResetVoiceFlagForPreAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ResetVoiceFlagForPreAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetGetBackBoostPoint
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NGetBackBoostPoint                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::SetGetBackBoostPoint(int32 NGetBackBoostPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetGetBackBoostPoint");

	Params::ABattleCharacterBaseBP_C_SetGetBackBoostPoint_Params Parms{};

	Parms.NGetBackBoostPoint = NGetBackBoostPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetCharacterOpacityForActionCommand
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FOpacity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::SetCharacterOpacityForActionCommand(float FOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "SetCharacterOpacityForActionCommand");

	Params::ABattleCharacterBaseBP_C_SetCharacterOpacityForActionCommand_Params Parms{};

	Parms.FOpacity = FOpacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecuteUbergraph_BattleCharacterBaseBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCharacterBaseBP_C::ExecuteUbergraph_BattleCharacterBaseBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleCharacterBaseBP_C", "ExecuteUbergraph_BattleCharacterBaseBP");

	Params::ABattleCharacterBaseBP_C_ExecuteUbergraph_BattleCharacterBaseBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


