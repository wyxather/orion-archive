#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA81 (0xFF9 - 0x578)
// BlueprintGeneratedClass BattleManagerBP.BattleManagerBP_C
class ABattleManagerBP_C : public ABattleManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x578(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        BattleFieldDiseaseMaterialCross_ParameterValue_6231C2D34341B151903481B2BED6F4AB; // 0x588(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                BattleFieldDiseaseMaterialCross__Direction_6231C2D34341B151903481B2BED6F4AB; // 0x58C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    BattleFieldDiseaseMaterialCross;                   // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RecoveryCutDiseaseMaterialCurve_ScrollParameter_5CD8F9C34693B09366CBFB985BD32928; // 0x598(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RecoveryCutDiseaseMaterialCurve_MaskParameter_5CD8F9C34693B09366CBFB985BD32928; // 0x5A4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                RecoveryCutDiseaseMaterialCurve__Direction_5CD8F9C34693B09366CBFB985BD32928; // 0x5B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    RecoveryCutDiseaseMaterialCurve;                   // 0x5B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BattleFieldDiseaseMaterialCurve_ParameterValue_35E25F444ED981F583EDDF9720AF402A; // 0x5C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                BattleFieldDiseaseMaterialCurve__Direction_35E25F444ED981F583EDDF9720AF402A; // 0x5C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    BattleFieldDiseaseMaterialCurve;                   // 0x5C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StatusIconLoop_LoopAlpha_2E23A0454FE908A34651F8B4A3CE3BF8; // 0x5D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                StatusIconLoop__Direction_2E23A0454FE908A34651F8B4A3CE3BF8; // 0x5D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    StatusIconLoop;                                    // 0x5D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_FLOW_STATE                CurrentFlow;                                       // 0x5E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_FLOW_STATE                PrevFlow;                                          // 0x5E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C6[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DeltaSeconds;                                      // 0x5E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WaitTimeSec;                                       // 0x5E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LocalStep;                                         // 0x5EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleActionOrderBP_C*                BattleActionOrder_Old;                             // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleTargetSelectBP_C*               BattleTargetSelect;                                // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABattlePlayerBP_C*>             BattlePlayer;                                      // 0x600(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABattleEnemyBP_C*>              BattleEnemy;                                       // 0x610(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ABattleCameraBP_C*                     BattleCamera;                                      // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBattleActionParam                    ActionParam;                                       // 0x628(0x12D)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_7C7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EBATTLE_FLOW_STATE                ReturnBattleFlow;                                  // 0x758(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnLocalStep;                                   // 0x75C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EscapeRequest;                                     // 0x760(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7C9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattleResultPanelWidget_C*            BattleResultUI;                                    // 0x768(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ElapsedTime;                                       // 0x770(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7CA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCommandMenuActorBP_C*           CommandMenuActor;                                  // 0x778(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABattleCharacterBaseBP_C*>      AllBattleCharacter;                                // 0x780(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         IsResultSkip;                                      // 0x790(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanResultSkip;                                     // 0x791(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7CB[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoundData                            MapBGMData;                                        // 0x798(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         IsPlayAction;                                      // 0x7E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7CC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_ActionCommandBase_C*               ActionCommand;                                     // 0x7E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattleActionInfo_C*                   ActionInfo;                                        // 0x7F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABattleSupporterBP_C*>          BattleSupporter;                                   // 0x7F8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FBattleResultItemDropData>     RewardItemList;                                    // 0x808(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ATameMonsterCommand_C*                 TameMonsterCommand;                                // 0x818(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        BattleDialogType;                                  // 0x820(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBattleDialogOpen;                                // 0x821(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7CE[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          EnemyIDList;                                       // 0x828(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         DebugEffectMode;                                   // 0x838(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7CF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UActionOrderTimeLine_C*                ActionOrderTimeLine;                               // 0x840(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  EnemyGroupID;                                      // 0x848(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEnemyGroup                           EnemyGroup;                                        // 0x850(0x7A)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_7D0[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ViewerEnemyList;                                   // 0x8D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                       ViewerPlacement;                                   // 0x8E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsBoostMode;                                       // 0x8F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsEventBGM;                                        // 0x8F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsCrossOrder;                                      // 0x8F2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7D2[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBaseBP_C*              CrossCharacter;                                    // 0x8F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBreakSlow;                                       // 0x900(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsFinishBlowSlow;                                  // 0x901(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsBoostMaxPlayer;                                  // 0x902(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EscapeSuccess;                                     // 0x903(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        EscapeCount;                                       // 0x904(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTutorial;                                        // 0x908(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DebugPlayerInvisible;                              // 0x909(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DebugEnemyInvisible;                               // 0x90A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDefeatBGM;                                       // 0x90B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7DB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBattleSelectPlayerStatus_C*>   PlayerStatusUI;                                    // 0x910(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_BattleSelectSubPlayerStatus_C*> PlayerSubStatusUI;                                 // 0x920(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        PlayerStatusUIMax;                                 // 0x930(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7DC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBattleDamageNumber_C*>         BattleDamageUI;                                    // 0x938(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        BattleDamageUIMax;                                 // 0x948(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7DD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBattleEnemyStatus_C*>          EnemyStatusUI;                                     // 0x950(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        EnemyStatusUIMax;                                  // 0x960(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DebugResultExpRatio;                               // 0x964(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DebugResultJPRatio;                                // 0x968(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DebugResultMoneyRatio;                             // 0x96C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DebugResultDropRatio;                              // 0x970(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BattleTurnChangeFlow;                              // 0x974(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsBoutDefeat;                                      // 0x975(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7DE[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InitializeBattleCounter;                           // 0x978(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        InitializeBattleMax;                               // 0x97C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BattleManagerReady;                                // 0x980(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsBoostUpPlayer;                                   // 0x981(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EBATTLE_START_TYPE                BattleStartType;                                   // 0x982(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CharacterTurnSkip;                                 // 0x983(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsHardenDeadCharacter;                             // 0x984(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7DF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABattleCharacterBase*>          BattleAlivePlayer;                                 // 0x988(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABattleCharacterBase*>          BattleAliveEnemy;                                  // 0x998(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FBattleAdditiveOrderData>      AdditiveOrderList;                                 // 0x9A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABattleCharacterBaseBP_C*              ActiveCharacter;                                   // 0x9B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBaseBP_C*              ActionCharacter;                                   // 0x9C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBaseBP_C*              AdditiveCharacter;                                 // 0x9C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AdditiveOrder_PlayerStepIn;                        // 0x9D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsAdditiveOrder;                                   // 0x9D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EBATTLE_CAMERA_TYPE               BattleCameraType;                                  // 0x9D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ExecutableChangeSubParty;                          // 0x9D3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7F1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBattleAdditiveOrderData>      ReraiseOrderList;                                  // 0x9D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ExecLastAct;                                       // 0x9E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7F2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFieldCommandWidgetMonster_C*          TameMonsterReleaseMenu;                            // 0x9F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABattlePlayerBP_C*>             SupportCoverPlayer;                                // 0x9F8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class FText                                  PlayActionInfoText;                                // 0xA08(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         EnableTurnEndDOT;                                  // 0xA20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7F3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABattleCharacterBaseBP_C*>      BreakCharacter;                                    // 0xA28(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UBattleDamageNumber_C*>         BusyBattleDamageUI;                                // 0xA38(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct FBattleAdditiveOrderData>      FirstAttackOrderList;                              // 0xA48(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        EXPRatioByAbility;                                 // 0xA58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EXPRatioByEquipment;                               // 0xA5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        JPRatioByAbility;                                  // 0xA60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        JPRatioByEquipment;                                // 0xA64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MoneyRatioByEquipment;                             // 0xA68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NoDamageBonus;                                     // 0xA6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PlayerDamageCounter;                               // 0xA70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BreakBonus;                                        // 0xA74(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OneTurnKillBonus;                                  // 0xA78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7F5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattleActionInfo_C*                   ActionInfoLower;                                   // 0xA80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsActionInfoMultiLine;                             // 0xA88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7F6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattleWindowEffect_C*                 BattleScreenEffect;                                // 0xA90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DropRatioByEquipment;                              // 0xA98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7F7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBattleDeathCount_C*>           DoomStatusUI;                                      // 0xAA0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UBattleDeathCount_C*>           BusyDoomStatusUI;                                  // 0xAB0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         IsEnemyDeadSlow;                                   // 0xAC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnableCallEnemyWeaken;                             // 0xAC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7F8[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallEnemyWeaken_HPRatio;                           // 0xAC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallEnemyWeaken_ShieldPoint;                       // 0xAC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7F9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABattleCharacterBase*>          BattleEnemyForPlacement;                           // 0xAD0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABattleEnemyBP_C*>              NonPartBattleEnemy;                                // 0xAE0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         DebugDisableDamageRandom;                          // 0xAF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7FA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DebugResultEXPValue;                               // 0xAF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RequestBattleInitialize;                           // 0xAF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7FB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBaseBP_C*              BattleEventEnforcer;                               // 0xB00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugSetResultEXP;                                 // 0xB08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7FC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DebugEnemyUseAbility;                              // 0xB0C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugSetEnemyUseAbility;                           // 0xB14(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EEndRollSegmentSet                BattleReplaySegment;                               // 0xB15(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayBattleReplay;                                // 0xB16(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7FD[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBattleReplayData                     CurrentReplayData;                                 // 0xB18(0x128)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsRecordBattleReplay;                              // 0xC40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7FF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                RecordPlayerIDList;                                // 0xC48(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                RecordPlayerJobList;                               // 0xC58(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                       RecordPlayerPosList;                               // 0xC68(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                RecordPlayerStatusList;                            // 0xC78(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                RecordEnemyIDList;                                 // 0xC88(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                       RecordEnemyPosList;                                // 0xC98(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                RecordEnemyStatusList;                             // 0xCA8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EBATTLE_REPLAY_FIELD_STATUS       RecordFieldStatus;                                 // 0xCB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_800[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RecordActionID;                                    // 0xCBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RecordActionEnforcer;                              // 0xCC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_801[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                RecordActionParameter;                             // 0xCC8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABattleCharacterBaseBP_C*              LastActionPlayer;                                  // 0xCD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                RecordSupporterIDList;                             // 0xCE0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                RecordSupporterStatusList;                         // 0xCF0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EBATTLE_REPLAY_FINISH_TYPE        RecordFinishType;                                  // 0xD00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_802[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CompleteSupporterNum;                              // 0xD04(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleSupporterBP_C*                  CompleteSupporter;                                 // 0xD08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSupporterReturn;                                 // 0xD10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DebugDisableSubSupportCounter;                     // 0xD11(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSupporterOrder;                                  // 0xD12(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_803[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                RecordPlayerDiseaseList;                           // 0xD18(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                RecordEnemyDiseaseList;                            // 0xD28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        PassSPValue;                                       // 0xD38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_805[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, int32>                           EnemyWeaknessOpen;                                 // 0xD40(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsReraiseTurn;                                     // 0xD90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsOrderContinue;                                   // 0xD91(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WaterSideMode;                                     // 0xD92(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsLastEnemyOverKill;                               // 0xD93(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        OverKillBonus;                                     // 0xD94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DialogSelectIndex;                                 // 0xD98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_806[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class ULevelSequence>         RequestBattleEventData;                            // 0xDA0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class ABattleCharacterBaseBP_C*              BattleEventMainActor;                              // 0xDC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ViewerPlacementID;                                 // 0xDD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EPlayableCharacterID>      ViewerPartyList;                                   // 0xDD8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsActionCommandClassReady;                         // 0xDE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DebugPlayAbiity;                                   // 0xDE9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_807[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          InvadeMonsterResLabels;                            // 0xDF0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          MercenaryResLabels;                                // 0xE00(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ETUTORIAL_TYPE                    OpenTutorialType;                                  // 0xE10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_FLOW_STATE                ReturnTutorialFlow;                                // 0xE11(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_808[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          OptionDataList;                                    // 0xE18(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EBATTLE_RESULT_TYPE               BattleResultType;                                  // 0xE28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSignOfBoost;                                     // 0xE29(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_809[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBattleAdditiveOrderData>      LastAttackOrderList;                               // 0xE30(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsSupporterFinish;                                 // 0xE40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_80A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SupporterFinishWaitTime;                           // 0xE44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTurnLastAttack;                                  // 0xE48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_80B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_BattleDoubleSpeed_C*              DoubleSpeed;                                       // 0xE50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                PlayActionCommandClass;                            // 0xE58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EFIELD_DISEASE_TYPE, struct FExecDiseaseHandler> BattleFieldDisease;                                // 0xE60(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UWBP_PlayerStatusTree_C*               PlayerStatusTree;                                  // 0xEB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMJPostProcessVolume*                  PostProcessVolume_BossEffect;                      // 0xEB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBattleStartDashEvent;                            // 0xEC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_80C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_ActionOrderTimeLineTree_C*        TimeLineTree;                                      // 0xEC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAreaID                           AreaType;                                          // 0xED0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_80E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBase*                  RareEnemyForBattleStartVoice;                      // 0xED8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPartyCharacterData>           PartyCharacterData;                                // 0xEE0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FPartyCharacterData>           SubPartyCharacterData;                             // 0xEF0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsDancerSong;                                      // 0xF00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_80F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeightedBlendables                   WorkMaterialParam;                                 // 0xF08(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*              WorkMaterialInstanceDynamic;                       // 0xF18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRemoveAllSolid;                                  // 0xF20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_811[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RemoveSolid00;                                     // 0xF24(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RemoveSolid01;                                     // 0xF2C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RemoveSolid02;                                     // 0xF34(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_812[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AStaticMeshActor*                      BattleSequencerObject_SandA;                       // 0xF40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStaticMeshActor*                      BattleSequencerObject_SandB;                       // 0xF48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEmitter*                              BattleSequencerObject_SteamAuraA;                  // 0xF50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEmitter*                              BattleSequencerObject_SteamFieldA;                 // 0xF58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                BattleSequencerObject_MapObjectRoot;               // 0xF60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentRecoveryCutLevel;                           // 0xF68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_81D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AMJPostProcessVolume*                  PostProcessVolume_BossFreezer;                     // 0xF70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMJPostProcessVolume*                  PostProcessVolume_BossTitan;                       // 0xF78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RecordMasqueradeTargetID;                          // 0xF80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RecordMasqueradeJobID;                             // 0xF84(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                RecordEnemyDiseaseParam;                           // 0xF88(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                RecordEnemyActionMode;                             // 0xF98(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        RecordPotentialityActionStatus;                    // 0xFA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_81F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              WorkMaterialInstanceDynamicForCross;               // 0xFB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AKSBattleCharacterPlayer_C*>    AnimCharacterForReplayLoad;                        // 0xFB8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class FName                                  WorkReplayLoadChara;                               // 0xFC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          UnloadWeaponUniqList;                              // 0xFD0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsBattleEventCrossOrder;                           // 0xFE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_821[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstance*                     As_Material_Instance;                              // 0xFE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableAddFirstAction;                              // 0xFF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SettledRecordBattleReplay;                         // 0xFF1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DelayStepIn;                                       // 0xFF2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_822[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VignetteIntensity_Original;                        // 0xFF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFirst_VignetteIntensity;                          // 0xFF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABattleManagerBP_C* GetDefaultObj();

	void CheckBattleReplayFinish(bool* Finish);
	void IsAllReady(bool* Result);
	void IsRequestUI(bool* Result);
	void CreateUI(bool* Result);
	void IsAliveEnemy(bool* Result);
	void IsReady(bool* Result);
	void GetMJPostProcessVignette(float* Vignette);
	bool GetAutoTameTarget(class ABattleCharacterBase** CAutoTameTarget);
	bool SetupAutoTameMonster(class ABattleCharacterBase* CTarget);
	bool IsAutoTameMonster();
	void BattleDialog();
	void UpdateWeakControl_BeginTurn(bool* ExecWeakControl, float* WaitTime);
	void GetCurrentActionOrderData(struct FActionOrderData* CActionData);
	void CollectSPBattleObject();
	void Set_Weapon_Texture_Unload(uint8 UnloadType, int32 UnloadWeaponCnt);
	void UnLoadWeaponTextureList(enum class EWEAPON_UNLOAD_GC_TYPE GCTiming);
	class FName GetEnemyGroupID();
	void ConvertEnemyPositionForReplay(class FName EnemyID, const struct FVector& RowPosition, struct FVector* ReturnPosition);
	enum class EBATTLE_START_TYPE GetBattleStartType();
	void PlayVictoryVoice();
	class ABattleCommandMenuActor* GetCommandMenuActor();
	bool GetCurrentActionCommand(class AActionCommandBase** CActionCommand);
	void InitializeBattleUI();
	void ChangeBattlePartyForAbility();
	void IsDiseasePlayer(bool* Result);
	bool AddUsedOnceMonster(class FName StrUsedMonsterLabel);
	bool CheckUsedOnceMonster(class FName StrCheckMonsterLabel);
	bool ExecActionOrderBlind(bool bEnable, bool bPlayerOnly);
	bool AddAdditiveOrderForAutoTameMonster(class ABattleCharacterBase* CEnforcer, class ABattleCharacterBase* CTarget);
	void InitBattleOrderCount();
	void SearchEnemyCharacter(class FName StrEnemyID, class ABattleCharacterBase** EnemyCharacter, bool* bFindCharacter, bool* bCharacterAlive);
	bool CheckSupportAilmentInParty(enum class ESUPPORT_AILMENT_TYPE EAilmentType, struct FSupportAbilityDataBase* CAbilityData);
	void GetRecoveryCutCurve(int32 CurrentLevel, int32 NewLevel, class UCurveVector** MaskCurve, class UCurveVector** ScrollCurve);
	bool InitUsedInvadeMonster();
	bool CheckUsedAwakingMonster(class FName StrCheckMonsterLabel);
	bool AddUsedAwakingMonster(class FName StrUsedMonsterLabel);
	bool GetCurrentAdditiveOrderData(struct FBattleAdditiveOrderData* CAdditiveOrderData);
	void CreateRareEnemyReplaceList(struct FEnemyGroup& EnemyGroup, struct FRareEnemyParam& RareEnemyParam, bool RareEnemyCatlin, TArray<class FName>* ReplaceList);
	void GetBattleBoostMode(bool* bBoostMode);
	void GetBattleActiveCharacter(class ABattleCharacterBase** CActiveCharacter);
	bool GetBattleFieldDiseaseParam(enum class EFIELD_DISEASE_TYPE DiseaseType, struct FExecDiseaseHandler* GetDisease);
	void GetMapObjectRoot(class AActor** CMapObjectRoot);
	void PlayVictoryAction();
	bool CheckBattleTutorial_OpenCommandMenu();
	void CheckConditionSpecialAction(enum class ESpecialActionType SpecialActionType, bool* FindSpecialAction);
	void GetBattleSequencerObject_SteamEffect(class AEmitter** CSteamAuraA, class AEmitter** CSteamFieldA);
	void GetBattleSequencerObject_AntlionSand(class AStaticMeshActor** CAntlionSandA, class AStaticMeshActor** CAntlionSandB);
	void CreateBattleVoiceList();
	bool GetBattleVoiceSetList(class FName StrCharacterID, TArray<class FName>* AstrBattleVoiceLabel);
	bool GetBattleInfomation(class FName* StrEnemyGroupID, bool* bBossBattle, bool* bFieldCommandBattle);
	void Update_Disease_for_Disable_Action(bool* DisableAction, float* DiseaseWaitTime);
	bool Debug_IsReadyBattleSuspend();
	void GetRespawnableEnemy(int32 NIndex, class ABattleCharacterBase** CRespawnableEnemy, bool* bFindEnemy);
	void IsChangeBattlePartyEnable(bool* bEnable, bool* bExecutable);
	void UpdateEightBattle_DecideAction(float* WaitTime);
	void ChangeBattlePartyForDefeatChange();
	void UpdateEightBattle_EndTurn(float* WaitTime);
	bool AddAdditiveOrderForSong(class ABattleCharacterBase* Enforcer, class FName AbilityName);
	bool RequestChangeBattleParty();
	void ChangeBattleParty();
	void PlayEnemySideVoice_BattleStart();
	bool InitBattleFirstActionCharacter();
	bool AddBattleFirstActionCharacter(class ABattleCharacterBase* CActionCharacter);
	bool AddAdditiveOrderForChaseAttack(class ABattleCharacterBase* Enforcer, class FName AbilityName, TArray<class ABattleCharacterBase*>& AcTargetList);
	bool AddAdditiveOrderForReraise(class ABattleCharacterBase* Enforcer);
	bool AddAdditiveOrderForReflection(class ABattleCharacterBase* Enforcer, class FName StrAbilityName, class FName StrAilmentName, int32 NInvocationValue, enum class EATTRIBUTE_TYPE EAttribute, class ABattleCharacterBase* CTargetList);
	bool AddAdditiveOrderForCounter(class ABattleCharacterBase* Enforcer, class FName AbilityName, bool bOnDead, bool bCounterOnce, class ABattleCharacterBase* CTargetList);
	void RequestBattleEvent(TSoftObjectPtr<class ULevelSequence>& EventSequence, class ABattleCharacterBase* MainActor, class ABattleCharacterBase* EventEnforcer);
	void CheckCondition_LastAct(bool* EnableLastAct);
	bool UpdateBattleFieldDisease();
	bool ExecBattleFieldDisease(enum class EFIELD_DISEASE_TYPE DiseaseType);
	bool SearchBattleFieldDisease(enum class EFIELD_DISEASE_TYPE DiseaseType);
	bool RemoveBattleFieldDisease(enum class EFIELD_DISEASE_TYPE DiseaseType);
	bool AddBattleFieldDisease(enum class EFIELD_DISEASE_TYPE DiseaseType, int32 InvocationValue, int32 InvocationTurn, int32 DiseaseLevel, class ABattleCharacterBase* Enforcer);
	bool IsAllowChangeBattleSpeed();
	bool ExecChangeBattleSpeed();
	void ReleasePotentialityAction();
	void InitializeBeginOrder();
	bool AddAdditiveOrderForRepeat(class ABattleCharacterBase* Enforcer, class FName AbilityName, TArray<class ABattleCharacterBase*>& AcTargetList);
	bool AddAdditiveOrderForEnchant(class ABattleCharacterBase* Enforcer, class FName AbilityName, TArray<class ABattleCharacterBase*>& AcTargetList);
	bool AddAdditiveOrderForLastAttack(class ABattleCharacterBase* Enforcer, class FName AbilityName, TArray<class ABattleCharacterBase*>& AcTargetList);
	bool AddAdditiveOrderForFirstAttack(class ABattleCharacterBase* Enforcer, class FName AbilityName, TArray<class ABattleCharacterBase*>& AcTargetList);
	void ExecDebugPlayBattleEvent(TSoftObjectPtr<class ULevelSequence>& CEventSequence, class ABattleCharacterBase* CMainActor, class ABattleCharacterBase* CEventEnforcer);
	bool RequestPlayActionWaitTime(float FWaitTime);
	void CheckSpecialActionTutorial(enum class EPlayableCharacterID ECharaID, bool IsActiveCharaCheck, enum class ETUTORIAL_TYPE* OpenTutorialType, bool* FindTutorial);
	void CheckBattleTutorial(enum class EBATTLE_FLOW_STATE CurrentFlow, enum class ETUTORIAL_TYPE* OpenTutorialType, bool* FindTutorial);
	void BattleTutorial();
	void Check_Battle_Job_in_Party(enum class EJOB_TYPE TargetJob, bool* FindJob, TArray<class ABattleCharacterBase*>* JobCharacter);
	void RequestLoadBattleCharacterResouce();
	void ExecSpecialAction_BuffInNight(class ABattleCharacterBaseBP_C* ActionEnforcer);
	void ExecSpecialAction_DebuffInNight(class ABattleCharacterBaseBP_C* ActionEnforcer);
	void CheckSpecialActionInParty(enum class ESpecialActionType SpecialActionType, bool* FindSpecialAction, class ABattleCharacterBaseBP_C** SpecialActionEnforcer);
	bool ExecDebugPlayAbility(class FName StrAbilityLabel, int32 NBoostLevel, bool bPlayerSide);
	bool AddAdditiveOrderForSignOfBoost(class ABattleCharacterBase* Enforcer, class FName AbilityName);
	bool ExecInitializeEnemyResourceList();
	bool CreateStationaryBattleUI();
	bool SetBattleStartType(enum class EBATTLE_START_TYPE StartType, bool WaterSide);
	void FinishDebugPlayAbility();
	void ExecDebugPlayAbility_Implemantation(const struct FAbilityDataBase& ActionCommand, int32 BoostLevel, bool EnforcePlayerSide, enum class EBATTLE_SEQUENCE_PATTERN_TYPE SequencePattern, int32 EnemyIndex, class FName UseActionLabel);
	bool IsBoostCommandEnable();
	void BattleSuspend();
	void InitializeRewardData();
	void CheckBattleDefeat(bool* bBattleDefeat, bool* bEightBattleChange);
	bool CheckBattleVictory();
	void GetActionOrderTimeline(class UActionOrderTimeLine_C** ActionOrderTimeLine);
	void SearchPlayerCharacter(enum class EPlayableCharacterID ECharaID, class ABattleCharacterBase** PlayerCharacter, bool* bFindCharacter, bool* bCharacterAlive);
	void SequenceRequestCallback(enum class EREQUEST_RESULT Result);
	bool IsItemCommandEnable();
	bool IsGuardCommandEnable();
	bool IsEscapeCommandEnable();
	void GetLevelupActionEnable(bool* Enable);
	void GetLastActionPlayer(class ABattleCharacterBaseBP_C** LastActionPlayer);
	void BattleStartEvent();
	void Get_Battle_Supporter(TArray<class ABattleSupporterBP_C*>* BattleSupporter);
	void DialogCallback(int32 SelectIndex);
	void SetLastEnemyOverKill(bool IsOverKillEnemy);
	void On_Change_Potentiality_Action();
	void SettingReplayCallSupporter(int32 SupporterID);
	void GetEnemyWeaknessOpen(int32 CharacterID, int32* WeaknessOpen, bool* Find);
	void UpdateEnemyWeaknessOpen();
	void CreateBattleReplay_PostPlayAction();
	void GetPassSPValue(int32* Value);
	void SetPassSPValue(int32 Value);
	void UpdateBackPackItem();
	void InitializeEndrollSaveData();
	void CheckBattleEnd(bool* BattleEnd);
	void CheckAdditiveOrderBody(TArray<struct FBattleAdditiveOrderData>& OrderList, enum class EADDITIVE_ORDER_CATEGORY CheckOrderCategory, bool* ExecAdditiveTurn, bool* Result);
	void CheckAdditiveOrder(TArray<struct FBattleAdditiveOrderData>& OrderList, enum class EADDITIVE_ORDER_CATEGORY CheckOrderCategory, bool* ExecAdditiveTurn);
	void SetDebugDisableSubSupportCounter(bool Disable);
	void SetSupporterReturn(bool Enable);
	void EscapeFailed();
	void BattleEndDestroy();
	void PlayPlayerSideVoice_BattleStart();
	void GetBoostMode(bool* IsBoost);
	void SetBoostMode(bool IsBoost);
	void InitializeCounter();
	void InitializeBattleFieldDisease();
	void Initialize_Additive_Order();
	void CheckBattleEventPlay(bool* Result);
	void GetCharacterByBattleID(int32 BattleID, class ABattleCharacterBaseBP_C** Enforcer);
	void CreateBattleReplay_BeginTurn();
	void SaveBattleReplay();
	void DebugRareCat();
	void SettingReplayBattleField();
	void SetSupporterVisibility(bool Visible);
	void SettingReplayCharacterStatus();
	void SetDebugEnemyUseAbility(class FName ABILITY);
	void SetDebugResultEXPValue(int32 Value);
	void BattleEvent();
	void RequestBattleEvent_Old(TSoftObjectPtr<class ULevelSequence> EventSequence, class ABattleCharacterBase* MainActor, class ABattleCharacterBase* EventEnforcer);
	void SetCallEnemyWeaken(int32 HPRatio, int32 SubShieldPoint);
	void GetCallEnemyWeaken(int32* HPRatio, int32* ShieldPoint, bool* Enable);
	void FinishDoomStatusUI(class UBattleDeathCount_C* DoomUI);
	void GetDoomStatusUI(bool* Enable, class UBattleDeathCount_C** DoomUI);
	void CalcBonusReward(int32 GetExp, int32 GetJobPoint, int32 GetMoney, int32* BreakBonus, int32* OneTurnKillBonus, int32* NoDamageBonus, int32* OverKillBonus);
	void AddPlayerDamageCount();
	void Set_Character_Harden_Dead(bool Enable);
	void UpdateDiseaseByCharacterState(float* WaitTime);
	void ReplaceRareEnemy(struct FEnemyData& EnemyData, class FName EnemyRowID, int32 RareEnemyType, struct FEnemyData* NewEnemyData, class FName* NewEnemyRowID, struct FEnemyData* OutputPin);
	void FinishBattleDamageUI(class UBattleDamageNumber_C* DamageUI);
	void GetBattleDamageUI(bool* Enable, class UBattleDamageNumber_C** DamageUI);
	void BreakCharacterOrder();
	void GetUseActionLabel(class FName* ActionLabel);
	void UpdateWeakControl_PostCharaOrder(bool* ExecWeakControl, float* WaitTime);
	void ResetCharacter_PreAction();
	void ExecSpecialAction_Preparation(class ABattleCharacterBase* ActionEnforcer, bool* Success);
	void SetPlayActionInfoText(class FText InfoText);
	void SetSupportCoverCharacter(class ABattlePlayerBP_C* Character);
	void GetSupportCoverCharacter(class ABattleCharacterBaseBP_C* CoverTarget, class ABattleCharacterBaseBP_C** CoverCharacter, bool* FindCharacter);
	void PostAction();
	void UpdateCharacterList();
	void AdditiveOrder();
	void PostCharacterOrder();
	void PreCharacterOrder();
	void IsBattleManagerReady(bool* Ready);
	void Debug_GetBattleCharacter(int32 Index, class ABattleCharacterBaseBP_C** Character, bool* Result);
	void Debug_GetAllBattleCharaName(TArray<class FText>* NameList);
	void SaveEnemyData();
	void IsBreakEnemy(bool* Result);
	void SetInvadeBattleTurn(int32 BattleTurn);
	void GetAllBattleParty(bool ContainDead, TArray<class ABattlePlayerBP_C*>* TargetSelect);
	void GetAllBattleEnemy(bool ContainDead, TArray<class ABattleEnemyBP_C*>* TargetSelect);
	void ChangeBattleTurn(float* WaitTime);
	void OpenCharacterStatusUI();
	void GetDefaultTarget(enum class EBATTLE_TARGET_TYPE TargetType, class ABattleCharacterBase* Enforcer, TArray<class ABattleCharacterBase*>* Target);
	void RemoveBattleUI();
	void GetDeadCharacterNum(bool PlayerSide, int32* Num);
	void CreateManagerForBattle();
	void CreateBattleUI();
	void CreateBattleCharacter();
	void SaveBattleResult(bool IsVictory);
	void SupporterOrder();
	void GetTargetSelect(class ABattleTargetSelectBP_C** TargetSelect);
	void EndPlayAction();
	void DebugBoostMax();
	void CanBattleResultSkip(bool* CanResultSkip);
	void SetVictoryCamera();
	void Get_Current_Flow_Old(enum class EBATTLE_FLOW_STATE* CurrentFlow);
	void CalcGetReward(int32* Exp, int32* JobPoint, int32* Money);
	void LotteryDropItem(TArray<struct FBattleResultItemDropData>* DropItem);
	void UpdateHPState(bool* Result);
	void DebugBattleEnd();
	void SetBattleCharacterReadyPosition();
	void IsBattleEnd(bool* IsEnd);
	void GetPlayerBattlePosition(int32 Index, int32 PartyMax, const struct FVector& PartyOffset, struct FVector* WaitPosition, struct FVector* StepPosition);
	void StartNormalBattle();
	void EndProcess();
	void CreateEnemyCharacter(const struct FEnemyGroup& EnemyGroup);
	void CreatePlayerCharacter(TArray<struct FPartyCharacterData>& CreatePlayerData, bool IsFrontParty, TArray<class ABattlePlayerBP_C*>* CreatePlayerList, TArray<class ABattleSupporterBP_C*>* CreateSupporterList);
	void Escape();
	void BattleDefeat();
	void BattleResult();
	void BattleVictory();
	void EndOrder();
	void PlayAction();
	void EnemyOrder();
	void PlayerOrder();
	void BeginOrder();
	void BeginTurn();
	void Start();
	void Init();
	void ChangeBattleFlow(enum class EBATTLE_FLOW_STATE NextFlow, enum class EBATTLE_FLOW_STATE* CurrentFlow, bool* IsChange);
	void StatusIconLoop__FinishedFunc();
	void StatusIconLoop__UpdateFunc();
	void BattleFieldDiseaseMaterialCurve__FinishedFunc();
	void BattleFieldDiseaseMaterialCurve__UpdateFunc();
	void RecoveryCutDiseaseMaterialCurve__FinishedFunc();
	void RecoveryCutDiseaseMaterialCurve__UpdateFunc();
	void BattleFieldDiseaseMaterialCross__FinishedFunc();
	void BattleFieldDiseaseMaterialCross__UpdateFunc();
	void OnLoaded_B4D68C0543DB3287EFCB8EAACE22D2EE(TSubclassOf<class UObject> Loaded);
	void OnLoaded_63829E714E605D48FF2624940DA26FCD(class UObject* Loaded);
	void OnLoaded_A07274004BA3016F97BDEEAA3D9B33C1(TSubclassOf<class UObject> Loaded);
	void StartBattleSequence(TArray<struct FPartyCharacterData>& Player, class FName EnemyGroupID, bool IsEventBGM, bool IsInvadeBattle);
	void Debug_PlusButton();
	void Debug_ActionOrderChange();
	void Debug_PlayerStatusChange();
	void Debug_PlayOpenSubIcon();
	void Debug_PlayCloseSubIcon();
	void StartAutoSelectCommandMenu();
	void StartAutoProgressResult();
	void StartAutoProgressTutorial();
	void ExecBattleReplayInit();
	void ExecBattleReplayStart();
	void ExecBattleReplayAction();
	void ExecBattleReplayEnd();
	void ExecBattleReplayConstruction();
	void WaitBattleReplayPreAction();
	void WaitBattleReplayAction();
	void WaitBattleReplayPostAction();
	void ExecReplayPoison();
	void ExecBattleReplayEnemyAction();
	void RequestLoadForEndroll(enum class EEndRollSegmentSet ESegment);
	void RequestLoadCalback(TArray<class UObject*>& ObjList);
	void ClearBattleResource();
	void BattleReplayConstruction();
	void PlayBattleReplay(enum class EEndRollSegmentSet ReplaySegment);
	void SuspendBattleReplay();
	void BattleReplayDestroy();
	void StartBattleRequest();
	void Debug_PlayAbilitty(const struct FAbilityDataBase& PlayAbilityData, int32 BoostLevel, bool EnforcePlayerSide, enum class EBATTLE_SEQUENCE_PATTERN_TYPE SequencePattern, int32 EnemyIndex, class FName UseActionLabel);
	void ExecInitializeBattleUI();
	void ExecInitializeBattleResource();
	void ActionInfoOpen(class FText InfoText);
	void ActionInfoClose(bool ForceClose);
	void BattleDialogOpen(class FText ConfirmText);
	void BattleDialogClose();
	void TameConfirmDialogOpen(class ATameMonsterCommand_C* Command);
	void TameCancelDialogOpen(class ATameMonsterCommand_C* Command);
	void BattleDialogDecide(bool Result);
	void TameReleaseMenuDecide(bool Success);
	void TameReleaseMenuCancel();
	void TameReleaseMenuOpen(TArray<struct FMonsterListData>& MonsterList);
	void TameReleaseMenuClose();
	void BattleDialogWait();
	void RequestUpdateNextOrderIcon(bool bUseDelay);
	void SetPlayerStatusUIVisible(bool Visible);
	void SetEnemyNameVisible(bool Visible);
	void RequestUpdateActionOrderAnnounce(bool Enable, bool UpdateCurrentOrder, bool UpdateNextOrder);
	void ResetNextOrderAnnounce();
	void ActionInfoMultiLineOpen(class FText TopInfoText, class FText LowInfoText);
	void StartStatusIconLoop();
	void StopStatusIconLoop();
	void RequestUpdateCurrentOrderIcon(bool UseDelay);
	void UpdateActiveCharacterIcon(class ABattleCharacterBaseBP_C* ActiveCharacter);
	void OpenActionInfomation(class FText& StrInfomationText);
	void OpenMultiLineInfomation(class FText& StrFirstText, class FText& StrSecondText);
	void CloseActionInfomation();
	void OpenChainInfomation(TArray<class FText>& AstrInfomationText, float FShowTime);
	void SetActionInfoAutoCloseTimer(float Duration);
	void ReceiveDestroyed();
	void ChangePlayerAnimation(int32 Set);
	void CameraVibration();
	void CharacterStepOut(class ABattleCharacterBaseBP_C* Character);
	void PlayBreakCamera(enum class EBREAK_CAMERA_TYPE EBreakType);
	void FinishBreakCamera();
	void PlayFinishBlow();
	void FinishFinishBlow();
	void PlayBoostCountupSE();
	void TakeDamageVibration();
	void PlayEscapeSuccess();
	void PlayEscapeFailed();
	void BeginAddBoostPoint(float DelayBase);
	void ExecAllEnemyForceDead();
	void PlayEnemyDeadCamera(enum class EBREAK_CAMERA_TYPE EBreakType);
	void FinishEnemyDeadSlow();
	void PlayNormalDamageCamera();
	void RequestLoadBattleEvent(TSoftObjectPtr<class ULevelSequence>& CEventSequence);
	void FinishBattleEvent();
	void ExecBattleSuspend();
	void RequestLoadActionCommandClass(TSoftClassPtr<class UObject> AssetClass);
	void UpdateManager(float DeltaSeconds);
	void FinishBattleStartDash();
	void PlayBoostSE(int32 PlayBoostLv);
	void SetPostProcessMaterialPrameter(class APostProcessVolume* TargetVolume, const class FString& MaterialName, float WeightParam, bool SetAllMaterial);
	void SwitchBattleFieldDiseaseMaterial(class APostProcessVolume* TargetVolume, const class FString& MaterialName, class FName ParameterName, class UCurveFloat* ParameterCurve, bool OnDisease);
	void FinishChangePartySequencer();
	void SwitchRecoveryCutDiseaseMaterial(class UCurveVector* MaskParameterCurve, class UCurveVector* ScrollParameterCurve, bool OnDisease);
	void PlayReturnDragInEffect(class ABattleCharacterBase* CReturnCharacter, enum class EBATTLE_DRAG_IN_TYPE EDragInType);
	void SwitchBattleFieldDiseaseMaterialForCross(class APostProcessVolume* TargetVolume, const class FString& MaterialName, class FName ParameterName, class UCurveFloat* ParameterCurve);
	void UpdateBattleNumberUI();
	void AddBoostPoint();
	void ExecuteUbergraph_BattleManagerBP(int32 EntryPoint);
};

}


