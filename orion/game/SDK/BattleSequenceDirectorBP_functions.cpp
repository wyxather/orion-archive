#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BattleSequenceDirectorBP.BattleSequenceDirectorBP_C
// (Actor)

class UClass* ABattleSequenceDirectorBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleSequenceDirectorBP_C");

	return Clss;
}


// BattleSequenceDirectorBP_C BattleSequenceDirectorBP.Default__BattleSequenceDirectorBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABattleSequenceDirectorBP_C* ABattleSequenceDirectorBP_C::GetDefaultObj()
{
	static class ABattleSequenceDirectorBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABattleSequenceDirectorBP_C*>(ABattleSequenceDirectorBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.SpecialAttachEffectRevision
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EnemyGroup                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              ParamIndex                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABattleSequenceDirectorBP_C::SpecialAttachEffectRevision(class FName EnemyGroup, int32* ParamIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "SpecialAttachEffectRevision");

	Params::ABattleSequenceDirectorBP_C_SpecialAttachEffectRevision_Params Parms{};

	Parms.EnemyGroup = EnemyGroup;

	UObject::ProcessEvent(Func, &Parms);

	if (ParamIndex != nullptr)
		*ParamIndex = Parms.ParamIndex;

	return Parms.ReturnValue;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.UpdateSequencerCameraForFirstFrame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALevelSequenceActor*         SequenceActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACineCameraActor*            SequencerCamera                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::UpdateSequencerCameraForFirstFrame(class ALevelSequenceActor* SequenceActor, class ACineCameraActor* SequencerCamera)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "UpdateSequencerCameraForFirstFrame");

	Params::ABattleSequenceDirectorBP_C_UpdateSequencerCameraForFirstFrame_Params Parms{};

	Parms.SequenceActor = SequenceActor;
	Parms.SequencerCamera = SequencerCamera;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetEightBattleInfomationText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        FormatText                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Result                                                           (Parm, OutParm)

void ABattleSequenceDirectorBP_C::GetEightBattleInfomationText(class FName FormatText, class FText* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "GetEightBattleInfomationText");

	Params::ABattleSequenceDirectorBP_C_GetEightBattleInfomationText_Params Parms{};

	Parms.FormatText = FormatText;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetSequencePlayerCurrentRatio
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequencePlayer*        TargetPlayer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CurrentRatio                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::GetSequencePlayerCurrentRatio(class ULevelSequencePlayer* TargetPlayer, float* CurrentRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "GetSequencePlayerCurrentRatio");

	Params::ABattleSequenceDirectorBP_C_GetSequencePlayerCurrentRatio_Params Parms{};

	Parms.TargetPlayer = TargetPlayer;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentRatio != nullptr)
		*CurrentRatio = Parms.CurrentRatio;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetPartyChangeSequence
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bFrontToBack                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelSequence*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ULevelSequence* ABattleSequenceDirectorBP_C::GetPartyChangeSequence(bool bFrontToBack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "GetPartyChangeSequence");

	Params::ABattleSequenceDirectorBP_C_GetPartyChangeSequence_Params Parms{};

	Parms.bFrontToBack = bFrontToBack;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecPartyChangeSequencer
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bFrontToBack                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleSequenceDirectorBP_C::ExecPartyChangeSequencer(bool bFrontToBack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecPartyChangeSequencer");

	Params::ABattleSequenceDirectorBP_C_ExecPartyChangeSequencer_Params Parms{};

	Parms.bFrontToBack = bFrontToBack;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetAdvancedAbilityText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        FormatText                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayableCharacterID    CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AbilityIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Result                                                           (Parm, OutParm)

void ABattleSequenceDirectorBP_C::GetAdvancedAbilityText(class FName FormatText, enum class EPlayableCharacterID CharaID, int32 AbilityIndex, class FText* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "GetAdvancedAbilityText");

	Params::ABattleSequenceDirectorBP_C_GetAdvancedAbilityText_Params Parms{};

	Parms.FormatText = FormatText;
	Parms.CharaID = CharaID;
	Parms.AbilityIndex = AbilityIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetAttachActor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActionCommandBase*          CommandData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_EFFECT_ATTACH_TYPEAttachType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      AttachActor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        AttachCharacter                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::GetAttachActor(class AActionCommandBase* CommandData, int32 Index, enum class EBATTLE_EFFECT_ATTACH_TYPE AttachType, class AActor** AttachActor, class ABattleCharacterBase** AttachCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "GetAttachActor");

	Params::ABattleSequenceDirectorBP_C_GetAttachActor_Params Parms{};

	Parms.CommandData = CommandData;
	Parms.Index = Index;
	Parms.AttachType = AttachType;

	UObject::ProcessEvent(Func, &Parms);

	if (AttachActor != nullptr)
		*AttachActor = Parms.AttachActor;

	if (AttachCharacter != nullptr)
		*AttachCharacter = Parms.AttachCharacter;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.SettingSequencerCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::SettingSequencerCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "SettingSequencerCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.SettingBindingForEnforcer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALevelSequenceActor*         SequencerActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActionCommandBase*          CommandData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSubCommand                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSequenceDirectorBP_C::SettingBindingForEnforcer(class ALevelSequenceActor* SequencerActor, class AActionCommandBase* CommandData, bool IsSubCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "SettingBindingForEnforcer");

	Params::ABattleSequenceDirectorBP_C_SettingBindingForEnforcer_Params Parms{};

	Parms.SequencerActor = SequencerActor;
	Parms.CommandData = CommandData;
	Parms.IsSubCommand = IsSubCommand;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.SettingActionCommandPointLight
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALevelSequenceActor*         SequenceActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActionCommandBase*          CommandData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleSequencePointLight*   PointLightActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BindingTag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::SettingActionCommandPointLight(class ALevelSequenceActor* SequenceActor, class AActionCommandBase* CommandData, class ABattleSequencePointLight* PointLightActor, class FName BindingTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "SettingActionCommandPointLight");

	Params::ABattleSequenceDirectorBP_C_SettingActionCommandPointLight_Params Parms{};

	Parms.SequenceActor = SequenceActor;
	Parms.CommandData = CommandData;
	Parms.PointLightActor = PointLightActor;
	Parms.BindingTag = BindingTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetAreaCenterPosition
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABattleCharacterBase*>CharacterList                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     DefaultPosition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CenterPosition                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::GetAreaCenterPosition(TArray<class ABattleCharacterBase*>& CharacterList, const struct FVector& DefaultPosition, struct FVector* CenterPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "GetAreaCenterPosition");

	Params::ABattleSequenceDirectorBP_C_GetAreaCenterPosition_Params Parms{};

	Parms.CharacterList = CharacterList;
	Parms.DefaultPosition = DefaultPosition;

	UObject::ProcessEvent(Func, &Parms);

	if (CenterPosition != nullptr)
		*CenterPosition = std::move(Parms.CenterPosition);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ResetActionCommandDirector
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleAbilitySequenceActor* CSequenceActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSubCommand                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleSequenceDirectorBP_C::ResetActionCommandDirector(class ABattleAbilitySequenceActor* CSequenceActor, bool bIsSubCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ResetActionCommandDirector");

	Params::ABattleSequenceDirectorBP_C_ResetActionCommandDirector_Params Parms{};

	Parms.CSequenceActor = CSequenceActor;
	Parms.bIsSubCommand = bIsSubCommand;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetBattleResultSequence
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EBATTLE_RESULT_TYPE     EResultType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_CAMERA_TYPE     ECameraType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsFront                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelSequence*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ULevelSequence* ABattleSequenceDirectorBP_C::GetBattleResultSequence(enum class EBATTLE_RESULT_TYPE EResultType, enum class EBATTLE_CAMERA_TYPE ECameraType, bool bIsFront)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "GetBattleResultSequence");

	Params::ABattleSequenceDirectorBP_C_GetBattleResultSequence_Params Parms{};

	Parms.EResultType = EResultType;
	Parms.ECameraType = ECameraType;
	Parms.bIsFront = bIsFront;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBattleResultSequencer
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_RESULT_TYPE     EResultType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_CAMERA_TYPE     ECameraType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsFront                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleSequenceDirectorBP_C::ExecBattleResultSequencer(enum class EBATTLE_RESULT_TYPE EResultType, enum class EBATTLE_CAMERA_TYPE ECameraType, bool bIsFront)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecBattleResultSequencer");

	Params::ABattleSequenceDirectorBP_C_ExecBattleResultSequencer_Params Parms{};

	Parms.EResultType = EResultType;
	Parms.ECameraType = ECameraType;
	Parms.bIsFront = bIsFront;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecResultDashSequencer
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleSequenceDirectorBP_C::ExecResultDashSequencer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecResultDashSequencer");

	Params::ABattleSequenceDirectorBP_C_ExecResultDashSequencer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBattleStartDashSequencer
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_START_DASH_TYPE EStartDashType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleSequenceDirectorBP_C::ExecBattleStartDashSequencer(enum class EBATTLE_START_DASH_TYPE EStartDashType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecBattleStartDashSequencer");

	Params::ABattleSequenceDirectorBP_C_ExecBattleStartDashSequencer_Params Parms{};

	Parms.EStartDashType = EStartDashType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetBattleStartDashSequence
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EBATTLE_START_DASH_TYPE EStartDashType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequence*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ULevelSequence* ABattleSequenceDirectorBP_C::GetBattleStartDashSequence(enum class EBATTLE_START_DASH_TYPE EStartDashType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "GetBattleStartDashSequence");

	Params::ABattleSequenceDirectorBP_C_GetBattleStartDashSequence_Params Parms{};

	Parms.EStartDashType = EStartDashType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBattleEventSequencer
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence*              CExecSequence                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        CEventActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_CHARA_POSITION_RESET_TYPEEPositionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleSequenceDirectorBP_C::ExecBattleEventSequencer(class ULevelSequence* CExecSequence, class ABattleCharacterBase* CEventActor, enum class EBATTLE_CHARA_POSITION_RESET_TYPE EPositionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecBattleEventSequencer");

	Params::ABattleSequenceDirectorBP_C_ExecBattleEventSequencer_Params Parms{};

	Parms.CExecSequence = CExecSequence;
	Parms.CEventActor = CEventActor;
	Parms.EPositionType = EPositionType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.CreateSequenceActor
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::CreateSequenceActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "CreateSequenceActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.DestroySequenceActor
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::DestroySequenceActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "DestroySequenceActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.CreateAbilityEffect
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             CTemplate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_EFFECT_ATTACH_TYPEEAttachType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActionCommandBase*          CActionCommand                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bGroundEffect                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bReviveEffect                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAttachSocket                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABattleSequenceEmitter*>ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class ABattleSequenceEmitter*> ABattleSequenceDirectorBP_C::CreateAbilityEffect(class UParticleSystem* CTemplate, enum class EBATTLE_EFFECT_ATTACH_TYPE EAttachType, class AActionCommandBase* CActionCommand, bool bGroundEffect, bool bReviveEffect, bool bAttachSocket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "CreateAbilityEffect");

	Params::ABattleSequenceDirectorBP_C_CreateAbilityEffect_Params Parms{};

	Parms.CTemplate = CTemplate;
	Parms.EAttachType = EAttachType;
	Parms.CActionCommand = CActionCommand;
	Parms.bGroundEffect = bGroundEffect;
	Parms.bReviveEffect = bReviveEffect;
	Parms.bAttachSocket = bAttachSocket;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecActionCommandSequencer
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActionCommandBase*          CActionCommand                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequence*              CExecSequence                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleAbilitySequenceActor* CSequenceActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSubCommand                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleSequenceDirectorBP_C::ExecActionCommandSequencer(class AActionCommandBase* CActionCommand, class ULevelSequence* CExecSequence, class ABattleAbilitySequenceActor* CSequenceActor, bool bIsSubCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecActionCommandSequencer");

	Params::ABattleSequenceDirectorBP_C_ExecActionCommandSequencer_Params Parms{};

	Parms.CActionCommand = CActionCommand;
	Parms.CExecSequence = CExecSequence;
	Parms.CSequenceActor = CSequenceActor;
	Parms.bIsSubCommand = bIsSubCommand;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetBreakSequence
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EBREAK_CAMERA_TYPE      EBreakType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_CAMERA_TYPE     ECameraType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequence*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ULevelSequence* ABattleSequenceDirectorBP_C::GetBreakSequence(enum class EBREAK_CAMERA_TYPE EBreakType, enum class EBATTLE_CAMERA_TYPE ECameraType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "GetBreakSequence");

	Params::ABattleSequenceDirectorBP_C_GetBreakSequence_Params Parms{};

	Parms.EBreakType = EBreakType;
	Parms.ECameraType = ECameraType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBreakCameraSequencer
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBREAK_CAMERA_TYPE      EBreakType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_CAMERA_TYPE     ECameraType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleSequenceDirectorBP_C::ExecBreakCameraSequencer(enum class EBREAK_CAMERA_TYPE EBreakType, enum class EBATTLE_CAMERA_TYPE ECameraType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecBreakCameraSequencer");

	Params::ABattleSequenceDirectorBP_C_ExecBreakCameraSequencer_Params Parms{};

	Parms.EBreakType = EBreakType;
	Parms.ECameraType = ECameraType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetEncountSequence
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EBATTLE_CAMERA_TYPE     ECameraType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequence*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ULevelSequence* ABattleSequenceDirectorBP_C::GetEncountSequence(enum class EBATTLE_CAMERA_TYPE ECameraType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "GetEncountSequence");

	Params::ABattleSequenceDirectorBP_C_GetEncountSequence_Params Parms{};

	Parms.ECameraType = ECameraType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecEncountCameraSequencer
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_CAMERA_TYPE     ECameraType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleSequenceDirectorBP_C::ExecEncountCameraSequencer(enum class EBATTLE_CAMERA_TYPE ECameraType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecEncountCameraSequencer");

	Params::ABattleSequenceDirectorBP_C_ExecEncountCameraSequencer_Params Parms{};

	Parms.ECameraType = ECameraType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecWeatherSequencer
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETimeZoneType           ETimeZone                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_SEQUENCER_CHANGE_TYPEEChangeType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleSequenceDirectorBP_C::ExecWeatherSequencer(enum class ETimeZoneType ETimeZone, enum class EBATTLE_SEQUENCER_CHANGE_TYPE EChangeType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecWeatherSequencer");

	Params::ABattleSequenceDirectorBP_C_ExecWeatherSequencer_Params Parms{};

	Parms.ETimeZone = ETimeZone;
	Parms.EChangeType = EChangeType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecAbilityCameraSequencer
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NBoostLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_TARGET_TYPE     ETargetType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_CAMERA_TYPE     ECameraType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NSlideFrame                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActionCommandBase*          CActionCommand                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bEnemySide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsFront                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        StrAbilityName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleSequenceDirectorBP_C::ExecAbilityCameraSequencer(int32 NBoostLevel, enum class EBATTLE_TARGET_TYPE ETargetType, enum class EBATTLE_CAMERA_TYPE ECameraType, int32 NSlideFrame, class AActionCommandBase* CActionCommand, bool bEnemySide, bool bIsFront, class FName StrAbilityName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecAbilityCameraSequencer");

	Params::ABattleSequenceDirectorBP_C_ExecAbilityCameraSequencer_Params Parms{};

	Parms.NBoostLevel = NBoostLevel;
	Parms.ETargetType = ETargetType;
	Parms.ECameraType = ECameraType;
	Parms.NSlideFrame = NSlideFrame;
	Parms.CActionCommand = CActionCommand;
	Parms.bEnemySide = bEnemySide;
	Parms.bIsFront = bIsFront;
	Parms.StrAbilityName = StrAbilityName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.SuspendBoostSequencer
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NBoostLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleSequenceDirectorBP_C::SuspendBoostSequencer(int32 NBoostLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "SuspendBoostSequencer");

	Params::ABattleSequenceDirectorBP_C_SuspendBoostSequencer_Params Parms{};

	Parms.NBoostLevel = NBoostLevel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBoostSequencer
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NBoostLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_SEQUENCER_CHANGE_TYPEEChangeType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABattleSequenceDirectorBP_C::ExecBoostSequencer(int32 NBoostLevel, enum class EBATTLE_SEQUENCER_CHANGE_TYPE EChangeType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecBoostSequencer");

	Params::ABattleSequenceDirectorBP_C_ExecBoostSequencer_Params Parms{};

	Parms.NBoostLevel = NBoostLevel;
	Parms.EChangeType = EChangeType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetWeatherSequence
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ETimeZoneType           ETimeZone                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_SEQUENCER_CHANGE_TYPEEChangeType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequence*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ULevelSequence* ABattleSequenceDirectorBP_C::GetWeatherSequence(enum class ETimeZoneType ETimeZone, enum class EBATTLE_SEQUENCER_CHANGE_TYPE EChangeType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "GetWeatherSequence");

	Params::ABattleSequenceDirectorBP_C_GetWeatherSequence_Params Parms{};

	Parms.ETimeZone = ETimeZone;
	Parms.EChangeType = EChangeType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetAbilityCameraSequence
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              NBoostLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_TARGET_TYPE     ETargetType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_CAMERA_TYPE     ECameraType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bEnemySide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsFront                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        StrAbilityName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequence*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ULevelSequence* ABattleSequenceDirectorBP_C::GetAbilityCameraSequence(int32 NBoostLevel, enum class EBATTLE_TARGET_TYPE ETargetType, enum class EBATTLE_CAMERA_TYPE ECameraType, bool bEnemySide, bool bIsFront, class FName StrAbilityName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "GetAbilityCameraSequence");

	Params::ABattleSequenceDirectorBP_C_GetAbilityCameraSequence_Params Parms{};

	Parms.NBoostLevel = NBoostLevel;
	Parms.ETargetType = ETargetType;
	Parms.ECameraType = ECameraType;
	Parms.bEnemySide = bEnemySide;
	Parms.bIsFront = bIsFront;
	Parms.StrAbilityName = StrAbilityName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.GetBoostSequence
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              NBoostLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_SEQUENCER_CHANGE_TYPEEChangeType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequence*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ULevelSequence* ABattleSequenceDirectorBP_C::GetBoostSequence(int32 NBoostLevel, enum class EBATTLE_SEQUENCER_CHANGE_TYPE EChangeType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "GetBoostSequence");

	Params::ABattleSequenceDirectorBP_C_GetBoostSequence_Params Parms{};

	Parms.NBoostLevel = NBoostLevel;
	Parms.EChangeType = EChangeType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBoostStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NBoostLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::ExecBoostStart(int32 NBoostLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecBoostStart");

	Params::ABattleSequenceDirectorBP_C_ExecBoostStart_Params Parms{};

	Parms.NBoostLevel = NBoostLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBoostLoop
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::ExecBoostLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecBoostLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ChangeBoostLevel
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NBoostLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAddLevel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSequenceDirectorBP_C::ChangeBoostLevel(int32 NBoostLevel, bool bAddLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ChangeBoostLevel");

	Params::ABattleSequenceDirectorBP_C_ChangeBoostLevel_Params Parms{};

	Parms.NBoostLevel = NBoostLevel;
	Parms.bAddLevel = bAddLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecAbilityCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NBoostLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_TARGET_TYPE     ETargetType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_CAMERA_TYPE     ECameraType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NSlideFrame                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActionCommandBase*          CActionCommand                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bEnemySide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsFront                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        StrAbilityName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::ExecAbilityCamera(int32 NBoostLevel, enum class EBATTLE_TARGET_TYPE ETargetType, enum class EBATTLE_CAMERA_TYPE ECameraType, int32 NSlideFrame, class AActionCommandBase* CActionCommand, bool bEnemySide, bool bIsFront, class FName StrAbilityName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecAbilityCamera");

	Params::ABattleSequenceDirectorBP_C_ExecAbilityCamera_Params Parms{};

	Parms.NBoostLevel = NBoostLevel;
	Parms.ETargetType = ETargetType;
	Parms.ECameraType = ECameraType;
	Parms.NSlideFrame = NSlideFrame;
	Parms.CActionCommand = CActionCommand;
	Parms.bEnemySide = bEnemySide;
	Parms.bIsFront = bIsFront;
	Parms.StrAbilityName = StrAbilityName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FinishAbilityCamera
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FinishAbilityCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FinishAbilityCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBoostShutDown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWithWeather                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSequenceDirectorBP_C::ExecBoostShutDown(bool bWithWeather)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecBoostShutDown");

	Params::ABattleSequenceDirectorBP_C_ExecBoostShutDown_Params Parms{};

	Parms.bWithWeather = bWithWeather;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FinishBoostShutDown
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FinishBoostShutDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FinishBoostShutDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecWeatherLoop
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::ExecWeatherLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecWeatherLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecEncountCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_CAMERA_TYPE     ECameraType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::ExecEncountCamera(enum class EBATTLE_CAMERA_TYPE ECameraType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecEncountCamera");

	Params::ABattleSequenceDirectorBP_C_ExecEncountCamera_Params Parms{};

	Parms.ECameraType = ECameraType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FinishEncountCamera
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FinishEncountCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FinishEncountCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBreakCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBREAK_CAMERA_TYPE      EBreakType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_CAMERA_TYPE     ECameraType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::ExecBreakCamera(enum class EBREAK_CAMERA_TYPE EBreakType, enum class EBATTLE_CAMERA_TYPE ECameraType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecBreakCamera");

	Params::ABattleSequenceDirectorBP_C_ExecBreakCamera_Params Parms{};

	Parms.EBreakType = EBreakType;
	Parms.ECameraType = ECameraType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FinishBreaktCamera
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FinishBreaktCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FinishBreaktCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecActionCommandDirector
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActionCommandBase*          CActionCommand                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequence*              CExecSequence                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::ExecActionCommandDirector(class AActionCommandBase* CActionCommand, class ULevelSequence* CExecSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecActionCommandDirector");

	Params::ABattleSequenceDirectorBP_C_ExecActionCommandDirector_Params Parms{};

	Parms.CActionCommand = CActionCommand;
	Parms.CExecSequence = CExecSequence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FinishActionCommandDirector
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FinishActionCommandDirector()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FinishActionCommandDirector");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.OpenTalkCommand
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TalkTextID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WaitFinish                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSequenceDirectorBP_C::OpenTalkCommand(class FName TalkTextID, const struct FVector2D& Offset, bool WaitFinish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "OpenTalkCommand");

	Params::ABattleSequenceDirectorBP_C_OpenTalkCommand_Params Parms{};

	Parms.TalkTextID = TalkTextID;
	Parms.Offset = Offset;
	Parms.WaitFinish = WaitFinish;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.CloseTalkCommand
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::CloseTalkCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "CloseTalkCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.WaitTalkBalloonFinish
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::WaitTalkBalloonFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "WaitTalkBalloonFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.PlayActionCommand
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        ActionCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAction      BattleActionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::PlayActionCommand(class ABattleCharacterBase* ActionCharacter, enum class EKSCharacterAction BattleActionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "PlayActionCommand");

	Params::ABattleSequenceDirectorBP_C_PlayActionCommand_Params Parms{};

	Parms.ActionCharacter = ActionCharacter;
	Parms.BattleActionID = BattleActionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.PlaySECommand
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SEID                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::PlaySECommand(class FName SEID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "PlaySECommand");

	Params::ABattleSequenceDirectorBP_C_PlaySECommand_Params Parms{};

	Parms.SEID = SEID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.PlayVibrationCommand
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        VibrationID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVibrationPower         Power                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::PlayVibrationCommand(class FName VibrationID, enum class EVibrationPower Power)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "PlayVibrationCommand");

	Params::ABattleSequenceDirectorBP_C_PlayVibrationCommand_Params Parms{};

	Parms.VibrationID = VibrationID;
	Parms.Power = Power;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBattleEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence*              CExecSequence                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleCharacterBase*        CEventActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_CHARA_POSITION_RESET_TYPEEPositionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::ExecBattleEvent(class ULevelSequence* CExecSequence, class ABattleCharacterBase* CEventActor, enum class EBATTLE_CHARA_POSITION_RESET_TYPE EPositionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecBattleEvent");

	Params::ABattleSequenceDirectorBP_C_ExecBattleEvent_Params Parms{};

	Parms.CExecSequence = CExecSequence;
	Parms.CEventActor = CEventActor;
	Parms.EPositionType = EPositionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FinishBattleEvent
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FinishBattleEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FinishBattleEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBattleStartDash
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_START_DASH_TYPE EStartDashType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::ExecBattleStartDash(enum class EBATTLE_START_DASH_TYPE EStartDashType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecBattleStartDash");

	Params::ABattleSequenceDirectorBP_C_ExecBattleStartDash_Params Parms{};

	Parms.EStartDashType = EStartDashType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FinishBattleStartDash
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FinishBattleStartDash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FinishBattleStartDash");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBattleResult
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBATTLE_RESULT_TYPE     EResultType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBATTLE_CAMERA_TYPE     ECameraType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsFront                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSequenceDirectorBP_C::ExecBattleResult(enum class EBATTLE_RESULT_TYPE EResultType, enum class EBATTLE_CAMERA_TYPE ECameraType, bool bIsFront)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecBattleResult");

	Params::ABattleSequenceDirectorBP_C_ExecBattleResult_Params Parms{};

	Parms.EResultType = EResultType;
	Parms.ECameraType = ECameraType;
	Parms.bIsFront = bIsFront;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FinishBattleResult
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FinishBattleResult()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FinishBattleResult");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecResultDash
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::ExecResultDash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecResultDash");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FinishResultDash
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FinishResultDash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FinishResultDash");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.OpenTutorialCommand
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETUTORIAL_TYPE          ETutorialType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bForcedDisplay                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSequenceDirectorBP_C::OpenTutorialCommand(enum class ETUTORIAL_TYPE ETutorialType, bool bForcedDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "OpenTutorialCommand");

	Params::ABattleSequenceDirectorBP_C_OpenTutorialCommand_Params Parms{};

	Parms.ETutorialType = ETutorialType;
	Parms.bForcedDisplay = bForcedDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.WaitTutorialFinish
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::WaitTutorialFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "WaitTutorialFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.InterpolationAbilityCamera
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FRatio                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::InterpolationAbilityCamera(float FRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "InterpolationAbilityCamera");

	Params::ABattleSequenceDirectorBP_C_InterpolationAbilityCamera_Params Parms{};

	Parms.FRatio = FRatio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.InterpolationResultCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FRatio                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::InterpolationResultCamera(float FRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "InterpolationResultCamera");

	Params::ABattleSequenceDirectorBP_C_InterpolationResultCamera_Params Parms{};

	Parms.FRatio = FRatio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ReceiveTick");

	Params::ABattleSequenceDirectorBP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecNextBoostEvent
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::ExecNextBoostEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecNextBoostEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ChangeBoostLevelCommand
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        ActionCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BoostLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::ChangeBoostLevelCommand(class ABattleCharacterBase* ActionCharacter, int32 BoostLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ChangeBoostLevelCommand");

	Params::ABattleSequenceDirectorBP_C_ChangeBoostLevelCommand_Params Parms{};

	Parms.ActionCharacter = ActionCharacter;
	Parms.BoostLevel = BoostLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecBattleSuspendCommand
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::ExecBattleSuspendCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecBattleSuspendCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecSubActionCommandDirector
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActionCommandBase*          CActionCommand                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequence*              CExecSequence                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::ExecSubActionCommandDirector(class AActionCommandBase* CActionCommand, class ULevelSequence* CExecSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecSubActionCommandDirector");

	Params::ABattleSequenceDirectorBP_C_ExecSubActionCommandDirector_Params Parms{};

	Parms.CActionCommand = CActionCommand;
	Parms.CExecSequence = CExecSequence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FinishSubActionCommandDirector
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FinishSubActionCommandDirector()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FinishSubActionCommandDirector");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FinishSubActionCommandDirector_00
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FinishSubActionCommandDirector_00()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FinishSubActionCommandDirector_00");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FinishSubActionCommandDirector_01
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FinishSubActionCommandDirector_01()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FinishSubActionCommandDirector_01");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FinishSubActionCommandDirector_02
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FinishSubActionCommandDirector_02()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FinishSubActionCommandDirector_02");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FinishSubActionCommandDirector_03
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FinishSubActionCommandDirector_03()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FinishSubActionCommandDirector_03");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.EnableAbilityHitEffect
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::EnableAbilityHitEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "EnableAbilityHitEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FinishSubActionCommandDirector_04
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FinishSubActionCommandDirector_04()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FinishSubActionCommandDirector_04");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FinishSubActionCommandDirector_05
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FinishSubActionCommandDirector_05()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FinishSubActionCommandDirector_05");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.StartAutoProgressTalkBalloon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::StartAutoProgressTalkBalloon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "StartAutoProgressTalkBalloon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.StartAutoProgressTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::StartAutoProgressTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "StartAutoProgressTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ReleasePotentialityAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::ReleasePotentialityAction(enum class EPlayableCharacterID CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ReleasePotentialityAction");

	Params::ABattleSequenceDirectorBP_C_ReleasePotentialityAction_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.RemoveBoostEffect
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::RemoveBoostEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "RemoveBoostEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.SetBattleEnemyVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSequenceDirectorBP_C::SetBattleEnemyVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "SetBattleEnemyVisibility");

	Params::ABattleSequenceDirectorBP_C_SetBattleEnemyVisibility_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.SetAdvancedAbility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NIndex                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bEnable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSequenceDirectorBP_C::SetAdvancedAbility(enum class EPlayableCharacterID CharacterID, int32 NIndex, bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "SetAdvancedAbility");

	Params::ABattleSequenceDirectorBP_C_SetAdvancedAbility_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.NIndex = NIndex;
	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.CloseActionInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::CloseActionInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "CloseActionInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.OpenActionInfoFromAdvancedAbility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TextID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayableCharacterID    CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AbilityIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::OpenActionInfoFromAdvancedAbility(class FName TextID, enum class EPlayableCharacterID CharaID, int32 AbilityIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "OpenActionInfoFromAdvancedAbility");

	Params::ABattleSequenceDirectorBP_C_OpenActionInfoFromAdvancedAbility_Params Parms{};

	Parms.TextID = TextID;
	Parms.CharaID = CharaID;
	Parms.AbilityIndex = AbilityIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecPotentialityAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        ActionCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::ExecPotentialityAction(class ABattleCharacterBase* ActionCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecPotentialityAction");

	Params::ABattleSequenceDirectorBP_C_ExecPotentialityAction_Params Parms{};

	Parms.ActionCharacter = ActionCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecPartyChange
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bFrontToBack                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSequenceDirectorBP_C::ExecPartyChange(bool bFrontToBack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecPartyChange");

	Params::ABattleSequenceDirectorBP_C_ExecPartyChange_Params Parms{};

	Parms.bFrontToBack = bFrontToBack;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FinishPartyChange
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FinishPartyChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FinishPartyChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FinishSubActionCommandDirector_06
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FinishSubActionCommandDirector_06()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FinishSubActionCommandDirector_06");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FinishSubActionCommandDirector_07
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FinishSubActionCommandDirector_07()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FinishSubActionCommandDirector_07");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.SetBattleWipeWhiteOutFlag
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSequenceDirectorBP_C::SetBattleWipeWhiteOutFlag(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "SetBattleWipeWhiteOutFlag");

	Params::ABattleSequenceDirectorBP_C_SetBattleWipeWhiteOutFlag_Params Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.InstantDeath_EnemyAll
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::InstantDeath_EnemyAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "InstantDeath_EnemyAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.SuspendActionCommand
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::SuspendActionCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "SuspendActionCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FixBattleCameraCommand
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FixBattleCameraCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FixBattleCameraCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ReturnCaptureCommand
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::ReturnCaptureCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ReturnCaptureCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.WaitReturnCaptureCommand
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::WaitReturnCaptureCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "WaitReturnCaptureCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.WaitReturnCaptureMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::WaitReturnCaptureMove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "WaitReturnCaptureMove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.OpenActionInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TextID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::OpenActionInfo(class FName TextID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "OpenActionInfo");

	Params::ABattleSequenceDirectorBP_C_OpenActionInfo_Params Parms{};

	Parms.TextID = TextID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.OpenActionInfoForEightBattle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TextID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::OpenActionInfoForEightBattle(class FName TextID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "OpenActionInfoForEightBattle");

	Params::ABattleSequenceDirectorBP_C_OpenActionInfoForEightBattle_Params Parms{};

	Parms.TextID = TextID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FinishSubActionCommandDirector_08
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FinishSubActionCommandDirector_08()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FinishSubActionCommandDirector_08");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FinishSubActionCommandDirector_09
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FinishSubActionCommandDirector_09()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FinishSubActionCommandDirector_09");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FinishSubActionCommandDirector_10
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FinishSubActionCommandDirector_10()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FinishSubActionCommandDirector_10");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.FinishSubActionCommandDirector_11
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::FinishSubActionCommandDirector_11()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "FinishSubActionCommandDirector_11");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecFinishAbilityCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::ExecFinishAbilityCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecFinishAbilityCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecFinishResultCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::ExecFinishResultCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecFinishResultCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.StartBoostLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::StartBoostLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "StartBoostLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.StartWeatherLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABattleSequenceDirectorBP_C::StartWeatherLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "StartWeatherLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleSequenceDirectorBP.BattleSequenceDirectorBP_C.ExecuteUbergraph_BattleSequenceDirectorBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSequenceDirectorBP_C::ExecuteUbergraph_BattleSequenceDirectorBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BattleSequenceDirectorBP_C", "ExecuteUbergraph_BattleSequenceDirectorBP");

	Params::ABattleSequenceDirectorBP_C_ExecuteUbergraph_BattleSequenceDirectorBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


