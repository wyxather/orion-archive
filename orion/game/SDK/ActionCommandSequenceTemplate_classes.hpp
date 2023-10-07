#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x48 - 0x40)
// BlueprintGeneratedClass ActionCommandSequenceTemplate.SequenceDirector_C
class USequenceDirector_C : public UActionCommandDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x40(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USequenceDirector_C* GetDefaultObj();

	void WeaponChange(enum class EWEAPON_CATEGORY WeaponType);
	void ExecSpecialAilment();
	void PlayAction(class ABattleCharacterBase* Character, enum class EKSCharacterAction BattleActionID, enum class EPlayableCharacterID UniqueCharaID, enum class EKSCharacterAction UniqueActionID, bool ExceptEnforcer);
	void JumpToFrame(int32 Frame);
	void RandomJumpToFrame(float Rate, int32 Frame);
	void CheckCounter(int32 Frame);
	void CheckPattern2(int32 PatternB);
	void CheckPattern3(int32 PatternB, int32 PatternC);
	void PlayWeaponAttack(class ABattleCharacterBase* Character);
	void SetMaterialParameter_Float(class AEmitter* Particle, class FName ParameterName, float Value);
	void SetMaterialParameter_Vector(class AEmitter* Particle, class FName ParameterName, const struct FVector& Value);
	void RegisterOnHitSE(class FName SEID);
	void PlayAbilitySEByIndex(int32 Index);
	void JumpToMarker(const class FString& Marker);
	void RandomJumpToMarker(float Rate, const class FString& Marker);
	void CheckCounterToMarker(const class FString& Marker);
	void CheckPattern2_ToMarker(const class FString& PatternB);
	void CheckPattern3_ToMarker(const class FString& PatternB, const class FString& PatternC);
	void ExecSummonCharacter(int32 SummonIndex, bool Random);
	void ExecSummonAbility(int32 SummonIndex);
	void ReturnSummonCharacter();
	void WaitSummonAbility();
	void CheckBoostLevelGreater(int32 BoostLevel, bool ContainEqual, int32 Frame);
	void CheckBoostLevelGreaterToMarker(int32 BoostLevel, bool ContainEqual, const class FString& Marker);
	void CheckBoostLevelLess(int32 BorderLevel, bool ContainEqual, int32 Frame);
	void CheckBoostLevelLessToMarker(int32 BorderLevel, bool ContainEqual, const class FString& Marker);
	void PlayVibration(class FName VibrationID, enum class EVibrationPower Power);
	void ExecAilmentWithAbilityHit(int32 Index, bool AllAilment, bool LastHit, bool OnHit);
	void CheckAbilityHitToMarker(bool OnHit, const class FString& Marker);
	void CheckAbilityHitToFrame(bool OnHit, int32 Frame);
	void PlaySE_WithAbilityHit(class FName SEID, bool OnHit);
	void PlayVoice_WithAbilityHit(enum class EBATTLE_VOICE_TYPE VoiceType, enum class EPlayableCharacterID UniqueCharaID, enum class EBATTLE_VOICE_TYPE UniqueVoiceType, bool OnHit);
	void PlayAbilitySE_WithAbilityHit(int32 Index, bool OnHit);
	void PlayActionWithAbilityHit(class ABattleCharacterBase* ActionCharacter, enum class EKSCharacterAction BattleActionID, enum class EPlayableCharacterID UniqueCharaID, enum class EKSCharacterAction UniqueActionID, bool OnHit);
	void PlayVoice(enum class EBATTLE_VOICE_TYPE VoiceType, enum class EPlayableCharacterID UniqueCharaID, enum class EBATTLE_VOICE_TYPE UniqueVoiceType);
	void ExecStepCounter();
	void PlaySE(class FName SEID);
	void HideInfomation();
	void CheckDismantlingPattern(int32 HPRecovery, int32 SPRecovery, int32 BPRecovery, int32 Buff);
	void CheckDismantlingPatternToMarker(const class FString& HPRecovery, const class FString& SPRecovery, const class FString& BPRecovery, const class FString& Buff);
	void PlaySessionAction(enum class EKSCharacterAction BattleActionID);
	void ExecSessionAbility();
	void WaitSessionAbility();
	void StartCharacterWarp(const struct FVector& PositionOffset);
	void EndCharacterWarp();
	void PlayBusinessSupportAction(enum class EKSCharacterAction BattleActionID);
	void CallBusinessSupporter();
	void ReturnBusinessSupporter();
	void WaitBusinessSupporter();
	void ShowInfomation(class FName TextID);
	void ShowBusinessSupportInfomation();
	void WaitEnemyAction();
	void PlayActionForSelfOnly(class ABattleCharacterBase* ActionCharacter, enum class EKSCharacterAction BattleSelfActionID, enum class EKSCharacterAction BattleOtherActionID, bool bExceptEnforcer);
	void CallSessionSupporter();
	void WaitSessionSupporter();
	void ReturnSessionSupporter();
	void ExecAilment(int32 Index, bool AllAilment, bool LastHit);
	void ExecPlayDiseaseMissUI();
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

}


