#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x25F (0xB30 - 0x8D1)
// BlueprintGeneratedClass BattleSupporterBP.BattleSupporterBP_C
class ABattleSupporterBP_C : public ABattleCharacterBaseBP_C
{
public:
	uint8                                        Pad_1471[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        ReturnDashTimeline_Ratio_62AC4B5D4B4BFD0A155DB5A0F7C2413F; // 0x8E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ReturnDashTimeline__Direction_62AC4B5D4B4BFD0A155DB5A0F7C2413F; // 0x8E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1472[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ReturnDashTimeline;                                // 0x8E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartDashTimeline_Ratio_170003E34FF8CF8DD126D890734501C6; // 0x8F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                StartDashTimeline__Direction_170003E34FF8CF8DD126D890734501C6; // 0x8F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1473[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    StartDashTimeline;                                 // 0x8F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VictoryFadeOutTimeline_Alpha_BE39686C4B119B171F7793A1DB959208; // 0x900(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                VictoryFadeOutTimeline__Direction_BE39686C4B119B171F7793A1DB959208; // 0x904(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1474[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    VictoryFadeOutTimeline;                            // 0x908(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CoverStepOutTimeline_Ratio_3415B59647C51E32E9E66E855516F4AA; // 0x910(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CoverStepOutTimeline__Direction_3415B59647C51E32E9E66E855516F4AA; // 0x914(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1475[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CoverStepOutTimeline;                              // 0x918(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CoverStepInTimeline_Ratio_7B3232CF435DAFDCA361E9A9F4704C28; // 0x920(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CoverStepInTimeline__Direction_7B3232CF435DAFDCA361E9A9F4704C28; // 0x924(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1476[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CoverStepInTimeline;                               // 0x928(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DashStart;                                         // 0x930(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DashGoal;                                          // 0x93C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DashTime;                                          // 0x948(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DashDelay;                                         // 0x94C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_ACTION_TYPE               DashEndAction;                                     // 0x950(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1478[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CoverRate;                                         // 0x954(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ExecCoverStep;                                     // 0x958(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1479[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CoverStepStart;                                    // 0x95C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CoverStepPoint;                                    // 0x968(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ExecSupporterDash;                                 // 0x974(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_147A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSupportCharacterData                 SupportData;                                       // 0x978(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        SupportPoint;                                      // 0xA30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SupportFinish;                                     // 0xA34(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_147B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SupportPointCost;                                  // 0xA38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SupportComplete;                                   // 0xA3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WaterSideMode;                                     // 0xA3D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_147C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBattleAICommandData>          BattleAICommandData;                               // 0xA40(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         LoadedWeaponTextureFlag;                           // 0xA50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_147D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          EquipmentTexture;                                  // 0xA58(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCharacterResourceData                CurrentResourceData;                               // 0xA68(0xC8)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABattleSupporterBP_C* GetDefaultObj();

	bool IsSupporterComplete();
	bool ChangeMainWeapon(enum class EWEAPON_CATEGORY ETargetWeapon, bool bUseWeaponTexture);
	bool IsCharacterSupporter();
	class FName GetAbilityData(int32 NIndex);
	struct FVector GetCurrentPosition();
	void GetReplayStatus(bool bIsSelfTurn, enum class EBATTLE_REPLAY_CHARA_STATUS* EReplayStatus);
	void OverrideSupporterDataByNPCData(struct FNPCData& NPCData);
	enum class ESESSION_SE_TYPE GetSessionSEType();
	void GetCharacterName(class FText* StrCharacterName);
	void InitCallSupporter();
	void InitSupporter_Internal();
	void GetPlayableCharacterID(enum class EPlayableCharacterID* ECharaID);
	bool OnHitDamageHP(bool bIsBreakAttack, bool bIsBreakTarget, enum class EATTRIBUTE_RESIST ETotalResist, enum class EATTRIBUTE_RESIST EWeaponResist);
	void IsSupporterDash(bool* ExecDash);
	void IsUltimatedSupporter(bool* IsUltimatedSupportr);
	void GetSessionAbility(class FName* AbilityLabel);
	void InitEquimentWeapon(enum class EWEAPON_CATEGORY WeaponCategory, class FName WeaponItemLabel);
	void Debug_GetSupportCount(int32* Count);
	void Debug_GetSupportPoint(int32* Point);
	void Debug_GetUseAbilityList(TArray<class FText>* AbilityLabelList, int32* SelectIndex);
	void InstantStepInForReplay();
	void InitializeReplayMode(const struct FSupportCharacterData& SupportData, class ABattlePlayerBP_C* Player, class FName SupporterRowID, int32 BattleCharaID, enum class EBATTLE_REPLAY_CHARA_STATUS CharaStatus);
	void GetMainAbilityNameID(class FName* AbilityLabel);
	void SetSupportCharacterVisibility(bool Visible);
	void CheckDiseaseSuccess(const struct FDisease& DiseaseData, bool* Success);
	void GetRecoveryLevelRatio(enum class EAILMENT_CALC_TYPE CalcType, float* LevelRatio, int32* BaseDEF);
	void GetDamageLevelRatio(enum class EAILMENT_CALC_TYPE CalcType, float* LevelRatio, int32* BaseATK);
	void GetEffectSpawnPosition(bool Ground, struct FVector* Position);
	void BeginCharacterTurn_OLD(float* WaitTime);
	void GetCharacterNameID(class FName* TextID);
	void JudgeCover(bool* Success);
	void InitSupporter();
	void UpdateSupportTurn(bool* SupportFinish, float* WaitTime);
	void CharacterStepOut();
	void CharacterStepIn();
	void Initialize(const struct FSupportCharacterData& SupportData, class ABattlePlayerBP_C* Player, const struct FVector& CharaStepPoint, class FName SupporterRowID, bool WaterSide);
	void StartDashTimeline__FinishedFunc();
	void StartDashTimeline__UpdateFunc();
	void CoverStepInTimeline__FinishedFunc();
	void CoverStepInTimeline__UpdateFunc();
	void CoverStepOutTimeline__FinishedFunc();
	void CoverStepOutTimeline__UpdateFunc();
	void VictoryFadeOutTimeline__FinishedFunc();
	void VictoryFadeOutTimeline__UpdateFunc();
	void ReturnDashTimeline__FinishedFunc();
	void ReturnDashTimeline__UpdateFunc();
	void CreateAnimCharacter(class FName ActionLabel);
	void ReceiveDestroyed();
	void SetDamage(int32 DamageValue, enum class EBATTLE_DAMAGE_TYPE DamageType, bool LastHit, bool InstantDeath);
	void ExecStartDash();
	void SupportStartDash();
	void VictoryFadeOut();
	void FinishStepOut();
	void SupportReturnDash(bool Escape);
	void Update_Animation_State_OLD();
	void CoverStepIn();
	void CoverStepOut();
	void NoticePlayActionCommand(class FName ActionCommand);
	void ExecReturnDash();
	void ExecSupporterReturn();
	void OnFinish_CreateBattleAI();
	void LoadWeaponTexture();
	void LoadedWeaponTexture();
	void CoverStepInForRandom();
	void SetDefaultLocation(bool bInMainParty);
	void FinishChangePartySequence();
	void CoverStepOutForRandom();
	void ExecuteUbergraph_BattleSupporterBP(int32 EntryPoint);
};

}


