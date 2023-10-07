#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x48 - 0x40)
// BlueprintGeneratedClass BattleEventSequenceTemplate.SequenceDirector_C
class USequenceDirector_C : public UBattleEventDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x40(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USequenceDirector_C* GetDefaultObj();

	void OpenTalk(class FName TalkTextID, const struct FVector2D& Offset, bool WaitFinish);
	void CloseTalk();
	void SetEventFlag(class FName FlagName, bool Value);
	void OpenTutorial(enum class ETUTORIAL_TYPE TutorialType, bool bForcedDisplay);
	void ChangeBoostLevel(class ABattleCharacterBase* Character, int32 BoostLevel);
	void ExecBattleSuspend();
	void RandomJumpToFrame(float Rate, int32 Frame);
	void ReleasePotentialityAction(enum class EPlayableCharacterID CharacterID);
	void ExecPotentialityAction(class ABattleCharacterBase* Character);
	void JumpToFrame(int32 Frame);
	void ChangeActionMode(class ABattleCharacterBase* ActionCharacter, bool bIsEnable, int32 NModeIndex, bool bUseTransition);
	void PlayAction(class ABattleCharacterBase* Character, enum class EKSCharacterAction BattleActionID);
	void PlayBGM(class FName BgmLabel, float FadeOutTime, float FadeInTime);
	void StopBgm(float FadeOutTime);
	void ControlDisease(class ABattleCharacterBase* TargetCharacter, bool Remove, class FName DiseaseName, int32 InvocationValue, int32 InvocationTurn);
	void ChangeCharacterName(class ABattleCharacterBase* TargetCharacter, class FName CharacterNameID);
	void InstantDeath_EnemyAll();
	void PlayBGMWithDelay(class FName BgmLabel, float FadeOutTime, float FadeInTime, float DelayTime);
	void PlayVibration(class FName VibrationID, enum class EVibrationPower Power);
	void FixBattleCamera();
	void ReturnCaptureSubParty();
	void WaitReturnCaptureMove();
	void ExecExtendBGM(int32 Index);
	void PlaySE(class FName SEID);
	void OpenActionInfo(class FName TextID);
	void OpenActionInfoForEightBattle(class FName TextID);
	void OpenActionInfoFromAbility(class FName TextID, enum class EPlayableCharacterID CharaID, int32 AbilityIndex);
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

}


