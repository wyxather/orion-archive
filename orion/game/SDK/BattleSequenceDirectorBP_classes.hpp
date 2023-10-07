#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x458 - 0x390)
// BlueprintGeneratedClass BattleSequenceDirectorBP.BattleSequenceDirectorBP_C
class ABattleSequenceDirectorBP_C : public ABattleSequenceDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       SceneComponent;                                    // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ACineCameraActor*                      SequencerCamera;                                   // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAbilityCamera;                                   // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsResultCamera;                                    // 0x3A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsUpdateSequenceCamera;                            // 0x3AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsChangeBoostEvent;                                // 0x3AB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        WorkIndex;                                         // 0x3AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAbilityEffect;                                   // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AbilityCameraSlidePlayRate;                        // 0x3B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAbilityCameraSlideSegment;                       // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABattleSequenceEmitter*>        InvadeSizeMEffect;                                 // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABattleSequenceEmitter*>        InvadeSizeLEffect;                                 // 0x3D0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         IsInvadeAbilityEffect;                             // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AbilityCameraBackPlayRate;                         // 0x3E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAbilityCameraBackSegment;                        // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EBATTLE_SEQUENCER_CHANGE_TYPE     CurrentBoostEffectType;                            // 0x3E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ExecPartyChangeSequence;                           // 0x3EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14C2[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            MapObjectRootTransform;                            // 0x3F0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FTransform>                    EnemyTransform;                                    // 0x420(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTransform>                    PlayerTransform;                                   // 0x430(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ReturnCaptureMoveComplete;                         // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnableBreak;                                       // 0x441(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ExecStartDashSequence;                             // 0x442(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14C3[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          BoostLoopTimerHandler;                             // 0x448(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          WeatherLoopTimerHandler;                           // 0x450(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABattleSequenceDirectorBP_C* GetDefaultObj();

	bool SpecialAttachEffectRevision(class FName EnemyGroup, int32* ParamIndex);
	void UpdateSequencerCameraForFirstFrame(class ALevelSequenceActor* SequenceActor, class ACineCameraActor* SequencerCamera);
	void GetEightBattleInfomationText(class FName FormatText, class FText* Result);
	void GetSequencePlayerCurrentRatio(class ULevelSequencePlayer* TargetPlayer, float* CurrentRatio);
	class ULevelSequence* GetPartyChangeSequence(bool bFrontToBack);
	bool ExecPartyChangeSequencer(bool bFrontToBack);
	void GetAdvancedAbilityText(class FName FormatText, enum class EPlayableCharacterID CharaID, int32 AbilityIndex, class FText* Result);
	void GetAttachActor(class AActionCommandBase* CommandData, int32 Index, enum class EBATTLE_EFFECT_ATTACH_TYPE AttachType, class AActor** AttachActor, class ABattleCharacterBase** AttachCharacter);
	void SettingSequencerCamera();
	void SettingBindingForEnforcer(class ALevelSequenceActor* SequencerActor, class AActionCommandBase* CommandData, bool IsSubCommand);
	void SettingActionCommandPointLight(class ALevelSequenceActor* SequenceActor, class AActionCommandBase* CommandData, class ABattleSequencePointLight* PointLightActor, class FName BindingTag);
	void GetAreaCenterPosition(TArray<class ABattleCharacterBase*>& CharacterList, const struct FVector& DefaultPosition, struct FVector* CenterPosition);
	bool ResetActionCommandDirector(class ABattleAbilitySequenceActor* CSequenceActor, bool bIsSubCommand);
	class ULevelSequence* GetBattleResultSequence(enum class EBATTLE_RESULT_TYPE EResultType, enum class EBATTLE_CAMERA_TYPE ECameraType, bool bIsFront);
	bool ExecBattleResultSequencer(enum class EBATTLE_RESULT_TYPE EResultType, enum class EBATTLE_CAMERA_TYPE ECameraType, bool bIsFront);
	bool ExecResultDashSequencer();
	bool ExecBattleStartDashSequencer(enum class EBATTLE_START_DASH_TYPE EStartDashType);
	class ULevelSequence* GetBattleStartDashSequence(enum class EBATTLE_START_DASH_TYPE EStartDashType);
	bool ExecBattleEventSequencer(class ULevelSequence* CExecSequence, class ABattleCharacterBase* CEventActor, enum class EBATTLE_CHARA_POSITION_RESET_TYPE EPositionType);
	void CreateSequenceActor();
	void DestroySequenceActor();
	TArray<class ABattleSequenceEmitter*> CreateAbilityEffect(class UParticleSystem* CTemplate, enum class EBATTLE_EFFECT_ATTACH_TYPE EAttachType, class AActionCommandBase* CActionCommand, bool bGroundEffect, bool bReviveEffect, bool bAttachSocket);
	bool ExecActionCommandSequencer(class AActionCommandBase* CActionCommand, class ULevelSequence* CExecSequence, class ABattleAbilitySequenceActor* CSequenceActor, bool bIsSubCommand);
	class ULevelSequence* GetBreakSequence(enum class EBREAK_CAMERA_TYPE EBreakType, enum class EBATTLE_CAMERA_TYPE ECameraType);
	bool ExecBreakCameraSequencer(enum class EBREAK_CAMERA_TYPE EBreakType, enum class EBATTLE_CAMERA_TYPE ECameraType);
	class ULevelSequence* GetEncountSequence(enum class EBATTLE_CAMERA_TYPE ECameraType);
	bool ExecEncountCameraSequencer(enum class EBATTLE_CAMERA_TYPE ECameraType);
	bool ExecWeatherSequencer(enum class ETimeZoneType ETimeZone, enum class EBATTLE_SEQUENCER_CHANGE_TYPE EChangeType);
	bool ExecAbilityCameraSequencer(int32 NBoostLevel, enum class EBATTLE_TARGET_TYPE ETargetType, enum class EBATTLE_CAMERA_TYPE ECameraType, int32 NSlideFrame, class AActionCommandBase* CActionCommand, bool bEnemySide, bool bIsFront, class FName StrAbilityName);
	bool SuspendBoostSequencer(int32 NBoostLevel);
	bool ExecBoostSequencer(int32 NBoostLevel, enum class EBATTLE_SEQUENCER_CHANGE_TYPE EChangeType);
	class ULevelSequence* GetWeatherSequence(enum class ETimeZoneType ETimeZone, enum class EBATTLE_SEQUENCER_CHANGE_TYPE EChangeType);
	class ULevelSequence* GetAbilityCameraSequence(int32 NBoostLevel, enum class EBATTLE_TARGET_TYPE ETargetType, enum class EBATTLE_CAMERA_TYPE ECameraType, bool bEnemySide, bool bIsFront, class FName StrAbilityName);
	class ULevelSequence* GetBoostSequence(int32 NBoostLevel, enum class EBATTLE_SEQUENCER_CHANGE_TYPE EChangeType);
	void ExecBoostStart(int32 NBoostLevel);
	void ExecBoostLoop();
	void ChangeBoostLevel(int32 NBoostLevel, bool bAddLevel);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecAbilityCamera(int32 NBoostLevel, enum class EBATTLE_TARGET_TYPE ETargetType, enum class EBATTLE_CAMERA_TYPE ECameraType, int32 NSlideFrame, class AActionCommandBase* CActionCommand, bool bEnemySide, bool bIsFront, class FName StrAbilityName);
	void FinishAbilityCamera();
	void ExecBoostShutDown(bool bWithWeather);
	void FinishBoostShutDown();
	void ExecWeatherLoop();
	void ExecEncountCamera(enum class EBATTLE_CAMERA_TYPE ECameraType);
	void FinishEncountCamera();
	void ExecBreakCamera(enum class EBREAK_CAMERA_TYPE EBreakType, enum class EBATTLE_CAMERA_TYPE ECameraType);
	void FinishBreaktCamera();
	void ExecActionCommandDirector(class AActionCommandBase* CActionCommand, class ULevelSequence* CExecSequence);
	void FinishActionCommandDirector();
	void OpenTalkCommand(class FName TalkTextID, const struct FVector2D& Offset, bool WaitFinish);
	void CloseTalkCommand();
	void WaitTalkBalloonFinish();
	void PlayActionCommand(class ABattleCharacterBase* ActionCharacter, enum class EKSCharacterAction BattleActionID);
	void PlaySECommand(class FName SEID);
	void PlayVibrationCommand(class FName VibrationID, enum class EVibrationPower Power);
	void ExecBattleEvent(class ULevelSequence* CExecSequence, class ABattleCharacterBase* CEventActor, enum class EBATTLE_CHARA_POSITION_RESET_TYPE EPositionType);
	void FinishBattleEvent();
	void ExecBattleStartDash(enum class EBATTLE_START_DASH_TYPE EStartDashType);
	void FinishBattleStartDash();
	void ExecBattleResult(enum class EBATTLE_RESULT_TYPE EResultType, enum class EBATTLE_CAMERA_TYPE ECameraType, bool bIsFront);
	void FinishBattleResult();
	void ExecResultDash();
	void FinishResultDash();
	void OpenTutorialCommand(enum class ETUTORIAL_TYPE ETutorialType, bool bForcedDisplay);
	void WaitTutorialFinish();
	void InterpolationAbilityCamera(float FRatio);
	void InterpolationResultCamera(float FRatio);
	void ReceiveTick(float DeltaSeconds);
	void ExecNextBoostEvent();
	void ChangeBoostLevelCommand(class ABattleCharacterBase* ActionCharacter, int32 BoostLevel);
	void ExecBattleSuspendCommand();
	void ExecSubActionCommandDirector(class AActionCommandBase* CActionCommand, class ULevelSequence* CExecSequence);
	void FinishSubActionCommandDirector();
	void FinishSubActionCommandDirector_00();
	void FinishSubActionCommandDirector_01();
	void FinishSubActionCommandDirector_02();
	void FinishSubActionCommandDirector_03();
	void EnableAbilityHitEffect();
	void FinishSubActionCommandDirector_04();
	void FinishSubActionCommandDirector_05();
	void StartAutoProgressTalkBalloon();
	void StartAutoProgressTutorial();
	void ReleasePotentialityAction(enum class EPlayableCharacterID CharacterID);
	void RemoveBoostEffect();
	void SetBattleEnemyVisibility(bool bVisible);
	void SetAdvancedAbility(enum class EPlayableCharacterID CharacterID, int32 NIndex, bool bEnable);
	void CloseActionInfo();
	void OpenActionInfoFromAdvancedAbility(class FName TextID, enum class EPlayableCharacterID CharaID, int32 AbilityIndex);
	void ExecPotentialityAction(class ABattleCharacterBase* ActionCharacter);
	void ExecPartyChange(bool bFrontToBack);
	void FinishPartyChange();
	void FinishSubActionCommandDirector_06();
	void FinishSubActionCommandDirector_07();
	void SetBattleWipeWhiteOutFlag(bool bEnable);
	void InstantDeath_EnemyAll();
	void SuspendActionCommand();
	void FixBattleCameraCommand();
	void ReturnCaptureCommand();
	void WaitReturnCaptureCommand();
	void WaitReturnCaptureMove();
	void OpenActionInfo(class FName TextID);
	void OpenActionInfoForEightBattle(class FName TextID);
	void FinishSubActionCommandDirector_08();
	void FinishSubActionCommandDirector_09();
	void FinishSubActionCommandDirector_10();
	void FinishSubActionCommandDirector_11();
	void ExecFinishAbilityCamera();
	void ExecFinishResultCamera();
	void StartBoostLoop();
	void StartWeatherLoop();
	void ExecuteUbergraph_BattleSequenceDirectorBP(int32 EntryPoint);
};

}


