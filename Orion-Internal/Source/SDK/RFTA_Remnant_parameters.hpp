#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Remnant_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Remnant.ActionBuff.ResetTimer
struct UActionBuff_ResetTimer_Params
{
};

// Function Remnant.ActionBuff.PauseDuration
struct UActionBuff_PauseDuration_Params
{
	bool*                                              Paused;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ActionBuff.IsDurationPaused
struct UActionBuff_IsDurationPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ActionBuff.GetRemainingTime
struct UActionBuff_GetRemainingTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ActionBuff.GetElapsedTimePct
struct UActionBuff_GetElapsedTimePct_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ActionBuff.GetDesiredVisual
struct UActionBuff_GetDesiredVisual_Params
{
	struct FName                                       Slot;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ActionBuff.ApplyTimerDelta
struct UActionBuff_ApplyTimerDelta_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Checkpoint.OnFinishActivation
struct ACheckpoint_OnFinishActivation_Params
{
};

// Function Remnant.Checkpoint.OnEndGrab
struct ACheckpoint_OnEndGrab_Params
{
	class ARemnantCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Checkpoint.OnBeginGrab
struct ACheckpoint_OnBeginGrab_Params
{
	class ARemnantCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Checkpoint.OnBeginActivation
struct ACheckpoint_OnBeginActivation_Params
{
};

// Function Remnant.Checkpoint.OnActivate
struct ACheckpoint_OnActivate_Params
{
};

// Function Remnant.Checkpoint.CanCheckpointActivate
struct ACheckpoint_CanCheckpointActivate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.DragonHeart.Regenerate
struct ADragonHeart_Regenerate_Params
{
};

// Function Remnant.DragonHeart.GetMaxCurrentQuantity
struct ADragonHeart_GetMaxCurrentQuantity_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Emote.GetIcon
struct UEmote_GetIcon_Params
{
	class UEmotesComponent**                           Emotes;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName*                                      Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.EmotesComponent.UnlockEmote
struct UEmotesComponent_UnlockEmote_Params
{
	class UClass**                                     NewEmote;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.EmotesComponent.SlotEmote
struct UEmotesComponent_SlotEmote_Params
{
	int*                                               Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass**                                     Emote;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.EmotesComponent.ServerUpdateSlots
struct UEmotesComponent_ServerUpdateSlots_Params
{
	TArray<class UClass*>*                             NewSlots;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function Remnant.EmotesComponent.ServerUnlockEmote
struct UEmotesComponent_ServerUnlockEmote_Params
{
	class UClass**                                     Emote;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.EmotesComponent.RequestEmoteIcon
struct UEmotesComponent_RequestEmoteIcon_Params
{
	class UClass**                                     Emote;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName*                                      Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.EmotesComponent.OnLoadIcon
struct UEmotesComponent_OnLoadIcon_Params
{
	class UClass**                                     Emote;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.EmotesComponent.HasEmote
struct UEmotesComponent_HasEmote_Params
{
	class UClass**                                     Emote;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.EmotesComponent.GetUnlockedEmotes
struct UEmotesComponent_GetUnlockedEmotes_Params
{
	TArray<class UClass*>*                             IgnoreList;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UEmote*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Remnant.EmotesComponent.GetEmoteForSlot
struct UEmotesComponent_GetEmoteForSlot_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEmote*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.EmotesComponent.ClearEmoteIcon
struct UEmotesComponent_ClearEmoteIcon_Params
{
	class UClass**                                     Emote;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName*                                      Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.EmotesComponent.ClearAllEmoteIcons
struct UEmotesComponent_ClearAllEmoteIcons_Params
{
	struct FName*                                      Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.EventRegion.PlayerExit
struct AEventRegion_PlayerExit_Params
{
	class ARemnantCharacter**                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.EventRegion.PlayerEnter
struct AEventRegion_PlayerEnter_Params
{
	class ARemnantCharacter**                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.EventRegion.OnRep_Players
struct AEventRegion_OnRep_Players_Params
{
};

// Function Remnant.EventRegion.OnRep_Active
struct AEventRegion_OnRep_Active_Params
{
};

// Function Remnant.EventRegion.OnDead
struct AEventRegion_OnDead_Params
{
	unsigned char*                                     Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACharacterGunfire**                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor**                                     Cause;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.EventRegion.LockEvent
struct AEventRegion_LockEvent_Params
{
};

// Function Remnant.EventRegion.IsPlayerInRegion
struct AEventRegion_IsPlayerInRegion_Params
{
	class APlayerController**                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.EventRegion.IsLocked
struct AEventRegion_IsLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.EventRegion.IsLocalPlayerInRegion
struct AEventRegion_IsLocalPlayerInRegion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.EventRegion.IsComplete
struct AEventRegion_IsComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.EventRegion.IsCharacterInRegion
struct AEventRegion_IsCharacterInRegion_Params
{
	class ARemnantCharacter**                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.EventRegion.IsActive
struct AEventRegion_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.EventRegion.HasLocalPlayerVisited
struct AEventRegion_HasLocalPlayerVisited_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.EventRegion.GetFirstCharacter
struct AEventRegion_GetFirstCharacter_Params
{
	class ARemnantCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.EventRegion.GetEventRegionForActor
struct AEventRegion_GetEventRegionForActor_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName*                                      EventRegionNameID;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AEventRegion*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.EventRegion.GetEventRegionContainingActor
struct AEventRegion_GetEventRegionContainingActor_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AEventRegion*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.EventRegion.GetCharacters
struct AEventRegion_GetCharacters_Params
{
	TArray<struct FEventRegionCharacter>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Remnant.EventRegion.End
struct AEventRegion_End_Params
{
};

// Function Remnant.EventRegion.CompleteEvent
struct AEventRegion_CompleteEvent_Params
{
};

// Function Remnant.EventRegion.Begin
struct AEventRegion_Begin_Params
{
};

// Function Remnant.Flashlight.ServerToggleFlashlight
struct AFlashlight_ServerToggleFlashlight_Params
{
};

// Function Remnant.Flashlight.OnTurnedOn
struct AFlashlight_OnTurnedOn_Params
{
};

// Function Remnant.Flashlight.OnTurnedOff
struct AFlashlight_OnTurnedOff_Params
{
};

// Function Remnant.Flashlight.OnEndFlash
struct AFlashlight_OnEndFlash_Params
{
};

// Function Remnant.Flashlight.OnBeginFlash
struct AFlashlight_OnBeginFlash_Params
{
};

// Function Remnant.Flashlight.LightEndOverlap
struct AFlashlight_LightEndOverlap_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Flashlight.LightBeginOverlap
struct AFlashlight_LightBeginOverlap_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Flashlight.ApplyChargeDelta
struct AFlashlight_ApplyChargeDelta_Params
{
	float*                                             Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.GenericItem.ValidatePickupHandled
struct AGenericItem_ValidatePickupHandled_Params
{
	struct FSpawnList*                                 SpawnList;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UInventoryComponent**                        Inventory;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.GenericItem.ValidateAddToInventory
struct AGenericItem_ValidateAddToInventory_Params
{
	struct FSpawnList*                                 SpawnList;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UInventoryComponent**                        Inventory;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.GenericItem.OnRep_CachedSpawnList
struct AGenericItem_OnRep_CachedSpawnList_Params
{
};

// Function Remnant.GenericItem.OnFinishedItemInit
struct AGenericItem_OnFinishedItemInit_Params
{
	struct FSpawnList*                                 DisplayEntry;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Remnant.GenericItem.HasMaxSpawnsForCharacter
struct AGenericItem_HasMaxSpawnsForCharacter_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.GenericItem.HandleAward
struct AGenericItem_HandleAward_Params
{
	struct FSpawnList*                                 SpawnList;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UInventoryComponent**                        Inventory;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bForceNoSharing;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.SpawnedGrenade.OnStoppedMoving
struct ASpawnedGrenade_OnStoppedMoving_Params
{
};

// Function Remnant.SpawnedGrenade.OnRep_GrenadeRepData
struct ASpawnedGrenade_OnRep_GrenadeRepData_Params
{
};

// Function Remnant.SpawnedGrenade.OnDetonated
struct ASpawnedGrenade_OnDetonated_Params
{
};

// Function Remnant.SpawnedGrenade.GetGrenadeLifeSpan
struct ASpawnedGrenade_GetGrenadeLifeSpan_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.SpawnedGrenade.GetGrenadeItemCDO
struct ASpawnedGrenade_GetGrenadeItemCDO_Params
{
	class AGrenade*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.SpawnedGrenade.Detonate
struct ASpawnedGrenade_Detonate_Params
{
};

// Function Remnant.Grenade.ValidateUse
struct AGrenade_ValidateUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Grenade.Throw
struct AGrenade_Throw_Params
{
};

// Function Remnant.Grenade.ServerThrowPressed
struct AGrenade_ServerThrowPressed_Params
{
	struct FVector_NetQuantize*                        TargetLocation;                                           // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Remnant.Grenade.ServerKeyPressed
struct AGrenade_ServerKeyPressed_Params
{
	struct FVector_NetQuantize*                        TargetLocation;                                           // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Remnant.Grenade.OnRep_State
struct AGrenade_OnRep_State_Params
{
	EGrenadeState*                                     PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Grenade.MulticastThrown
struct AGrenade_MulticastThrown_Params
{
};

// Function Remnant.Grenade.MulticastPlayThrowAnim
struct AGrenade_MulticastPlayThrowAnim_Params
{
};

// Function Remnant.Grenade.MulticastPlayEquipAnim
struct AGrenade_MulticastPlayEquipAnim_Params
{
};

// Function Remnant.Grenade.GetTotalGrenadeLifeSpan
struct AGrenade_GetTotalGrenadeLifeSpan_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Grenade.GetRemainingGrenadeLifeSpan
struct AGrenade_GetRemainingGrenadeLifeSpan_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Grenade.GetRange
struct AGrenade_GetRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Grenade.GetDetonatesWhenStoppedMoving
struct AGrenade_GetDetonatesWhenStoppedMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Grenade.GetDamageRadius
struct AGrenade_GetDamageRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Grenade.GetDamage
struct AGrenade_GetDamage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Grenade.CalculateGrenadePath
struct AGrenade_CalculateGrenadePath_Params
{
	class AActor**                                     Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor**                                     Thrower;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGrenade**                                   GrenadeItem;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector*                                    StartLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector*                                    StartVelocity;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float*                                             SimulationTime;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPredictProjectilePathPointData>     OutPath;                                                  // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                OutNumBounces;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.LootContainer.OnSpawnListLoaded
struct ALootContainer_OnSpawnListLoaded_Params
{
};

// Function Remnant.LootContainer.Generate
struct ALootContainer_Generate_Params
{
	class USpawnTable**                                SpawnTable;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>*                              SpawnTags;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Remnant.LootContainer.ClearItems
struct ALootContainer_ClearItems_Params
{
};

// Function Remnant.LoreItem.LoreNotify
struct ALoreItem_LoreNotify_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLorePage*                                  Page;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.UpdateSession
struct UMatchmaker_UpdateSession_Params
{
};

// Function Remnant.Matchmaker.UpdateJoinability
struct UMatchmaker_UpdateJoinability_Params
{
	bool*                                              isJoinable;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.StartSession
struct UMatchmaker_StartSession_Params
{
};

// Function Remnant.Matchmaker.ShowSessionGamertagInfo
struct UMatchmaker_ShowSessionGamertagInfo_Params
{
	struct FBlueprintSessionResult*                    SessionInfo;                                              // (Parm, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.SetSessionJoinability
struct UMatchmaker_SetSessionJoinability_Params
{
	bool*                                              isJoinable;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.RejoinLastSession
struct UMatchmaker_RejoinLastSession_Params
{
};

// Function Remnant.Matchmaker.OnShowQueuedMatchmakingEventMessages
struct UMatchmaker_OnShowQueuedMatchmakingEventMessages_Params
{
};

// Function Remnant.Matchmaker.OnSessionEndedEvent
struct UMatchmaker_OnSessionEndedEvent_Params
{
};

// Function Remnant.Matchmaker.OnPlayerNameChanged
struct UMatchmaker_OnPlayerNameChanged_Params
{
};

// Function Remnant.Matchmaker.OnMainMenuLoaded
struct UMatchmaker_OnMainMenuLoaded_Params
{
};

// Function Remnant.Matchmaker.KickPlayer
struct UMatchmaker_KickPlayer_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              Banned;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.JoinSession
struct UMatchmaker_JoinSession_Params
{
	struct FBlueprintSessionResult*                    SearchResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.IsSessionJoinable
struct UMatchmaker_IsSessionJoinable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.IsPresenceJoinURLValid
struct UMatchmaker_IsPresenceJoinURLValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.IsOnline
struct UMatchmaker_IsOnline_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.IsLocalCharacterSurvival
struct UMatchmaker_IsLocalCharacterSurvival_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.IsLocalCharacterHardcore
struct UMatchmaker_IsLocalCharacterHardcore_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.IsJoiningSession
struct UMatchmaker_IsJoiningSession_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.IsFindingSessions
struct UMatchmaker_IsFindingSessions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.InviteFriend
struct UMatchmaker_InviteFriend_Params
{
};

// Function Remnant.Matchmaker.Init
struct UMatchmaker_Init_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.GetSessionStateName
struct UMatchmaker_GetSessionStateName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.GetSessionDetails
struct UMatchmaker_GetSessionDetails_Params
{
	struct FBlueprintSessionResult*                    Session;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSessionDetails                             ReturnValue;                                              // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.GetMatchmakerInstance
struct UMatchmaker_GetMatchmakerInstance_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMatchmaker*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.GetCurrentSessionDisplay
struct UMatchmaker_GetCurrentSessionDisplay_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.EndFindSessions
struct UMatchmaker_EndFindSessions_Params
{
};

// Function Remnant.Matchmaker.DestroySession
struct UMatchmaker_DestroySession_Params
{
};

// Function Remnant.Matchmaker.CreateSession
struct UMatchmaker_CreateSession_Params
{
	ESessionType*                                      SessionType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              DisableJoinability;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.ChangeSession
struct UMatchmaker_ChangeSession_Params
{
	ESessionType*                                      NewSessionType;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.CanRejoinLastSession
struct UMatchmaker_CanRejoinLastSession_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.CanJoinSessionGameMode
struct UMatchmaker_CanJoinSessionGameMode_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult*                    Session;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.CanChangeSessiontype
struct UMatchmaker_CanChangeSessiontype_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.BeginJoinPublicGame
struct UMatchmaker_BeginJoinPublicGame_Params
{
	ELastSearchType*                                   SearchType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.Matchmaker.BeginFindSessions
struct UMatchmaker_BeginFindSessions_Params
{
};

// Function Remnant.MatchmakerListenerInterface.OnSessionStarted
struct UMatchmakerListenerInterface_OnSessionStarted_Params
{
};

// Function Remnant.MatchmakerListenerInterface.OnSessionsFound
struct UMatchmakerListenerInterface_OnSessionsFound_Params
{
	TArray<struct FBlueprintSessionResult>*            Sessions;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Remnant.MatchmakerListenerInterface.OnSessionJoined
struct UMatchmakerListenerInterface_OnSessionJoined_Params
{
};

// Function Remnant.MatchmakerListenerInterface.OnSessionFailed
struct UMatchmakerListenerInterface_OnSessionFailed_Params
{
	struct FName*                                      Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.MatchmakerListenerInterface.OnSessionEnded
struct UMatchmakerListenerInterface_OnSessionEnded_Params
{
};

// Function Remnant.MatchmakerListenerInterface.OnSessionCreated
struct UMatchmakerListenerInterface_OnSessionCreated_Params
{
};

// Function Remnant.PlayerStateRemnant.SetIsLocalPlayerTarget
struct APlayerStateRemnant_SetIsLocalPlayerTarget_Params
{
	bool*                                              IsTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.PlayerStateRemnant.ServerSetChatRestricted
struct APlayerStateRemnant_ServerSetChatRestricted_Params
{
	bool*                                              ChatRestricted;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.PlayerStateRemnant.OnRep_Traveling
struct APlayerStateRemnant_OnRep_Traveling_Params
{
};

// Function Remnant.PlayerStateRemnant.OnRep_ChatRestricted
struct APlayerStateRemnant_OnRep_ChatRestricted_Params
{
};

// Function Remnant.PlayerStateRemnant.IsTraveling
struct APlayerStateRemnant_IsTraveling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.PlayerStateRemnant.IsChatRestricted
struct APlayerStateRemnant_IsChatRestricted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.QuestTrigger.IsLocalPlayerInRegion
struct AQuestTrigger_IsLocalPlayerInRegion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.QuestTrigger.GetTriggerVolume
struct AQuestTrigger_GetTriggerVolume_Params
{
	class ATriggerVolume*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.QuestTrigger.GetCharacters
struct AQuestTrigger_GetCharacters_Params
{
	TArray<class ARemnantCharacter*>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RasterWidgetComponent.GetWidgetTexture
struct URasterWidgetComponent_GetWidgetTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RasterWidgetComponent.ForceRedraw
struct URasterWidgetComponent_ForceRedraw_Params
{
};

// Function Remnant.RasterWidgetComponent.CreateWidgetMaterial
struct URasterWidgetComponent_CreateWidgetMaterial_Params
{
	class UPrimitiveComponent**                        Primitive;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface**                         SourceMaterial;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName*                                      MaterialTextureName;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantRangedWeapon.UseMod
struct ARemnantRangedWeapon_UseMod_Params
{
};

// Function Remnant.RemnantRangedWeapon.UseCharge
struct ARemnantRangedWeapon_UseCharge_Params
{
};

// Function Remnant.RemnantRangedWeapon.UseAllCharges
struct ARemnantRangedWeapon_UseAllCharges_Params
{
};

// Function Remnant.RemnantRangedWeapon.ShouldModCancelUse
struct ARemnantRangedWeapon_ShouldModCancelUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantRangedWeapon.SetModActive
struct ARemnantRangedWeapon_SetModActive_Params
{
	EModActiveState*                                   ModState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               ActionID;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bForceNotify;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantRangedWeapon.ServerUseWithAim
struct ARemnantRangedWeapon_ServerUseWithAim_Params
{
	struct FVector_NetQuantize*                        AimOrigin;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize*                        AimEnd;                                                   // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantRangedWeapon.ServerUse
struct ARemnantRangedWeapon_ServerUse_Params
{
};

// Function Remnant.RemnantRangedWeapon.OnRep_Power
struct ARemnantRangedWeapon_OnRep_Power_Params
{
};

// Function Remnant.RemnantRangedWeapon.OnRep_ModActive
struct ARemnantRangedWeapon_OnRep_ModActive_Params
{
};

// Function Remnant.RemnantRangedWeapon.OnRep_Charges
struct ARemnantRangedWeapon_OnRep_Charges_Params
{
};

// Function Remnant.RemnantRangedWeapon.OnFinishWeaponModeAnimation
struct ARemnantRangedWeapon_OnFinishWeaponModeAnimation_Params
{
};

// Function Remnant.RemnantRangedWeapon.OnFinishUseState
struct ARemnantRangedWeapon_OnFinishUseState_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName*                                      PreviousStateName;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantRangedWeapon.OnFinishUseAnimation
struct ARemnantRangedWeapon_OnFinishUseAnimation_Params
{
};

// Function Remnant.RemnantRangedWeapon.OnAltFireReleased
struct ARemnantRangedWeapon_OnAltFireReleased_Params
{
};

// Function Remnant.RemnantRangedWeapon.OnAltFirePressed
struct ARemnantRangedWeapon_OnAltFirePressed_Params
{
};

// Function Remnant.RemnantRangedWeapon.OnActivateSecondary
struct ARemnantRangedWeapon_OnActivateSecondary_Params
{
};

// Function Remnant.RemnantRangedWeapon.OnActivate
struct ARemnantRangedWeapon_OnActivate_Params
{
};

// Function Remnant.RemnantRangedWeapon.OnActionRemoved
struct ARemnantRangedWeapon_OnActionRemoved_Params
{
	class UActionBase**                                Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantRangedWeapon.MulticastUse
struct ARemnantRangedWeapon_MulticastUse_Params
{
};

// Function Remnant.RemnantRangedWeapon.IsModActive
struct ARemnantRangedWeapon_IsModActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantRangedWeapon.GetWeaponMod
struct ARemnantRangedWeapon_GetWeaponMod_Params
{
	class ARemnantWeaponMod*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantRangedWeapon.GetPower
struct ARemnantRangedWeapon_GetPower_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantRangedWeapon.GetModActiveState
struct ARemnantRangedWeapon_GetModActiveState_Params
{
	EModActiveState                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantRangedWeapon.GetModActiveRemainingPct
struct ARemnantRangedWeapon_GetModActiveRemainingPct_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantRangedWeapon.GetCharges
struct ARemnantRangedWeapon_GetCharges_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantRangedWeapon.DelayedDeactivate
struct ARemnantRangedWeapon_DelayedDeactivate_Params
{
};

// Function Remnant.RemnantBeamWeapon.SetBeamFiring_Server
struct ARemnantBeamWeapon_SetBeamFiring_Server_Params
{
	bool*                                              Firing;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantBeamWeapon.OnRep_BeamFiring
struct ARemnantBeamWeapon_OnRep_BeamFiring_Params
{
};

// Function Remnant.RemnantBeamWeapon.OnEndBeamFX
struct ARemnantBeamWeapon_OnEndBeamFX_Params
{
};

// Function Remnant.RemnantBeamWeapon.OnBeginBeamFX
struct ARemnantBeamWeapon_OnBeginBeamFX_Params
{
};

// Function Remnant.RemnantBeamWeapon.IsBeamFiring
struct ARemnantBeamWeapon_IsBeamFiring_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacter.UpdatePlayerInfoTag
struct ARemnantCharacter_UpdatePlayerInfoTag_Params
{
};

// Function Remnant.RemnantCharacter.UpdatePersistentBuffs
struct ARemnantCharacter_UpdatePersistentBuffs_Params
{
};

// Function Remnant.RemnantCharacter.TeleportToSpawnPoint
struct ARemnantCharacter_TeleportToSpawnPoint_Params
{
	class AActor**                                     SpawnPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacter.SetSpawnPoint
struct ARemnantCharacter_SetSpawnPoint_Params
{
	class ASpawnPoint**                                SpawnPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacter.SetOldController
struct ARemnantCharacter_SetOldController_Params
{
	class ARemnantPlayerController**                   PreviousController;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacter.SetHelmetShown
struct ARemnantCharacter_SetHelmetShown_Params
{
	bool*                                              bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacter.SetGrabbedCheckpoint
struct ARemnantCharacter_SetGrabbedCheckpoint_Params
{
	class ACheckpoint**                                NewCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacter.SetDeactivated
struct ARemnantCharacter_SetDeactivated_Params
{
};

// Function Remnant.RemnantCharacter.ServerSetHelmetShown
struct ARemnantCharacter_ServerSetHelmetShown_Params
{
	bool*                                              bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacter.ResetAmmoInClip
struct ARemnantCharacter_ResetAmmoInClip_Params
{
};

// Function Remnant.RemnantCharacter.RemovePersistentBuff
struct ARemnantCharacter_RemovePersistentBuff_Params
{
	class UActionBuff**                                Buff;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacter.OnShowHelmetOptionChanged
struct ARemnantCharacter_OnShowHelmetOptionChanged_Params
{
	class UUserSetting**                               AppliedSetting;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameUserSettingsGunfire**                   UserSettings;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacter.OnRespawnAfterDeath
struct ARemnantCharacter_OnRespawnAfterDeath_Params
{
};

// Function Remnant.RemnantCharacter.OnRep_ShowHelmet
struct ARemnantCharacter_OnRep_ShowHelmet_Params
{
};

// Function Remnant.RemnantCharacter.OnRep_GrabbedCheckpoint
struct ARemnantCharacter_OnRep_GrabbedCheckpoint_Params
{
	class ACheckpoint**                                Previous;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacter.OnRep_Deactivated
struct ARemnantCharacter_OnRep_Deactivated_Params
{
};

// Function Remnant.RemnantCharacter.OnCharacterDied
struct ARemnantCharacter_OnCharacterDied_Params
{
	unsigned char*                                     Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACharacterGunfire**                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor**                                     Cause;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacter.IsReviving
struct ARemnantCharacter_IsReviving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacter.IsDead
struct ARemnantCharacter_IsDead_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacter.InitializePersistentBuffs
struct ARemnantCharacter_InitializePersistentBuffs_Params
{
};

// Function Remnant.RemnantCharacter.GetOldController
struct ARemnantCharacter_GetOldController_Params
{
	class ARemnantPlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacter.GetCurrentRangedWeapon
struct ARemnantCharacter_GetCurrentRangedWeapon_Params
{
	class ARangedWeapon*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacter.GetCharacterInfo
struct ARemnantCharacter_GetCharacterInfo_Params
{
	class USavedCharacter*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacter.GetAge
struct ARemnantCharacter_GetAge_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacter.ComputePowerLevel
struct ARemnantCharacter_ComputePowerLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacter.ComputeOffenseLevel
struct ARemnantCharacter_ComputeOffenseLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacter.ComputeDefenseLevel
struct ARemnantCharacter_ComputeDefenseLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacter.ClientTeleportToSpawnPoint
struct ARemnantCharacter_ClientTeleportToSpawnPoint_Params
{
	class ASpawnPoint**                                SpawnPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacter.ClientTeleport
struct ARemnantCharacter_ClientTeleport_Params
{
	struct FTransform*                                 Transform;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacter.ClientSetSpawnPoint
struct ARemnantCharacter_ClientSetSpawnPoint_Params
{
	struct FPersistenceKey*                            SpawnPointID;                                             // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacter.ClientRemoveAllPings
struct ARemnantCharacter_ClientRemoveAllPings_Params
{
};

// Function Remnant.RemnantCharacter.AddPersistentBuff
struct ARemnantCharacter_AddPersistentBuff_Params
{
	class UActionBuff**                                Buff;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.SavedCharacter.SetSkipIntro
struct USavedCharacter_SetSkipIntro_Params
{
	bool*                                              ShouldSkipIntro;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.SavedCharacter.SetKey
struct USavedCharacter_SetKey_Params
{
	struct FName*                                      Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.SavedCharacter.SetCharacterType
struct USavedCharacter_SetCharacterType_Params
{
	ERemnantCharacterType*                             NewCharacterType;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.SavedCharacter.MarkValidExit
struct USavedCharacter_MarkValidExit_Params
{
};

// Function Remnant.SavedCharacter.IncrementCounter
struct USavedCharacter_IncrementCounter_Params
{
	struct FName*                                      Counter;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.SavedCharacter.HasKey
struct USavedCharacter_HasKey_Params
{
	struct FName*                                      Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.SavedCharacter.GetCounter
struct USavedCharacter_GetCounter_Params
{
	struct FName*                                      Counter;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.SavedCharacter.CheckForInvalidExit
struct USavedCharacter_CheckForInvalidExit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantSaveGameProfile.UpdateAccountCurrency
struct URemnantSaveGameProfile_UpdateAccountCurrency_Params
{
	class UClass**                                     CurrencyType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantSaveGameProfile.GetAccountCurrencyForItemType
struct URemnantSaveGameProfile_GetAccountCurrencyForItemType_Params
{
	class UClass**                                     CurrencyType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacterManager.ShouldAwardHardcoreRewards
struct URemnantCharacterManager_ShouldAwardHardcoreRewards_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacterManager.SetActiveCharacter
struct URemnantCharacterManager_SetActiveCharacter_Params
{
	int*                                               ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacterManager.RestoreCharacters
struct URemnantCharacterManager_RestoreCharacters_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacterManager.ResolvePendingExit
struct URemnantCharacterManager_ResolvePendingExit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacterManager.IsHardcore
struct URemnantCharacterManager_IsHardcore_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacterManager.IsDeceasedCharacter
struct URemnantCharacterManager_IsDeceasedCharacter_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacterManager.HasBackupCharacters
struct URemnantCharacterManager_HasBackupCharacters_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacterManager.HasActiveCharacter
struct URemnantCharacterManager_HasActiveCharacter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacterManager.GetTransientCharacters
struct URemnantCharacterManager_GetTransientCharacters_Params
{
	TArray<class USavedCharacter*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacterManager.GetMaxCharacterCount
struct URemnantCharacterManager_GetMaxCharacterCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacterManager.GetCharacters
struct URemnantCharacterManager_GetCharacters_Params
{
	TArray<class USavedCharacter*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacterManager.GetCharacterManager
struct URemnantCharacterManager_GetCharacterManager_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URemnantCharacterManager*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacterManager.GetCharacterInfo
struct URemnantCharacterManager_GetCharacterInfo_Params
{
	class APlayerController**                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USavedCharacter*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacterManager.GetCharacterCount
struct URemnantCharacterManager_GetCharacterCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacterManager.GetCharacterAt
struct URemnantCharacterManager_GetCharacterAt_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USavedCharacter*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacterManager.GetCharacter
struct URemnantCharacterManager_GetCharacter_Params
{
	int*                                               ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USavedCharacter*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacterManager.GetActiveEquipmentVisuals
struct URemnantCharacterManager_GetActiveEquipmentVisuals_Params
{
	class USavedCharacter**                            CharacterInfo;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              OutVisuals;                                               // (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              OutLevels;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              OutSkins;                                                 // (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacterManager.GetActiveCharacter
struct URemnantCharacterManager_GetActiveCharacter_Params
{
	class USavedCharacter*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacterManager.DeleteTransientCharacters
struct URemnantCharacterManager_DeleteTransientCharacters_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacterManager.DeleteTransientCharacter
struct URemnantCharacterManager_DeleteTransientCharacter_Params
{
	int*                                               ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacterManager.DeleteCharacter
struct URemnantCharacterManager_DeleteCharacter_Params
{
	int*                                               ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacterManager.CreateTransientCharacter
struct URemnantCharacterManager_CreateTransientCharacter_Params
{
	class FString*                                     Name;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass**                                     SaveGameClass;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ErrorCode;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              SetActive;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERemnantCharacterType*                             CharacterType;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              ShouldSkipIntro;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UClass>*                      Archetype;                                                // (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               StartingDifficulty;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USavedCharacter**                            ReferenceCharacter;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>*                             AllowedAccountAwards;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	class USavedCharacter*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCharacterManager.CreateCharacter
struct URemnantCharacterManager_CreateCharacter_Params
{
	class FString*                                     Name;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass**                                     SaveGameClass;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ErrorCode;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              SetActive;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERemnantCharacterType*                             CharacterType;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              ShouldSkipIntro;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UClass>*                      Archetype;                                                // (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               StartingDifficulty;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USavedCharacter*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCheatManager.UnlockAllWaypoints
struct URemnantCheatManager_UnlockAllWaypoints_Params
{
};

// Function Remnant.RemnantCheatManager.UnlockAllEmotes
struct URemnantCheatManager_UnlockAllEmotes_Params
{
};

// Function Remnant.RemnantCheatManager.TravelToQuest
struct URemnantCheatManager_TravelToQuest_Params
{
	class FString*                                     QuestName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString*                                     ComponentName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCheatManager.ToggleShowBlood
struct URemnantCheatManager_ToggleShowBlood_Params
{
};

// Function Remnant.RemnantCheatManager.ToggleFogOfWar
struct URemnantCheatManager_ToggleFogOfWar_Params
{
};

// Function Remnant.RemnantCheatManager.ToggleDLC
struct URemnantCheatManager_ToggleDLC_Params
{
	ELicensedContent*                                  License;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCheatManager.SpawnDebugQuest
struct URemnantCheatManager_SpawnDebugQuest_Params
{
	class FString*                                     NameOfBP;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCheatManager.ShowMatchmakingPowerLevel
struct URemnantCheatManager_ShowMatchmakingPowerLevel_Params
{
};

// Function Remnant.RemnantCheatManager.SetDifficulty
struct URemnantCheatManager_SetDifficulty_Params
{
	int*                                               Difficulty;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCheatManager.RaiseDifficulty
struct URemnantCheatManager_RaiseDifficulty_Params
{
};

// Function Remnant.RemnantCheatManager.LowerDifficulty
struct URemnantCheatManager_LowerDifficulty_Params
{
};

// Function Remnant.RemnantCheatManager.Joinability
struct URemnantCheatManager_Joinability_Params
{
	bool*                                              isJoinable;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCheatManager.GiveAccountAward
struct URemnantCheatManager_GiveAccountAward_Params
{
	class FString*                                     NameOfBP;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCheatManager.AddScrap
struct URemnantCheatManager_AddScrap_Params
{
	int*                                               Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantCheatManager.AddExperience
struct URemnantCheatManager_AddExperience_Params
{
	int*                                               Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantFogOfWarComponent.UpdateMaterial
struct URemnantFogOfWarComponent_UpdateMaterial_Params
{
	class UMaterialInstanceDynamic**                   MaterialInstance;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector*                                    WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bSetMask;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float*                                             ScaleOverride;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantFogOfWarComponent.SetDebugLocation
struct URemnantFogOfWarComponent_SetDebugLocation_Params
{
	struct FVector*                                    NewLocation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantFogOfWarComponent.LockToActor
struct URemnantFogOfWarComponent_LockToActor_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantFogOfWarComponent.HasDebugLocation
struct URemnantFogOfWarComponent_HasDebugLocation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantFogOfWarComponent.GetLockActor
struct URemnantFogOfWarComponent_GetLockActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantFogOfWarComponent.ClearDebugLocation
struct URemnantFogOfWarComponent_ClearDebugLocation_Params
{
};

// Function Remnant.RemnantGameInstance.OnOnlinePrivilegeChecked
struct URemnantGameInstance_OnOnlinePrivilegeChecked_Params
{
};

// Function Remnant.RemnantGameInstance.OnMainMenuLoaded
struct URemnantGameInstance_OnMainMenuLoaded_Params
{
};

// Function Remnant.RemnantGameInstance.OnDeviceChanged
struct URemnantGameInstance_OnDeviceChanged_Params
{
	int*                                               ControllerId;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInputDevice*                                      NewDevice;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantGameInstance.OnActiveProfileSet
struct URemnantGameInstance_OnActiveProfileSet_Params
{
};

// Function Remnant.RemnantGameInstance.IsDemo
struct URemnantGameInstance_IsDemo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantGameInstance.GetDemoMode
struct URemnantGameInstance_GetDemoMode_Params
{
	ERemnantDemoMode                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantGameInstance.DoJoinViaPresence
struct URemnantGameInstance_DoJoinViaPresence_Params
{
};

// Function Remnant.RemnantGameInstance.DoAuth
struct URemnantGameInstance_DoAuth_Params
{
};

// Function Remnant.RemnantGameInstance.CheckConnectionStatusChanges
struct URemnantGameInstance_CheckConnectionStatusChanges_Params
{
};

// Function Remnant.RemnantGameMode.TravelToZone
struct ARemnantGameMode_TravelToZone_Params
{
	int*                                               DestZoneID;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName*                                      DestLink;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor**                                     Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bInstant;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantGameMode.TravelToLastCheckpoint
struct ARemnantGameMode_TravelToLastCheckpoint_Params
{
	class AActor**                                     Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantGameMode.SetPostDeathScreenTime
struct ARemnantGameMode_SetPostDeathScreenTime_Params
{
	float*                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantGameMode.SetAsRootCheckpoint
struct ARemnantGameMode_SetAsRootCheckpoint_Params
{
	struct FZoneLinkInfo*                              NewZoneLink;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool*                                              IgnoreActive;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantGameMode.SetAsRespawnZoneLink
struct ARemnantGameMode_SetAsRespawnZoneLink_Params
{
	struct FZoneLinkInfo*                              NewZoneLink;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool*                                              bIgnoreWorldState;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantGameMode.OnFullGameAvailable
struct ARemnantGameMode_OnFullGameAvailable_Params
{
};

// Function Remnant.RemnantGameMode.IsEveryoneEntitled
struct ARemnantGameMode_IsEveryoneEntitled_Params
{
	ELicensedContent*                                  License;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              ShowFailDialog;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              KickUnentitled;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantGameMode.IncrementAllPlayersBossCounters
struct ARemnantGameMode_IncrementAllPlayersBossCounters_Params
{
};

// Function Remnant.RemnantGameMode.GetRespawnZoneLink
struct ARemnantGameMode_GetRespawnZoneLink_Params
{
	struct FZoneLinkInfo                               ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantGameMode.ActivateCheckpoint
struct ARemnantGameMode_ActivateCheckpoint_Params
{
	class ACheckpoint**                                Checkpoint;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantGameState.OnRep_ZoneTravelState
struct ARemnantGameState_OnRep_ZoneTravelState_Params
{
};

// Function Remnant.RemnantGameState.OnRep_ActivatedCheckpoint
struct ARemnantGameState_OnRep_ActivatedCheckpoint_Params
{
};

// Function Remnant.RemnantGameState.IsZoneTravelPending
struct ARemnantGameState_IsZoneTravelPending_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutTimeRemaining;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantGameState.IsZoneTravelAvailable
struct ARemnantGameState_IsZoneTravelAvailable_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EZoneTravelLock                                    OutReason;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor**                                     Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bIsTravelMenu;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float*                                             AdditionalDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantGameState.GetActivatedCheckpoint
struct ARemnantGameState_GetActivatedCheckpoint_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bIncludeDeactivatingCheckpoint;                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACheckpoint*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantHUD.ShouldShowSubtitles
struct ARemnantHUD_ShouldShowSubtitles_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantHUD.ShouldShowHealthBars
struct ARemnantHUD_ShouldShowHealthBars_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantHUD.OnStopPendingTravel
struct ARemnantHUD_OnStopPendingTravel_Params
{
};

// Function Remnant.RemnantHUD.OnStartPendingTravel
struct ARemnantHUD_OnStartPendingTravel_Params
{
};

// Function Remnant.RemnantHUD.HasInvalidDialog
struct ARemnantHUD_HasInvalidDialog_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantMiniMapDisplayActor.OnFogOfWarChanged
struct ARemnantMiniMapDisplayActor_OnFogOfWarChanged_Params
{
	int*                                               X;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantMiniMapDisplayActor.IsAnyMiniMapDisplayed
struct ARemnantMiniMapDisplayActor_IsAnyMiniMapDisplayed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantMiniMapWidget.UpdateWidgetVisibility
struct URemnantMiniMapWidget_UpdateWidgetVisibility_Params
{
};

// Function Remnant.RemnantMiniMapWidget.ShouldIgnoreFogOfWar
struct URemnantMiniMapWidget_ShouldIgnoreFogOfWar_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantMiniMapWidget.SetVisibleFromLevel
struct URemnantMiniMapWidget_SetVisibleFromLevel_Params
{
	bool*                                              bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantMiniMapWidget.IsWidgetVisible
struct URemnantMiniMapWidget_IsWidgetVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPingActor.SetPingDetails
struct ARemnantPingActor_SetPingDetails_Params
{
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D**                                 Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor*                                     Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETailType*                                         Tail;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPingActor.OnCinematicEvent
struct ARemnantPingActor_OnCinematicEvent_Params
{
	class APlayerControllerGunfire**                   PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bIsInCinematic;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.PingSubContext.IsValidForPingType
struct UPingSubContext_IsValidForPingType_Params
{
	EPingType*                                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPingManager.IsCharacterOnVOCooldown
struct URemnantPingManager_IsCharacterOnVOCooldown_Params
{
	class AActor**                                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPingManager.IsCharacterOnPingCooldown
struct URemnantPingManager_IsCharacterOnPingCooldown_Params
{
	class AActor**                                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPingManager.GetRemainingCharacterPingCooldown
struct URemnantPingManager_GetRemainingCharacterPingCooldown_Params
{
	class AActor**                                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPingManager.GetPingManager
struct URemnantPingManager_GetPingManager_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URemnantPingManager*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPingManager.GetPingFromCharacter
struct URemnantPingManager_GetPingFromCharacter_Params
{
	class AActor**                                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActionPing                                 OutPing;                                                  // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                PingIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPingManager.GetCurrentPings
struct URemnantPingManager_GetCurrentPings_Params
{
	TArray<struct FActionPing>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPingManager.Client_UpdateCharacterPing
struct URemnantPingManager_Client_UpdateCharacterPing_Params
{
	class AActor**                                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActionPing*                                NewPing;                                                  // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPingManager.Client_MarkPlayerSoloPing
struct URemnantPingManager_Client_MarkPlayerSoloPing_Params
{
	class AActor**                                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              IsSolo;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.UpdatePlayState
struct ARemnantPlayerController_UpdatePlayState_Params
{
};

// Function Remnant.RemnantPlayerController.UpdatePerformanceLevel
struct ARemnantPlayerController_UpdatePerformanceLevel_Params
{
};

// Function Remnant.RemnantPlayerController.TravelPlayerTo
struct ARemnantPlayerController_TravelPlayerTo_Params
{
	int*                                               DestZoneID;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName*                                      DestLink;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bInstant;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.SwapCharacter
struct ARemnantPlayerController_SwapCharacter_Params
{
	struct FZoneLinkInfo*                              StartingWaypoint;                                         // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.SetReadyToTravel
struct ARemnantPlayerController_SetReadyToTravel_Params
{
};

// Function Remnant.RemnantPlayerController.SetIntroComplete
struct ARemnantPlayerController_SetIntroComplete_Params
{
};

// Function Remnant.RemnantPlayerController.ServerWorldResetComplete
struct ARemnantPlayerController_ServerWorldResetComplete_Params
{
};

// Function Remnant.RemnantPlayerController.ServerUpdateUsingMultiplayerFeatures
struct ARemnantPlayerController_ServerUpdateUsingMultiplayerFeatures_Params
{
};

// Function Remnant.RemnantPlayerController.ServerUpdateLicensedContent
struct ARemnantPlayerController_ServerUpdateLicensedContent_Params
{
	TArray<ELicensedContent>*                          Licenses;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ServerUnlockItemAward
struct ARemnantPlayerController_ServerUnlockItemAward_Params
{
	class UClass**                                     ItemAward;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bDoNotify;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ServerUnlockAccountCurrency
struct ARemnantPlayerController_ServerUnlockAccountCurrency_Params
{
	class UClass**                                     CurrencyType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bDoNotify;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ServerStreamSwapCharacter
struct ARemnantPlayerController_ServerStreamSwapCharacter_Params
{
	TArray<unsigned char>*                             CharacterData;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ServerStreamCharacterFinalize
struct ARemnantPlayerController_ServerStreamCharacterFinalize_Params
{
};

// Function Remnant.RemnantPlayerController.ServerStreamCharacter
struct ARemnantPlayerController_ServerStreamCharacter_Params
{
	TArray<unsigned char>*                             CharacterData;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ServerSetCurrentLock
struct ARemnantPlayerController_ServerSetCurrentLock_Params
{
	EZoneTravelLock*                                   NewLock;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bNewIsSaving;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bNewWantsTravelMenuAccess;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ServerRespawnSwappedCharacter
struct ARemnantPlayerController_ServerRespawnSwappedCharacter_Params
{
	int*                                               ZoneID;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName*                                      ZoneNameId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ServerRemoveTravelState
struct ARemnantPlayerController_ServerRemoveTravelState_Params
{
};

// Function Remnant.RemnantPlayerController.ServerRemoveItem
struct ARemnantPlayerController_ServerRemoveItem_Params
{
	class FString*                                     NameOfBP;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ServerReliableCameraLocationUpdate
struct ARemnantPlayerController_ServerReliableCameraLocationUpdate_Params
{
	struct FVector_NetQuantize*                        CamLoc;                                                   // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ServerReadyToTravel
struct ARemnantPlayerController_ServerReadyToTravel_Params
{
};

// Function Remnant.RemnantPlayerController.ServerReadyForWorldReset
struct ARemnantPlayerController_ServerReadyForWorldReset_Params
{
};

// Function Remnant.RemnantPlayerController.ServerHandleSkipIntro
struct ARemnantPlayerController_ServerHandleSkipIntro_Params
{
};

// Function Remnant.RemnantPlayerController.ServerGiveItem
struct ARemnantPlayerController_ServerGiveItem_Params
{
	class FString*                                     NameOfBP;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               LevelOverride;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bAutoEquip;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ServerFinalizeStreamSwapCharacter
struct ARemnantPlayerController_ServerFinalizeStreamSwapCharacter_Params
{
};

// Function Remnant.RemnantPlayerController.ServerDestinationZoneLoaded
struct ARemnantPlayerController_ServerDestinationZoneLoaded_Params
{
};

// Function Remnant.RemnantPlayerController.ServerClearWaitingForZones
struct ARemnantPlayerController_ServerClearWaitingForZones_Params
{
	int*                                               SyncCounter;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ServerBeginPlay
struct ARemnantPlayerController_ServerBeginPlay_Params
{
};

// Function Remnant.RemnantPlayerController.ServerAddExperience
struct ARemnantPlayerController_ServerAddExperience_Params
{
	class UProgressionComponent**                      Progression;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.Respawn
struct ARemnantPlayerController_Respawn_Params
{
	struct FZoneLinkInfo*                              StartingWaypoint;                                         // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.RemoveAccountAwardListener
struct ARemnantPlayerController_RemoveAccountAwardListener_Params
{
	struct FScriptDelegate*                            Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.RefreshAccountAwards
struct ARemnantPlayerController_RefreshAccountAwards_Params
{
};

// Function Remnant.RemnantPlayerController.QueueValidClientSoftInventoryChange
struct ARemnantPlayerController_QueueValidClientSoftInventoryChange_Params
{
	TSoftObjectPtr<class UClass>*                      ItemSoftRef;                                              // (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               ItemLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              IsItemRemoval;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.QueueValidClientInventoryChange
struct ARemnantPlayerController_QueueValidClientInventoryChange_Params
{
	class UClass**                                     ItemBP;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               ItemLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              IsItemRemoval;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.QueueManualQuestReward
struct ARemnantPlayerController_QueueManualQuestReward_Params
{
	class ARemnantQuest**                              Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UClass>>*              Items;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	bool*                                              bSkipDuplicates;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bAutoEquip;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERemnantQuestRewardType*                           RewardType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               LevelOverride;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bIsArchetype;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bWantsSaveOnAward;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.OnSessionDisconnected
struct ARemnantPlayerController_OnSessionDisconnected_Params
{
	class UWorld**                                     InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNetDriver**                                 NetDriver;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.OnServerFinalizeTravel
struct ARemnantPlayerController_OnServerFinalizeTravel_Params
{
};

// Function Remnant.RemnantPlayerController.OnReadyToTravel
struct ARemnantPlayerController_OnReadyToTravel_Params
{
	int*                                               PendingZoneID;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.OnPlayStateChanged
struct ARemnantPlayerController_OnPlayStateChanged_Params
{
	struct FName*                                      PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName*                                      NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.OnPlayInEditor
struct ARemnantPlayerController_OnPlayInEditor_Params
{
};

// Function Remnant.RemnantPlayerController.OnPlayerDied
struct ARemnantPlayerController_OnPlayerDied_Params
{
	unsigned char*                                     Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACharacterGunfire**                          DeadCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor**                                     Cause;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.OnFinishWorldReset
struct ARemnantPlayerController_OnFinishWorldReset_Params
{
	class ACheckpoint**                                ActivatedCheckpoint;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.OnFinishTravelLoad
struct ARemnantPlayerController_OnFinishTravelLoad_Params
{
};

// Function Remnant.RemnantPlayerController.OnFinishTravel
struct ARemnantPlayerController_OnFinishTravel_Params
{
};

// Function Remnant.RemnantPlayerController.OnFinishPlayStateTransition
struct ARemnantPlayerController_OnFinishPlayStateTransition_Params
{
	struct FName*                                      NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.OnDeceased
struct ARemnantPlayerController_OnDeceased_Params
{
};

// Function Remnant.RemnantPlayerController.OnBeginWorldReset
struct ARemnantPlayerController_OnBeginWorldReset_Params
{
	class ACheckpoint**                                ActivatedCheckpoint;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bWasDead;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.OnBeginTravel
struct ARemnantPlayerController_OnBeginTravel_Params
{
	int*                                               PendingZoneID;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.NetUpdateActiveCharacter
struct ARemnantPlayerController_NetUpdateActiveCharacter_Params
{
};

// Function Remnant.RemnantPlayerController.MarkRevived
struct ARemnantPlayerController_MarkRevived_Params
{
};

// Function Remnant.RemnantPlayerController.IsPlayerDead
struct ARemnantPlayerController_IsPlayerDead_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.IsIntroQuestDisabled
struct ARemnantPlayerController_IsIntroQuestDisabled_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.IsIntroQuestComplete
struct ARemnantPlayerController_IsIntroQuestComplete_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.HasServerBegunPlay
struct ARemnantPlayerController_HasServerBegunPlay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.HasLicense
struct ARemnantPlayerController_HasLicense_Params
{
	ELicensedContent*                                  License;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.HasGivenLicenses
struct ARemnantPlayerController_HasGivenLicenses_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.HandleSkipIntro
struct ARemnantPlayerController_HandleSkipIntro_Params
{
};

// Function Remnant.RemnantPlayerController.GiveQuestRewards
struct ARemnantPlayerController_GiveQuestRewards_Params
{
	class ARemnantQuest**                              Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpawnTable**                                SpawnTable;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>*                              SpawnTags;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	ERemnantQuestRewardType*                           RewardType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               RandomSeed;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bSkipDuplicates;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.GiveAccountAward
struct ARemnantPlayerController_GiveAccountAward_Params
{
	class UClass**                                     NewAward;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.GetTimeSinceLastInput
struct ARemnantPlayerController_GetTimeSinceLastInput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.GetTargetZoneLink
struct ARemnantPlayerController_GetTargetZoneLink_Params
{
	struct FZoneLinkInfo                               OutZoneLink;                                              // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool*                                              bSkipTravelDestination;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.GetRelevantInventoryComponentForItemType
struct ARemnantPlayerController_GetRelevantInventoryComponentForItemType_Params
{
	class UClass**                                     ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInventoryComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.GetRelevantInventoryComponentForItem
struct ARemnantPlayerController_GetRelevantInventoryComponentForItem_Params
{
	class UClass**                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInventoryComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.GetPlayerInventory
struct ARemnantPlayerController_GetPlayerInventory_Params
{
	class UInventoryComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.GetCurrentZone
struct ARemnantPlayerController_GetCurrentZone_Params
{
	class AZoneActor*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.GetCurrentTravelLock
struct ARemnantPlayerController_GetCurrentTravelLock_Params
{
	EZoneTravelLock                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.GetCurrentOrDeadPawn
struct ARemnantPlayerController_GetCurrentOrDeadPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.GatherPing
struct ARemnantPlayerController_GatherPing_Params
{
	struct FActionPing                                 OutPing;                                                  // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	EPingGenerationResult                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.EnableWidgetComponentInteraction
struct ARemnantPlayerController_EnableWidgetComponentInteraction_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ComputePowerLevel
struct ARemnantPlayerController_ComputePowerLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ComputeItemLevel
struct ARemnantPlayerController_ComputeItemLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ClientUpdateUsingMultiplayerFeatures
struct ARemnantPlayerController_ClientUpdateUsingMultiplayerFeatures_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ClientUpdateFogOfWar
struct ARemnantPlayerController_ClientUpdateFogOfWar_Params
{
	int*                                               ZoneID;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVisitedCoordinates*                        VisitedCoordinatesMap;                                    // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ClientUpdateAchievement
struct ARemnantPlayerController_ClientUpdateAchievement_Params
{
	struct FAchievementId*                             AchievementName;                                          // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int*                                               Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAchievementUpdateType*                            Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ClientSetWaitingForZones
struct ARemnantPlayerController_ClientSetWaitingForZones_Params
{
	int*                                               SyncCounter;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ClientSetMusicState
struct ARemnantPlayerController_ClientSetMusicState_Params
{
	struct FName*                                      State;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ClientOnSessionChanged
struct ARemnantPlayerController_ClientOnSessionChanged_Params
{
};

// Function Remnant.RemnantPlayerController.ClientNotifyQuestReward
struct ARemnantPlayerController_ClientNotifyQuestReward_Params
{
	struct FRemnantQuestReward*                        QuestReward;                                              // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ClientLoadDestinationZone
struct ARemnantPlayerController_ClientLoadDestinationZone_Params
{
	int*                                               DestZoneID;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ClientIncrementBossCounter
struct ARemnantPlayerController_ClientIncrementBossCounter_Params
{
};

// Function Remnant.RemnantPlayerController.ClientHandleDeceased
struct ARemnantPlayerController_ClientHandleDeceased_Params
{
	bool*                                              bExitToMenu;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ClientGiveAccountAward
struct ARemnantPlayerController_ClientGiveAccountAward_Params
{
	class UClass**                                     NewAward;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ClientFinishWorldReset
struct ARemnantPlayerController_ClientFinishWorldReset_Params
{
	class ACheckpoint**                                ActivatedCheckpoint;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ClientFinishTravel
struct ARemnantPlayerController_ClientFinishTravel_Params
{
	struct FTransform*                                 Destination;                                              // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ClientBeginWorldReset
struct ARemnantPlayerController_ClientBeginWorldReset_Params
{
	class ACheckpoint**                                ActivatedCheckpoint;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bWasDead;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ClientBeginTravel
struct ARemnantPlayerController_ClientBeginTravel_Params
{
	bool*                                              bRespawning;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               PendingZoneID;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ClearTravelLock
struct ARemnantPlayerController_ClearTravelLock_Params
{
	EZoneTravelLock*                                   Lock;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ClearPawn
struct ARemnantPlayerController_ClearPawn_Params
{
	bool*                                              SetCurrentAsDead;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              ShouldClearDeadPawn;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ClearDeadPawn
struct ARemnantPlayerController_ClearDeadPawn_Params
{
};

// Function Remnant.RemnantPlayerController.ClearCachedArchetype
struct ARemnantPlayerController_ClearCachedArchetype_Params
{
};

// Function Remnant.RemnantPlayerController.CanRespawnPlayers
struct ARemnantPlayerController_CanRespawnPlayers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.BroadcastPing
struct ARemnantPlayerController_BroadcastPing_Params
{
	struct FActionPing*                                PingRequest;                                              // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.BroadcastFinishedLevelSequence
struct ARemnantPlayerController_BroadcastFinishedLevelSequence_Params
{
	struct FSequencerPlayerSettings*                   DummySettings;                                            // (Parm, NativeAccessSpecifierPublic)
	class ULevelSequence**                             CurrentSequence;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor**                                     SequenceInstigator;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.BroadcastEmote
struct ARemnantPlayerController_BroadcastEmote_Params
{
	class UClass**                                     Emote;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.BroadcastClientFinishedLevelSequence
struct ARemnantPlayerController_BroadcastClientFinishedLevelSequence_Params
{
	struct FSequencerPlayerSettings*                   SequenceSettings;                                         // (Parm, NativeAccessSpecifierPublic)
	class ULevelSequence**                             CurrentSequence;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor**                                     SequenceInstigator;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.AwardArchetype
struct ARemnantPlayerController_AwardArchetype_Params
{
	class URemnantArchetype**                          ArchetypeClass;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ARemnantQuest**                              Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERemnantQuestRewardType*                           RewardType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bUseWhitelist;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>*                             WhitelistClasses;                                         // (Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool*                                              bAddTraits;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.AttemptPing
struct ARemnantPlayerController_AttemptPing_Params
{
	EPingGenerationResult                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.ApplyTravelLock
struct ARemnantPlayerController_ApplyTravelLock_Params
{
	EZoneTravelLock*                                   Lock;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerController.AddAccountAwardListener
struct ARemnantPlayerController_AddAccountAwardListener_Params
{
	struct FScriptDelegate*                            Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerInventoryComponent.ServerOnClientExceptionUpdate
struct URemnantPlayerInventoryComponent_ServerOnClientExceptionUpdate_Params
{
	class UClass**                                     ItemBP;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerInventoryComponent.OnTrackedInstanceDataChanged
struct URemnantPlayerInventoryComponent_OnTrackedInstanceDataChanged_Params
{
};

// Function Remnant.RemnantPlayerInventoryComponent.ModifyLevelForNewItem
struct URemnantPlayerInventoryComponent_ModifyLevelForNewItem_Params
{
	class UClass**                                     ItemBP;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               ItemLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerInventoryComponent.MarkClientSoftInventoryChangeValid
struct URemnantPlayerInventoryComponent_MarkClientSoftInventoryChangeValid_Params
{
	TSoftObjectPtr<class UClass>*                      ItemSoftRef;                                              // (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               ItemLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              IsItemRemoval;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerInventoryComponent.MarkClientInventoryChangeValid
struct URemnantPlayerInventoryComponent_MarkClientInventoryChangeValid_Params
{
	class UClass**                                     ItemBP;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               ItemLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              IsItemRemoval;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerInventoryComponent.IsItemCheatProtected
struct URemnantPlayerInventoryComponent_IsItemCheatProtected_Params
{
	class UClass**                                     ItemBP;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerInventoryComponent.IsCheatValidationEnabled
struct URemnantPlayerInventoryComponent_IsCheatValidationEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerInventoryComponent.GetLevelForNewItem
struct URemnantPlayerInventoryComponent_GetLevelForNewItem_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass**                                     ItemBP;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               ItemLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantPlayerInventoryComponent.ClientValidationTimeOut
struct URemnantPlayerInventoryComponent_ClientValidationTimeOut_Params
{
};

// Function Remnant.RemnantPlayerInventoryComponent.AddProtectionTimeOut
struct URemnantPlayerInventoryComponent_AddProtectionTimeOut_Params
{
};

// Function Remnant.RemnantProgressionComponent.ServerAddExperience
struct URemnantProgressionComponent_ServerAddExperience_Params
{
	int*                                               Exp;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantProgressionComponent.ClientAddProgressionTimeOut
struct URemnantProgressionComponent_ClientAddProgressionTimeOut_Params
{
};

// Function Remnant.RemnantProgressionComponent.AddProtectionTimeOut
struct URemnantProgressionComponent_AddProtectionTimeOut_Params
{
};

// Function Remnant.RemnantQuest.OnRep_Status
struct ARemnantQuest_OnRep_Status_Params
{
};

// Function Remnant.RemnantQuest.IsLoaded
struct ARemnantQuest_IsLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuest.HasLastCheckpoint
struct ARemnantQuest_HasLastCheckpoint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuest.GiveRewardToPlayerController
struct ARemnantQuest_GiveRewardToPlayerController_Params
{
	class ARemnantPlayerController**                   Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpawnTable**                                SpawnTable;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName*                                      SpawnTag;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>*                              AdditionalTags;                                           // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	ERemnantQuestRewardType*                           RewardType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               RandomSeed;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bSkipDuplicates;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuest.GiveRewardToPlayer
struct ARemnantQuest_GiveRewardToPlayer_Params
{
	class ARemnantCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpawnTable**                                SpawnTable;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName*                                      SpawnTag;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>*                              AdditionalTags;                                           // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	ERemnantQuestRewardType*                           RewardType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuest.GiveReward
struct ARemnantQuest_GiveReward_Params
{
	class USpawnTable**                                SpawnTable;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName*                                      SpawnTag;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>*                              AdditionalTags;                                           // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	ERemnantQuestRewardType*                           RewardType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bSkipDuplicates;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuest.GetRootQuest
struct ARemnantQuest_GetRootQuest_Params
{
	class ARemnantQuest*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuest.GetQuestInventory
struct ARemnantQuest_GetQuestInventory_Params
{
	class UInventoryComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuest.GetObjectQuestValue
struct ARemnantQuest_GetObjectQuestValue_Params
{
	class UClass**                                     ObjectBP;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ObjectValue;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutSellScalar;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutPickupValue;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuest.GetLevel
struct ARemnantQuest_GetLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuest.GetLastCheckpoint
struct ARemnantQuest_GetLastCheckpoint_Params
{
	struct FZoneLinkInfo                               ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuest.GetBiomeName
struct ARemnantQuest_GetBiomeName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuest.GetAutoJoinZoneLinks
struct ARemnantQuest_GetAutoJoinZoneLinks_Params
{
	TArray<struct FZoneLinkInfo>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuest.DeactivateQuest
struct ARemnantQuest_DeactivateQuest_Params
{
};

// Function Remnant.RemnantQuest.AddQuestLootTags
struct ARemnantQuest_AddQuestLootTags_Params
{
	TArray<struct FName>                               LootTags;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuest.ActivateQuest
struct ARemnantQuest_ActivateQuest_Params
{
};

// Function Remnant.RemnantQuestComponent.IsZoneLoaded
struct URemnantQuestComponent_IsZoneLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestComponent.GetZone
struct URemnantQuestComponent_GetZone_Params
{
	class AZoneActor*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestComponent.GetUniqueName
struct URemnantQuestComponent_GetUniqueName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestComponent.GetRootQuest
struct URemnantQuestComponent_GetRootQuest_Params
{
	class ARemnantQuest*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestComponent.GetRemnantQuest
struct URemnantQuestComponent_GetRemnantQuest_Params
{
	class ARemnantQuest*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestComponent.GetQuestZone
struct URemnantQuestComponent_GetQuestZone_Params
{
	class URemnantQuestZone*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestComponent.GetQuestTile
struct URemnantQuestComponent_GetQuestTile_Params
{
	class URemnantQuestTile*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestComponent.GetQuestEntity
struct URemnantQuestComponent_GetQuestEntity_Params
{
	class URemnantQuestEntity*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestComponent.DebugTravelTo
struct URemnantQuestComponent_DebugTravelTo_Params
{
	class APlayerController**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestComponent.DebugCanTravelTo
struct URemnantQuestComponent_DebugCanTravelTo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestAIDirector.StopAllGroups
struct URemnantQuestAIDirector_StopAllGroups_Params
{
	bool*                                              DestroyActiveSpawns;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestAIDirector.SetSpawnTable
struct URemnantQuestAIDirector_SetSpawnTable_Params
{
	class USpawnTable**                                SpawnTable;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestAIDirector.OnEncounterGroupRemoved
struct URemnantQuestAIDirector_OnEncounterGroupRemoved_Params
{
	class UEncounterGroupInstance**                    EncounterGroup;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestAIDirector.OnEncounterGroupActorSpawned
struct URemnantQuestAIDirector_OnEncounterGroupActorSpawned_Params
{
	class UEncounterGroupInstance**                    EncounterGroup;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestAIDirector.OnEncounterGroupActorDead
struct URemnantQuestAIDirector_OnEncounterGroupActorDead_Params
{
	class UEncounterGroupInstance**                    EncounterGroup;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestAIDirector.HasActiveSpawns
struct URemnantQuestAIDirector_HasActiveSpawns_Params
{
	bool*                                              IncludeQueuedSpawns;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestAIDirector.GetTotalSpawns
struct URemnantQuestAIDirector_GetTotalSpawns_Params
{
	bool*                                              IncludeQueuedSpawns;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestAIDirector.EventPlayerExit
struct URemnantQuestAIDirector_EventPlayerExit_Params
{
	struct FEventRegionCharacter*                      Character;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestAIDirector.EventPlayerEnter
struct URemnantQuestAIDirector_EventPlayerEnter_Params
{
	struct FEventRegionCharacter*                      Character;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestAIDirector.EventEncounterEvent
struct URemnantQuestAIDirector_EventEncounterEvent_Params
{
	class UEncounterGroupInstance**                    EncounterGroup;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName*                                      EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.LootSourceInterface.OverrideLootTable
struct ULootSourceInterface_OverrideLootTable_Params
{
	class USpawnTable**                                SpawnTable;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>*                              SpawnTags;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEntity.ZoneUnloaded
struct URemnantQuestEntity_ZoneUnloaded_Params
{
};

// Function Remnant.RemnantQuestEntity.SetFactionAffiliation
struct URemnantQuestEntity_SetFactionAffiliation_Params
{
	class UClass**                                     TargetFaction;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAffiliation*                                      Affiliation;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              Propogate;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEntity.SetFaction
struct URemnantQuestEntity_SetFaction_Params
{
	class UClass**                                     NewFaction;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEntity.ResetSpawns
struct URemnantQuestEntity_ResetSpawns_Params
{
};

// Function Remnant.RemnantQuestEntity.ReactivateSpawns
struct URemnantQuestEntity_ReactivateSpawns_Params
{
};

// Function Remnant.RemnantQuestEntity.OnSpawnListLoaded
struct URemnantQuestEntity_OnSpawnListLoaded_Params
{
};

// Function Remnant.RemnantQuestEntity.OnDead
struct URemnantQuestEntity_OnDead_Params
{
	unsigned char*                                     Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACharacterGunfire**                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor**                                     Cause;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEntity.OnActorRegistered
struct URemnantQuestEntity_OnActorRegistered_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEntity.OnActorDestroyed
struct URemnantQuestEntity_OnActorDestroyed_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEntity.OnActorDead
struct URemnantQuestEntity_OnActorDead_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEntity.GetZone
struct URemnantQuestEntity_GetZone_Params
{
	class AZoneActor*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEntity.GetRootQuest
struct URemnantQuestEntity_GetRootQuest_Params
{
	class ARemnantQuest*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEntity.GetRemnantQuest
struct URemnantQuestEntity_GetRemnantQuest_Params
{
	class ARemnantQuest*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEntity.GetQuestZone
struct URemnantQuestEntity_GetQuestZone_Params
{
	class URemnantQuestZone*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEntity.GetQuestTile
struct URemnantQuestEntity_GetQuestTile_Params
{
	class URemnantQuestTile*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEntity.GetNumSpawns
struct URemnantQuestEntity_GetNumSpawns_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEntity.GetActors
struct URemnantQuestEntity_GetActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEntityDialog.OnActorSpawned
struct URemnantQuestEntityDialog_OnActorSpawned_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEventRegion.SetMusicState
struct URemnantQuestEventRegion_SetMusicState_Params
{
	struct FName*                                      MusicState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEventRegion.OnActorRegistered
struct URemnantQuestEventRegion_OnActorRegistered_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEventRegion.LockEvent
struct URemnantQuestEventRegion_LockEvent_Params
{
};

// Function Remnant.RemnantQuestEventRegion.IsEventRegionActive
struct URemnantQuestEventRegion_IsEventRegionActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEventRegion.IsComplete
struct URemnantQuestEventRegion_IsComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEventRegion.GetPlayersInRegion
struct URemnantQuestEventRegion_GetPlayersInRegion_Params
{
	TArray<class ARemnantCharacter*>                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEventRegion.GetNumPlayersInRegion
struct URemnantQuestEventRegion_GetNumPlayersInRegion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEventRegion.GetFirstPlayerInRegion
struct URemnantQuestEventRegion_GetFirstPlayerInRegion_Params
{
	class ARemnantCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEventRegion.GetEventRegion
struct URemnantQuestEventRegion_GetEventRegion_Params
{
	class AEventRegion*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEventRegion.GetAggroGroup
struct URemnantQuestEventRegion_GetAggroGroup_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEventRegion.EventPlayerExit
struct URemnantQuestEventRegion_EventPlayerExit_Params
{
	struct FEventRegionCharacter*                      Player;                                                   // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEventRegion.EventPlayerEnter
struct URemnantQuestEventRegion_EventPlayerEnter_Params
{
	struct FEventRegionCharacter*                      Player;                                                   // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestEventRegion.EventOnEnd
struct URemnantQuestEventRegion_EventOnEnd_Params
{
};

// Function Remnant.RemnantQuestEventRegion.EventOnBegin
struct URemnantQuestEventRegion_EventOnBegin_Params
{
};

// Function Remnant.RemnantQuestEventRegion.End
struct URemnantQuestEventRegion_End_Params
{
};

// Function Remnant.RemnantQuestEventRegion.CompleteEvent
struct URemnantQuestEventRegion_CompleteEvent_Params
{
};

// Function Remnant.RemnantQuestEventRegion.Begin
struct URemnantQuestEventRegion_Begin_Params
{
};

// Function Remnant.RemnantQuestLink.OnLinkDeactivated
struct URemnantQuestLink_OnLinkDeactivated_Params
{
	class UQuestComponent**                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestLink.OnLinkActivated
struct URemnantQuestLink_OnLinkActivated_Params
{
	class UQuestComponent**                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestManager.SortQuestList
struct URemnantQuestManager_SortQuestList_Params
{
	TArray<struct FRemnantQuestEntry>*                 QuestList;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FRemnantQuestEntry>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestManager.IsQuestValid
struct URemnantQuestManager_IsQuestValid_Params
{
	class ARemnantQuest**                              Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestManager.GetRootQuests
struct URemnantQuestManager_GetRootQuests_Params
{
	TArray<class ARemnantQuest*>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestManager.GetRootQuestForSlot
struct URemnantQuestManager_GetRootQuestForSlot_Params
{
	int*                                               SlotID;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ARemnantQuest*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestManager.GetRegisteredRootQuestsForMode
struct URemnantQuestManager_GetRegisteredRootQuestsForMode_Params
{
	EQuestMode*                                        Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRemnantQuestEntry>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestManager.GetRegisteredRootQuests
struct URemnantQuestManager_GetRegisteredRootQuests_Params
{
	TArray<struct FRemnantQuestEntry>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestManager.GetRegisteredQuests
struct URemnantQuestManager_GetRegisteredQuests_Params
{
	TArray<struct FRemnantQuestEntry>                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestManager.GetRegisteredQuestByID
struct URemnantQuestManager_GetRegisteredQuestByID_Params
{
	class FString*                                     QuestID;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRemnantQuestEntry                          ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestManager.GetQuestsForActor
struct URemnantQuestManager_GetQuestsForActor_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              IncludeInjectedQuests;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ARemnantQuest*>                       Rtn;                                                      // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestManager.GetLicenseForSoftQuest
struct URemnantQuestManager_GetLicenseForSoftQuest_Params
{
	TSoftObjectPtr<class UClass>*                      Quest;                                                    // (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELicensedContent                                   OutLicense;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestManager.GetCurrentQuestObjective
struct URemnantQuestManager_GetCurrentQuestObjective_Params
{
	class ARemnantQuest**                              Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQuestObjective*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestManager.GetActiveRootQuest
struct URemnantQuestManager_GetActiveRootQuest_Params
{
	class ARemnantQuest*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestManager.DestroyRootQuest
struct URemnantQuestManager_DestroyRootQuest_Params
{
	class ARemnantQuest**                              Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestManager.CreateRootQuest
struct URemnantQuestManager_CreateRootQuest_Params
{
	int*                                               SlotID;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString*                                     QuestID;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               Difficulty;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ARemnantQuest*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestManager.ActivateRootQuest
struct URemnantQuestManager_ActivateRootQuest_Params
{
	class ARemnantQuest**                              Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestSubQuest.SubQuestComplete
struct URemnantQuestSubQuest_SubQuestComplete_Params
{
	class AQuest**                                     Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EQuestResult*                                      Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestSubQuest.OnLinkDeactivated
struct URemnantQuestSubQuest_OnLinkDeactivated_Params
{
	class UQuestComponent**                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestSubQuest.OnLinkActivated
struct URemnantQuestSubQuest_OnLinkActivated_Params
{
	class UQuestComponent**                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestSubQuest.GetSubQuest
struct URemnantQuestSubQuest_GetSubQuest_Params
{
	class ARemnantQuest*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestTile.SetTileActive
struct URemnantQuestTile_SetTileActive_Params
{
	int*                                               ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestTile.GetZoneLink
struct URemnantQuestTile_GetZoneLink_Params
{
	struct FName*                                      ZoneLinkNameID;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestTile.GetTileCoord
struct URemnantQuestTile_GetTileCoord_Params
{
	struct FTileCoord                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestTile.GetTileAttribute
struct URemnantQuestTile_GetTileAttribute_Params
{
	struct FName*                                      Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMapGenAttribute                            Out;                                                      // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestTrigger.OnActorRegistered
struct URemnantQuestTrigger_OnActorRegistered_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestTrigger.GetTrigger
struct URemnantQuestTrigger_GetTrigger_Params
{
	class AQuestTrigger*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestTrigger.GetPlayersInTrigger
struct URemnantQuestTrigger_GetPlayersInTrigger_Params
{
	TArray<class ARemnantCharacter*>                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestTrigger.GetNumPlayersInTrigger
struct URemnantQuestTrigger_GetNumPlayersInTrigger_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestTrigger.EventPlayerExit
struct URemnantQuestTrigger_EventPlayerExit_Params
{
	class ARemnantCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestTrigger.EventPlayerEnter
struct URemnantQuestTrigger_EventPlayerEnter_Params
{
	class ARemnantCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestWaveEncounter.WaveComplete
struct URemnantQuestWaveEncounter_WaveComplete_Params
{
	class UEncounterInstance**                         Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestWaveEncounter.Stop
struct URemnantQuestWaveEncounter_Stop_Params
{
	bool*                                              DestroyActiveSpawns;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestWaveEncounter.SpawnWave
struct URemnantQuestWaveEncounter_SpawnWave_Params
{
};

// Function Remnant.RemnantQuestWaveEncounter.Resume
struct URemnantQuestWaveEncounter_Resume_Params
{
};

// Function Remnant.RemnantQuestWaveEncounter.Pause
struct URemnantQuestWaveEncounter_Pause_Params
{
};

// Function Remnant.RemnantQuestWaveEncounter.IsQuestWaveActive
struct URemnantQuestWaveEncounter_IsQuestWaveActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestWaveEncounter.EventPlayerExit
struct URemnantQuestWaveEncounter_EventPlayerExit_Params
{
	struct FEventRegionCharacter*                      Character;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestWaveEncounter.EventPlayerEnter
struct URemnantQuestWaveEncounter_EventPlayerEnter_Params
{
	struct FEventRegionCharacter*                      Character;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestWaveEncounter.EventOnEnd
struct URemnantQuestWaveEncounter_EventOnEnd_Params
{
};

// Function Remnant.RemnantQuestWaveEncounter.Begin
struct URemnantQuestWaveEncounter_Begin_Params
{
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestZone.ZoneUnloaded
struct URemnantQuestZone_ZoneUnloaded_Params
{
};

// Function Remnant.RemnantQuestZone.ZoneLoaded
struct URemnantQuestZone_ZoneLoaded_Params
{
};

// Function Remnant.RemnantQuestZone.TravelToParent
struct URemnantQuestZone_TravelToParent_Params
{
};

// Function Remnant.RemnantQuestZone.SetSpawnTableOverride
struct URemnantQuestZone_SetSpawnTableOverride_Params
{
	class USpawnTable**                                SpawnTable;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestZone.PlayerExitedZone
struct URemnantQuestZone_PlayerExitedZone_Params
{
	class APlayerController**                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestZone.PlayerEnteredZone
struct URemnantQuestZone_PlayerEnteredZone_Params
{
	class APlayerController**                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestZone.ParentMapLoaded
struct URemnantQuestZone_ParentMapLoaded_Params
{
};

// Function Remnant.RemnantQuestZone.MapLoaded
struct URemnantQuestZone_MapLoaded_Params
{
};

// Function Remnant.RemnantQuestZoneLink.MulticastSetLinkActive
struct URemnantQuestZoneLink_MulticastSetLinkActive_Params
{
	class AZoneActor**                                 Zone;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantQuestZoneLink.MapLoaded
struct URemnantQuestZoneLink_MapLoaded_Params
{
};

// Function Remnant.RemnantQuestZoneLink.DestinationZoneLoaded
struct URemnantQuestZoneLink_DestinationZoneLoaded_Params
{
};

// Function Remnant.RemnantQuestZoneLink.DestinationMapLoaded
struct URemnantQuestZoneLink_DestinationMapLoaded_Params
{
};

// Function Remnant.RemnantQuestZoneLink.DeactivateWaypoint
struct URemnantQuestZoneLink_DeactivateWaypoint_Params
{
};

// Function Remnant.RemnantQuestZoneLink.ActivateWaypoint
struct URemnantQuestZoneLink_ActivateWaypoint_Params
{
	bool*                                              SetAsRespawnPoint;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantSkyboxManager.RegisterSkyboxModifierVolume
struct URemnantSkyboxManager_RegisterSkyboxModifierVolume_Params
{
	class AActor**                                     SkyboxModVolume;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantSkyboxManager.RefreshModifierVolumes
struct URemnantSkyboxManager_RefreshModifierVolumes_Params
{
};

// Function Remnant.RemnantSkyboxManager.OnPlayerExitVolume
struct URemnantSkyboxManager_OnPlayerExitVolume_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantSkyboxManager.OnPlayerEnterVolume
struct URemnantSkyboxManager_OnPlayerEnterVolume_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              FromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantSkyboxManager.IsPlayerInAnyModifierVolumes
struct URemnantSkyboxManager_IsPlayerInAnyModifierVolumes_Params
{
	class AActor**                                     Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor**                                     ExcludedVolume;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantSkyboxManager.InitSkyboxManager
struct URemnantSkyboxManager_InitSkyboxManager_Params
{
	class AActor**                                     SkyboxActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantSkyboxManager.GetInstance
struct URemnantSkyboxManager_GetInstance_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URemnantSkyboxManager*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantSpawnFilterManager.GetManagerInstance
struct URemnantSpawnFilterManager_GetManagerInstance_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URemnantSpawnFilterManager*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantSpectatorPawn.OnValidTarget
struct ARemnantSpectatorPawn_OnValidTarget_Params
{
};

// Function Remnant.RemnantSpectatorPawn.OnTargetUnavailable
struct ARemnantSpectatorPawn_OnTargetUnavailable_Params
{
	class USpectatorTargetComponent**                  SpectatorTarget;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantSpectatorPawn.OnSpectateTarget
struct ARemnantSpectatorPawn_OnSpectateTarget_Params
{
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantSpectatorPawn.OnLeaveTarget
struct ARemnantSpectatorPawn_OnLeaveTarget_Params
{
};

// Function Remnant.RemnantSpectatorPawn.OnInvalidTarget
struct ARemnantSpectatorPawn_OnInvalidTarget_Params
{
};

// Function Remnant.RemnantSpectatorPawn.OnFinishTravel
struct ARemnantSpectatorPawn_OnFinishTravel_Params
{
};

// Function Remnant.RemnantSpectatorPawn.IsValidTarget
struct ARemnantSpectatorPawn_IsValidTarget_Params
{
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantSpectatorPawn.GetNumAvailableTargets
struct ARemnantSpectatorPawn_GetNumAvailableTargets_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantSpectatorPawn.GetCurrentTarget
struct ARemnantSpectatorPawn_GetCurrentTarget_Params
{
	bool*                                              bOnlyIfValid;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantTraitsComponent.ServerAddTraitPoints
struct URemnantTraitsComponent_ServerAddTraitPoints_Params
{
	int*                                               Points;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantTraitsComponent.MarkClientTraitPointChangeValid
struct URemnantTraitsComponent_MarkClientTraitPointChangeValid_Params
{
	int*                                               AddedTraitPoints;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantTraitsComponent.GetTraitsForLevel
struct URemnantTraitsComponent_GetTraitsForLevel_Params
{
	int*                                               Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTraitInfo>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantTraitsComponent.GetTraitLevelBands
struct URemnantTraitsComponent_GetTraitLevelBands_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantTraitsComponent.GetTraitByLevelAndCategory
struct URemnantTraitsComponent_GetTraitByLevelAndCategory_Params
{
	int*                                               Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName*                                      Category;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTraitInfo                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantTraitsComponent.GetTotalAvailableTraits
struct URemnantTraitsComponent_GetTotalAvailableTraits_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantTraitsComponent.GetNumAvailableTraits
struct URemnantTraitsComponent_GetNumAvailableTraits_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantTraitsComponent.ClientTraitPointTimeOut
struct URemnantTraitsComponent_ClientTraitPointTimeOut_Params
{
};

// Function Remnant.RemnantTraitsComponent.ClientTraitLevelTimeOut
struct URemnantTraitsComponent_ClientTraitLevelTimeOut_Params
{
};

// Function Remnant.RemnantTraitsComponent.ClientSpentTraitPointTimeOut
struct URemnantTraitsComponent_ClientSpentTraitPointTimeOut_Params
{
};

// Function Remnant.RemnantUtil.IsGameSessionReady
struct URemnantUtil_IsGameSessionReady_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantUtil.GetGameSeed
struct URemnantUtil_GetGameSeed_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantUtil.GetBaseZoneLinkByLabel
struct URemnantUtil_GetBaseZoneLinkByLabel_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString*                                     Label;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZoneLinkInfo                               OutZoneLink;                                              // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantUtil.GetBaseZoneLink
struct URemnantUtil_GetBaseZoneLink_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZoneLinkInfo                               OutZoneLink;                                              // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantUtil.GetBaseZoneID
struct URemnantUtil_GetBaseZoneID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantUtil.GetBaseZoneActor
struct URemnantUtil_GetBaseZoneActor_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AZoneActor*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantUtil.CanPlayerExitGame
struct URemnantUtil_CanPlayerExitGame_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantWeaponMod.ShowReticule
struct ARemnantWeaponMod_ShowReticule_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantWeaponMod.SetMinHoldTime
struct ARemnantWeaponMod_SetMinHoldTime_Params
{
	float*                                             HoldTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantWeaponMod.OnUse
struct ARemnantWeaponMod_OnUse_Params
{
};

// Function Remnant.RemnantWeaponMod.OnStartCustomIdle
struct ARemnantWeaponMod_OnStartCustomIdle_Params
{
};

// Function Remnant.RemnantWeaponMod.OnSecondaryActivate
struct ARemnantWeaponMod_OnSecondaryActivate_Params
{
};

// Function Remnant.RemnantWeaponMod.OnPreviewStart
struct ARemnantWeaponMod_OnPreviewStart_Params
{
};

// Function Remnant.RemnantWeaponMod.OnPreviewEnd
struct ARemnantWeaponMod_OnPreviewEnd_Params
{
};

// Function Remnant.RemnantWeaponMod.OnPreFireEnd
struct ARemnantWeaponMod_OnPreFireEnd_Params
{
};

// Function Remnant.RemnantWeaponMod.OnPreFireBegin
struct ARemnantWeaponMod_OnPreFireBegin_Params
{
};

// Function Remnant.RemnantWeaponMod.OnPreActivate
struct ARemnantWeaponMod_OnPreActivate_Params
{
};

// Function Remnant.RemnantWeaponMod.OnFireEnd
struct ARemnantWeaponMod_OnFireEnd_Params
{
};

// Function Remnant.RemnantWeaponMod.OnFireBegin
struct ARemnantWeaponMod_OnFireBegin_Params
{
};

// Function Remnant.RemnantWeaponMod.OnFire
struct ARemnantWeaponMod_OnFire_Params
{
	struct FVector*                                    from;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector*                                    to;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float*                                             WeaponSpread;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantWeaponMod.OnFinishLoadingAssets
struct ARemnantWeaponMod_OnFinishLoadingAssets_Params
{
};

// Function Remnant.RemnantWeaponMod.OnEndUse
struct ARemnantWeaponMod_OnEndUse_Params
{
};

// Function Remnant.RemnantWeaponMod.OnEndCustomIdle
struct ARemnantWeaponMod_OnEndCustomIdle_Params
{
};

// Function Remnant.RemnantWeaponMod.OnDeactivate
struct ARemnantWeaponMod_OnDeactivate_Params
{
};

// Function Remnant.RemnantWeaponMod.OnChargesChanged
struct ARemnantWeaponMod_OnChargesChanged_Params
{
	int*                                               Charges;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantWeaponMod.OnCharacterHitTarget
struct ARemnantWeaponMod_OnCharacterHitTarget_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantWeaponMod.OnBeginUse
struct ARemnantWeaponMod_OnBeginUse_Params
{
};

// Function Remnant.RemnantWeaponMod.OnActivate
struct ARemnantWeaponMod_OnActivate_Params
{
};

// Function Remnant.RemnantWeaponMod.ModifyModPower
struct ARemnantWeaponMod_ModifyModPower_Params
{
	float*                                             Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantWeaponMod.IsUseState
struct ARemnantWeaponMod_IsUseState_Params
{
	struct FName*                                      State;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantWeaponMod.IsPreviewing
struct ARemnantWeaponMod_IsPreviewing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantWeaponMod.GetWeapon
struct ARemnantWeaponMod_GetWeapon_Params
{
	class ARemnantRangedWeapon*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantWeaponMod.GetUseState
struct ARemnantWeaponMod_GetUseState_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantWeaponMod.GetModAssetAsClass
struct ARemnantWeaponMod_GetModAssetAsClass_Params
{
	struct FName*                                      AssetName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantWeaponMod.GetModAsset
struct ARemnantWeaponMod_GetModAsset_Params
{
	struct FName*                                      AssetName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantWeaponMod.GetModActiveRemainingPct
struct ARemnantWeaponMod_GetModActiveRemainingPct_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantWeaponMod.GetClientAimVector
struct ARemnantWeaponMod_GetClientAimVector_Params
{
	struct FVector                                     AimOrigin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AimEnd;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantWeaponMod.CanUse
struct ARemnantWeaponMod_CanUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantWeaponMod.CanDeactivateMod
struct ARemnantWeaponMod_CanDeactivateMod_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantWeaponMod.CalculateClientAimVector
struct ARemnantWeaponMod_CalculateClientAimVector_Params
{
	struct FVector                                     AimOrigin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AimEnd;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantWeaponMod.AreAssetsLoaded
struct ARemnantWeaponMod_AreAssetsLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantWeaponMod.ApplyDamageInfoToModPower
struct ARemnantWeaponMod_ApplyDamageInfoToModPower_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float*                                             ModPowerScalar;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              bIgnorePenalties;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.RemnantWeaponMod.AddModPower
struct ARemnantWeaponMod_AddModPower_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float*                                             BonusModPowerMod;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.SpectatorTargetComponent.OnSpectatorTargetUnavailable
struct USpectatorTargetComponent_OnSpectatorTargetUnavailable_Params
{
};

// Function Remnant.UtilityItem.UseCharge
struct AUtilityItem_UseCharge_Params
{
};

// Function Remnant.UtilityItem.Recharge
struct AUtilityItem_Recharge_Params
{
};

// Function Remnant.UtilityItem.GetCooldownPct
struct AUtilityItem_GetCooldownPct_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.UtilityItem.GetCharges
struct AUtilityItem_GetCharges_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.WorldResetInterface.OnWorldReset
struct UWorldResetInterface_OnWorldReset_Params
{
};

// Function Remnant.WorldResetInterface.OnNotifyAllWorldReset
struct UWorldResetInterface_OnNotifyAllWorldReset_Params
{
};

// Function Remnant.WorldResetUtil.IsWorldResetInProgress
struct UWorldResetUtil_IsWorldResetInProgress_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.WorldResetUtil.GetWorldResetColorIndex
struct UWorldResetUtil_GetWorldResetColorIndex_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneActor.UpdateLevelScaling
struct AZoneActor_UpdateLevelScaling_Params
{
};

// Function Remnant.ZoneActor.UnloadZone
struct AZoneActor_UnloadZone_Params
{
};

// Function Remnant.ZoneActor.OnResourcesLoad
struct AZoneActor_OnResourcesLoad_Params
{
};

// Function Remnant.ZoneActor.OnRep_ServerState
struct AZoneActor_OnRep_ServerState_Params
{
};

// Function Remnant.ZoneActor.OnRep_Level
struct AZoneActor_OnRep_Level_Params
{
};

// Function Remnant.ZoneActor.OnMapGenInitialized
struct AZoneActor_OnMapGenInitialized_Params
{
};

// Function Remnant.ZoneActor.OnMapGenFullyLoaded
struct AZoneActor_OnMapGenFullyLoaded_Params
{
};

// Function Remnant.ZoneActor.OnMapGenFailed
struct AZoneActor_OnMapGenFailed_Params
{
};

// Function Remnant.ZoneActor.OnFinalizeLoad
struct AZoneActor_OnFinalizeLoad_Params
{
};

// Function Remnant.ZoneActor.LoadZone
struct AZoneActor_LoadZone_Params
{
	struct FName*                                      Link;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneActor.IsLoaded
struct AZoneActor_IsLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneActor.IsFullyUnloaded
struct AZoneActor_IsFullyUnloaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneActor.IsChildZone
struct AZoneActor_IsChildZone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneActor.HasFailedLoad
struct AZoneActor_HasFailedLoad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneActor.GetZoneStatus
struct AZoneActor_GetZoneStatus_Params
{
	EZoneStatus                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneActor.GetZoneLevel
struct AZoneActor_GetZoneLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneActor.GetUniqueName
struct AZoneActor_GetUniqueName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneActor.GetTOD
struct AZoneActor_GetTOD_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneActor.GetQuest
struct AZoneActor_GetQuest_Params
{
	class ARemnantQuest*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneActor.GetParentZone
struct AZoneActor_GetParentZone_Params
{
	class AZoneActor*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneActor.GetItemLevel
struct AZoneActor_GetItemLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneActor.ContainsActor
struct AZoneActor_ContainsActor_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneManager.UnlockAllWaypoints
struct UZoneManager_UnlockAllWaypoints_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneManager.GetZoneForSlot
struct UZoneManager_GetZoneForSlot_Params
{
	int*                                               SlotID;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AZoneActor*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneManager.GetZoneForActor
struct UZoneManager_GetZoneForActor_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AZoneActor*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneManager.GetZoneByNameID
struct UZoneManager_GetZoneByNameID_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName*                                      NameID;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AZoneActor*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneManager.GetZoneByID
struct UZoneManager_GetZoneByID_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AZoneActor*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneManager.GetInstance
struct UZoneManager_GetInstance_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UZoneManager*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneManager.GetBiomeForActor
struct UZoneManager_GetBiomeForActor_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneManager.DestroyZone
struct UZoneManager_DestroyZone_Params
{
	class AZoneActor**                                 Zone;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneManager.CreateZone
struct UZoneManager_CreateZone_Params
{
	int*                                               SlotID;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass**                                     ZoneActorBP;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               SeedOverride;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AZoneActor*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneLinkComponent.TravelToWaypoint
struct UZoneLinkComponent_TravelToWaypoint_Params
{
	struct FName*                                      LinkNameID;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneLinkComponent.TravelToDestinationZone
struct UZoneLinkComponent_TravelToDestinationZone_Params
{
	bool*                                              Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              Instant;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneLinkComponent.OnRep_NameID
struct UZoneLinkComponent_OnRep_NameID_Params
{
};

// Function Remnant.ZoneLinkComponent.OnRep_IsRespawnZoneLink
struct UZoneLinkComponent_OnRep_IsRespawnZoneLink_Params
{
};

// Function Remnant.ZoneLinkComponent.IsWaypoint
struct UZoneLinkComponent_IsWaypoint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneLinkComponent.IsRespawnZoneLink
struct UZoneLinkComponent_IsRespawnZoneLink_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneLinkComponent.IsLinkActive
struct UZoneLinkComponent_IsLinkActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneLinkComponent.IsDestinationZoneLoaded
struct UZoneLinkComponent_IsDestinationZoneLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneLinkComponent.HasBeenUsed
struct UZoneLinkComponent_HasBeenUsed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneLinkComponent.GetType
struct UZoneLinkComponent_GetType_Params
{
	EZoneLinkType                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneLinkComponent.GetSpawnPoint
struct UZoneLinkComponent_GetSpawnPoint_Params
{
	class ASpawnPoint*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneLinkComponent.GetLinkInfo
struct UZoneLinkComponent_GetLinkInfo_Params
{
	struct FZoneLinkInfo                               ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneLinkComponent.GetDestinationZone
struct UZoneLinkComponent_GetDestinationZone_Params
{
	class AZoneActor*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneLinkComponent.GetAccessibleWaypoints
struct UZoneLinkComponent_GetAccessibleWaypoints_Params
{
	TArray<struct FZoneLinkInfo>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Remnant.ZoneLinkComponent.ActivateLink
struct UZoneLinkComponent_ActivateLink_Params
{
};

// Function Remnant.ZoneRegion.OnRegionExit
struct AZoneRegion_OnRegionExit_Params
{
};

// Function Remnant.ZoneRegion.OnRegionEnter
struct AZoneRegion_OnRegionEnter_Params
{
};

// Function Remnant.ZoneRegion.Contains
struct AZoneRegion_Contains_Params
{
	struct FVector*                                    Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
