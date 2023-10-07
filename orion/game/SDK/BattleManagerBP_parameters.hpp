#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x2 (0x2 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CheckBattleReplayFinish
struct ABattleManagerBP_C_CheckBattleReplayFinish_Params
{
public:
	bool                                         Finish;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.IsAllReady
struct ABattleManagerBP_C_IsAllReady_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.IsRequestUI
struct ABattleManagerBP_C_IsRequestUI_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CreateUI
struct ABattleManagerBP_C_CreateUI_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.IsAliveEnemy
struct ABattleManagerBP_C_IsAliveEnemy_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.IsReady
struct ABattleManagerBP_C_IsReady_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x148 (0x148 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetMJPostProcessVignette
struct ABattleManagerBP_C_GetMJPostProcessVignette_Params
{
public:
	float                                        Vignette;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetAutoTameTarget
struct ABattleManagerBP_C_GetAutoTameTarget_Params
{
public:
	class ABattleCharacterBase*                  CAutoTameTarget;                                   // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SetupAutoTameMonster
struct ABattleManagerBP_C_SetupAutoTameMonster_Params
{
public:
	class ABattleCharacterBase*                  CTarget;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.IsAutoTameMonster
struct ABattleManagerBP_C_IsAutoTameMonster_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x49 (0x49 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.UpdateWeakControl_BeginTurn
struct ABattleManagerBP_C_UpdateWeakControl_BeginTurn_Params
{
public:
	bool                                         ExecWeakControl;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_332[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetCurrentActionOrderData
struct ABattleManagerBP_C_GetCurrentActionOrderData_Params
{
public:
	struct FActionOrderData                      CActionData;                                       // 0x0(0x40)(Parm, OutParm, NoDestructor, ContainsInstancedReference)
};

// 0xA (0xA - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.Set Weapon Texture Unload
struct ABattleManagerBP_C_Set_Weapon_Texture_Unload_Params
{
public:
	uint8                                        UnloadType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UnloadWeaponCnt;                                   // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xFF (0xFF - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.UnLoadWeaponTextureList
struct ABattleManagerBP_C_UnLoadWeaponTextureList_Params
{
public:
	enum class EWEAPON_UNLOAD_GC_TYPE            GCTiming;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetEnemyGroupID
struct ABattleManagerBP_C_GetEnemyGroupID_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.ConvertEnemyPositionForReplay
struct ABattleManagerBP_C_ConvertEnemyPositionForReplay_Params
{
public:
	class FName                                  EnemyID;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RowPosition;                                       // 0x8(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ReturnPosition;                                    // 0x14(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetBattleStartType
struct ABattleManagerBP_C_GetBattleStartType_Params
{
public:
	enum class EBATTLE_START_TYPE                ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetCommandMenuActor
struct ABattleManagerBP_C_GetCommandMenuActor_Params
{
public:
	class ABattleCommandMenuActor*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetCurrentActionCommand
struct ABattleManagerBP_C_GetCurrentActionCommand_Params
{
public:
	class AActionCommandBase*                    CActionCommand;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2A (0x2A - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.IsDiseasePlayer
struct ABattleManagerBP_C_IsDiseasePlayer_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.AddUsedOnceMonster
struct ABattleManagerBP_C_AddUsedOnceMonster_Params
{
public:
	class FName                                  StrUsedMonsterLabel;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CheckUsedOnceMonster
struct ABattleManagerBP_C_CheckUsedOnceMonster_Params
{
public:
	class FName                                  StrCheckMonsterLabel;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x5C (0x5C - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.ExecActionOrderBlind
struct ABattleManagerBP_C_ExecActionOrderBlind_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bPlayerOnly;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x64 (0x64 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.AddAdditiveOrderForAutoTameMonster
struct ABattleManagerBP_C_AddAdditiveOrderForAutoTameMonster_Params
{
public:
	class ABattleCharacterBase*                  CEnforcer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBase*                  CTarget;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x5B (0x5B - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SearchEnemyCharacter
struct ABattleManagerBP_C_SearchEnemyCharacter_Params
{
public:
	class FName                                  StrEnemyID;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBase*                  EnemyCharacter;                                    // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFindCharacter;                                    // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bCharacterAlive;                                   // 0x11(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xFA (0xFA - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CheckSupportAilmentInParty
struct ABattleManagerBP_C_CheckSupportAilmentInParty_Params
{
public:
	enum class ESUPPORT_AILMENT_TYPE             EAilmentType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_382[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSupportAbilityDataBase               CAbilityData;                                      // 0x8(0x40)(Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x128 (0x128 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetRecoveryCutCurve
struct ABattleManagerBP_C_GetRecoveryCutCurve_Params
{
public:
	int32                                        CurrentLevel;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NewLevel;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                          MaskCurve;                                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                          ScrollCurve;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.InitUsedInvadeMonster
struct ABattleManagerBP_C_InitUsedInvadeMonster_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CheckUsedAwakingMonster
struct ABattleManagerBP_C_CheckUsedAwakingMonster_Params
{
public:
	class FName                                  StrCheckMonsterLabel;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.AddUsedAwakingMonster
struct ABattleManagerBP_C_AddUsedAwakingMonster_Params
{
public:
	class FName                                  StrUsedMonsterLabel;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetCurrentAdditiveOrderData
struct ABattleManagerBP_C_GetCurrentAdditiveOrderData_Params
{
public:
	struct FBattleAdditiveOrderData              CAdditiveOrderData;                                // 0x0(0x38)(Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3F8 (0x3F8 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CreateRareEnemyReplaceList
struct ABattleManagerBP_C_CreateRareEnemyReplaceList_Params
{
public:
	struct FEnemyGroup                           EnemyGroup;                                        // 0x0(0x7A)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	uint8                                        Pad_3BD[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRareEnemyParam                       RareEnemyParam;                                    // 0x80(0x14)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	bool                                         RareEnemyCatlin;                                   // 0x94(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ReplaceList;                                       // 0x98(0x10)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetBattleBoostMode
struct ABattleManagerBP_C_GetBattleBoostMode_Params
{
public:
	bool                                         bBoostMode;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetBattleActiveCharacter
struct ABattleManagerBP_C_GetBattleActiveCharacter_Params
{
public:
	class ABattleCharacterBase*                  CActiveCharacter;                                  // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x131 (0x131 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetBattleFieldDiseaseParam
struct ABattleManagerBP_C_GetBattleFieldDiseaseParam_Params
{
public:
	enum class EFIELD_DISEASE_TYPE               DiseaseType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FExecDiseaseHandler                   GetDisease;                                        // 0x8(0x8A)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3E5[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         ReturnValue;                                       // 0x98(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetMapObjectRoot
struct ABattleManagerBP_C_GetMapObjectRoot_Params
{
public:
	class AActor*                                CMapObjectRoot;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CheckBattleTutorial_OpenCommandMenu
struct ABattleManagerBP_C_CheckBattleTutorial_OpenCommandMenu_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8A (0x8A - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CheckConditionSpecialAction
struct ABattleManagerBP_C_CheckConditionSpecialAction_Params
{
public:
	enum class ESpecialActionType                SpecialActionType;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FindSpecialAction;                                 // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetBattleSequencerObject_SteamEffect
struct ABattleManagerBP_C_GetBattleSequencerObject_SteamEffect_Params
{
public:
	class AEmitter*                              CSteamAuraA;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEmitter*                              CSteamFieldA;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetBattleSequencerObject_AntlionSand
struct ABattleManagerBP_C_GetBattleSequencerObject_AntlionSand_Params
{
public:
	class AStaticMeshActor*                      CAntlionSandA;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStaticMeshActor*                      CAntlionSandB;                                     // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetBattleVoiceSetList
struct ABattleManagerBP_C_GetBattleVoiceSetList_Params
{
public:
	class FName                                  StrCharacterID;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          AstrBattleVoiceLabel;                              // 0x8(0x10)(Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x15 (0x15 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetBattleInfomation
struct ABattleManagerBP_C_GetBattleInfomation_Params
{
public:
	class FName                                  StrEnemyGroupID;                                   // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bBossBattle;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bFieldCommandBattle;                               // 0x9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0xA(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.Update Disease for Disable Action
struct ABattleManagerBP_C_Update_Disease_for_Disable_Action_Params
{
public:
	bool                                         DisableAction;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DiseaseWaitTime;                                   // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF (0xF - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.Debug_IsReadyBattleSuspend
struct ABattleManagerBP_C_Debug_IsReadyBattleSuspend_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x59 (0x59 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetRespawnableEnemy
struct ABattleManagerBP_C_GetRespawnableEnemy_Params
{
public:
	int32                                        NIndex;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBase*                  CRespawnableEnemy;                                 // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFindEnemy;                                        // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2E (0x2E - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.IsChangeBattlePartyEnable
struct ABattleManagerBP_C_IsChangeBattlePartyEnable_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bExecutable;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x34 (0x34 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.UpdateEightBattle_DecideAction
struct ABattleManagerBP_C_UpdateEightBattle_DecideAction_Params
{
public:
	float                                        WaitTime;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.UpdateEightBattle_EndTurn
struct ABattleManagerBP_C_UpdateEightBattle_EndTurn_Params
{
public:
	float                                        WaitTime;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.AddAdditiveOrderForSong
struct ABattleManagerBP_C_AddAdditiveOrderForSong_Params
{
public:
	class ABattleCharacterBase*                  Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AbilityName;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.RequestChangeBattleParty
struct ABattleManagerBP_C_RequestChangeBattleParty_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.InitBattleFirstActionCharacter
struct ABattleManagerBP_C_InitBattleFirstActionCharacter_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.AddBattleFirstActionCharacter
struct ABattleManagerBP_C_AddBattleFirstActionCharacter_Params
{
public:
	class ABattleCharacterBase*                  CActionCharacter;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x64 (0x64 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.AddAdditiveOrderForChaseAttack
struct ABattleManagerBP_C_AddAdditiveOrderForChaseAttack_Params
{
public:
	class ABattleCharacterBase*                  Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AbilityName;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABattleCharacterBase*>          AcTargetList;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1C0 (0x1C0 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.AddAdditiveOrderForReraise
struct ABattleManagerBP_C_AddAdditiveOrderForReraise_Params
{
public:
	class ABattleCharacterBase*                  Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x7C (0x7C - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.AddAdditiveOrderForReflection
struct ABattleManagerBP_C_AddAdditiveOrderForReflection_Params
{
public:
	class ABattleCharacterBase*                  Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  StrAbilityName;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  StrAilmentName;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NInvocationValue;                                  // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_TYPE                   EAttribute;                                        // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_495[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBase*                  CTargetList;                                       // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xD0 (0xD0 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.AddAdditiveOrderForCounter
struct ABattleManagerBP_C_AddAdditiveOrderForCounter_Params
{
public:
	class ABattleCharacterBase*                  Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AbilityName;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOnDead;                                           // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bCounterOnce;                                      // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_49D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBase*                  CTargetList;                                       // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x51 (0x51 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.RequestBattleEvent
struct ABattleManagerBP_C_RequestBattleEvent_Params
{
public:
	TSoftObjectPtr<class ULevelSequence>         EventSequence;                                     // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
	class ABattleCharacterBase*                  MainActor;                                         // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBase*                  EventEnforcer;                                     // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE (0xE - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CheckCondition_LastAct
struct ABattleManagerBP_C_CheckCondition_LastAct_Params
{
public:
	bool                                         EnableLastAct;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x55 (0x55 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.UpdateBattleFieldDisease
struct ABattleManagerBP_C_UpdateBattleFieldDisease_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1DA (0x1DA - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.ExecBattleFieldDisease
struct ABattleManagerBP_C_ExecBattleFieldDisease_Params
{
public:
	enum class EFIELD_DISEASE_TYPE               DiseaseType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x99 (0x99 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SearchBattleFieldDisease
struct ABattleManagerBP_C_SearchBattleFieldDisease_Params
{
public:
	enum class EFIELD_DISEASE_TYPE               DiseaseType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x249 (0x249 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.RemoveBattleFieldDisease
struct ABattleManagerBP_C_RemoveBattleFieldDisease_Params
{
public:
	enum class EFIELD_DISEASE_TYPE               DiseaseType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x5A1 (0x5A1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.AddBattleFieldDisease
struct ABattleManagerBP_C_AddBattleFieldDisease_Params
{
public:
	enum class EFIELD_DISEASE_TYPE               DiseaseType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InvocationValue;                                   // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InvocationTurn;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DiseaseLevel;                                      // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBase*                  Enforcer;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.IsAllowChangeBattleSpeed
struct ABattleManagerBP_C_IsAllowChangeBattleSpeed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.ExecChangeBattleSpeed
struct ABattleManagerBP_C_ExecChangeBattleSpeed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x64 (0x64 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.AddAdditiveOrderForRepeat
struct ABattleManagerBP_C_AddAdditiveOrderForRepeat_Params
{
public:
	class ABattleCharacterBase*                  Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AbilityName;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABattleCharacterBase*>          AcTargetList;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x64 (0x64 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.AddAdditiveOrderForEnchant
struct ABattleManagerBP_C_AddAdditiveOrderForEnchant_Params
{
public:
	class ABattleCharacterBase*                  Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AbilityName;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABattleCharacterBase*>          AcTargetList;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x64 (0x64 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.AddAdditiveOrderForLastAttack
struct ABattleManagerBP_C_AddAdditiveOrderForLastAttack_Params
{
public:
	class ABattleCharacterBase*                  Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AbilityName;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABattleCharacterBase*>          AcTargetList;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x64 (0x64 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.AddAdditiveOrderForFirstAttack
struct ABattleManagerBP_C_AddAdditiveOrderForFirstAttack_Params
{
public:
	class ABattleCharacterBase*                  Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AbilityName;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABattleCharacterBase*>          AcTargetList;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3B (0x3B - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.ExecDebugPlayBattleEvent
struct ABattleManagerBP_C_ExecDebugPlayBattleEvent_Params
{
public:
	TSoftObjectPtr<class ULevelSequence>         CEventSequence;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
	class ABattleCharacterBase*                  CMainActor;                                        // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBase*                  CEventEnforcer;                                    // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.RequestPlayActionWaitTime
struct ABattleManagerBP_C_RequestPlayActionWaitTime_Params
{
public:
	float                                        FWaitTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x82 (0x82 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CheckSpecialActionTutorial
struct ABattleManagerBP_C_CheckSpecialActionTutorial_Params
{
public:
	enum class EPlayableCharacterID              ECharaID;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsActiveCharaCheck;                                // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ETUTORIAL_TYPE                    OpenTutorialType;                                  // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FindTutorial;                                      // 0x3(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x84 (0x84 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CheckBattleTutorial
struct ABattleManagerBP_C_CheckBattleTutorial_Params
{
public:
	enum class EBATTLE_FLOW_STATE                CurrentFlow;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETUTORIAL_TYPE                    OpenTutorialType;                                  // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FindTutorial;                                      // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x55 (0x55 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.Check Battle Job in Party
struct ABattleManagerBP_C_Check_Battle_Job_in_Party_Params
{
public:
	enum class EJOB_TYPE                         TargetJob;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FindJob;                                           // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_500[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABattleCharacterBase*>          JobCharacter;                                      // 0x8(0x10)(Parm, OutParm)
};

// 0x142 (0x142 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.ExecSpecialAction_BuffInNight
struct ABattleManagerBP_C_ExecSpecialAction_BuffInNight_Params
{
public:
	class ABattleCharacterBaseBP_C*              ActionEnforcer;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x132 (0x132 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.ExecSpecialAction_DebuffInNight
struct ABattleManagerBP_C_ExecSpecialAction_DebuffInNight_Params
{
public:
	class ABattleCharacterBaseBP_C*              ActionEnforcer;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CheckSpecialActionInParty
struct ABattleManagerBP_C_CheckSpecialActionInParty_Params
{
public:
	enum class ESpecialActionType                SpecialActionType;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FindSpecialAction;                                 // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_501[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBaseBP_C*              SpecialActionEnforcer;                             // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x101 (0x101 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.ExecDebugPlayAbility
struct ABattleManagerBP_C_ExecDebugPlayAbility_Params
{
public:
	class FName                                  StrAbilityLabel;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NBoostLevel;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPlayerSide;                                       // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0xD(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x64 (0x64 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.AddAdditiveOrderForSignOfBoost
struct ABattleManagerBP_C_AddAdditiveOrderForSignOfBoost_Params
{
public:
	class ABattleCharacterBase*                  Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AbilityName;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.ExecInitializeEnemyResourceList
struct ABattleManagerBP_C_ExecInitializeEnemyResourceList_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CreateStationaryBattleUI
struct ABattleManagerBP_C_CreateStationaryBattleUI_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SetBattleStartType
struct ABattleManagerBP_C_SetBattleStartType_Params
{
public:
	enum class EBATTLE_START_TYPE                StartType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WaterSide;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x28A (0x28A - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.ExecDebugPlayAbility_Implemantation
struct ABattleManagerBP_C_ExecDebugPlayAbility_Implemantation_Params
{
public:
	struct FAbilityDataBase                      ActionCommand;                                     // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        BoostLevel;                                        // 0xF0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnforcePlayerSide;                                 // 0xF4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EBATTLE_SEQUENCE_PATTERN_TYPE     SequencePattern;                                   // 0xF5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53A[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EnemyIndex;                                        // 0xF8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  UseActionLabel;                                    // 0xFC(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.IsBoostCommandEnable
struct ABattleManagerBP_C_IsBoostCommandEnable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x9A (0x9A - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CheckBattleDefeat
struct ABattleManagerBP_C_CheckBattleDefeat_Params
{
public:
	bool                                         bBattleDefeat;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bEightBattleChange;                                // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3D (0x3D - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CheckBattleVictory
struct ABattleManagerBP_C_CheckBattleVictory_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetActionOrderTimeline
struct ABattleManagerBP_C_GetActionOrderTimeline_Params
{
public:
	class UActionOrderTimeLine_C*                ActionOrderTimeLine;                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SearchPlayerCharacter
struct ABattleManagerBP_C_SearchPlayerCharacter_Params
{
public:
	enum class EPlayableCharacterID              ECharaID;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBase*                  PlayerCharacter;                                   // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFindCharacter;                                    // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bCharacterAlive;                                   // 0x11(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SequenceRequestCallback
struct ABattleManagerBP_C_SequenceRequestCallback_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.IsItemCommandEnable
struct ABattleManagerBP_C_IsItemCommandEnable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.IsGuardCommandEnable
struct ABattleManagerBP_C_IsGuardCommandEnable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.IsEscapeCommandEnable
struct ABattleManagerBP_C_IsEscapeCommandEnable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetLevelupActionEnable
struct ABattleManagerBP_C_GetLevelupActionEnable_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetLastActionPlayer
struct ABattleManagerBP_C_GetLastActionPlayer_Params
{
public:
	class ABattleCharacterBaseBP_C*              LastActionPlayer;                                  // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.Get Battle Supporter
struct ABattleManagerBP_C_Get_Battle_Supporter_Params
{
public:
	TArray<class ABattleSupporterBP_C*>          BattleSupporter;                                   // 0x0(0x10)(Parm, OutParm)
};

// 0x4 (0x4 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.DialogCallback
struct ABattleManagerBP_C_DialogCallback_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SetLastEnemyOverKill
struct ABattleManagerBP_C_SetLastEnemyOverKill_Params
{
public:
	bool                                         IsOverKillEnemy;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x15 (0x15 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SettingReplayCallSupporter
struct ABattleManagerBP_C_SettingReplayCallSupporter_Params
{
public:
	int32                                        SupporterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetEnemyWeaknessOpen
struct ABattleManagerBP_C_GetEnemyWeaknessOpen_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WeaknessOpen;                                      // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Find;                                              // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetPassSPValue
struct ABattleManagerBP_C_GetPassSPValue_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SetPassSPValue
struct ABattleManagerBP_C_SetPassSPValue_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7 (0x7 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CheckBattleEnd
struct ABattleManagerBP_C_CheckBattleEnd_Params
{
public:
	bool                                         BattleEnd;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8D (0x8D - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CheckAdditiveOrderBody
struct ABattleManagerBP_C_CheckAdditiveOrderBody_Params
{
public:
	TArray<struct FBattleAdditiveOrderData>      OrderList;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class EADDITIVE_ORDER_CATEGORY          CheckOrderCategory;                                // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ExecAdditiveTurn;                                  // 0x11(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Result;                                            // 0x12(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x15 (0x15 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CheckAdditiveOrder
struct ABattleManagerBP_C_CheckAdditiveOrder_Params
{
public:
	TArray<struct FBattleAdditiveOrderData>      OrderList;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class EADDITIVE_ORDER_CATEGORY          CheckOrderCategory;                                // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ExecAdditiveTurn;                                  // 0x11(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SetDebugDisableSubSupportCounter
struct ABattleManagerBP_C_SetDebugDisableSubSupportCounter_Params
{
public:
	bool                                         Disable;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SetSupporterReturn
struct ABattleManagerBP_C_SetSupporterReturn_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetBoostMode
struct ABattleManagerBP_C_GetBoostMode_Params
{
public:
	bool                                         IsBoost;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SetBoostMode
struct ABattleManagerBP_C_SetBoostMode_Params
{
public:
	bool                                         IsBoost;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CheckBattleEventPlay
struct ABattleManagerBP_C_CheckBattleEventPlay_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x51 (0x51 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetCharacterByBattleID
struct ABattleManagerBP_C_GetCharacterByBattleID_Params
{
public:
	int32                                        BattleID;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBaseBP_C*              Enforcer;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SetSupporterVisibility
struct ABattleManagerBP_C_SetSupporterVisibility_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB (0xB - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SetDebugEnemyUseAbility
struct ABattleManagerBP_C_SetDebugEnemyUseAbility_Params
{
public:
	class FName                                  ABILITY;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SetDebugResultEXPValue
struct ABattleManagerBP_C_SetDebugResultEXPValue_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.RequestBattleEvent_Old
struct ABattleManagerBP_C_RequestBattleEvent_Old_Params
{
public:
	TSoftObjectPtr<class ULevelSequence>         EventSequence;                                     // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class ABattleCharacterBase*                  MainActor;                                         // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBase*                  EventEnforcer;                                     // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SetCallEnemyWeaken
struct ABattleManagerBP_C_SetCallEnemyWeaken_Params
{
public:
	int32                                        HPRatio;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SubShieldPoint;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetCallEnemyWeaken
struct ABattleManagerBP_C_GetCallEnemyWeaken_Params
{
public:
	int32                                        HPRatio;                                           // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ShieldPoint;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.FinishDoomStatusUI
struct ABattleManagerBP_C_FinishDoomStatusUI_Params
{
public:
	class UBattleDeathCount_C*                   DoomUI;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetDoomStatusUI
struct ABattleManagerBP_C_GetDoomStatusUI_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattleDeathCount_C*                   DoomUI;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xCA (0xCA - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CalcBonusReward
struct ABattleManagerBP_C_CalcBonusReward_Params
{
public:
	int32                                        GetExp;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GetJobPoint;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GetMoney;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BreakBonus;                                        // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OneTurnKillBonus;                                  // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NoDamageBonus;                                     // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OverKillBonus;                                     // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.Set Character Harden Dead
struct ABattleManagerBP_C_Set_Character_Harden_Dead_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF8 (0xF8 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.UpdateDiseaseByCharacterState
struct ABattleManagerBP_C_UpdateDiseaseByCharacterState_Params
{
public:
	float                                        WaitTime;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x888 (0x888 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.ReplaceRareEnemy
struct ABattleManagerBP_C_ReplaceRareEnemy_Params
{
public:
	struct FEnemyData                            EnemyData;                                         // 0x0(0x20E)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	uint8                                        Pad_621[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EnemyRowID;                                        // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RareEnemyType;                                     // 0x218(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_622[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnemyData                            NewEnemyData;                                      // 0x220(0x20E)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_623[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NewEnemyRowID;                                     // 0x430(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEnemyData                            OutputPin;                                         // 0x438(0x20E)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.FinishBattleDamageUI
struct ABattleManagerBP_C_FinishBattleDamageUI_Params
{
public:
	class UBattleDamageNumber_C*                 DamageUI;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetBattleDamageUI
struct ABattleManagerBP_C_GetBattleDamageUI_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_624[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattleDamageNumber_C*                 DamageUI;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetUseActionLabel
struct ABattleManagerBP_C_GetUseActionLabel_Params
{
public:
	class FName                                  ActionLabel;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C (0x4C - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.UpdateWeakControl_PostCharaOrder
struct ABattleManagerBP_C_UpdateWeakControl_PostCharaOrder_Params
{
public:
	bool                                         ExecWeakControl;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_630[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.ExecSpecialAction_Preparation
struct ABattleManagerBP_C_ExecSpecialAction_Preparation_Params
{
public:
	class ABattleCharacterBase*                  ActionEnforcer;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SetPlayActionInfoText
struct ABattleManagerBP_C_SetPlayActionInfoText_Params
{
public:
	class FText                                  InfoText;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xC (0xC - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SetSupportCoverCharacter
struct ABattleManagerBP_C_SetSupportCoverCharacter_Params
{
public:
	class ABattlePlayerBP_C*                     Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x52 (0x52 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetSupportCoverCharacter
struct ABattleManagerBP_C_GetSupportCoverCharacter_Params
{
public:
	class ABattleCharacterBaseBP_C*              CoverTarget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleCharacterBaseBP_C*              CoverCharacter;                                    // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FindCharacter;                                     // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.IsBattleManagerReady
struct ABattleManagerBP_C_IsBattleManagerReady_Params
{
public:
	bool                                         Ready;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.Debug_GetBattleCharacter
struct ABattleManagerBP_C_Debug_GetBattleCharacter_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_638[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBaseBP_C*              Character;                                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xCC (0xCC - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.Debug_GetAllBattleCharaName
struct ABattleManagerBP_C_Debug_GetAllBattleCharaName_Params
{
public:
	TArray<class FText>                          NameList;                                          // 0x0(0x10)(Parm, OutParm)
};

// 0x2A (0x2A - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.IsBreakEnemy
struct ABattleManagerBP_C_IsBreakEnemy_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SetInvadeBattleTurn
struct ABattleManagerBP_C_SetInvadeBattleTurn_Params
{
public:
	int32                                        BattleTurn;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetAllBattleParty
struct ABattleManagerBP_C_GetAllBattleParty_Params
{
public:
	bool                                         ContainDead;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_64A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABattlePlayerBP_C*>             TargetSelect;                                      // 0x8(0x10)(Parm, OutParm)
};

// 0x40 (0x40 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetAllBattleEnemy
struct ABattleManagerBP_C_GetAllBattleEnemy_Params
{
public:
	bool                                         ContainDead;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_64F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABattleEnemyBP_C*>              TargetSelect;                                      // 0x8(0x10)(Parm, OutParm)
};

// 0xD8 (0xD8 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.ChangeBattleTurn
struct ABattleManagerBP_C_ChangeBattleTurn_Params
{
public:
	float                                        WaitTime;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x118 (0x118 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetDefaultTarget
struct ABattleManagerBP_C_GetDefaultTarget_Params
{
public:
	enum class EBATTLE_TARGET_TYPE               TargetType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_67F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBase*                  Enforcer;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABattleCharacterBase*>          Target;                                            // 0x10(0x10)(Parm, OutParm)
};

// 0x44 (0x44 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetDeadCharacterNum
struct ABattleManagerBP_C_GetDeadCharacterNum_Params
{
public:
	bool                                         PlayerSide;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_686[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Num;                                               // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF8 (0xF8 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SaveBattleResult
struct ABattleManagerBP_C_SaveBattleResult_Params
{
public:
	bool                                         IsVictory;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetTargetSelect
struct ABattleManagerBP_C_GetTargetSelect_Params
{
public:
	class ABattleTargetSelectBP_C*               TargetSelect;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CanBattleResultSkip
struct ABattleManagerBP_C_CanBattleResultSkip_Params
{
public:
	bool                                         CanResultSkip;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.Get Current Flow Old
struct ABattleManagerBP_C_Get_Current_Flow_Old_Params
{
public:
	enum class EBATTLE_FLOW_STATE                CurrentFlow;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A8 (0x2A8 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CalcGetReward
struct ABattleManagerBP_C_CalcGetReward_Params
{
public:
	int32                                        Exp;                                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        JobPoint;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Money;                                             // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2E8 (0x2E8 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.LotteryDropItem
struct ABattleManagerBP_C_LotteryDropItem_Params
{
public:
	TArray<struct FBattleResultItemDropData>     DropItem;                                          // 0x0(0x10)(Parm, OutParm)
};

// 0x99 (0x99 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.UpdateHPState
struct ABattleManagerBP_C_UpdateHPState_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.IsBattleEnd
struct ABattleManagerBP_C_IsBattleEnd_Params
{
public:
	bool                                         IsEnd;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x13C (0x13C - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.GetPlayerBattlePosition
struct ABattleManagerBP_C_GetPlayerBattlePosition_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PartyMax;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PartyOffset;                                       // 0x8(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WaitPosition;                                      // 0x14(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StepPosition;                                      // 0x20(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x741 (0x741 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CreateEnemyCharacter
struct ABattleManagerBP_C_CreateEnemyCharacter_Params
{
public:
	struct FEnemyGroup                           EnemyGroup;                                        // 0x0(0x7A)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x688 (0x688 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CreatePlayerCharacter
struct ABattleManagerBP_C_CreatePlayerCharacter_Params
{
public:
	TArray<struct FPartyCharacterData>           CreatePlayerData;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         IsFrontParty;                                      // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6AE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABattlePlayerBP_C*>             CreatePlayerList;                                  // 0x18(0x10)(Parm, OutParm)
	TArray<class ABattleSupporterBP_C*>          CreateSupporterList;                               // 0x28(0x10)(Parm, OutParm)
};

// 0xF9 (0xF9 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.ChangeBattleFlow
struct ABattleManagerBP_C_ChangeBattleFlow_Params
{
public:
	enum class EBATTLE_FLOW_STATE                NextFlow;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_FLOW_STATE                CurrentFlow;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsChange;                                          // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.OnLoaded_B4D68C0543DB3287EFCB8EAACE22D2EE
struct ABattleManagerBP_C_OnLoaded_B4D68C0543DB3287EFCB8EAACE22D2EE_Params
{
public:
	TSubclassOf<class UObject>                   Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.OnLoaded_63829E714E605D48FF2624940DA26FCD
struct ABattleManagerBP_C_OnLoaded_63829E714E605D48FF2624940DA26FCD_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.OnLoaded_A07274004BA3016F97BDEEAA3D9B33C1
struct ABattleManagerBP_C_OnLoaded_A07274004BA3016F97BDEEAA3D9B33C1_Params
{
public:
	TSubclassOf<class UObject>                   Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.StartBattleSequence
struct ABattleManagerBP_C_StartBattleSequence_Params
{
public:
	TArray<struct FPartyCharacterData>           Player;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  EnemyGroupID;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEventBGM;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsInvadeBattle;                                    // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.RequestLoadForEndroll
struct ABattleManagerBP_C_RequestLoadForEndroll_Params
{
public:
	enum class EEndRollSegmentSet                ESegment;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.RequestLoadCalback
struct ABattleManagerBP_C_RequestLoadCalback_Params
{
public:
	TArray<class UObject*>                       ObjList;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.PlayBattleReplay
struct ABattleManagerBP_C_PlayBattleReplay_Params
{
public:
	enum class EEndRollSegmentSet                ReplaySegment;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x104 (0x104 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.Debug_PlayAbilitty
struct ABattleManagerBP_C_Debug_PlayAbilitty_Params
{
public:
	struct FAbilityDataBase                      PlayAbilityData;                                   // 0x0(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        BoostLevel;                                        // 0xF0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnforcePlayerSide;                                 // 0xF4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EBATTLE_SEQUENCE_PATTERN_TYPE     SequencePattern;                                   // 0xF5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_74A[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EnemyIndex;                                        // 0xF8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  UseActionLabel;                                    // 0xFC(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.ActionInfoOpen
struct ABattleManagerBP_C_ActionInfoOpen_Params
{
public:
	class FText                                  InfoText;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.ActionInfoClose
struct ABattleManagerBP_C_ActionInfoClose_Params
{
public:
	bool                                         ForceClose;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.BattleDialogOpen
struct ABattleManagerBP_C_BattleDialogOpen_Params
{
public:
	class FText                                  ConfirmText;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.TameConfirmDialogOpen
struct ABattleManagerBP_C_TameConfirmDialogOpen_Params
{
public:
	class ATameMonsterCommand_C*                 Command;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.TameCancelDialogOpen
struct ABattleManagerBP_C_TameCancelDialogOpen_Params
{
public:
	class ATameMonsterCommand_C*                 Command;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.BattleDialogDecide
struct ABattleManagerBP_C_BattleDialogDecide_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.TameReleaseMenuDecide
struct ABattleManagerBP_C_TameReleaseMenuDecide_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.TameReleaseMenuOpen
struct ABattleManagerBP_C_TameReleaseMenuOpen_Params
{
public:
	TArray<struct FMonsterListData>              MonsterList;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.RequestUpdateNextOrderIcon
struct ABattleManagerBP_C_RequestUpdateNextOrderIcon_Params
{
public:
	bool                                         bUseDelay;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SetPlayerStatusUIVisible
struct ABattleManagerBP_C_SetPlayerStatusUIVisible_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SetEnemyNameVisible
struct ABattleManagerBP_C_SetEnemyNameVisible_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.RequestUpdateActionOrderAnnounce
struct ABattleManagerBP_C_RequestUpdateActionOrderAnnounce_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UpdateCurrentOrder;                                // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UpdateNextOrder;                                   // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.ActionInfoMultiLineOpen
struct ABattleManagerBP_C_ActionInfoMultiLineOpen_Params
{
public:
	class FText                                  TopInfoText;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  LowInfoText;                                       // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.RequestUpdateCurrentOrderIcon
struct ABattleManagerBP_C_RequestUpdateCurrentOrderIcon_Params
{
public:
	bool                                         UseDelay;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.UpdateActiveCharacterIcon
struct ABattleManagerBP_C_UpdateActiveCharacterIcon_Params
{
public:
	class ABattleCharacterBaseBP_C*              ActiveCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.OpenActionInfomation
struct ABattleManagerBP_C_OpenActionInfomation_Params
{
public:
	class FText                                  StrInfomationText;                                 // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x30 (0x30 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.OpenMultiLineInfomation
struct ABattleManagerBP_C_OpenMultiLineInfomation_Params
{
public:
	class FText                                  StrFirstText;                                      // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  StrSecondText;                                     // 0x18(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x14 (0x14 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.OpenChainInfomation
struct ABattleManagerBP_C_OpenChainInfomation_Params
{
public:
	TArray<class FText>                          AstrInfomationText;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                        FShowTime;                                         // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SetActionInfoAutoCloseTimer
struct ABattleManagerBP_C_SetActionInfoAutoCloseTimer_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.ChangePlayerAnimation
struct ABattleManagerBP_C_ChangePlayerAnimation_Params
{
public:
	int32                                        Set;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.CharacterStepOut
struct ABattleManagerBP_C_CharacterStepOut_Params
{
public:
	class ABattleCharacterBaseBP_C*              Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.PlayBreakCamera
struct ABattleManagerBP_C_PlayBreakCamera_Params
{
public:
	enum class EBREAK_CAMERA_TYPE                EBreakType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.BeginAddBoostPoint
struct ABattleManagerBP_C_BeginAddBoostPoint_Params
{
public:
	float                                        DelayBase;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.PlayEnemyDeadCamera
struct ABattleManagerBP_C_PlayEnemyDeadCamera_Params
{
public:
	enum class EBREAK_CAMERA_TYPE                EBreakType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.RequestLoadBattleEvent
struct ABattleManagerBP_C_RequestLoadBattleEvent_Params
{
public:
	TSoftObjectPtr<class ULevelSequence>         CEventSequence;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.RequestLoadActionCommandClass
struct ABattleManagerBP_C_RequestLoadActionCommandClass_Params
{
public:
	TSoftClassPtr<class UObject>                 AssetClass;                                        // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.UpdateManager
struct ABattleManagerBP_C_UpdateManager_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.PlayBoostSE
struct ABattleManagerBP_C_PlayBoostSE_Params
{
public:
	int32                                        PlayBoostLv;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D (0x1D - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SetPostProcessMaterialPrameter
struct ABattleManagerBP_C_SetPostProcessMaterialPrameter_Params
{
public:
	class APostProcessVolume*                    TargetVolume;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                MaterialName;                                      // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                        WeightParam;                                       // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SetAllMaterial;                                    // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SwitchBattleFieldDiseaseMaterial
struct ABattleManagerBP_C_SwitchBattleFieldDiseaseMaterial_Params
{
public:
	class APostProcessVolume*                    TargetVolume;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                MaterialName;                                      // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                  ParameterName;                                     // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           ParameterCurve;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OnDisease;                                         // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SwitchRecoveryCutDiseaseMaterial
struct ABattleManagerBP_C_SwitchRecoveryCutDiseaseMaterial_Params
{
public:
	class UCurveVector*                          MaskParameterCurve;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                          ScrollParameterCurve;                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OnDisease;                                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.PlayReturnDragInEffect
struct ABattleManagerBP_C_PlayReturnDragInEffect_Params
{
public:
	class ABattleCharacterBase*                  CReturnCharacter;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_DRAG_IN_TYPE              EDragInType;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.SwitchBattleFieldDiseaseMaterialForCross
struct ABattleManagerBP_C_SwitchBattleFieldDiseaseMaterialForCross_Params
{
public:
	class APostProcessVolume*                    TargetVolume;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                MaterialName;                                      // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                  ParameterName;                                     // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           ParameterCurve;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2051 (0x2051 - 0x0)
// Function BattleManagerBP.BattleManagerBP_C.ExecuteUbergraph_BattleManagerBP
struct ABattleManagerBP_C_ExecuteUbergraph_BattleManagerBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


