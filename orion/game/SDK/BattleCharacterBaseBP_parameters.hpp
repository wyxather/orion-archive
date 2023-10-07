#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x109 (0x109 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetupActionOrderBlindFast
struct ABattleCharacterBaseBP_C_SetupActionOrderBlindFast_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckEnableSetCharaTransform
struct ABattleCharacterBaseBP_C_CheckEnableSetCharaTransform_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsGarderaAbility
struct ABattleCharacterBaseBP_C_IsGarderaAbility_Params
{
public:
	class FName                                  AbilityName;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA1 (0xA1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetExcitementPoint
struct ABattleCharacterBaseBP_C_SetExcitementPoint_Params
{
public:
	class ABattleCharacterBase*                  CEnforcer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NBoostLevel;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF (0xF - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsSelecterEffectVisibleSealAction
struct ABattleCharacterBaseBP_C_IsSelecterEffectVisibleSealAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsSelecterEffectVisibleBribe
struct ABattleCharacterBaseBP_C_IsSelecterEffectVisibleBribe_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xF (0xF - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsSelecterEffectVisibleNormal
struct ABattleCharacterBaseBP_C_IsSelecterEffectVisibleNormal_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x9B (0x9B - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterGroggy
struct ABattleCharacterBaseBP_C_GetCharacterGroggy_Params
{
public:
	bool                                         IsGroggy;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EnableCurrentAction;                               // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EnableNextAction;                                  // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsCharacterSupporter
struct ABattleCharacterBaseBP_C_IsCharacterSupporter_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x16 (0x16 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.OnTakeDisease
struct ABattleCharacterBaseBP_C_OnTakeDisease_Params
{
public:
	class ABattleCharacterBase*                  CEnforcer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDISEASE_TYPE                     EDiseaseType;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDISEASE_CATEGORY                 EDiseaseCategory;                                  // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13CA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NInvocationValue;                                  // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NBoostLevel;                                       // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsNewDisease;                                     // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x15(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCursorPosition
struct ABattleCharacterBaseBP_C_GetCursorPosition_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetReplayStatus
struct ABattleCharacterBaseBP_C_GetReplayStatus_Params
{
public:
	bool                                         bIsSelfTurn;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EBATTLE_REPLAY_CHARA_STATUS       EReplayStatus;                                     // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SearchEquipmentAilment
struct ABattleCharacterBaseBP_C_SearchEquipmentAilment_Params
{
public:
	enum class EAILMENT_TYPE                     AilmentType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAilmentHandler>               AilmentHandler;                                    // 0x8(0x10)(Parm, OutParm)
	bool                                         Find;                                              // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetDiseaseResist
struct ABattleCharacterBaseBP_C_GetDiseaseResist_Params
{
public:
	enum class EDISEASE_TYPE                     EDiseaseType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_RESIST                 EResistResult;                                     // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7C (0x7C - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.PlayBattleVoice
struct ABattleCharacterBaseBP_C_PlayBattleVoice_Params
{
public:
	enum class EBATTLE_VOICE_TYPE                EBattleVoiceType;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBattleVoiceSetData                   CPlayCondition;                                    // 0x8(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         bIsSkipDiseaseCheck;                               // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x79(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1FD (0x1FD - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_Shrink
struct ABattleCharacterBaseBP_C_ExecDisease_Shrink_Params
{
public:
	int32                                        ExtensionTurn;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDISEASE_CATEGORY                 ExtensionType;                                     // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x62 (0x62 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.RemoveDiseaseForSequencer
struct ABattleCharacterBaseBP_C_RemoveDiseaseForSequencer_Params
{
public:
	class FName                                  DiseaseName;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3A (0x3A - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.AddDiseaseForSequencer
struct ABattleCharacterBaseBP_C_AddDiseaseForSequencer_Params
{
public:
	class FName                                  DiseaseName;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InvocationValue;                                   // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InvocationTurn;                                    // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x231 (0x231 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_Possession
struct ABattleCharacterBaseBP_C_ExecDisease_Possession_Params
{
public:
	bool                                         TurnSkip;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x130 (0x130 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CalcDisease_SPRegenerationValue
struct ABattleCharacterBaseBP_C_CalcDisease_SPRegenerationValue_Params
{
public:
	struct FExecDiseaseHandler                   DiseaseData;                                       // 0x0(0x8A)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_13D6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RecoveryValue;                                     // 0x90(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x188 (0x188 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CalcDisease_HPRegenerationValue
struct ABattleCharacterBaseBP_C_CalcDisease_HPRegenerationValue_Params
{
public:
	struct FExecDiseaseHandler                   DiseaseData;                                       // 0x0(0x8A)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_13DE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RecoveryValue;                                     // 0x90(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x148 (0x148 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.EndBattleTurnForSubParty
struct ABattleCharacterBaseBP_C_EndBattleTurnForSubParty_Params
{
public:
	float                                        FWaitTime;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x131 (0x131 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckPreparationSealing
struct ABattleCharacterBaseBP_C_CheckPreparationSealing_Params
{
public:
	enum class ECOMMAND_SUB_MENU_TYPE            ESubMenuType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xBA (0xBA - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SwitchDiseaseEffectVisibility
struct ABattleCharacterBaseBP_C_SwitchDiseaseEffectVisibility_Params
{
public:
	bool                                         Visibility;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6D (0x6D - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SearchEquipmentAilmentForUnique
struct ABattleCharacterBaseBP_C_SearchEquipmentAilmentForUnique_Params
{
public:
	enum class EAILMENT_TYPE                     AilmentType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAilment                              Ailment;                                           // 0x8(0x49)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_13E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAilmentHandler                       AilmentHandler;                                    // 0x58(0x14)(Parm, OutParm, NoDestructor)
	bool                                         Find;                                              // 0x6C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD9 (0xD9 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckEnableBreakAct
struct ABattleCharacterBaseBP_C_CheckEnableBreakAct_Params
{
public:
	struct FActionOrderData                      CurrentOrderData;                                  // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	bool                                         Enable;                                            // 0x40(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC0 (0xC0 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecGetBackBoostPoint
struct ABattleCharacterBaseBP_C_ExecGetBackBoostPoint_Params
{
public:
	bool                                         ExecRegeneration;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetDamageBPMax
struct ABattleCharacterBaseBP_C_SetDamageBPMax_Params
{
public:
	int32                                        DamageValue;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.RemoveDiseaseAllForCharm
struct ABattleCharacterBaseBP_C_RemoveDiseaseAllForCharm_Params
{
public:
	bool                                         ExecRemove;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x151 (0x151 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.UpdateDisease_Charm
struct ABattleCharacterBaseBP_C_UpdateDisease_Charm_Params
{
public:
	bool                                         TurnSkip;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13F7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD1 (0xD1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.UpdateDisease_Frozen
struct ABattleCharacterBaseBP_C_UpdateDisease_Frozen_Params
{
public:
	bool                                         TurnSkip;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE1 (0xE1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsCharacterDisableAction
struct ABattleCharacterBaseBP_C_IsCharacterDisableAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.OnTakeDisease_ForStealth
struct ABattleCharacterBaseBP_C_OnTakeDisease_ForStealth_Params
{
public:
	enum class EDISEASE_TYPE                     DiseaseType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x190 (0x190 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.UpdateChargeActionCount
struct ABattleCharacterBaseBP_C_UpdateChargeActionCount_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA9 (0xA9 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.PopChargeActionData
struct ABattleCharacterBaseBP_C_PopChargeActionData_Params
{
public:
	struct FBattleAdditiveOrderData              ReturnValue;                                       // 0x0(0x38)(Parm, OutParm, ReturnParm)
};

// 0x5C (0x5C - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.AddChargeActionData
struct ABattleCharacterBaseBP_C_AddChargeActionData_Params
{
public:
	class FName                                  StrAbilityName;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABattleCharacterBase*>          AcTargetList;                                      // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x160 (0x160 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_Frozen
struct ABattleCharacterBaseBP_C_ExecDisease_Frozen_Params
{
public:
	bool                                         TurnSkip;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7 (0x7 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckCharacterReviveEnable
struct ABattleCharacterBaseBP_C_CheckCharacterReviveEnable_Params
{
public:
	bool                                         bReviveAndRecovery;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsCharacterPinch
struct ABattleCharacterBaseBP_C_IsCharacterPinch_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SearchDiseaseByCategoryForAI
struct ABattleCharacterBaseBP_C_SearchDiseaseByCategoryForAI_Params
{
public:
	enum class EDISEASE_CATEGORY                 DiseaseCategory;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x101 (0x101 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_DarkFrame
struct ABattleCharacterBaseBP_C_ExecDisease_DarkFrame_Params
{
public:
	bool                                         ExecPoison;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1415[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x209 (0x209 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckWrapAroundEnable
struct ABattleCharacterBaseBP_C_CheckWrapAroundEnable_Params
{
public:
	struct FActionOrderData                      CTargetOrderData;                                  // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	enum class EACTION_ORDER_TYPE                ERequestType;                                      // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsNextTurn;                                       // 0x41(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bMoveForward;                                      // 0x42(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x43(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xDA (0xDA - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckOverTakeEnable
struct ABattleCharacterBaseBP_C_CheckOverTakeEnable_Params
{
public:
	struct FActionOrderData                      CTargetOrderData;                                  // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	enum class EACTION_ORDER_TYPE                ERequestType;                                      // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsNextTurn;                                       // 0x41(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x42(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1C9 (0x1C9 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckShuffleEnable
struct ABattleCharacterBaseBP_C_CheckShuffleEnable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.RemoveDiseaseForAI
struct ABattleCharacterBaseBP_C_RemoveDiseaseForAI_Params
{
public:
	enum class EDISEASE_TYPE                     DiseaseType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x99 (0x99 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SearchDiseaseForAI
struct ABattleCharacterBaseBP_C_SearchDiseaseForAI_Params
{
public:
	enum class EDISEASE_TYPE                     DiseaseType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x52 (0x52 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.AddDiseaseForAI
struct ABattleCharacterBaseBP_C_AddDiseaseForAI_Params
{
public:
	class FName                                  DiseaseName;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InvocationValue;                                   // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InvocationTurn;                                    // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBase*                  Enforcer;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x161 (0x161 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetNextActionOrderData
struct ABattleCharacterBaseBP_C_GetNextActionOrderData_Params
{
public:
	int32                                        NOrderIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_141D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActionOrderData                      ReturnValue;                                       // 0x8(0x40)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)
};

// 0x20 (0x20 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetActionTimeForCurrentTurn
struct ABattleCharacterBaseBP_C_GetActionTimeForCurrentTurn_Params
{
public:
	enum class EACTION_ORDER_TYPE                EType;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1420[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FDelayRatio;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetActionTimeForNextTurn
struct ABattleCharacterBaseBP_C_GetActionTimeForNextTurn_Params
{
public:
	enum class EACTION_ORDER_TYPE                EType;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1421[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FDelayRatio;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xEE (0xEE - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.PlayActionOrderIconRemove
struct ABattleCharacterBaseBP_C_PlayActionOrderIconRemove_Params
{
public:
	bool                                         RemoveCurrentOrder;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         RemoveNextOrder;                                   // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetDiseaseEffectPosition
struct ABattleCharacterBaseBP_C_GetDiseaseEffectPosition_Params
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.BeginCharacterOrder
struct ABattleCharacterBaseBP_C_BeginCharacterOrder_Params
{
public:
	float                                        FWaitTime;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x14A (0x14A - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.OnTakeDisease_ForDIseaseControl
struct ABattleCharacterBaseBP_C_OnTakeDisease_ForDIseaseControl_Params
{
public:
	enum class EDISEASE_TYPE                     DiseaseType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_145A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InvocationValue;                                   // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x162 (0x162 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.OnTakeDisease_ForActionOrder
struct ABattleCharacterBaseBP_C_OnTakeDisease_ForActionOrder_Params
{
public:
	enum class EDISEASE_TYPE                     DiseaseType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3E8 (0x3E8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.OnTakeDisease_ForTextMessage
struct ABattleCharacterBaseBP_C_OnTakeDisease_ForTextMessage_Params
{
public:
	enum class EDISEASE_TYPE                     DiseaseType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDISEASE_CATEGORY                 DiseaseCategory;                                   // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x160 (0x160 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_ReboundSealAction
struct ABattleCharacterBaseBP_C_ExecDisease_ReboundSealAction_Params
{
public:
	bool                                         TurnSkip;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1461[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x109 (0x109 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetupActionOrderSealAction
struct ABattleCharacterBaseBP_C_SetupActionOrderSealAction_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x227 (0x227 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Exec Change Permanent
struct ABattleCharacterBaseBP_C_Exec_Change_Permanent_Params
{
public:
	int32                                        ChangeNum;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x194 (0x194 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecSettingNextOrder
struct ABattleCharacterBaseBP_C_ExecSettingNextOrder_Params
{
public:
	TArray<struct FRequestActionOrderData>       AcActionOrderData;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bNextTurnOnly;                                     // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bRequest;                                          // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.InterruptCurrentOrder
struct ABattleCharacterBaseBP_C_InterruptCurrentOrder_Params
{
public:
	struct FRequestActionOrderData               CActionOrderData;                                  // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x9B (0x9B - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsCharacterGroggy
struct ABattleCharacterBaseBP_C_IsCharacterGroggy_Params
{
public:
	bool                                         bIsGroggy;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bEnableCurrentAction;                              // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bEnableNextAction;                                 // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetBattleEffectSocket
struct ABattleCharacterBaseBP_C_GetBattleEffectSocket_Params
{
public:
	bool                                         bGround;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_146E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetDefaultWarpPosition
struct ABattleCharacterBaseBP_C_GetDefaultWarpPosition_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE3 (0xE3 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Remove Oldest Disease
struct ABattleCharacterBaseBP_C_Remove_Oldest_Disease_Params
{
public:
	enum class EDISEASE_CATEGORY                 RemoveCategory;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Complete;                                          // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x210 (0x210 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_Extension
struct ABattleCharacterBaseBP_C_ExecDisease_Extension_Params
{
public:
	int32                                        ExtensionTurn;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDISEASE_CATEGORY                 ExtensionType;                                     // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsCharacterReady
struct ABattleCharacterBaseBP_C_IsCharacterReady_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckBoostPointMax
struct ABattleCharacterBaseBP_C_CheckBoostPointMax_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x109 (0x109 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetupActionOrderBribe
struct ABattleCharacterBaseBP_C_SetupActionOrderBribe_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x109 (0x109 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetupActionOrderBlind
struct ABattleCharacterBaseBP_C_SetupActionOrderBlind_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsCharacterBreak
struct ABattleCharacterBaseBP_C_IsCharacterBreak_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ConvertDiseaseToEffectSocket
struct ABattleCharacterBaseBP_C_ConvertDiseaseToEffectSocket_Params
{
public:
	enum class EDISEASE_TYPE                     DiseaseType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDEBUFF_ATTACHSOCKET_TYPE         NewParam;                                          // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetShieldPointMax
struct ABattleCharacterBaseBP_C_SetShieldPointMax_Params
{
public:
	int32                                        NShieldMax;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckLastOrderInTurn
struct ABattleCharacterBaseBP_C_CheckLastOrderInTurn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckFirstOrderInTurn
struct ABattleCharacterBaseBP_C_CheckFirstOrderInTurn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetAnimationCharacter
struct ABattleCharacterBaseBP_C_GetAnimationCharacter_Params
{
public:
	class AKSCharacterBase*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterEvation
struct ABattleCharacterBaseBP_C_GetCharacterEvation_Params
{
public:
	int32                                        Result;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ratio;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterConcentrate
struct ABattleCharacterBaseBP_C_GetCharacterConcentrate_Params
{
public:
	int32                                        Result;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ratio;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterAccuracy
struct ABattleCharacterBaseBP_C_GetCharacterAccuracy_Params
{
public:
	int32                                        Result;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ratio;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterAgility
struct ABattleCharacterBaseBP_C_GetCharacterAgility_Params
{
public:
	int32                                        Result;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ratio;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterDefence
struct ABattleCharacterBaseBP_C_GetCharacterDefence_Params
{
public:
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_149F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Result;                                            // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ratio;                                             // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterAttack
struct ABattleCharacterBaseBP_C_GetCharacterAttack_Params
{
public:
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBase*                  DamageTarget;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Result;                                            // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ratio;                                             // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetPlayableCharacterID
struct ABattleCharacterBaseBP_C_GetPlayableCharacterID_Params
{
public:
	enum class EPlayableCharacterID              ECharaID;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterID
struct ABattleCharacterBaseBP_C_GetCharacterID_Params
{
public:
	int32                                        NCharaID;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetAnimationActorForAttach
struct ABattleCharacterBaseBP_C_GetAnimationActorForAttach_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsCharacterEnemy
struct ABattleCharacterBaseBP_C_IsCharacterEnemy_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1F1 (0x1F1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Get Equipment Weapon Texture
struct ABattleCharacterBaseBP_C_Get_Equipment_Weapon_Texture_Params
{
public:
	enum class EWEAPON_CATEGORY                  WeaponCategory;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWEAPON_STANCE                    WeaponStance;                                      // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsNPC;                                             // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14CB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            WeaponTexture;                                     // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x249 (0x249 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetWeaponItemData
struct ABattleCharacterBaseBP_C_GetWeaponItemData_Params
{
public:
	enum class EWEAPON_CATEGORY                  WeaponCategory;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Bool;                                              // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14CE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             ItemData;                                          // 0x8(0x120)(Parm, OutParm)
};

// 0x12A (0x12A - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.AddWeaponItemData
struct ABattleCharacterBaseBP_C_AddWeaponItemData_Params
{
public:
	enum class EWEAPON_CATEGORY                  WeaponCategory;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             ItemData;                                          // 0x8(0x120)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsCharacterDead
struct ABattleCharacterBaseBP_C_IsCharacterDead_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetBoostPointMax
struct ABattleCharacterBaseBP_C_SetBoostPointMax_Params
{
public:
	int32                                        NBoostMax;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.InitializeActionOrderData
struct ABattleCharacterBaseBP_C_InitializeActionOrderData_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterNPCFlag
struct ABattleCharacterBaseBP_C_GetCharacterNPCFlag_Params
{
public:
	bool                                         NPCFlag;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA3 (0xA3 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.OnPostAction
struct ABattleCharacterBaseBP_C_OnPostAction_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3B (0x3B - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.OrderCountControl
struct ABattleCharacterBaseBP_C_OrderCountControl_Params
{
public:
	bool                                         ForceNextOrder;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC2 (0xC2 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetVisibleDiseaseEffect
struct ABattleCharacterBaseBP_C_SetVisibleDiseaseEffect_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.RemoveBreakEffect
struct ABattleCharacterBaseBP_C_RemoveBreakEffect_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetSupporterEnable
struct ABattleCharacterBaseBP_C_SetSupporterEnable_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetSettledStealItem
struct ABattleCharacterBaseBP_C_SetSettledStealItem_Params
{
public:
	bool                                         Settled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10C (0x10C - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Get Replay Disease Mask OLD
struct ABattleCharacterBaseBP_C_Get_Replay_Disease_Mask_OLD_Params
{
public:
	int32                                        DiseaseMask;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetDebugDrawParameterPosition
struct ABattleCharacterBaseBP_C_GetDebugDrawParameterPosition_Params
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9A (0x9A - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckEnableLastAct
struct ABattleCharacterBaseBP_C_CheckEnableLastAct_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xBA (0xBA - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.On Post Remove Disease
struct ABattleCharacterBaseBP_C_On_Post_Remove_Disease_Params
{
public:
	struct FExecDiseaseHandler                   DiseaseData;                                       // 0x0(0x8A)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_14DC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EDISEASE_TYPE                     DiseaseType;                                       // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return;                                            // 0x91(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_GetSupportCount
struct ABattleCharacterBaseBP_C_Debug_GetSupportCount_Params
{
public:
	int32                                        Count;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_GetSupportPoint
struct ABattleCharacterBaseBP_C_Debug_GetSupportPoint_Params
{
public:
	int32                                        Point;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_GetMoney
struct ABattleCharacterBaseBP_C_Debug_GetMoney_Params
{
public:
	int32                                        Money;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_GetJobPoint
struct ABattleCharacterBaseBP_C_Debug_GetJobPoint_Params
{
public:
	int32                                        JobPoint;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_GetExp
struct ABattleCharacterBaseBP_C_Debug_GetExp_Params
{
public:
	int32                                        Exp;                                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetDamageForPoison
struct ABattleCharacterBaseBP_C_SetDamageForPoison_Params
{
public:
	int32                                        DamageValue;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_DAMAGE_TYPE               DamageType;                                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LastHit;                                           // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2D (0x2D - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.RemoveDiseaseAllForHarden
struct ABattleCharacterBaseBP_C_RemoveDiseaseAllForHarden_Params
{
public:
	bool                                         ExecRemove;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.RemoveDiseaseAllForStealth
struct ABattleCharacterBaseBP_C_RemoveDiseaseAllForStealth_Params
{
public:
	bool                                         ExecRemove;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_GetUseAbilityList
struct ABattleCharacterBaseBP_C_Debug_GetUseAbilityList_Params
{
public:
	TArray<class FText>                          AbilityLabelList;                                  // 0x0(0x10)(Parm, OutParm)
	int32                                        SelectIndex;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetFixedUseAbility
struct ABattleCharacterBaseBP_C_Debug_SetFixedUseAbility_Params
{
public:
	class FName                                  Label;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetBattleCharacterID
struct ABattleCharacterBaseBP_C_SetBattleCharacterID_Params
{
public:
	int32                                        BattleCharacterID;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetBattleCharacterID
struct ABattleCharacterBaseBP_C_GetBattleCharacterID_Params
{
public:
	int32                                        BattleCharacterID;                                 // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x43 (0x43 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.AddExCurseOfDeadEffect
struct ABattleCharacterBaseBP_C_AddExCurseOfDeadEffect_Params
{
public:
	int32                                        ColorType;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.UpdateDisease_ExCurseOfDead
struct ABattleCharacterBaseBP_C_UpdateDisease_ExCurseOfDead_Params
{
public:
	bool                                         Remove;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckEnableEscape
struct ABattleCharacterBaseBP_C_CheckEnableEscape_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x179 (0x179 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckEnableCounter
struct ABattleCharacterBaseBP_C_CheckEnableCounter_Params
{
public:
	bool                                         AttackHit;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Enable;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x99 (0x99 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckEnableHideOut
struct ABattleCharacterBaseBP_C_CheckEnableHideOut_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x160 (0x160 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_EscapeFailed
struct ABattleCharacterBaseBP_C_ExecDisease_EscapeFailed_Params
{
public:
	bool                                         TurnSkip;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SearchWeaponAbilityUP
struct ABattleCharacterBaseBP_C_SearchWeaponAbilityUP_Params
{
public:
	int32                                        TotalInvocationValue;                              // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Find;                                              // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SearchMagicAbilityUP
struct ABattleCharacterBaseBP_C_SearchMagicAbilityUP_Params
{
public:
	enum class EATTRIBUTE_TYPE                   Attribute;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TotalInvocationValue;                              // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Find;                                              // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetSettledStealMoney
struct ABattleCharacterBaseBP_C_SetSettledStealMoney_Params
{
public:
	bool                                         Settled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB8 (0xB8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.UpdateDisease_DragIn
struct ABattleCharacterBaseBP_C_UpdateDisease_DragIn_Params
{
public:
	bool                                         Remove;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetActionTurnCount
struct ABattleCharacterBaseBP_C_GetActionTurnCount_Params
{
public:
	int32                                        ActionTurnCount;                                   // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetTotalBreakCount
struct ABattleCharacterBaseBP_C_GetTotalBreakCount_Params
{
public:
	int32                                        Count;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetDamageHPMax
struct ABattleCharacterBaseBP_C_SetDamageHPMax_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HPMinimum;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRatio;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.OnPreRemoveDisease
struct ABattleCharacterBaseBP_C_OnPreRemoveDisease_Params
{
public:
	struct FExecDiseaseHandler                   DiseaseData;                                       // 0x0(0x8A)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_1506[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EDISEASE_TYPE                     DiseaseType;                                       // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return;                                            // 0x91(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x160 (0x160 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_Stone
struct ABattleCharacterBaseBP_C_ExecDisease_Stone_Params
{
public:
	bool                                         TurnSkip;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1507[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6D (0x6D - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SearchMainWeaponAilment
struct ABattleCharacterBaseBP_C_SearchMainWeaponAilment_Params
{
public:
	enum class EAILMENT_TYPE                     AilmentType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1509[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAilment                              Ailment;                                           // 0x8(0x49)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_150A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAilmentHandler                       AilmentHandler;                                    // 0x58(0x14)(Parm, OutParm, NoDestructor)
	bool                                         Find;                                              // 0x6C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB8 (0xB8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_Silence
struct ABattleCharacterBaseBP_C_ExecDisease_Silence_Params
{
public:
	float                                        WaitTime;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetRecoveryLevelRatio
struct ABattleCharacterBaseBP_C_GetRecoveryLevelRatio_Params
{
public:
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_150B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LevelRatio;                                        // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BaseDEF;                                           // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SearchDiseaseByCategory
struct ABattleCharacterBaseBP_C_SearchDiseaseByCategory_Params
{
public:
	enum class EDISEASE_CATEGORY                 DiseaseCategory;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_150C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FExecDiseaseHandler>           ExecHandler;                                       // 0x8(0x10)(Parm, OutParm, ContainsInstancedReference)
	bool                                         Enable;                                            // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5F1 (0x5F1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckDiseaseSuccess
struct ABattleCharacterBaseBP_C_CheckDiseaseSuccess_Params
{
public:
	struct FDisease                              DiseaseData;                                       // 0x0(0x54)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x54(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetDamageLevelRatio
struct ABattleCharacterBaseBP_C_GetDamageLevelRatio_Params
{
public:
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_150E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LevelRatio;                                        // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BaseATK;                                           // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x190 (0x190 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_Stun
struct ABattleCharacterBaseBP_C_ExecDisease_Stun_Params
{
public:
	bool                                         TurnSkip;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_150F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_Fear
struct ABattleCharacterBaseBP_C_ExecDisease_Fear_Params
{
public:
	float                                        WaitTime;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetDebugTameRate
struct ABattleCharacterBaseBP_C_GetDebugTameRate_Params
{
public:
	float                                        TameRate;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.OnTakeDamageHP
struct ABattleCharacterBaseBP_C_OnTakeDamageHP_Params
{
public:
	class ABattleCharacterBaseBP_C*              Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DamageValue;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWEAPON_CATEGORY                  WeaponType;                                        // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_TYPE                   AttributeType;                                     // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAILMENT_CALC_TYPE_OLD            CalcType;                                          // 0xE(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return;                                            // 0xF(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x75 (0x75 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Get Disease Effect Label
struct ABattleCharacterBaseBP_C_Get_Disease_Effect_Label_Params
{
public:
	class ABattleCharacterBase*                  Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDisease                              DiseaseData;                                       // 0x8(0x54)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Label;                                             // 0x5C(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SpawnGround;                                       // 0x64(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseAttach;                                         // 0x65(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ChargeAction;                                      // 0x66(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.NoticePlayActionCommand
struct ABattleCharacterBaseBP_C_NoticePlayActionCommand_Params
{
public:
	class FName                                  ActionCommand;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2E (0x2E - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.RemoveDiseaseAll
struct ABattleCharacterBaseBP_C_RemoveDiseaseAll_Params
{
public:
	bool                                         ExecRemove;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF2 (0xF2 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.RemoveDiseaseByCategory
struct ABattleCharacterBaseBP_C_RemoveDiseaseByCategory_Params
{
public:
	enum class EDISEASE_CATEGORY                 DiseaseCategory;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceRemove;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ExecRemove;                                        // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF0 (0xF0 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_MPRegeneration
struct ABattleCharacterBaseBP_C_ExecDisease_MPRegeneration_Params
{
public:
	bool                                         ExecRegeneration;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1512[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF0 (0xF0 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_HPRegeneration
struct ABattleCharacterBaseBP_C_ExecDisease_HPRegeneration_Params
{
public:
	bool                                         ExecRegeneration;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1514[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3B0 (0x3B0 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_Poison
struct ABattleCharacterBaseBP_C_ExecDisease_Poison_Params
{
public:
	bool                                         ExecPoison;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1515[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_Blind
struct ABattleCharacterBaseBP_C_ExecDisease_Blind_Params
{
public:
	float                                        WaitTime;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F1 (0x1F1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecDisease_Sleep
struct ABattleCharacterBaseBP_C_ExecDisease_Sleep_Params
{
public:
	bool                                         TurnSkip;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1516[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19C (0x19C - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.UpdateDiseaseCounter
struct ABattleCharacterBaseBP_C_UpdateDiseaseCounter_Params
{
public:
	enum class EDISEASE_TYPE                     Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Remove;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x128 (0x128 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetInvadeData
struct ABattleCharacterBaseBP_C_GetInvadeData_Params
{
public:
	struct FInvadeData                           EnemyData;                                         // 0x0(0x128)(Parm, OutParm)
};

// 0x210 (0x210 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetEnemyData
struct ABattleCharacterBaseBP_C_GetEnemyData_Params
{
public:
	struct FEnemyData                            EnemyData;                                         // 0x0(0x20E)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CalcMP_Ratio
struct ABattleCharacterBaseBP_C_CalcMP_Ratio_Params
{
public:
	int32                                        MP_Ratio;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CalcMP;                                            // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9A (0x9A - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckNextBreakRestore
struct ABattleCharacterBaseBP_C_CheckNextBreakRestore_Params
{
public:
	bool                                         Restore;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x149 (0x149 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCONDiseaseRatio
struct ABattleCharacterBaseBP_C_GetCONDiseaseRatio_Params
{
public:
	float                                        DiseaseRatio;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x149 (0x149 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetEVADiseaseRatio
struct ABattleCharacterBaseBP_C_GetEVADiseaseRatio_Params
{
public:
	float                                        DiseaseRatio;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x149 (0x149 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetACCDiseaseRatio
struct ABattleCharacterBaseBP_C_GetACCDiseaseRatio_Params
{
public:
	float                                        DiseaseRatio;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_AGI
struct ABattleCharacterBaseBP_C_Debug_SetCharaParam_AGI_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_CON
struct ABattleCharacterBaseBP_C_Debug_SetCharaParam_CON_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_EVA
struct ABattleCharacterBaseBP_C_Debug_SetCharaParam_EVA_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_ACC
struct ABattleCharacterBaseBP_C_Debug_SetCharaParam_ACC_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_MDEF
struct ABattleCharacterBaseBP_C_Debug_SetCharaParam_MDEF_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_MATK
struct ABattleCharacterBaseBP_C_Debug_SetCharaParam_MATK_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_DEF
struct ABattleCharacterBaseBP_C_Debug_SetCharaParam_DEF_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_ATK
struct ABattleCharacterBaseBP_C_Debug_SetCharaParam_ATK_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_SPMAX
struct ABattleCharacterBaseBP_C_Debug_SetCharaParam_SPMAX_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_BPMAX
struct ABattleCharacterBaseBP_C_Debug_SetCharaParam_BPMAX_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_SP
struct ABattleCharacterBaseBP_C_Debug_SetCharaParam_SP_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_BP
struct ABattleCharacterBaseBP_C_Debug_SetCharaParam_BP_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_MPMAX
struct ABattleCharacterBaseBP_C_Debug_SetCharaParam_MPMAX_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_HPMAX
struct ABattleCharacterBaseBP_C_Debug_SetCharaParam_HPMAX_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_MP
struct ABattleCharacterBaseBP_C_Debug_SetCharaParam_MP_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.Debug_SetCharaParam_HP
struct ABattleCharacterBaseBP_C_Debug_SetCharaParam_HP_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetGuardEffectPosition
struct ABattleCharacterBaseBP_C_GetGuardEffectPosition_Params
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6C (0x6C - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetDamageUIPosition
struct ABattleCharacterBaseBP_C_GetDamageUIPosition_Params
{
public:
	int32                                        RevisionCount;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WorldPos;                                          // 0x4(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D (0x1D - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.PlayCharacterAction
struct ABattleCharacterBaseBP_C_PlayCharacterAction_Params
{
public:
	enum class EKSCharacterAction                ActionType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetBreakPoint
struct ABattleCharacterBaseBP_C_SetBreakPoint_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetTakeDamageDiseaseRatio
struct ABattleCharacterBaseBP_C_GetTakeDamageDiseaseRatio_Params
{
public:
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_TYPE                   Attribute;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1528[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DamageRatio;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetOnHitDamageDiseaseRatio
struct ABattleCharacterBaseBP_C_GetOnHitDamageDiseaseRatio_Params
{
public:
	class ABattleCharacterBaseBP_C*              Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBoost;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsConvergence;                                     // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWEAPON_CATEGORY                  Weapon;                                            // 0xB(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_TYPE                   Attribute;                                         // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EABILITY_TYPE                     AbilityType;                                       // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCompensation;                                    // 0xE(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsCritical;                                        // 0xF(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActionCommandBase*                    ActionCommand;                                     // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DiseaseRatio;                                      // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetDamage_BP
struct ABattleCharacterBaseBP_C_SetDamage_BP_Params
{
public:
	int32                                        DamageValue;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetDamage_MP
struct ABattleCharacterBaseBP_C_SetDamage_MP_Params
{
public:
	int32                                        DamageValue;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterNameID
struct ABattleCharacterBaseBP_C_GetCharacterNameID_Params
{
public:
	class FName                                  TextID;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A (0x2A - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetAnalyze
struct ABattleCharacterBaseBP_C_SetAnalyze_Params
{
public:
	bool                                         AnalyzeEnable;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x149 (0x149 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetAGIDiseaseRatio
struct ABattleCharacterBaseBP_C_GetAGIDiseaseRatio_Params
{
public:
	float                                        DiseaseRatio;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.AddCoverCharacter
struct ABattleCharacterBaseBP_C_AddCoverCharacter_Params
{
public:
	class ABattleCharacterBaseBP_C*              CoverCharacter;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE (0xE - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.EndActionCovered
struct ABattleCharacterBaseBP_C_EndActionCovered_Params
{
public:
	class ABattleCharacterBaseBP_C*              EndCoverCharacter;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.StartActionCovered
struct ABattleCharacterBaseBP_C_StartActionCovered_Params
{
public:
	class ABattleCharacterBaseBP_C*              CoveredCharacter;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetCoverTarget
struct ABattleCharacterBaseBP_C_SetCoverTarget_Params
{
public:
	class ABattleCharacterBaseBP_C*              CoverTarget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x52 (0x52 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCoveredCharacter
struct ABattleCharacterBaseBP_C_GetCoveredCharacter_Params
{
public:
	class ABattleCharacterBaseBP_C*              CoverdCharacter;                                   // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCoverd;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetSupporter
struct ABattleCharacterBaseBP_C_SetSupporter_Params
{
public:
	class ABattleSupporterBP_C*                  Supporter;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.JudgeCover
struct ABattleCharacterBaseBP_C_JudgeCover_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetCoverEnable
struct ABattleCharacterBaseBP_C_SetCoverEnable_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24B (0x24B - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.RemoveDisease
struct ABattleCharacterBaseBP_C_RemoveDisease_Params
{
public:
	enum class EDISEASE_TYPE                     DiseaseType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceRemove;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ExecRemove;                                        // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.BeginBattleTurn
struct ABattleCharacterBaseBP_C_BeginBattleTurn_Params
{
public:
	float                                        WaitTime;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.HoldBoostPoint
struct ABattleCharacterBaseBP_C_HoldBoostPoint_Params
{
public:
	int32                                        Point;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.PlayBattleAction
struct ABattleCharacterBaseBP_C_PlayBattleAction_Params
{
public:
	enum class EBATTLE_ACTION_TYPE               ActionType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x149 (0x149 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetMDEFDiseaseRatio
struct ABattleCharacterBaseBP_C_GetMDEFDiseaseRatio_Params
{
public:
	float                                        DiseaseRatio;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x149 (0x149 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetDEFDiseaseRatio
struct ABattleCharacterBaseBP_C_GetDEFDiseaseRatio_Params
{
public:
	float                                        DiseaseRatio;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetUseItemRatio
struct ABattleCharacterBaseBP_C_GetUseItemRatio_Params
{
public:
	float                                        Ratio;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetAgilityOld
struct ABattleCharacterBaseBP_C_GetAgilityOld_Params
{
public:
	int32                                        Agility;                                           // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ratio;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetSupporter
struct ABattleCharacterBaseBP_C_GetSupporter_Params
{
public:
	class ABattleSupporterBP_C*                  Supporter;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSupporter;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetBattleAI
struct ABattleCharacterBaseBP_C_GetBattleAI_Params
{
public:
	class UBP_BattleAI_Base_C*                   BattleAI;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCoverEnable
struct ABattleCharacterBaseBP_C_GetCoverEnable_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x156 (0x156 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetTargetSelect
struct ABattleCharacterBaseBP_C_SetTargetSelect_Params
{
public:
	bool                                         Select;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterActiveIcon
struct ABattleCharacterBaseBP_C_GetCharacterActiveIcon_Params
{
public:
	class UTexture2D*                            OrderIcon;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            FrontIcon;                                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             IconUV;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             PixelScale;                                        // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CharaOffset;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CharaScale;                                        // 0x28(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InvertX;                                           // 0x2C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            WeaponIcon;                                        // 0x30(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CharaFootPivot;                                    // 0x38(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterOrderIcon
struct ABattleCharacterBaseBP_C_GetCharacterOrderIcon_Params
{
public:
	class UTexture2D*                            OrderIcon;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             IconUV;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             PixelScale;                                        // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CharaOffset;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Scale;                                             // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InvertX;                                           // 0x24(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CharaFootPivot;                                    // 0x28(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CharacterSwitch;                                   // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CommandPreview
struct ABattleCharacterBaseBP_C_CommandPreview_Params
{
public:
	class ABattleCharacterBaseBP_C*              Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                 AttributeList;                                     // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x3 (0x3 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetWeakVisible
struct ABattleCharacterBaseBP_C_SetWeakVisible_Params
{
public:
	enum class EWEAPON_CATEGORY                  Weapon;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_TYPE                   Attribute;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CheckGroup;                                        // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetWeaponRegist_OLD
struct ABattleCharacterBaseBP_C_GetWeaponRegist_OLD_Params
{
public:
	enum class EWEAPON_CATEGORY                  AttackWeapon;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CheckWeakLock;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EATTRIBUTE_RESIST                 AttributeResist;                                   // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.UpdateBreakCounter
struct ABattleCharacterBaseBP_C_UpdateBreakCounter_Params
{
public:
	bool                                         Restore;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x131 (0x131 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SearchDisease
struct ABattleCharacterBaseBP_C_SearchDisease_Params
{
public:
	enum class EDISEASE_TYPE                     DiseaseType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1536[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FExecDiseaseHandler                   ExecHandler;                                       // 0x8(0x8A)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_1537[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Enable;                                            // 0x98(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7B2 (0x7B2 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.AddDisease
struct ABattleCharacterBaseBP_C_AddDisease_Params
{
public:
	struct FDiseaseHandler                       AddDiseaseHandler;                                 // 0x0(0x19)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1538[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBaseBP_C*              Enforcer;                                          // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BoostLv;                                           // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AddRandomTurn;                                     // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EDISEASE_TYPE                     AddType;                                           // 0x31(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckBoostMax
struct ABattleCharacterBaseBP_C_CheckBoostMax_Params
{
public:
	bool                                         BoostMax;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetEvasionOld
struct ABattleCharacterBaseBP_C_GetEvasionOld_Params
{
public:
	int32                                        Evasion;                                           // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ratio;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetAccuracyOld
struct ABattleCharacterBaseBP_C_GetAccuracyOld_Params
{
public:
	int32                                        Accuracy;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ratio;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetConcentrateOld
struct ABattleCharacterBaseBP_C_GetConcentrateOld_Params
{
public:
	int32                                        Concentrate;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ratio;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x114 (0x114 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetBreakPointDamage
struct ABattleCharacterBaseBP_C_SetBreakPointDamage_Params
{
public:
	int32                                        DamageValue;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Break;                                             // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SubBreakPoint
struct ABattleCharacterBaseBP_C_SubBreakPoint_Params
{
public:
	int32                                        SubValue;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.AddBreakPoint
struct ABattleCharacterBaseBP_C_AddBreakPoint_Params
{
public:
	int32                                        AddValue;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetBoostPoint_OLD
struct ABattleCharacterBaseBP_C_SetBoostPoint_OLD_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use;                                               // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SubBoostPoint
struct ABattleCharacterBaseBP_C_SubBoostPoint_Params
{
public:
	int32                                        SubValue;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use;                                               // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.AddBoostPoint
struct ABattleCharacterBaseBP_C_AddBoostPoint_Params
{
public:
	int32                                        AddValue;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.InitBreakPoint
struct ABattleCharacterBaseBP_C_InitBreakPoint_Params
{
public:
	int32                                        BreakMax;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.InitBoostPoint
struct ABattleCharacterBaseBP_C_InitBoostPoint_Params
{
public:
	int32                                        InitPoint;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BoostMax;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetRowID
struct ABattleCharacterBaseBP_C_SetRowID_Params
{
public:
	class FName                                  RowId;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetRowID
struct ABattleCharacterBaseBP_C_GetRowID_Params
{
public:
	class FName                                  RowId;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetEffectSpawnPosition
struct ABattleCharacterBaseBP_C_GetEffectSpawnPosition_Params
{
public:
	bool                                         Ground;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1539[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x4(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetMP
struct ABattleCharacterBaseBP_C_SetMP_Params
{
public:
	int32                                        NewMP;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverHeal;                                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_153A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentMP;                                         // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetHP
struct ABattleCharacterBaseBP_C_SetHP_Params
{
public:
	int32                                        NewHP;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverHeal;                                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_153B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentHP;                                         // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.PlayDamageUI
struct ABattleCharacterBaseBP_C_PlayDamageUI_Params
{
public:
	int32                                        DamageValue;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_DAMAGE_TYPE               DamageType;                                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x149 (0x149 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetMATKDiseaseRatio
struct ABattleCharacterBaseBP_C_GetMATKDiseaseRatio_Params
{
public:
	float                                        DiseaseRatio;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x149 (0x149 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetATKDiseaseRatio
struct ABattleCharacterBaseBP_C_GetATKDiseaseRatio_Params
{
public:
	float                                        DiseaseRatio;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetEnemyKindRate
struct ABattleCharacterBaseBP_C_GetEnemyKindRate_Params
{
public:
	int32                                        WeaponType;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CompatibleRatio;                                   // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetAttributeResist_OLD
struct ABattleCharacterBaseBP_C_GetAttributeResist_OLD_Params
{
public:
	enum class EATTRIBUTE_TYPE                   AttackAttribute;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CheckWeakLock;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EATTRIBUTE_RESIST                 AttributeResist;                                   // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterDefenseOld
struct ABattleCharacterBaseBP_C_GetCharacterDefenseOld_Params
{
public:
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_153C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Result;                                            // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ratio;                                             // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetCharacterAttackOld
struct ABattleCharacterBaseBP_C_GetCharacterAttackOld_Params
{
public:
	enum class EAILMENT_CALC_TYPE_OLD            CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_153D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBase*                  DamageTarget;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Result;                                            // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ratio;                                             // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetBattleParameter
struct ABattleCharacterBaseBP_C_GetBattleParameter_Params
{
public:
	struct FCharacterParam                       Param;                                             // 0x0(0x34)(Parm, OutParm, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsPlayingMove
struct ABattleCharacterBaseBP_C_IsPlayingMove_Params
{
public:
	bool                                         Moved;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CheckMP
struct ABattleCharacterBaseBP_C_CheckMP_Params
{
public:
	int32                                        UseMP;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.UseMP
struct ABattleCharacterBaseBP_C_UseMP_Params
{
public:
	int32                                        UseMP;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetSelectMaterial
struct ABattleCharacterBaseBP_C_SetSelectMaterial_Params
{
public:
	bool                                         Select;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C9 (0x1C9 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.IsGuard
struct ABattleCharacterBaseBP_C_IsGuard_Params
{
public:
	int32                                        GuardRatio;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GuardEnable;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetGuard
struct ABattleCharacterBaseBP_C_SetGuard_Params
{
public:
	bool                                         GuardEnable;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CreateAnimCharacter
struct ABattleCharacterBaseBP_C_CreateAnimCharacter_Params
{
public:
	class FName                                  ActionLabel;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.BeginCharacterTurn_OLD
struct ABattleCharacterBaseBP_C_BeginCharacterTurn_OLD_Params
{
public:
	float                                        WaitTime;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7 (0x7 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetDamage
struct ABattleCharacterBaseBP_C_SetDamage_Params
{
public:
	int32                                        DamageValue;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_DAMAGE_TYPE               DamageType;                                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LastHit;                                           // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         InstantDeath;                                      // 0x6(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetMP
struct ABattleCharacterBaseBP_C_GetMP_Params
{
public:
	int32                                        MP;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MPMax;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.GetHP
struct ABattleCharacterBaseBP_C_GetHP_Params
{
public:
	int32                                        HP;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HPMax;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.OnLoaded_2D59B0DC4715851A30B6B3BCB5715B51
struct ABattleCharacterBaseBP_C_OnLoaded_2D59B0DC4715851A30B6B3BCB5715B51_Params
{
public:
	TSubclassOf<class UObject>                   Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ReceiveTick
struct ABattleCharacterBaseBP_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.PlayEvasionAction
struct ABattleCharacterBaseBP_C_PlayEvasionAction_Params
{
public:
	bool                                         IsHideOut;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetCharaTransform
struct ABattleCharacterBaseBP_C_SetCharaTransform_Params
{
public:
	struct FTransform                            CTransform;                                        // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetupBaseTransform
struct ABattleCharacterBaseBP_C_SetupBaseTransform_Params
{
public:
	enum class EBATTLE_CHARA_POSITION_RESET_TYPE EResetType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnableDeadCharacterControl;                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CreateBattleAI
struct ABattleCharacterBaseBP_C_CreateBattleAI_Params
{
public:
	TSoftClassPtr<class UBattleAIBase>           CBattleAIClass;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
	bool                                         bAutoInitialize;                                   // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.CreateBattleEffectSocket
struct ABattleCharacterBaseBP_C_CreateBattleEffectSocket_Params
{
public:
	struct FVector                               VEffectOffset;                                     // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetCanoeTransform
struct ABattleCharacterBaseBP_C_SetCanoeTransform_Params
{
public:
	struct FTransform                            CTransform;                                        // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetCharacterOpacity
struct ABattleCharacterBaseBP_C_SetCharacterOpacity_Params
{
public:
	float                                        FOpacity;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetForceMovementTimelineCurve
struct ABattleCharacterBaseBP_C_SetForceMovementTimelineCurve_Params
{
public:
	class UCurveFloat*                           CMovementRatio;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                          CMovementOffset;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           COpacityCurve;                                     // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FTimelineLength;                                   // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetVisibleCanoe
struct ABattleCharacterBaseBP_C_SetVisibleCanoe_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetPotentialityAction_BodyColor
struct ABattleCharacterBaseBP_C_SetPotentialityAction_BodyColor_Params
{
public:
	struct FLinearColor                          CColor;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetPotentialityAction_EyesColor
struct ABattleCharacterBaseBP_C_SetPotentialityAction_EyesColor_Params
{
public:
	float                                        FAlpha;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF (0xF - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecRevive
struct ABattleCharacterBaseBP_C_ExecRevive_Params
{
public:
	class ABattleCharacterBase*                  CEnforcer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NReviveHP;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverHeal;                                         // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bUseRecoveryUI;                                    // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bUseReviveVoice;                                   // 0xE(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetDeadFlagForReplay
struct ABattleCharacterBaseBP_C_SetDeadFlagForReplay_Params
{
public:
	bool                                         bDeadFlag;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetGetBackBoostPoint
struct ABattleCharacterBaseBP_C_SetGetBackBoostPoint_Params
{
public:
	int32                                        NGetBackBoostPoint;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.SetCharacterOpacityForActionCommand
struct ABattleCharacterBaseBP_C_SetCharacterOpacityForActionCommand_Params
{
public:
	float                                        FOpacity;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xBA4 (0xBA4 - 0x0)
// Function BattleCharacterBaseBP.BattleCharacterBaseBP_C.ExecuteUbergraph_BattleCharacterBaseBP
struct ABattleCharacterBaseBP_C_ExecuteUbergraph_BattleCharacterBaseBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


