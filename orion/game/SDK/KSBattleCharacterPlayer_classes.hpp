#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xEE (0xBDE - 0xAF0)
// BlueprintGeneratedClass KSBattleCharacterPlayer.KSBattleCharacterPlayer_C
class AKSBattleCharacterPlayer_C : public AKSCharacterBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        HardenDeadFadeOut_FadeAlhpa_7B7E22CC48254C108B8DA7A00407E280; // 0xAF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                HardenDeadFadeOut__Direction_7B7E22CC48254C108B8DA7A00407E280; // 0xAFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    HardenDeadFadeOut;                                 // 0xB00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LoopPotentialityActionEffect_StyleEffect_CE24F4F2439647AC4974B6BBAD777258; // 0xB08(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                LoopPotentialityActionEffect__Direction_CE24F4F2439647AC4974B6BBAD777258; // 0xB0C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    LoopPotentialityActionEffect;                      // 0xB10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartPotentialityActionEffect_StyleEffect_F1BF5C48415A5B7853F62FA9B560BD2D; // 0xB18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                StartPotentialityActionEffect__Direction_F1BF5C48415A5B7853F62FA9B560BD2D; // 0xB1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    StartPotentialityActionEffect;                     // 0xB20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          PlayerSelectedAnimation_SelectedColor_ADFAFE5D46601A85DFCB5B951217AEB8; // 0xB28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                PlayerSelectedAnimation__Direction_ADFAFE5D46601A85DFCB5B951217AEB8; // 0xB38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    PlayerSelectedAnimation;                           // 0xB40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          PlayerBoostSelectedAnimation_SelectedColor_A64E3B904EBC72170D68FA899E6A1EBA; // 0xB48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                PlayerBoostSelectedAnimation__Direction_A64E3B904EBC72170D68FA899E6A1EBA; // 0xB58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    PlayerBoostSelectedAnimation;                      // 0xB60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        PlayingAction;                                     // 0xB68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayingAction;                                   // 0xB69(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPinch;                                           // 0xB6A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDead;                                            // 0xB6B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsGuard;                                           // 0xB6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5BF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BoostLevel;                                        // 0xB70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDebugPrint;                                      // 0xB74(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EKSCharacterAction>        ActionStack;                                       // 0xB78(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EKSCharacterAction                LatestAction;                                      // 0xB88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnablePlayAction;                                  // 0xB89(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDisease;                                         // 0xB8A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsHarden;                                          // 0xB8B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MaterialInstance;                                  // 0xB90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPotentialyAction;                                // 0xB98(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EKSCharacterDir                   PlayDirection;                                     // 0xB99(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWEAPON_CATEGORY                  EquipWeaponType;                                   // 0xB9A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsVictory;                                         // 0xB9B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsLevelup;                                         // 0xB9C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsCharacterNPC;                                    // 0xB9D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C8[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            DefaultWarpTransform;                              // 0xBA0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsGuardSP;                                         // 0xBD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsCharge;                                          // 0xBD1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsCommandSelect;                                   // 0xBD2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPreparation;                                     // 0xBD3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class FName                                  BaseJobActionLabel;                                // 0xBD4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDISEASE_TYPE                     HardenDiseaseType;                                 // 0xBDC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableWonderAction;                                // 0xBDD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AKSBattleCharacterPlayer_C* GetDefaultObj();

	void ResetLatestAction();
	void InitializeForMasquerade();
	void SetBaseJobActionLabel(class FName BaseJobLabel);
	void SetStateGuard(bool Guard);
	void SetStateCommandSelect(bool CommandSelectFlag, bool PreparationFlag, bool PlayForceIdle);
	void SetStateChargeAction(bool ChargeFlag);
	void SetStateGuardSP(bool GuardSPFlag);
	void GetDefaultWarpTransform(struct FTransform* DefaultWarpTransform);
	void SetDefaultWarpTransform(const struct FTransform& DefaultWarpTransform);
	void SetCharacterNPC(bool NPCFlag, enum class EWEAPON_CATEGORY EquipWeaponType);
	enum class ECHARACTER_MODE GetMode();
	void SetStateLevelup(bool IsLevelup);
	void SetStateVictory(bool IsVictory);
	void SetEquipWeaponType(enum class EWEAPON_CATEGORY WeaponType);
	void Set_State_Potentiality_Action(bool IsPotentialityAction, const struct FLinearColor& EffectColor);
	void SetCharacterVisible(bool Visibility);
	void Set_State_Harden(bool HardenFlag, enum class EDISEASE_TYPE DiseaseType);
	void SetStateDisease(bool DiseaseFlag);
	void SetCharacterAlpha(float Alpha);
	void SetupActionTable(class FName ActionLabel);
	void ClearActionStack();
	void PopActionStack(bool* Result, enum class EKSCharacterAction* PopAction);
	void PushActionStack(enum class EKSCharacterAction Action, enum class EKSCharacterDir Direction);
	void GetIdle(enum class EKSCharacterAction* Action);
	void PlayActionLocal(enum class EKSCharacterAction Action, enum class EKSCharacterDir Direction);
	void SetStateDead(bool DeadFlag);
	void SetStatePinch(bool PinchFlag);
	void ClearActionState();
	void IsPlaying(bool* Playing);
	void Initialize();
	void HardenDeadFadeOut__FinishedFunc();
	void HardenDeadFadeOut__UpdateFunc();
	void PlayerSelectedAnimation__FinishedFunc();
	void PlayerSelectedAnimation__UpdateFunc();
	void PlayerBoostSelectedAnimation__FinishedFunc();
	void PlayerBoostSelectedAnimation__UpdateFunc();
	void StartPotentialityActionEffect__FinishedFunc();
	void StartPotentialityActionEffect__UpdateFunc();
	void LoopPotentialityActionEffect__FinishedFunc();
	void LoopPotentialityActionEffect__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void SetBattleSelectMaterial(bool Select, bool Boost);
	void PlayBattleAction(enum class EBATTLE_ACTION_TYPE BattleAction, bool StackClear);
	void SetStateBoost(int32 BoostLevel);
	void PlayCharacterAction(enum class EKSCharacterAction Label, enum class EKSCharacterDir Direction, bool StackClear);
	void SetEnablePlayAction(bool Enable);
	void PlayHardenDeadFadeOut();
	void ReceiveBeginPlay();
	void PlayStartPotentialityActionEffect();
	void PlayLoopPotentialityActionEffect();
	void StopPotentialityActionEffect();
	void OnAnimationFinish();
	void SetCharacterOpacity(float Opacity, bool WithCanoe);
	void SetPotentialityActionBodyColor(const struct FLinearColor& Value);
	void SetPotentialityActionEyesColor(float Value);
	void SetEnableWonderAction(bool Enable);
	void ExecuteUbergraph_KSBattleCharacterPlayer(int32 EntryPoint);
};

}


