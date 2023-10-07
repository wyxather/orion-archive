#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x122 (0x122 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.RefreshEmotionOnRelease
struct ABP_FCv2_FieldCommandFlowBase_C_RefreshEmotionOnRelease_Params
{
public:
	int32                                        ReleaseNpcId;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetWasNpcReleased
struct ABP_FCv2_FieldCommandFlowBase_C_GetWasNpcReleased_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.ReleaseFollowingNpc
struct ABP_FCv2_FieldCommandFlowBase_C_ReleaseFollowingNpc_Params
{
public:
	bool                                         WithoutRefresh;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsReserveEvent
struct ABP_FCv2_FieldCommandFlowBase_C_IsReserveEvent_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x16 (0x16 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.PlayReservedEventIfNeeded
struct ABP_FCv2_FieldCommandFlowBase_C_PlayReservedEventIfNeeded_Params
{
public:
	bool                                         IsPlayed;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.ReserveEventIfNeeded
struct ABP_FCv2_FieldCommandFlowBase_C_ReserveEventIfNeeded_Params
{
public:
	enum class ENPCEVENT_TYPE                    EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsReserved;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.SetTargetPlayer
struct ABP_FCv2_FieldCommandFlowBase_C_SetTargetPlayer_Params
{
public:
	class AKSCharacterBase*                      TargetPlayer;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16 (0x16 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.ReleaseFollowWaitingNpcIfNeeded
struct ABP_FCv2_FieldCommandFlowBase_C_ReleaseFollowWaitingNpcIfNeeded_Params
{
public:
	int32                                        ReleasedNpcId;                                     // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.RestoreFollowWaitingNpcIfNeededByPlayerId
struct ABP_FCv2_FieldCommandFlowBase_C_RestoreFollowWaitingNpcIfNeededByPlayerId_Params
{
public:
	enum class EPlayableCharacterID              CharaID;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRestored;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x710 (0x710 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetFollowWaitingNpcLabel
struct ABP_FCv2_FieldCommandFlowBase_C_GetFollowWaitingNpcLabel_Params
{
public:
	class FName                                  NPCLabel;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.RestoreFollowWaitingNpcIfNeeded
struct ABP_FCv2_FieldCommandFlowBase_C_RestoreFollowWaitingNpcIfNeeded_Params
{
public:
	bool                                         IsRestored;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC0 (0xC0 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetFollowWaitingNpcName
struct ABP_FCv2_FieldCommandFlowBase_C_GetFollowWaitingNpcName_Params
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Parm, OutParm)
};

// 0x38 (0x38 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetNPCName
struct ABP_FCv2_FieldCommandFlowBase_C_GetNPCName_Params
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Parm, OutParm)
};

// 0x50 (0x50 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetFollowingNpcName
struct ABP_FCv2_FieldCommandFlowBase_C_GetFollowingNpcName_Params
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Parm, OutParm)
};

// 0x38 (0x38 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetFollowingNpcLabel
struct ABP_FCv2_FieldCommandFlowBase_C_GetFollowingNpcLabel_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetFollowWaitingNpcId
struct ABP_FCv2_FieldCommandFlowBase_C_GetFollowWaitingNpcId_Params
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsStoryFollowNpc
struct ABP_FCv2_FieldCommandFlowBase_C_IsStoryFollowNpc_Params
{
public:
	bool                                         Story_Npc;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.SwoonNpc_Internal
struct ABP_FCv2_FieldCommandFlowBase_C_SwoonNpc_Internal_Params
{
public:
	class AKSCharacterBase*                      TargetNpc;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENpcSwoonType                     SwoonType;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetIsSwoonedNpc
struct ABP_FCv2_FieldCommandFlowBase_C_GetIsSwoonedNpc_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetIsPlayedEvent
struct ABP_FCv2_FieldCommandFlowBase_C_GetIsPlayedEvent_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.SetTargetPlayerHP
struct ABP_FCv2_FieldCommandFlowBase_C_SetTargetPlayerHP_Params
{
public:
	int32                                        HP;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetIsAlreadyCompleted
struct ABP_FCv2_FieldCommandFlowBase_C_GetIsAlreadyCompleted_Params
{
public:
	bool                                         IsAlreadyCompleted;                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x158 (0x158 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetFooterText
struct ABP_FCv2_FieldCommandFlowBase_C_GetFooterText_Params
{
public:
	class FName                                  TextLabel;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x158 (0x158 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetHeaderText
struct ABP_FCv2_FieldCommandFlowBase_C_GetHeaderText_Params
{
public:
	class FName                                  TextLabel;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x158 (0x158 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetHelpText
struct ABP_FCv2_FieldCommandFlowBase_C_GetHelpText_Params
{
public:
	class FName                                  TextLabel;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2AA (0x2AA - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetFieldCommandData
struct ABP_FCv2_FieldCommandFlowBase_C_GetFieldCommandData_Params
{
public:
	struct FFieldCommandData                     Data;                                              // 0x0(0x150)(Parm, OutParm)
};

// 0xB (0xB - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsImpossibleSucceed
struct ABP_FCv2_FieldCommandFlowBase_C_IsImpossibleSucceed_Params
{
public:
	class AKSCharacterBase*                      TargetNpc;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x725 (0x725 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsAvailable
struct ABP_FCv2_FieldCommandFlowBase_C_IsAvailable_Params
{
public:
	class UNpcPropertyComponent*                 TargetNpc;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x59 (0x59 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetPlayableEventLabelByGotItems
struct ABP_FCv2_FieldCommandFlowBase_C_GetPlayableEventLabelByGotItems_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EventName;                                         // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.AddGotItem
struct ABP_FCv2_FieldCommandFlowBase_C_AddGotItem_Params
{
public:
	class FName                                  NewItem;                                           // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.SetIsIgnoreFollowProcessFromEventCommand
struct ABP_FCv2_FieldCommandFlowBase_C_SetIsIgnoreFollowProcessFromEventCommand_Params
{
public:
	bool                                         IsIgnoreFollowProcessFromEventCommand;             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12A (0x12A - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.SetIsIgnoreSwoonProcessFromEventCommand
struct ABP_FCv2_FieldCommandFlowBase_C_SetIsIgnoreSwoonProcessFromEventCommand_Params
{
public:
	bool                                         IsIgnoreSwoonProcessFromEventCommand;              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.WillPlayEvent
struct ABP_FCv2_FieldCommandFlowBase_C_WillPlayEvent_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsExecutableFromPanel
struct ABP_FCv2_FieldCommandFlowBase_C_IsExecutableFromPanel_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsCompleted
struct ABP_FCv2_FieldCommandFlowBase_C_IsCompleted_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.HasRequiredMoney
struct ABP_FCv2_FieldCommandFlowBase_C_HasRequiredMoney_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetFollowingNpcSupportLimit
struct ABP_FCv2_FieldCommandFlowBase_C_GetFollowingNpcSupportLimit_Params
{
public:
	int32                                        Limit;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsFollowingNpc
struct ABP_FCv2_FieldCommandFlowBase_C_IsFollowingNpc_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetFollowingNpcId
struct ABP_FCv2_FieldCommandFlowBase_C_GetFollowingNpcId_Params
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetFollowingNpc
struct ABP_FCv2_FieldCommandFlowBase_C_GetFollowingNpc_Params
{
public:
	class AKSCharacterBase*                      NPC;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsNeedFollowWaitingProcess
struct ABP_FCv2_FieldCommandFlowBase_C_IsNeedFollowWaitingProcess_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsFollowWaitingNpc
struct ABP_FCv2_FieldCommandFlowBase_C_IsFollowWaitingNpc_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsFollowNpc
struct ABP_FCv2_FieldCommandFlowBase_C_IsFollowNpc_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetIsWaitingToStartEvent
struct ABP_FCv2_FieldCommandFlowBase_C_GetIsWaitingToStartEvent_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetTargetPlayerCharacterID
struct ABP_FCv2_FieldCommandFlowBase_C_GetTargetPlayerCharacterID_Params
{
public:
	enum class EPlayableCharacterID              Player;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetTargetPlayer
struct ABP_FCv2_FieldCommandFlowBase_C_GetTargetPlayer_Params
{
public:
	class AKSCharacterBase*                      TargetPlayer;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetTargetNpc
struct ABP_FCv2_FieldCommandFlowBase_C_GetTargetNpc_Params
{
public:
	class AKSCharacterBase*                      TargetNpc;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.HasRequiredItem
struct ABP_FCv2_FieldCommandFlowBase_C_HasRequiredItem_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsGreaterEqualRequiredLevel
struct ABP_FCv2_FieldCommandFlowBase_C_IsGreaterEqualRequiredLevel_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x220 (0x220 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.AddNpcTalkBalloon
struct ABP_FCv2_FieldCommandFlowBase_C_AddNpcTalkBalloon_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Target;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsRunningFieldCommandWidget
struct ABP_FCv2_FieldCommandFlowBase_C_IsRunningFieldCommandWidget_Params
{
public:
	bool                                         IsRunning;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.BeginEventCallback
struct ABP_FCv2_FieldCommandFlowBase_C_BeginEventCallback_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.SetNextEventLabel
struct ABP_FCv2_FieldCommandFlowBase_C_SetNextEventLabel_Params
{
public:
	class FName                                  NextEventLabel;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.UpdateFlow
struct ABP_FCv2_FieldCommandFlowBase_C_UpdateFlow_Params
{
public:
	bool                                         IsInterruptPlay;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESequenceResult                   Result;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.PlayFieldCommandAction
struct ABP_FCv2_FieldCommandFlowBase_C_PlayFieldCommandAction_Params
{
public:
	bool                                         IsPlaySe;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetNpcSerifLabel
struct ABP_FCv2_FieldCommandFlowBase_C_GetNpcSerifLabel_Params
{
public:
	class FName                                  SerifLabel;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFC_NpcSerifType                  SerifType;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  OutputSerifLabel;                                  // 0xC(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.SwapTargetNPC
struct ABP_FCv2_FieldCommandFlowBase_C_SwapTargetNPC_Params
{
public:
	class AKSCharacterBase*                      TargetNpc;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B (0x1B - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsOpeningBalloon
struct ABP_FCv2_FieldCommandFlowBase_C_IsOpeningBalloon_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsIgnoreFollowProcess
struct ABP_FCv2_FieldCommandFlowBase_C_IsIgnoreFollowProcess_Params
{
public:
	bool                                         Ignore_Follow_Process;                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.IsFulfilledExecCondition
struct ABP_FCv2_FieldCommandFlowBase_C_IsFulfilledExecCondition_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetNpcUniqueID
struct ABP_FCv2_FieldCommandFlowBase_C_GetNpcUniqueID_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.PlayPlayerTalkEventCallback
struct ABP_FCv2_FieldCommandFlowBase_C_PlayPlayerTalkEventCallback_Params
{
public:
	enum class EREQUEST_RESULT                   Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.RequestPlayerTalkEvent
struct ABP_FCv2_FieldCommandFlowBase_C_RequestPlayerTalkEvent_Params
{
public:
	class FName                                  EventLabel;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF9 (0xF9 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.DrawEventLabel
struct ABP_FCv2_FieldCommandFlowBase_C_DrawEventLabel_Params
{
public:
	TMap<class FName, float>                     LabelAndWightSet;                                  // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                  WinningLabel;                                      // 0x50(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x109 (0x109 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetNPCData
struct ABP_FCv2_FieldCommandFlowBase_C_GetNPCData_Params
{
public:
	struct FNPCData                              NPCData;                                           // 0x0(0x80)(Parm, OutParm)
};

// 0x8 (0x8 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetNpcLabel
struct ABP_FCv2_FieldCommandFlowBase_C_GetNpcLabel_Params
{
public:
	class FName                                  NPCLabel;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetNPCHearData
struct ABP_FCv2_FieldCommandFlowBase_C_GetNPCHearData_Params
{
public:
	struct FNPCHearDataBase                      HearData;                                          // 0x0(0xA8)(Parm, OutParm)
};

// 0x50 (0x50 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetNPCPurchaseData
struct ABP_FCv2_FieldCommandFlowBase_C_GetNPCPurchaseData_Params
{
public:
	struct FNPCPurchaseDataBase                  PurchaseData;                                      // 0x0(0x50)(Parm, OutParm)
};

// 0x10 (0x10 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetPlayerProperty
struct ABP_FCv2_FieldCommandFlowBase_C_GetPlayerProperty_Params
{
public:
	class UPlayerPropertyComponent*              PlayerProp;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetNpcProperty
struct ABP_FCv2_FieldCommandFlowBase_C_GetNpcProperty_Params
{
public:
	class UNpcPropertyComponent*                 NpcProp;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetNPCBattleData
struct ABP_FCv2_FieldCommandFlowBase_C_GetNPCBattleData_Params
{
public:
	struct FNPCBattleData                        BattleData;                                        // 0x0(0xE8)(Parm, OutParm)
};

// 0xB0 (0xB0 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.GetNPCLeadData
struct ABP_FCv2_FieldCommandFlowBase_C_GetNPCLeadData_Params
{
public:
	struct FNPCLeadDataBase                      LeadData;                                          // 0x0(0xB0)(Parm, OutParm)
};

// 0x2E0 (0x2E0 - 0x0)
// Function BP_FCv2_FieldCommandFlowBase.BP_FCv2_FieldCommandFlowBase_C.SetupFlow
struct ABP_FCv2_FieldCommandFlowBase_C_SetupFlow_Params
{
public:
	class AKSCharacterBase*                      TargetNpc;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSCharacterBase*                      TargetPlayer;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


