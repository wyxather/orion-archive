#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_NonPlayerCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCEngageRange
struct ABPChar_NonPlayerCharacter_C_NPCEngageRange_Params
{
	float                                              UnitIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.OnRep_ItemPoolInfo
struct ABPChar_NonPlayerCharacter_C_OnRep_ItemPoolInfo_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCIgnoreEnemies
struct ABPChar_NonPlayerCharacter_C_NPCIgnoreEnemies_Params
{
	bool                                               BoolValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCUseSmartObjects
struct ABPChar_NonPlayerCharacter_C_NPCUseSmartObjects_Params
{
	bool                                               UseSmartObjects;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCCanPatrol
struct ABPChar_NonPlayerCharacter_C_NPCCanPatrol_Params
{
	bool                                               CanPatrol;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCEngagePlayerWhenIdle
struct ABPChar_NonPlayerCharacter_C_NPCEngagePlayerWhenIdle_Params
{
	bool                                               LookAtPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCEngageInCombat
struct ABPChar_NonPlayerCharacter_C_NPCEngageInCombat_Params
{
	bool                                               EngageInCombat;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ChangeBehaviorTree_LookAt
struct ABPChar_NonPlayerCharacter_C_ChangeBehaviorTree_LookAt_Params
{
	class AAIController*                               NPC_AIController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.PlayerUsedMe
struct ABPChar_NonPlayerCharacter_C_PlayerUsedMe_Params
{
	struct FUseEvent                                   UseEvent;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ClearText
struct ABPChar_NonPlayerCharacter_C_ClearText_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.SetText
struct ABPChar_NonPlayerCharacter_C_SetText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              TextSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               FacePlayer;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.UserConstructionScript
struct ABPChar_NonPlayerCharacter_C_UserConstructionScript_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.GbxAsyncRequest_PickupSpawned_57F45FEF4D675ABCF62E0A81821A5187
struct ABPChar_NonPlayerCharacter_C_GbxAsyncRequest_PickupSpawned_57F45FEF4D675ABCF62E0A81821A5187_Params
{
	class ADroppedInventoryItemPickup*                 Pickup;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCUnhideSword
struct ABPChar_NonPlayerCharacter_C_NPCUnhideSword_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCHideSword
struct ABPChar_NonPlayerCharacter_C_NPCHideSword_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCConstrainUsable
struct ABPChar_NonPlayerCharacter_C_NPCConstrainUsable_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCResetUsable
struct ABPChar_NonPlayerCharacter_C_NPCResetUsable_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ForceDefaultCombatNPCDownstate
struct ABPChar_NonPlayerCharacter_C_ForceDefaultCombatNPCDownstate_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ForceNPCRevive
struct ABPChar_NonPlayerCharacter_C_ForceNPCRevive_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.HoldHandOutToTakeSomething
struct ABPChar_NonPlayerCharacter_C_HoldHandOutToTakeSomething_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.GiveSomethingToThePlayer
struct ABPChar_NonPlayerCharacter_C_GiveSomethingToThePlayer_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.BeingUsed
struct ABPChar_NonPlayerCharacter_C_BeingUsed_Params
{
	struct FUseEvent                                   UseEvent;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.LootableTaken
struct ABPChar_NonPlayerCharacter_C_LootableTaken_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.HoldHandTakeAll
struct ABPChar_NonPlayerCharacter_C_HoldHandTakeAll_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.HoldHandGiveAll
struct ABPChar_NonPlayerCharacter_C_HoldHandGiveAll_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.TakingThingAll
struct ABPChar_NonPlayerCharacter_C_TakingThingAll_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.PlayerTakingAll
struct ABPChar_NonPlayerCharacter_C_PlayerTakingAll_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.LockNPCAI
struct ABPChar_NonPlayerCharacter_C_LockNPCAI_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.UnlockNPCAI
struct ABPChar_NonPlayerCharacter_C_UnlockNPCAI_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.TakeThingThenGiveBack
struct ABPChar_NonPlayerCharacter_C_TakeThingThenGiveBack_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ExamineAll
struct ABPChar_NonPlayerCharacter_C_ExamineAll_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.EngageInCombat
struct ABPChar_NonPlayerCharacter_C_EngageInCombat_Params
{
	bool                                               EngageInCombat;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.CanPatrol
struct ABPChar_NonPlayerCharacter_C_CanPatrol_Params
{
	bool                                               CanPatrol;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.UseSmartObjects
struct ABPChar_NonPlayerCharacter_C_UseSmartObjects_Params
{
	bool                                               UseSmartObjects;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ThingToHold
struct ABPChar_NonPlayerCharacter_C_ThingToHold_Params
{
	class UStaticMesh*                                 TheThingToHold;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemPoolInfo                               ThePickupToHold;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTransform                                  OffsetTransform;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              PutAwayOffset;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TakeOutOffset;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseAltAnimation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCHideWeapon
struct ABPChar_NonPlayerCharacter_C_NPCHideWeapon_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCUnhideWeapon
struct ABPChar_NonPlayerCharacter_C_NPCUnhideWeapon_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.IgnoreEnemies
struct ABPChar_NonPlayerCharacter_C_IgnoreEnemies_Params
{
	bool                                               IgnoreEnemies;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCCanReviveOthers
struct ABPChar_NonPlayerCharacter_C_NPCCanReviveOthers_Params
{
	bool                                               CanReviveOthers;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.BndEvt__Stance_K2Node_ComponentBoundEvent_0_StanceChangedEvent__DelegateSignature_BPChar_NonPlayerCharacter
struct ABPChar_NonPlayerCharacter_C_BndEvt__Stance_K2Node_ComponentBoundEvent_0_StanceChangedEvent__DelegateSignature_BPChar_NonPlayerCharacter_Params
{
	struct FStanceChangedEventArgs                     Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.EngagePlayerWhenIdle
struct ABPChar_NonPlayerCharacter_C_EngagePlayerWhenIdle_Params
{
	bool                                               LookAtPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.SetNPCEngagePlayerRange
struct ABPChar_NonPlayerCharacter_C_SetNPCEngagePlayerRange_Params
{
	float                                              Units;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700
struct ABPChar_NonPlayerCharacter_C_BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         UsedComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.DisableMissionBrain
struct ABPChar_NonPlayerCharacter_C_DisableMissionBrain_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableUsedSignature__DelegateSignature_BPChar_NonPlayerCharacter
struct ABPChar_NonPlayerCharacter_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableUsedSignature__DelegateSignature_BPChar_NonPlayerCharacter_Params
{
	struct FUseEvent                                   UseEvent;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.InitializeGenericDialog
struct ABPChar_NonPlayerCharacter_C_InitializeGenericDialog_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.OpenGate
struct ABPChar_NonPlayerCharacter_C_OpenGate_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.TextClear
struct ABPChar_NonPlayerCharacter_C_TextClear_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.CloseGate
struct ABPChar_NonPlayerCharacter_C_CloseGate_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.TempMissionTextTck
struct ABPChar_NonPlayerCharacter_C_TempMissionTextTck_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.SetMissionDebugText
struct ABPChar_NonPlayerCharacter_C_SetMissionDebugText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              TextSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               FacePlayer;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.TextUpdating
struct ABPChar_NonPlayerCharacter_C_TextUpdating_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.SawThePlayer
struct ABPChar_NonPlayerCharacter_C_SawThePlayer_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.DespawnActivate
struct ABPChar_NonPlayerCharacter_C_DespawnActivate_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ReceiveBeginPlay
struct ABPChar_NonPlayerCharacter_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ExecuteUbergraph_BPChar_NonPlayerCharacter
struct ABPChar_NonPlayerCharacter_C_ExecuteUbergraph_BPChar_NonPlayerCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.SpawnedLootToGive__DelegateSignature
struct ABPChar_NonPlayerCharacter_C_SpawnedLootToGive__DelegateSignature_Params
{
	class ADroppedInventoryItemPickup*                 Loot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.ItemTakenByPlayer__DelegateSignature
struct ABPChar_NonPlayerCharacter_C_ItemTakenByPlayer__DelegateSignature_Params
{
	class AOakCharacter_Player*                        Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.NPCSawThePlayer__DelegateSignature
struct ABPChar_NonPlayerCharacter_C_NPCSawThePlayer__DelegateSignature_Params
{
};

// Function BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C.OnUsed__DelegateSignature
struct ABPChar_NonPlayerCharacter_C_OnUsed__DelegateSignature_Params
{
	struct FUseEvent                                   UseEvent;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
