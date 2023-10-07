#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x2 (0x2 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.IsPlayingBadConnectionFlow
struct AFCv2_FieldCommandManager_C_IsPlayingBadConnectionFlow_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x26 (0x26 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.StartBadConnectionTalk
struct AFCv2_FieldCommandManager_C_StartBadConnectionTalk_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.SetIsIgnoreSwoonProcessFromEventCommand
struct AFCv2_FieldCommandManager_C_SetIsIgnoreSwoonProcessFromEventCommand_Params
{
public:
	bool                                         Val;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.OnClosedWaitingNpcComeBackDialog
struct AFCv2_FieldCommandManager_C_OnClosedWaitingNpcComeBackDialog_Params
{
public:
	int32                                        SelectIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD (0xD - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.UpdateLastResult
struct AFCv2_FieldCommandManager_C_UpdateLastResult_Params
{
public:
	enum class ESequenceResult                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.SetupFlowBase
struct AFCv2_FieldCommandManager_C_SetupFlowBase_Params
{
public:
	class AKSCharacterBase*                      TargetChara;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMJFieldCommandType               FCType;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.CanExecFieldCommand
struct AFCv2_FieldCommandManager_C_CanExecFieldCommand_Params
{
public:
	class FName                                  NPCLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMJFieldCommandType               FCType;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x13 (0x13 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.ResetManagerFromTitle
struct AFCv2_FieldCommandManager_C_ResetManagerFromTitle_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.ResetManager
struct AFCv2_FieldCommandManager_C_ResetManager_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xF0 (0xF0 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.RecoveryConnectionValue
struct AFCv2_FieldCommandManager_C_RecoveryConnectionValue_Params
{
public:
	int32                                        TownID;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1C0 (0x1C0 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.ConnectionBadNotification
struct AFCv2_FieldCommandManager_C_ConnectionBadNotification_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.OnFinishBadConnectionTutorial
struct AFCv2_FieldCommandManager_C_OnFinishBadConnectionTutorial_Params
{
public:
	enum class ETUTORIAL_TYPE                    TutorialType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.OpenConnectionBadNotification
struct AFCv2_FieldCommandManager_C_OpenConnectionBadNotification_Params
{
public:
	bool                                         IsOpenTutorial;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.StartSwoonTalk
struct AFCv2_FieldCommandManager_C_StartSwoonTalk_Params
{
public:
	class AKSCharacterBase*                      TargetNpc;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetTargetNpc
struct AFCv2_FieldCommandManager_C_GetTargetNpc_Params
{
public:
	class AKSCharacterBase*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetFlowBase
struct AFCv2_FieldCommandManager_C_GetFlowBase_Params
{
public:
	enum class EMJFieldCommandType               FCType;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_127B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFieldCommandFlowBase*                 ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetPurchaseItemList
struct AFCv2_FieldCommandManager_C_GetPurchaseItemList_Params
{
public:
	class FName                                  NPCLabel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPurchaseItemInfoData>         ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ReturnParm)
};

// 0x16 (0x16 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.IsBattleType
struct AFCv2_FieldCommandManager_C_IsBattleType_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xF0 (0xF0 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetIsGameOverWhenLoose
struct AFCv2_FieldCommandManager_C_GetIsGameOverWhenLoose_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetCharacterByFcType
struct AFCv2_FieldCommandManager_C_GetCharacterByFcType_Params
{
public:
	enum class EMJFieldCommandType               FieldCommandType;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_127F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3B (0x3B - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.IsImpossibleSucceed
struct AFCv2_FieldCommandManager_C_IsImpossibleSucceed_Params
{
public:
	enum class EMJFieldCommandType               FCType;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1280[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      TargetNpc;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x42 (0x42 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.IsAvailableFieldCommand
struct AFCv2_FieldCommandManager_C_IsAvailableFieldCommand_Params
{
public:
	enum class EMJFieldCommandType               FCType;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1281[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      TargetNpc;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3B (0x3B - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.IsCompleteFieldCommand
struct AFCv2_FieldCommandManager_C_IsCompleteFieldCommand_Params
{
public:
	enum class EMJFieldCommandType               FCType;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1283[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      TargetNpc;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x232 (0x232 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.CreateFlowClassIfNeeded
struct AFCv2_FieldCommandManager_C_CreateFlowClassIfNeeded_Params
{
public:
	enum class EMJFieldCommandType               FCType;                                            // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.CreateFlowClasssesIfNeeded
struct AFCv2_FieldCommandManager_C_CreateFlowClasssesIfNeeded_Params
{
public:
	TArray<enum class EMJFieldCommandType>       FcTypes;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetFlowType
struct AFCv2_FieldCommandManager_C_GetFlowType_Params
{
public:
	enum class EFCv2_FieldCommandManagerFlowType ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.SetFlowType
struct AFCv2_FieldCommandManager_C_SetFlowType_Params
{
public:
	enum class EFCv2_FieldCommandManagerFlowType NewValue;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.SetStartParam
struct AFCv2_FieldCommandManager_C_SetStartParam_Params
{
public:
	class AKSCharacterBase*                      TargetChara;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMJFieldCommandType               Type;                                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.SetIsIgnoreFollowProcessFromEventCommand
struct AFCv2_FieldCommandManager_C_SetIsIgnoreFollowProcessFromEventCommand_Params
{
public:
	bool                                         Val;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x108 (0x108 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GrabStateSnapshot_Internal
struct AFCv2_FieldCommandManager_C_GrabStateSnapshot_Internal_Params
{
public:
	TMap<class FString, class FString>           ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm)
};

// 0x9 (0x9 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetPlayingCommand
struct AFCv2_FieldCommandManager_C_GetPlayingCommand_Params
{
public:
	class AFieldCommandFlowBase*                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x188 (0x188 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetState
struct AFCv2_FieldCommandManager_C_GetState_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0x149 (0x149 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.CanExecMainSequence
struct AFCv2_FieldCommandManager_C_CanExecMainSequence_Params
{
public:
	bool                                         Yes;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetFieldCommandPreviewWidget
struct AFCv2_FieldCommandManager_C_GetFieldCommandPreviewWidget_Params
{
public:
	class UWBP_FieldCommandPreviewWidget_C*      Return;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3D (0x3D - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.FinishFieldCommand
struct AFCv2_FieldCommandManager_C_FinishFieldCommand_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.IsEndFieldCommandAction
struct AFCv2_FieldCommandManager_C_IsEndFieldCommandAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.IsPlaying
struct AFCv2_FieldCommandManager_C_IsPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x23 (0x23 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.IsPlayingFieldCommandAction
struct AFCv2_FieldCommandManager_C_IsPlayingFieldCommandAction_Params
{
public:
	bool                                         IsPlaying;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x66 (0x66 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.PlayFieldCommandActions
struct AFCv2_FieldCommandManager_C_PlayFieldCommandActions_Params
{
public:
	bool                                         IsPlayed;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_129E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxWaitTime;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetActiveFcFlows
struct AFCv2_FieldCommandManager_C_GetActiveFcFlows_Params
{
public:
	TArray<class ABP_FCv2_FieldCommandFlowBase_C*> Flows;                                             // 0x0(0x10)(Parm, OutParm)
};

// 0x20 (0x20 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetActiveFcTypes
struct AFCv2_FieldCommandManager_C_GetActiveFcTypes_Params
{
public:
	TArray<enum class EMJFieldCommandType>       FcTypes;                                           // 0x0(0x10)(Parm, OutParm)
};

// 0x229 (0x229 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.SetupActiveFlows
struct AFCv2_FieldCommandManager_C_SetupActiveFlows_Params
{
public:
	TArray<class AKSCharacterBase*>              Party;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetPostSequence
struct AFCv2_FieldCommandManager_C_GetPostSequence_Params
{
public:
	enum class EFCV2_FieldCommandManagerPostSequence PostSequence;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.SetPostSequence
struct AFCv2_FieldCommandManager_C_SetPostSequence_Params
{
public:
	enum class EFCV2_FieldCommandManagerPostSequence PostSequence;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetMainSequence
struct AFCv2_FieldCommandManager_C_GetMainSequence_Params
{
public:
	enum class EFCV2_FieldCommandManagerMainSequence MainSequence;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.SetMainSequence
struct AFCv2_FieldCommandManager_C_SetMainSequence_Params
{
public:
	enum class EFCV2_FieldCommandManagerMainSequence MainSequence;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetPreSequence
struct AFCv2_FieldCommandManager_C_GetPreSequence_Params
{
public:
	enum class EFCV2_FieldCommandManagerPreSequence PreSequence;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.SetPreSequence
struct AFCv2_FieldCommandManager_C_SetPreSequence_Params
{
public:
	enum class EFCV2_FieldCommandManagerPreSequence PreSequence;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2E7 (0x2E7 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.UpdatePostSequence
struct AFCv2_FieldCommandManager_C_UpdatePostSequence_Params
{
public:
	enum class ESequenceResult                   Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.UpdateMainSequence
struct AFCv2_FieldCommandManager_C_UpdateMainSequence_Params
{
public:
	enum class ESequenceResult                   Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x99 (0x99 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.UpdatePreSequence
struct AFCv2_FieldCommandManager_C_UpdatePreSequence_Params
{
public:
	enum class ESequenceResult                   Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.GetRootSequence
struct AFCv2_FieldCommandManager_C_GetRootSequence_Params
{
public:
	enum class EFCv2_FieldCommandManagerRootSequence RootSequence;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.SetRootSequence
struct AFCv2_FieldCommandManager_C_SetRootSequence_Params
{
public:
	enum class EFCv2_FieldCommandManagerRootSequence RootSequence;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.UpdateManager
struct AFCv2_FieldCommandManager_C_UpdateManager_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.UpdateRootSequence
struct AFCv2_FieldCommandManager_C_UpdateRootSequence_Params
{
public:
	enum class ESequenceResult                   Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x207 (0x207 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.StartFieldCommand
struct AFCv2_FieldCommandManager_C_StartFieldCommand_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.SetupCommand
struct AFCv2_FieldCommandManager_C_SetupCommand_Params
{
public:
	TArray<enum class EMJFieldCommandType>       FieldCommand;                                      // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x32 (0x32 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.OnEnterGameOver
struct AFCv2_FieldCommandManager_C_OnEnterGameOver_Params
{
public:
	enum class ENOTICE_TYPE                      NoticeType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNoticeArgs                           Args;                                              // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x28 (0x28 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.OnStartFieldMainSequence
struct AFCv2_FieldCommandManager_C_OnStartFieldMainSequence_Params
{
public:
	enum class ENOTICE_TYPE                      NoticeType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNoticeArgs                           Args;                                              // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xB8 (0xB8 - 0x0)
// Function FCv2_FieldCommandManager.FCv2_FieldCommandManager_C.ExecuteUbergraph_FCv2_FieldCommandManager
struct AFCv2_FieldCommandManager_C_ExecuteUbergraph_FCv2_FieldCommandManager_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


