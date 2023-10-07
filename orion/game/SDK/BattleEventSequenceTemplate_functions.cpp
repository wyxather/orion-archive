#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BattleEventSequenceTemplate.SequenceDirector_C
// (None)

class UClass* USequenceDirector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequenceDirector_C");

	return Clss;
}


// SequenceDirector_C BattleEventSequenceTemplate.Default__SequenceDirector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USequenceDirector_C* USequenceDirector_C::GetDefaultObj()
{
	static class USequenceDirector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USequenceDirector_C*>(USequenceDirector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleEventSequenceTemplate.SequenceDirector_C.OpenTalk
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TalkTextID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WaitFinish                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USequenceDirector_C::OpenTalk(class FName TalkTextID, const struct FVector2D& Offset, bool WaitFinish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "OpenTalk");

	Params::USequenceDirector_C_OpenTalk_Params Parms{};

	Parms.TalkTextID = TalkTextID;
	Parms.Offset = Offset;
	Parms.WaitFinish = WaitFinish;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEventSequenceTemplate.SequenceDirector_C.CloseTalk
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::CloseTalk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "CloseTalk");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEventSequenceTemplate.SequenceDirector_C.SetEventFlag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        FlagName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USequenceDirector_C::SetEventFlag(class FName FlagName, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "SetEventFlag");

	Params::USequenceDirector_C_SetEventFlag_Params Parms{};

	Parms.FlagName = FlagName;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEventSequenceTemplate.SequenceDirector_C.OpenTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETUTORIAL_TYPE          TutorialType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bForcedDisplay                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USequenceDirector_C::OpenTutorial(enum class ETUTORIAL_TYPE TutorialType, bool bForcedDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "OpenTutorial");

	Params::USequenceDirector_C_OpenTutorial_Params Parms{};

	Parms.TutorialType = TutorialType;
	Parms.bForcedDisplay = bForcedDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEventSequenceTemplate.SequenceDirector_C.ChangeBoostLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BoostLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::ChangeBoostLevel(class ABattleCharacterBase* Character, int32 BoostLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ChangeBoostLevel");

	Params::USequenceDirector_C_ChangeBoostLevel_Params Parms{};

	Parms.Character = Character;
	Parms.BoostLevel = BoostLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEventSequenceTemplate.SequenceDirector_C.ExecBattleSuspend
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::ExecBattleSuspend()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ExecBattleSuspend");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEventSequenceTemplate.SequenceDirector_C.RandomJumpToFrame
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


// Function BattleEventSequenceTemplate.SequenceDirector_C.ReleasePotentialityAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayableCharacterID    CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::ReleasePotentialityAction(enum class EPlayableCharacterID CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ReleasePotentialityAction");

	Params::USequenceDirector_C_ReleasePotentialityAction_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEventSequenceTemplate.SequenceDirector_C.ExecPotentialityAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::ExecPotentialityAction(class ABattleCharacterBase* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ExecPotentialityAction");

	Params::USequenceDirector_C_ExecPotentialityAction_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEventSequenceTemplate.SequenceDirector_C.JumpToFrame
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


// Function BattleEventSequenceTemplate.SequenceDirector_C.ChangeActionMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        ActionCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsEnable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NModeIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USequenceDirector_C::ChangeActionMode(class ABattleCharacterBase* ActionCharacter, bool bIsEnable, int32 NModeIndex, bool bUseTransition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ChangeActionMode");

	Params::USequenceDirector_C_ChangeActionMode_Params Parms{};

	Parms.ActionCharacter = ActionCharacter;
	Parms.bIsEnable = bIsEnable;
	Parms.NModeIndex = NModeIndex;
	Parms.bUseTransition = bUseTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEventSequenceTemplate.SequenceDirector_C.PlayAction
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


// Function BattleEventSequenceTemplate.SequenceDirector_C.PlayBGM
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BgmLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeOutTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeInTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::PlayBGM(class FName BgmLabel, float FadeOutTime, float FadeInTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "PlayBGM");

	Params::USequenceDirector_C_PlayBGM_Params Parms{};

	Parms.BgmLabel = BgmLabel;
	Parms.FadeOutTime = FadeOutTime;
	Parms.FadeInTime = FadeInTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEventSequenceTemplate.SequenceDirector_C.StopBgm
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FadeOutTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::StopBgm(float FadeOutTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "StopBgm");

	Params::USequenceDirector_C_StopBgm_Params Parms{};

	Parms.FadeOutTime = FadeOutTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEventSequenceTemplate.SequenceDirector_C.ControlDisease
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Remove                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        DiseaseName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvocationValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvocationTurn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::ControlDisease(class ABattleCharacterBase* TargetCharacter, bool Remove, class FName DiseaseName, int32 InvocationValue, int32 InvocationTurn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ControlDisease");

	Params::USequenceDirector_C_ControlDisease_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;
	Parms.Remove = Remove;
	Parms.DiseaseName = DiseaseName;
	Parms.InvocationValue = InvocationValue;
	Parms.InvocationTurn = InvocationTurn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEventSequenceTemplate.SequenceDirector_C.ChangeCharacterName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleCharacterBase*        TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CharacterNameID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::ChangeCharacterName(class ABattleCharacterBase* TargetCharacter, class FName CharacterNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ChangeCharacterName");

	Params::USequenceDirector_C_ChangeCharacterName_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;
	Parms.CharacterNameID = CharacterNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEventSequenceTemplate.SequenceDirector_C.InstantDeath_EnemyAll
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::InstantDeath_EnemyAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "InstantDeath_EnemyAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEventSequenceTemplate.SequenceDirector_C.PlayBGMWithDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BgmLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeOutTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeInTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DelayTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::PlayBGMWithDelay(class FName BgmLabel, float FadeOutTime, float FadeInTime, float DelayTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "PlayBGMWithDelay");

	Params::USequenceDirector_C_PlayBGMWithDelay_Params Parms{};

	Parms.BgmLabel = BgmLabel;
	Parms.FadeOutTime = FadeOutTime;
	Parms.FadeInTime = FadeInTime;
	Parms.DelayTime = DelayTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEventSequenceTemplate.SequenceDirector_C.PlayVibration
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


// Function BattleEventSequenceTemplate.SequenceDirector_C.FixBattleCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::FixBattleCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "FixBattleCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEventSequenceTemplate.SequenceDirector_C.ReturnCaptureSubParty
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::ReturnCaptureSubParty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ReturnCaptureSubParty");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEventSequenceTemplate.SequenceDirector_C.WaitReturnCaptureMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::WaitReturnCaptureMove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "WaitReturnCaptureMove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEventSequenceTemplate.SequenceDirector_C.ExecExtendBGM
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::ExecExtendBGM(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "ExecExtendBGM");

	Params::USequenceDirector_C_ExecExtendBGM_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEventSequenceTemplate.SequenceDirector_C.PlaySE
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


// Function BattleEventSequenceTemplate.SequenceDirector_C.OpenActionInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TextID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::OpenActionInfo(class FName TextID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "OpenActionInfo");

	Params::USequenceDirector_C_OpenActionInfo_Params Parms{};

	Parms.TextID = TextID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEventSequenceTemplate.SequenceDirector_C.OpenActionInfoForEightBattle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TextID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::OpenActionInfoForEightBattle(class FName TextID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "OpenActionInfoForEightBattle");

	Params::USequenceDirector_C_OpenActionInfoForEightBattle_Params Parms{};

	Parms.TextID = TextID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEventSequenceTemplate.SequenceDirector_C.OpenActionInfoFromAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TextID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayableCharacterID    CharaID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AbilityIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::OpenActionInfoFromAbility(class FName TextID, enum class EPlayableCharacterID CharaID, int32 AbilityIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SequenceDirector_C", "OpenActionInfoFromAbility");

	Params::USequenceDirector_C_OpenActionInfoFromAbility_Params Parms{};

	Parms.TextID = TextID;
	Parms.CharaID = CharaID;
	Parms.AbilityIndex = AbilityIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEventSequenceTemplate.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
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


