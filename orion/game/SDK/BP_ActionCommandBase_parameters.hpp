#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0xA (0xA - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.OnAttackDamageSP
struct ABP_ActionCommandBase_C_OnAttackDamageSP_Params
{
public:
	class ABattleCharacterBase*                  CEnforcer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x43 (0x43 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckCoverTarget
struct ABP_ActionCommandBase_C_CheckCoverTarget_Params
{
public:
	class ABattleCharacterBaseBP_C*              TargetCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Cover;                                             // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1263[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBaseBP_C*              Target;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckEnableExcitementBuff
struct ABP_ActionCommandBase_C_CheckEnableExcitementBuff_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1B (0x1B - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetPlayableCharacterID
struct ABP_ActionCommandBase_C_GetPlayableCharacterID_Params
{
public:
	class ABattleCharacterBase*                  Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayableCharacterID              ECharaID;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.OnHitDamageSP
struct ABP_ActionCommandBase_C_OnHitDamageSP_Params
{
public:
	class ABattleCharacterBaseBP_C*              Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBreakAttack;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Result;                                            // 0x9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetGrachesSummonAbility 
struct ABP_ActionCommandBase_C_SetGrachesSummonAbility__Params
{
public:
	bool                                         IsGrachesSummonAbility;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckEnableConpensation
struct ABP_ActionCommandBase_C_CheckEnableConpensation_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckEnableConvergence
struct ABP_ActionCommandBase_C_CheckEnableConvergence_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckEnableSupportFullHP
struct ABP_ActionCommandBase_C_CheckEnableSupportFullHP_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4B (0x4B - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ExecPlayDiseaseMissUI
struct ABP_ActionCommandBase_C_ExecPlayDiseaseMissUI_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xC0 (0xC0 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetDebugATKText
struct ABP_ActionCommandBase_C_GetDebugATKText_Params
{
public:
	class ABattleCharacterBase*                  Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1267[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBase*                  DamageTarget;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InvocationValue;                                   // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1269[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ATKNumber;                                         // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                ATKText;                                           // 0x30(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetSessionTarget
struct ABP_ActionCommandBase_C_GetSessionTarget_Params
{
public:
	TArray<class ABattleCharacterBaseBP_C*>      Return;                                            // 0x0(0x10)(Parm, OutParm)
};

// 0x4 (0x4 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckEnableAutoTameMonster
struct ABP_ActionCommandBase_C_CheckEnableAutoTameMonster_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x234 (0x234 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetRecoveryRatio
struct ABP_ActionCommandBase_C_GetRecoveryRatio_Params
{
public:
	class ABattleCharacterBase*                  RecoveryEnforcer;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBase*                  RecoveryTarget;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAbilityDataBase                      AbilityData;                                       // 0x10(0xF0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                        RecoveryRatio;                                     // 0x100(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetSettledPlayOnce_OnRecovered
struct ABP_ActionCommandBase_C_GetSettledPlayOnce_OnRecovered_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetSettledPlayOnce_OnRecovered
struct ABP_ActionCommandBase_C_SetSettledPlayOnce_OnRecovered_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.WaitSessionSupporterCommand
struct ABP_ActionCommandBase_C_WaitSessionSupporterCommand_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ReturnSessionSupporterCommand
struct ABP_ActionCommandBase_C_ReturnSessionSupporterCommand_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CallSessionSupporterCommand
struct ABP_ActionCommandBase_C_CallSessionSupporterCommand_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.IsMusicalCommand
struct ABP_ActionCommandBase_C_IsMusicalCommand_Params
{
public:
	bool                                         bIsSong;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsDance;                                          // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.IsUseItemCommand
struct ABP_ActionCommandBase_C_IsUseItemCommand_Params
{
public:
	bool                                         bIsUseItemCommand;                                 // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsMeatItem;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetActionLabel
struct ABP_ActionCommandBase_C_GetActionLabel_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D0 (0x1D0 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.OnAttackDamageHP
struct ABP_ActionCommandBase_C_OnAttackDamageHP_Params
{
public:
	class ABattleCharacterBase*                  CEnforcer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.PlayActionForSelfOnlyCommand
struct ABP_ActionCommandBase_C_PlayActionForSelfOnlyCommand_Params
{
public:
	class ABattleCharacterBase*                  ActionCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterAction                BattleSelfActionID;                                // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterAction                BattleOtherActionID;                               // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bExceptEnforcer;                                   // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0xB(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.WaitEnemyActionCommand
struct ABP_ActionCommandBase_C_WaitEnemyActionCommand_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CalcBreakDamage
struct ABP_ActionCommandBase_C_CalcBreakDamage_Params
{
public:
	enum class EATTRIBUTE_RESIST                 EAttributeWeak;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_RESIST                 EWeaponWeak;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_126B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OutBreakDamage;                                    // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ShowBusinessSupportInfomationCommand
struct ABP_ActionCommandBase_C_ShowBusinessSupportInfomationCommand_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CallBusinessSupporterCommand
struct ABP_ActionCommandBase_C_CallBusinessSupporterCommand_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.WaitBusinessSupporterCommand
struct ABP_ActionCommandBase_C_WaitBusinessSupporterCommand_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ReturnBusinessSupporterCommand
struct ABP_ActionCommandBase_C_ReturnBusinessSupporterCommand_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.PlayBusinessSupportActionCommand
struct ABP_ActionCommandBase_C_PlayBusinessSupportActionCommand_Params
{
public:
	enum class EKSCharacterAction                BattleActionID;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetOptionDataList
struct ABP_ActionCommandBase_C_SetOptionDataList_Params
{
public:
	TArray<class FName>                          AstrOptionDataList;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  StrActionLabel;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NOptionIndex;                                      // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseGrowMagicBuff;                                 // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ExecEndCharacterWarpCommand
struct ABP_ActionCommandBase_C_ExecEndCharacterWarpCommand_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xF (0xF - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ExecStartCharacterWarpCommand
struct ABP_ActionCommandBase_C_ExecStartCharacterWarpCommand_Params
{
public:
	struct FVector                               CCommandOffset;                                    // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xB4 (0xB4 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.PlaySessionActionCommand
struct ABP_ActionCommandBase_C_PlaySessionActionCommand_Params
{
public:
	enum class EKSCharacterAction                BattleActionID;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.WaitSessionAbilityCommand
struct ABP_ActionCommandBase_C_WaitSessionAbilityCommand_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x54 (0x54 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ExecSessionAbilityCommand
struct ABP_ActionCommandBase_C_ExecSessionAbilityCommand_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetTargetList
struct ABP_ActionCommandBase_C_SetTargetList_Params
{
public:
	TArray<class ABattleCharacterBase*>          AcTargetList;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xF8 (0xF8 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ExecStepCounter
struct ABP_ActionCommandBase_C_ExecStepCounter_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x180 (0x180 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckAttackCounter
struct ABP_ActionCommandBase_C_CheckAttackCounter_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3D (0x3D - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetSubTargetList
struct ABP_ActionCommandBase_C_SetSubTargetList_Params
{
public:
	TArray<class ABattleCharacterBase*>          AcSubTargetList;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetSubTargetList
struct ABP_ActionCommandBase_C_GetSubTargetList_Params
{
public:
	TArray<class ABattleCharacterBase*>          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckAbilityHit
struct ABP_ActionCommandBase_C_CheckAbilityHit_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetSummonAbility
struct ABP_ActionCommandBase_C_SetSummonAbility_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bLastHit;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1287[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  StrActionLabel;                                    // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1288[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActionCommandBase*                    COwnerAbility;                                     // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckBoostLevelLess
struct ABP_ActionCommandBase_C_CheckBoostLevelLess_Params
{
public:
	int32                                        NBorderLevel;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bContainEqual;                                     // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetSubEnforcerList
struct ABP_ActionCommandBase_C_GetSubEnforcerList_Params
{
public:
	TArray<class ABattleCharacterBase*>          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
};

// 0x10 (0x10 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetSubEnforcerList
struct ABP_ActionCommandBase_C_SetSubEnforcerList_Params
{
public:
	TArray<class ABattleCharacterBase*>          AcSubEnforcerList;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x11 (0x11 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetEnforcer
struct ABP_ActionCommandBase_C_SetEnforcer_Params
{
public:
	class ABattleCharacterBase*                  CEnforcer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckBoostLevelGreater
struct ABP_ActionCommandBase_C_CheckBoostLevelGreater_Params
{
public:
	int32                                        NBorderLevel;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bContainEqual;                                     // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x45D (0x45D - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckStealMoney
struct ABP_ActionCommandBase_C_CheckStealMoney_Params
{
public:
	class ABattleCharacterBase*                  CStealTarget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NStealRateMin;                                     // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x461 (0x461 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckStealItem
struct ABP_ActionCommandBase_C_CheckStealItem_Params
{
public:
	class ABattleCharacterBase*                  CStealTarget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NStealRateMin;                                     // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x24F (0x24F - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.PlayAbilitySECommand
struct ABP_ActionCommandBase_C_PlayAbilitySECommand_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2B (0x2B - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.PlayWeaponAttackCommand
struct ABP_ActionCommandBase_C_PlayWeaponAttackCommand_Params
{
public:
	class ABattleCharacterBase*                  ActionCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckLastHit
struct ABP_ActionCommandBase_C_CheckLastHit_Params
{
public:
	class ABattleCharacterBase*                  CTarget;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetTargetList
struct ABP_ActionCommandBase_C_GetTargetList_Params
{
public:
	TArray<class ABattleCharacterBase*>          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetEnforcer
struct ABP_ActionCommandBase_C_GetEnforcer_Params
{
public:
	class ABattleCharacterBase*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ExecSpecialAilmentCommand
struct ABP_ActionCommandBase_C_ExecSpecialAilmentCommand_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.RegisterOnHitSECommand
struct ABP_ActionCommandBase_C_RegisterOnHitSECommand_Params
{
public:
	class FName                                  SEID;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xE4 (0xE4 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.PlayActionCommand
struct ABP_ActionCommandBase_C_PlayActionCommand_Params
{
public:
	class ABattleCharacterBase*                  ActionCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterAction                BattleActionID;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayableCharacterID              UniqueCharaID;                                     // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterAction                UniqueActionID;                                    // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bExceptEnforcer;                                   // 0xB(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.WeaponChangeCommand
struct ABP_ActionCommandBase_C_WeaponChangeCommand_Params
{
public:
	enum class EWEAPON_CATEGORY                  WeaponType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xB (0xB - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.PlayVibrationCommand
struct ABP_ActionCommandBase_C_PlayVibrationCommand_Params
{
public:
	class FName                                  VibrationID;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVibrationPower                   Power;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8E (0x8E - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.PlayVoiceCommand
struct ABP_ActionCommandBase_C_PlayVoiceCommand_Params
{
public:
	enum class EBATTLE_VOICE_TYPE                VoiceID;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayableCharacterID              UniqueCharaID;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_VOICE_TYPE                UniqueVoiceID;                                     // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x3(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x23 (0x23 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.PlaySECommand
struct ABP_ActionCommandBase_C_PlaySECommand_Params
{
public:
	class FName                                  SEID;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.HideInfomationCommand
struct ABP_ActionCommandBase_C_HideInfomationCommand_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ShowInfomationCommand
struct ABP_ActionCommandBase_C_ShowInfomationCommand_Params
{
public:
	class FName                                  TextID;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x161 (0x161 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ExecAilmentCommand
struct ABP_ActionCommandBase_C_ExecAilmentCommand_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllAilment;                                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         LastHit;                                           // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x6(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetForceBreak
struct ABP_ActionCommandBase_C_GetForceBreak_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetCriticalPower
struct ABP_ActionCommandBase_C_GetCriticalPower_Params
{
public:
	bool                                         bCritical;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OutRatio;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckEnableCommandWeapon
struct ABP_ActionCommandBase_C_CheckEnableCommandWeapon_Params
{
public:
	enum class EWEAPON_CATEGORY                  Weapon;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A (0x1A - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetBattleReplayParam
struct ABP_ActionCommandBase_C_SetBattleReplayParam_Params
{
public:
	TArray<int32>                                ParamList;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  ActionLabel;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return;                                            // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetBattleReplayParam
struct ABP_ActionCommandBase_C_GetBattleReplayParam_Params
{
public:
	int32                                        Param1;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Param2;                                            // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Param3;                                            // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Param4;                                            // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetTotalDamage
struct ABP_ActionCommandBase_C_GetTotalDamage_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetRandomTarget
struct ABP_ActionCommandBase_C_GetRandomTarget_Params
{
public:
	TArray<class ABattleCharacterBaseBP_C*>      RandomTarget;                                      // 0x0(0x10)(Parm, OutParm)
	bool                                         EnableRandomTarget;                                // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetInevitablyCritical
struct ABP_ActionCommandBase_C_GetInevitablyCritical_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsCritical;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetChaseTarget
struct ABP_ActionCommandBase_C_GetChaseTarget_Params
{
public:
	TArray<class ABattleCharacterBaseBP_C*>      ChaseTarget;                                       // 0x0(0x10)(Parm, OutParm)
	bool                                         EnableChaseTarget;                                 // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetChaseTarget
struct ABP_ActionCommandBase_C_SetChaseTarget_Params
{
public:
	TArray<class ABattleCharacterBaseBP_C*>      ChaseTarget;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x34 (0x34 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CalcEnforcerAttack
struct ABP_ActionCommandBase_C_CalcEnforcerAttack_Params
{
public:
	class ABattleCharacterBase*                  DamageEnforcer;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBase*                  DamageTarget;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAILMENT_CALC_TYPE                DamageType;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InvocationValue;                                   // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AttackValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageRatio;                                       // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetTotalDamage
struct ABP_ActionCommandBase_C_SetTotalDamage_Params
{
public:
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Value;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x348 (0x348 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.OnHitDamageHP
struct ABP_ActionCommandBase_C_OnHitDamageHP_Params
{
public:
	class ABattleCharacterBaseBP_C*              Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBaseBP_C*              DamageTarget;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DamageValue;                                       // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBreakAttack;                                     // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Result;                                            // 0x15(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckReflectionEnable
struct ABP_ActionCommandBase_C_CheckReflectionEnable_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckCounterEnable
struct ABP_ActionCommandBase_C_CheckCounterEnable_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetAdditiveTurn
struct ABP_ActionCommandBase_C_SetAdditiveTurn_Params
{
public:
	bool                                         AdditiveTurn;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EADDITIVE_ORDER_TYPE              OrderType;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x389 (0x389 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ExecCheckAdditiveTurn
struct ABP_ActionCommandBase_C_ExecCheckAdditiveTurn_Params
{
public:
	bool                                         ExecAdditiveTurn;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckDiseaseSpecialHit
struct ABP_ActionCommandBase_C_CheckDiseaseSpecialHit_Params
{
public:
	class ABattleCharacterBaseBP_C*              DiseaseTarget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OnHit;                                             // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         INVISIBLE;                                         // 0x9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetAbilityRatio
struct ABP_ActionCommandBase_C_GetAbilityRatio_Params
{
public:
	class ABattleCharacterBaseBP_C*              Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBaseBP_C*              Target;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageRatio;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckEnableHideOut
struct ABP_ActionCommandBase_C_CheckEnableHideOut_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.InitAbilityCounter
struct ABP_ActionCommandBase_C_InitAbilityCounter_Params
{
public:
	int32                                        BaseCount;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MinimumCount;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RandomMin;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RandomMax;                                         // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetReviveCommand
struct ABP_ActionCommandBase_C_SetReviveCommand_Params
{
public:
	bool                                         REVIVE;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1DC (0x1DC - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.JudgeSpecialHitRate
struct ABP_ActionCommandBase_C_JudgeSpecialHitRate_Params
{
public:
	struct FExecAilmentHandler                   Ailment;                                           // 0x0(0x9C)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_12D5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBaseBP_C*              Target;                                            // 0xA0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable;                                            // 0xA8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Result;                                            // 0xA9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetOnHitEffect
struct ABP_ActionCommandBase_C_GetOnHitEffect_Params
{
public:
	bool                                         OnHit;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12D7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EffectLabel;                                       // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Offset;                                            // 0xC(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetOnHitSE
struct ABP_ActionCommandBase_C_GetOnHitSE_Params
{
public:
	bool                                         OnHit;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SELabel;                                           // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x64 (0x64 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CalcAilmentRecoverySP
struct ABP_ActionCommandBase_C_CalcAilmentRecoverySP_Params
{
public:
	enum class EAILMENT_CALC_TYPE_OLD            CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InvocationValue;                                   // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Recovery;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CalcAilmentRecoveryBP
struct ABP_ActionCommandBase_C_CalcAilmentRecoveryBP_Params
{
public:
	enum class EAILMENT_CALC_TYPE_OLD            CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InvocationValue;                                   // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Recovery;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF9 (0xF9 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CalcAilmentRecoveryMP
struct ABP_ActionCommandBase_C_CalcAilmentRecoveryMP_Params
{
public:
	class ABattleCharacterBase*                  Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBase*                  Target;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InvocationValue;                                   // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Recovery;                                          // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CalcAilmentDamageBP
struct ABP_ActionCommandBase_C_CalcAilmentDamageBP_Params
{
public:
	class ABattleCharacterBaseBP_C*              AbilityEnfocer;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBaseBP_C*              AilmentTarget;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InvocationValue;                                   // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Damage;                                            // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CalcAilmentDamageSP
struct ABP_ActionCommandBase_C_CalcAilmentDamageSP_Params
{
public:
	enum class EAILMENT_CALC_TYPE_OLD            CalcType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InvocationValue;                                   // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Damage;                                            // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CalcAilmentDamageMP
struct ABP_ActionCommandBase_C_CalcAilmentDamageMP_Params
{
public:
	class ABattleCharacterBaseBP_C*              Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBaseBP_C*              Target;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12F1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InvocationValue;                                   // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Damage;                                            // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6C0 (0x6C0 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CalcAilmentRecoveryHP
struct ABP_ActionCommandBase_C_CalcAilmentRecoveryHP_Params
{
public:
	class ABattleCharacterBaseBP_C*              Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBaseBP_C*              Target;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12F3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InvocationValue;                                   // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Critical;                                          // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12F4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Recovery;                                          // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD18 (0xD18 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CalcAilmentDamageHP
struct ABP_ActionCommandBase_C_CalcAilmentDamageHP_Params
{
public:
	class ABattleCharacterBaseBP_C*              Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBaseBP_C*              Target;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAILMENT_CALC_TYPE                CalcType;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InvocationValue;                                   // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_RESIST                 WeaponResist;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_RESIST                 AttributeResist;                                   // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Critical;                                          // 0x1A(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EWEAPON_CATEGORY                  Weapon;                                            // 0x1B(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_TYPE                   Attribute;                                         // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AddDrain;                                          // 0x1D(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12F9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Damage;                                            // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC4 (0xC4 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.GetPositionByPositionType
struct ABP_ActionCommandBase_C_GetPositionByPositionType_Params
{
public:
	enum class EACTION_COMMAND_POSITION_TYPE     PositionType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Offset;                                            // 0x4(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SpqwnGround;                                       // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBaseBP_C*              FocusTarget;                                       // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Position;                                          // 0x20(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.CheckExecCommand
struct ABP_ActionCommandBase_C_CheckExecCommand_Params
{
public:
	bool                                         Exec;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x75F (0x75F - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.Setup Action Command
struct ABP_ActionCommandBase_C_Setup_Action_Command_Params
{
public:
	class ABattleCharacterBaseBP_C*              Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABattleCharacterBaseBP_C*>      Target;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAbilityDataBase                      NewCommand;                                        // 0x18(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        BoostLevel;                                        // 0x108(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x10C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.OnLoaded_080220B84804514B7ADD9986D199D1E1
struct ABP_ActionCommandBase_C_OnLoaded_080220B84804514B7ADD9986D199D1E1_Params
{
public:
	TSubclassOf<class UObject>                   Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.OnLoaded_831328EB48DE85CC2DC1F291800135A0
struct ABP_ActionCommandBase_C_OnLoaded_831328EB48DE85CC2DC1F291800135A0_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.WaitTimeEffecterInfomation
struct ABP_ActionCommandBase_C_WaitTimeEffecterInfomation_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.PlayAbilitySEWithDelay
struct ABP_ActionCommandBase_C_PlayAbilitySEWithDelay_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SELabel;                                           // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.SetupDelayActionSE
struct ABP_ActionCommandBase_C_SetupDelayActionSE_Params
{
public:
	class ABattleCharacterBase*                  ActionCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.RequestLoadCommandSequence
struct ABP_ActionCommandBase_C_RequestLoadCommandSequence_Params
{
public:
	TSoftObjectPtr<class ULevelSequence>         CCommandSequence;                                  // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
};

// 0x5B9 (0x5B9 - 0x0)
// Function BP_ActionCommandBase.BP_ActionCommandBase_C.ExecuteUbergraph_BP_ActionCommandBase
struct ABP_ActionCommandBase_C_ExecuteUbergraph_BP_ActionCommandBase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


