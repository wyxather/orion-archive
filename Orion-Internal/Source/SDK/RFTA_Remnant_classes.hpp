#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Remnant_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Remnant.AccountAward
// 0x0008 (0x0030 - 0x0028)
class UAccountAward : public UObject
{
public:
	bool                                               bAllowDuplicates;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNotifyOnlyOnInitialAward;                                // 0x0029(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.AccountAward");
		return ptr;
	}

};


// Class Remnant.AccountAwardRecipe
// 0x0008 (0x00B8 - 0x00B0)
class UAccountAwardRecipe : public UCraftingRecipe_Base
{
public:
	class UClass*                                      Award;                                                    // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.AccountAwardRecipe");
		return ptr;
	}

};


// Class Remnant.ActionBuff
// 0x0038 (0x0260 - 0x0228)
class UActionBuff : public UActionBase
{
public:
	float                                              Duration;                                                 // 0x0228(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Persistent;                                               // 0x022C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x022D(0x0003) MISSED OFFSET
	struct FName                                       ContextualDialogTrigger;                                  // 0x0230(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ContextualDialogTriggerRate;                              // 0x0238(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VisualPriority;                                           // 0x023C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ElapsedTime;                                              // 0x0240(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0244(0x000C) MISSED OFFSET
	class UVisualComponent*                            CachedVisuals;                                            // 0x0250(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActionComponent*                            CachedActions;                                            // 0x0258(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.ActionBuff");
		return ptr;
	}


	void ResetTimer();
	void PauseDuration(bool* Paused);
	bool IsDurationPaused();
	float GetRemainingTime();
	float GetElapsedTimePct();
	bool GetDesiredVisual(struct FName* Slot, struct FName* ID);
	void ApplyTimerDelta(float* DeltaTime);
};


// Class Remnant.AnimNotify_ShowLastUsedItem
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_ShowLastUsedItem : public UAnimNotify
{
public:
	bool                                               bShowItem;                                                // 0x0038(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.AnimNotify_ShowLastUsedItem");
		return ptr;
	}

};


// Class Remnant.Armor
// 0x0000 (0x05A8 - 0x05A8)
class AArmor : public AEquipment
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.Armor");
		return ptr;
	}

};


// Class Remnant.Checkpoint
// 0x0000 (0x0330 - 0x0330)
class ACheckpoint : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.Checkpoint");
		return ptr;
	}


	void OnFinishActivation();
	void OnEndGrab(class ARemnantCharacter** Player);
	void OnBeginGrab(class ARemnantCharacter** Player);
	void OnBeginActivation();
	void OnActivate();
	bool CanCheckpointActivate();
};


// Class Remnant.DragonHeart
// 0x0010 (0x0608 - 0x05F8)
class ADragonHeart : public AUseableItem
{
public:
	int                                                NumCharges;                                               // 0x05F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05FC(0x0004) MISSED OFFSET
	class UClass*                                      UpgradeItemBP;                                            // 0x0600(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.DragonHeart");
		return ptr;
	}


	void Regenerate();
	int GetMaxCurrentQuantity();
};


// Class Remnant.EmoteAward
// 0x0028 (0x0058 - 0x0030)
class UEmoteAward : public UAccountAward
{
public:
	TSoftObjectPtr<class UClass>                       Emote;                                                    // 0x0030(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.EmoteAward");
		return ptr;
	}

};


// Class Remnant.Emote
// 0x0070 (0x0098 - 0x0028)
class UEmote : public UObject
{
public:
	struct FName                                       StateName;                                                // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Label;                                                    // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>                   Icon;                                                     // 0x0048(0x0028) (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideAudio;                                           // 0x0070(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	struct FName                                       SoundSetID;                                               // 0x0074(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FText                                       SubtitleText;                                             // 0x0080(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.Emote");
		return ptr;
	}


	class UTexture2D* GetIcon(class UEmotesComponent** Emotes, struct FName* Reason);
};


// Class Remnant.EmotesComponent
// 0x0040 (0x0138 - 0x00F8)
class UEmotesComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnIconLoaded;                                             // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              Slots;                                                    // 0x0108(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UClass*>                              UnlockedEmotes;                                           // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FEmoteIconState>                     IconStates;                                               // 0x0128(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.EmotesComponent");
		return ptr;
	}


	void UnlockEmote(class UClass** NewEmote);
	void SlotEmote(int* Slot, class UClass** Emote);
	void ServerUpdateSlots(TArray<class UClass*>* NewSlots);
	void ServerUnlockEmote(class UClass** Emote);
	class UTexture2D* RequestEmoteIcon(class UClass** Emote, struct FName* Reason);
	void OnLoadIcon(class UClass** Emote);
	bool HasEmote(class UClass** Emote);
	TArray<class UEmote*> GetUnlockedEmotes(TArray<class UClass*>* IgnoreList);
	class UEmote* GetEmoteForSlot(int* Index);
	void ClearEmoteIcon(class UClass** Emote, struct FName* Reason);
	void ClearAllEmoteIcons(struct FName* Reason);
};


// Class Remnant.EventRegion
// 0x00D8 (0x0408 - 0x0330)
class AEventRegion : public AActor
{
public:
	class UPersistenceComponent*                       PersistenceComponent;                                     // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NameID;                                                   // 0x0338(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMusicSet*                                   MusicSet;                                                 // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MusicState;                                               // 0x0348(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoStartEvent;                                           // 0x0350(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoEndEvent;                                             // 0x0351(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DisableCommitsWhenActive;                                 // 0x0352(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               StartsActive;                                             // 0x0353(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Complete;                                                 // 0x0354(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBegin;                                                  // 0x0358(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEnd;                                                    // 0x0368(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerEnter;                                            // 0x0378(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerExit;                                             // 0x0388(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerDead;                                             // 0x0398(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAllPlayersDead;                                         // 0x03A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUpdateActiveState;                                      // 0x03B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FEventRegionCharacter>               Characters;                                               // 0x03C8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	bool                                               Active;                                                   // 0x03D8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               Locked;                                                   // 0x03D9(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03DA(0x0006) MISSED OFFSET
	TArray<class APlayerController*>                   Players;                                                  // 0x03E0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x8];                                       // 0x03F0(0x0008) MISSED OFFSET
	TArray<class URemnantQuestComponent*>              RegisteredRegionComponents;                               // 0x03F8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.EventRegion");
		return ptr;
	}


	void PlayerExit(class ARemnantCharacter** Character);
	void PlayerEnter(class ARemnantCharacter** Character);
	void OnRep_Players();
	void OnRep_Active();
	void OnDead(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause);
	void LockEvent();
	bool IsPlayerInRegion(class APlayerController** Controller);
	bool IsLocked();
	bool IsLocalPlayerInRegion();
	bool IsComplete();
	bool IsCharacterInRegion(class ARemnantCharacter** Character);
	bool IsActive();
	bool HasLocalPlayerVisited();
	class ARemnantCharacter* GetFirstCharacter();
	class AEventRegion* STATIC_GetEventRegionForActor(class AActor** Actor, struct FName* EventRegionNameID);
	class AEventRegion* STATIC_GetEventRegionContainingActor(class AActor** Actor);
	TArray<struct FEventRegionCharacter> GetCharacters();
	void End();
	void CompleteEvent();
	void Begin();
};


// Class Remnant.FlashlightInstanceData
// 0x0008 (0x0058 - 0x0050)
class UFlashlightInstanceData : public UEquipmentInstanceData
{
public:
	float                                              Charge;                                                   // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Depleted;                                                 // 0x0054(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               On;                                                       // 0x0055(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0056(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.FlashlightInstanceData");
		return ptr;
	}

};


// Class Remnant.Flashlight
// 0x0040 (0x0638 - 0x05F8)
class AFlashlight : public AUseableItem
{
public:
	bool                                               On;                                                       // 0x05F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05F9(0x0003) MISSED OFFSET
	float                                              FlashThreshold;                                           // 0x05FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChargeTimeMin;                                            // 0x0600(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0604(0x0004) MISSED OFFSET
	TArray<struct FName>                               LightOverlapTags;                                         // 0x0608(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              LightOverlapActors;                                       // 0x0618(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0628(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.Flashlight");
		return ptr;
	}


	void ServerToggleFlashlight();
	void OnTurnedOn();
	void OnTurnedOff();
	void OnEndFlash();
	void OnBeginFlash();
	void LightEndOverlap(class AActor** Actor);
	void LightBeginOverlap(class AActor** Actor);
	void ApplyChargeDelta(float* Delta);
};


// Class Remnant.GameReadyCondition
// 0x0000 (0x0030 - 0x0030)
class UGameReadyCondition : public UCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.GameReadyCondition");
		return ptr;
	}

};


// Class Remnant.GenericItem
// 0x0038 (0x04E8 - 0x04B0)
class AGenericItem : public AItem
{
public:
	class USpawnTable*                                 RandomizedDrop;                                           // 0x04B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SpawnTags;                                                // 0x04B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bShareNonItemPickups;                                     // 0x04C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	struct FSpawnList                                  CachedSpawnList;                                          // 0x04D0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, SaveGame, RepNotify, NativeAccessSpecifierPublic)
	bool                                               bUseGeneratedObjectLabel;                                 // 0x04E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseGeneratedObjectIcon;                                  // 0x04E1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseGeneratedObjectPickupSound;                           // 0x04E2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAddToInventory;                                          // 0x04E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSaveOnAward;                                             // 0x04E4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04E5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.GenericItem");
		return ptr;
	}


	bool ValidatePickupHandled(struct FSpawnList* SpawnList, class UInventoryComponent** Inventory);
	bool ValidateAddToInventory(struct FSpawnList* SpawnList, class UInventoryComponent** Inventory);
	void OnRep_CachedSpawnList();
	void OnFinishedItemInit(struct FSpawnList* DisplayEntry);
	bool HasMaxSpawnsForCharacter(class AActor** Actor);
	void HandleAward(struct FSpawnList* SpawnList, class UInventoryComponent** Inventory, bool* bForceNoSharing);
};


// Class Remnant.ItemType_Throwable
// 0x0000 (0x0080 - 0x0080)
class UItemType_Throwable : public UItemType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.ItemType_Throwable");
		return ptr;
	}

};


// Class Remnant.SpawnedGrenade
// 0x0060 (0x0390 - 0x0330)
class ASpawnedGrenade : public AActor
{
public:
	class AGrenade*                                    Grenade;                                                  // 0x0330(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0338(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSpawnedGrenadeRepData                      GrenadeRepData;                                           // 0x0340(0x0020) (Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0360(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.SpawnedGrenade");
		return ptr;
	}


	void OnStoppedMoving();
	void OnRep_GrenadeRepData();
	void OnDetonated();
	float GetGrenadeLifeSpan();
	class AGrenade* GetGrenadeItemCDO();
	void Detonate();
};


// Class Remnant.Grenade
// 0x00A0 (0x0660 - 0x05C0)
class AGrenade : public AWeaponBase
{
public:
	EUsableActivationType                              ActivationType;                                           // 0x05C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bConsumeInput;                                            // 0x05C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x05C2(0x0002) MISSED OFFSET
	float                                              HoldTime;                                                 // 0x05C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ThrowInput;                                               // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DrawPathVisualization;                                    // 0x05D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05D1(0x0007) MISSED OFFSET
	class UClass*                                      ProximityVisualActorBP;                                   // 0x05D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x05E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWeaponAffinityComponent*                    WeaponAffinity;                                           // 0x05E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SpawnedGrenadeBP;                                         // 0x05F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       EquipAnimID;                                              // 0x05F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ThrowAnimID;                                              // 0x0600(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ThrowSocket;                                              // 0x0608(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxBounces;                                               // 0x0610(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StopSpeed;                                                // 0x0614(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnergyLossAlongNormal;                                    // 0x0618(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnergyLossAgainstNormal;                                  // 0x061C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TraceRadius;                                              // 0x0620(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThrowSpeed;                                               // 0x0624(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GravityZ;                                                 // 0x0628(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumTargetDistance;                                    // 0x062C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGrenadeState                                      State;                                                    // 0x0630(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x2F];                                      // 0x0631(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.Grenade");
		return ptr;
	}


	bool ValidateUse();
	void Throw();
	void ServerThrowPressed(struct FVector_NetQuantize* TargetLocation);
	void ServerKeyPressed(struct FVector_NetQuantize* TargetLocation);
	void OnRep_State(EGrenadeState* PreviousState);
	void MulticastThrown();
	void MulticastPlayThrowAnim();
	void MulticastPlayEquipAnim();
	float GetTotalGrenadeLifeSpan();
	float GetRemainingGrenadeLifeSpan();
	float GetRange();
	bool GetDetonatesWhenStoppedMoving();
	float GetDamageRadius();
	float GetDamage();
	void STATIC_CalculateGrenadePath(class AActor** Projectile, class AActor** Thrower, class AGrenade** GrenadeItem, struct FVector* StartLocation, struct FVector* StartVelocity, float* SimulationTime, TArray<struct FPredictProjectilePathPointData>* OutPath, int* OutNumBounces);
};


// Class Remnant.RemnantAnimInstance
// 0x0030 (0x0AE0 - 0x0AB0)
class URemnantAnimInstance : public UAnimInstanceGunfire
{
public:
	bool                                               bIsStopped;                                               // 0x0AB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsJogging;                                               // 0x0AB1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsSprinting;                                             // 0x0AB2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsMovingRightward;                                       // 0x0AB3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoLookPose;                                              // 0x0AB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0AB5(0x0003) MISSED OFFSET
	float                                              JogRef;                                                   // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SprintRef;                                                // 0x0ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bComputeMoveDirection;                                    // 0x0AC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0AC1(0x0003) MISSED OFFSET
	float                                              MoveRightRef;                                             // 0x0AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNeedsLookPose;                                           // 0x0AC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0AC9(0x0003) MISSED OFFSET
	struct FName                                       NoLookPoseTag;                                            // 0x0ACC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0AD4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantAnimInstance");
		return ptr;
	}

};


// Class Remnant.GunnerAnimInstance
// 0x0020 (0x0B00 - 0x0AE0)
class UGunnerAnimInstance : public URemnantAnimInstance
{
public:
	bool                                               bIsAimingForward;                                         // 0x0AE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNeedsTargetAlign;                                        // 0x0AE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0AE2(0x0002) MISSED OFFSET
	float                                              TurnSpeedRef;                                             // 0x0AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AimForwardRef;                                            // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckTargetAlign;                                        // 0x0AEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0AED(0x0003) MISSED OFFSET
	struct FName                                       TargetAlignTag;                                           // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0AF8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.GunnerAnimInstance");
		return ptr;
	}

};


// Class Remnant.GunObstructionCondition
// 0x0008 (0x0038 - 0x0030)
class UGunObstructionCondition : public UCondition
{
public:
	EGunObstructionTypes                               Type;                                                     // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bInObstructedState;                                       // 0x0031(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.GunObstructionCondition");
		return ptr;
	}

};


// Class Remnant.ItemAward
// 0x0030 (0x0060 - 0x0030)
class UItemAward : public UAccountAward
{
public:
	TSoftObjectPtr<class UClass>                       Item;                                                     // 0x0030(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.ItemAward");
		return ptr;
	}

};


// Class Remnant.ItemCategory_Quest
// 0x0000 (0x0048 - 0x0048)
class UItemCategory_Quest : public UItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.ItemCategory_Quest");
		return ptr;
	}

};


// Class Remnant.ItemCategory_PlayerQuest
// 0x0000 (0x0048 - 0x0048)
class UItemCategory_PlayerQuest : public UItemCategory_Quest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.ItemCategory_PlayerQuest");
		return ptr;
	}

};


// Class Remnant.LegacyTraitsComponent
// 0x0008 (0x01C0 - 0x01B8)
class ULegacyTraitsComponent : public UTraitsComponent
{
public:
	ETraitProgressionType                              ProgressionType;                                          // 0x01B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01B9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.LegacyTraitsComponent");
		return ptr;
	}

};


// Class Remnant.LootContainer
// 0x0038 (0x0368 - 0x0330)
class ALootContainer : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnGenerated;                                              // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FSpawnList                                  SpawnList;                                                // 0x0340(0x0010) (Protected, NativeAccessSpecifierProtected)
	TArray<struct FLootContainerItem>                  Items;                                                    // 0x0350(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                               IsGenerating;                                             // 0x0360(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0361(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.LootContainer");
		return ptr;
	}


	void OnSpawnListLoaded();
	void Generate(class USpawnTable** SpawnTable, TArray<struct FName>* SpawnTags);
	void ClearItems();
};


// Class Remnant.LoreItem
// 0x0018 (0x04C8 - 0x04B0)
class ALoreItem : public AItem
{
public:
	bool                                               AutoOpenUI;                                               // 0x04B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideHideReadUI;                                       // 0x04B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x04B2(0x0006) MISSED OFFSET
	TArray<struct FLorePage>                           Pages;                                                    // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.LoreItem");
		return ptr;
	}


	void STATIC_LoreNotify(class UObject** WorldContextObject, struct FLorePage* Page);
};


// Class Remnant.Matchmaker
// 0x06B8 (0x06E0 - 0x0028)
class UMatchmaker : public UObject
{
public:
	TArray<struct FBlueprintSessionResult>             FoundSessions;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, NativeAccessSpecifierPublic)
	bool                                               bMatchmakingDisabled;                                     // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStateFailed;                                            // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSessionsFound;                                          // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSessionCreated;                                         // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSessionStarted;                                         // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSessionEnded;                                           // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSessionJoined;                                          // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSessionJoinAttempt;                                     // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSessionJoinAttemptRetry;                                // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSessionJoinAttemptsFailed;                              // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	ESessionType                                       CurrentSessionType;                                       // 0x00D0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnShowMatchmakingEventMessage;                            // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnWaitDialog;                                             // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRegisterPlayer;                                         // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUnregisterPlayer;                                       // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x5C8];                                     // 0x0118(0x05C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.Matchmaker");
		return ptr;
	}


	void UpdateSession();
	void UpdateJoinability(bool* isJoinable);
	void StartSession();
	void ShowSessionGamertagInfo(struct FBlueprintSessionResult* SessionInfo);
	void SetSessionJoinability(bool* isJoinable);
	void RejoinLastSession();
	void OnShowQueuedMatchmakingEventMessages();
	void OnSessionEndedEvent();
	void OnPlayerNameChanged();
	void OnMainMenuLoaded();
	void KickPlayer(class APlayerController** PlayerController, bool* Banned);
	void JoinSession(struct FBlueprintSessionResult* SearchResult);
	bool IsSessionJoinable();
	bool IsPresenceJoinURLValid();
	bool IsOnline();
	bool IsLocalCharacterSurvival();
	bool IsLocalCharacterHardcore();
	bool IsJoiningSession();
	bool IsFindingSessions();
	void InviteFriend();
	void Init(class UObject** WorldContextObject, class APlayerController** PlayerController);
	struct FName GetSessionStateName();
	struct FSessionDetails GetSessionDetails(struct FBlueprintSessionResult* Session);
	class UMatchmaker* STATIC_GetMatchmakerInstance(class UObject** WorldContextObject);
	class FString GetCurrentSessionDisplay();
	void EndFindSessions();
	void DestroySession();
	void CreateSession(ESessionType* SessionType, bool* DisableJoinability);
	void ChangeSession(ESessionType* NewSessionType, bool* Force);
	bool CanRejoinLastSession();
	bool CanJoinSessionGameMode(class UObject** WorldContextObject, struct FBlueprintSessionResult* Session);
	bool CanChangeSessiontype();
	void BeginJoinPublicGame(ELastSearchType* SearchType);
	void BeginFindSessions();
};


// Class Remnant.MatchmakerListenerInterface
// 0x0000 (0x0028 - 0x0028)
class UMatchmakerListenerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.MatchmakerListenerInterface");
		return ptr;
	}


	void OnSessionStarted();
	void OnSessionsFound(TArray<struct FBlueprintSessionResult>* Sessions);
	void OnSessionJoined();
	void OnSessionFailed(struct FName* Reason);
	void OnSessionEnded();
	void OnSessionCreated();
};


// Class Remnant.MinimapThumbnail
// 0x0028 (0x0358 - 0x0330)
class AMinimapThumbnail : public AActor
{
public:
	class UTexture2D*                                  Thumbnail;                                                // 0x0330(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TextureID;                                                // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TileSize;                                                 // 0x033C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TileOffset;                                               // 0x0348(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0354(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.MinimapThumbnail");
		return ptr;
	}

};


// Class Remnant.PlayersNearbyCondition
// 0x0008 (0x0038 - 0x0030)
class UPlayersNearbyCondition : public UCondition
{
public:
	float                                              Range;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               TestLOS;                                                  // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.PlayersNearbyCondition");
		return ptr;
	}

};


// Class Remnant.PlayerStateRemnant
// 0x0028 (0x04C0 - 0x0498)
class APlayerStateRemnant : public APlayerStateGunfire
{
public:
	struct FScriptMulticastDelegate                    OnChatRestrictionChanged;                                 // 0x0498(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLocalPlayerTargetChanged;                               // 0x04A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bTraveling;                                               // 0x04B8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsChatRestricted;                                        // 0x04B9(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsLocalPlayerTarget;                                     // 0x04BA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsHost;                                                  // 0x04BB(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.PlayerStateRemnant");
		return ptr;
	}


	void SetIsLocalPlayerTarget(bool* IsTarget);
	void ServerSetChatRestricted(bool* ChatRestricted);
	void OnRep_Traveling();
	void OnRep_ChatRestricted();
	bool IsTraveling();
	bool IsChatRestricted();
};


// Class Remnant.PreservedUserWidget
// 0x0000 (0x0240 - 0x0240)
class UPreservedUserWidget : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.PreservedUserWidget");
		return ptr;
	}

};


// Class Remnant.QuestItemType
// 0x0028 (0x00A8 - 0x0080)
class UQuestItemType : public UItemType
{
public:
	TSoftObjectPtr<class UClass>                       Quest;                                                    // 0x0080(0x0028) (Edit, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.QuestItemType");
		return ptr;
	}

};


// Class Remnant.QuestTrigger
// 0x0048 (0x0378 - 0x0330)
class AQuestTrigger : public AActor
{
public:
	class ATriggerVolume*                              TriggerVolume;                                            // 0x0330(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NameID;                                                   // 0x0338(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerEnter;                                            // 0x0340(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerExit;                                             // 0x0350(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bUseManualCollision;                                      // 0x0360(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0361(0x0007) MISSED OFFSET
	TArray<class ARemnantCharacter*>                   Characters;                                               // 0x0368(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.QuestTrigger");
		return ptr;
	}


	bool IsLocalPlayerInRegion();
	class ATriggerVolume* GetTriggerVolume();
	TArray<class ARemnantCharacter*> GetCharacters();
};


// Class Remnant.RadialShortcutComponent
// 0x0000 (0x00F8 - 0x00F8)
class URadialShortcutComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RadialShortcutComponent");
		return ptr;
	}

};


// Class Remnant.Zone
// 0x0048 (0x0070 - 0x0028)
class UZone : public UObject
{
public:
	int                                                ID;                                                       // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class FString                                      Level;                                                    // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ZoneRating;                                               // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTileCoord                                  Position;                                                 // 0x0044(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTileCoord                                  Size;                                                     // 0x0050(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<struct FTile>                               Tiles;                                                    // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.Zone");
		return ptr;
	}

};


// Class Remnant.RandomWorld
// 0x0028 (0x0050 - 0x0028)
class URandomWorld : public UObject
{
public:
	int                                                ZoneIDGen;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<class UZone*>                               Zones;                                                    // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FZoneConnection>                     Connections;                                              // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RandomWorld");
		return ptr;
	}

};


// Class Remnant.RasterWidgetComponent
// 0x0000 (0x06C0 - 0x06C0)
class URasterWidgetComponent : public UWidgetComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RasterWidgetComponent");
		return ptr;
	}


	class UTexture* GetWidgetTexture();
	void ForceRedraw();
	class UMaterialInstanceDynamic* CreateWidgetMaterial(class UPrimitiveComponent** Primitive, class UMaterialInterface** SourceMaterial, struct FName* MaterialTextureName, int* ElementIndex);
};


// Class Remnant.RemnantArchetype
// 0x0080 (0x00A8 - 0x0028)
class URemnantArchetype : public UObject
{
public:
	struct FText                                       Label;                                                    // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, AssetRegistrySearchable, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                              // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Image;                                                    // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UClass>                       PawnClass;                                                // 0x0060(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              StartingGear;                                             // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FArchetypeStartingTrait>             StartingTraits;                                           // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantArchetype");
		return ptr;
	}

};


// Class Remnant.RemnantRangedWeapon
// 0x00D8 (0x0C70 - 0x0B98)
class ARemnantRangedWeapon : public ARangedWeapon
{
public:
	class UClass*                                      DefaultMod;                                               // 0x0B98(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWeaponAffinityComponent*                    WeaponAffinity;                                           // 0x0BA0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       AltFireInput;                                             // 0x0BA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Power;                                                    // 0x0BB0(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Charges;                                                  // 0x0BB4(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0BB5(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPowerChanged;                                           // 0x0BB8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChargesChanged;                                         // 0x0BC8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUseMod;                                                 // 0x0BD8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUseModFail;                                             // 0x0BE8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnActivateMod;                                            // 0x0BF8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	EModActiveState                                    ActiveState;                                              // 0x0C08(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0C09(0x0003) MISSED OFFSET
	int                                                ActiveModActionID;                                        // 0x0C0C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x48];                                      // 0x0C10(0x0048) MISSED OFFSET
	float                                              AdditionalRadius;                                         // 0x0C58(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AdditionalDistance;                                       // 0x0C5C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AdditionalRelativeOffsets;                                // 0x0C60(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0C6C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantRangedWeapon");
		return ptr;
	}


	void UseMod();
	void UseCharge();
	void UseAllCharges();
	bool ShouldModCancelUse();
	void SetModActive(EModActiveState* ModState, int* ActionID, bool* bForceNotify);
	void ServerUseWithAim(struct FVector_NetQuantize* AimOrigin, struct FVector_NetQuantize* AimEnd);
	void ServerUse();
	void OnRep_Power();
	void OnRep_ModActive();
	void OnRep_Charges();
	void OnFinishWeaponModeAnimation();
	void OnFinishUseState(struct FName* StateName, struct FName* PreviousStateName);
	void OnFinishUseAnimation();
	void OnAltFireReleased();
	void OnAltFirePressed();
	void OnActivateSecondary();
	void OnActivate();
	void OnActionRemoved(class UActionBase** Action);
	void MulticastUse();
	bool IsModActive();
	class ARemnantWeaponMod* GetWeaponMod();
	float GetPower();
	EModActiveState GetModActiveState();
	float GetModActiveRemainingPct();
	unsigned char GetCharges();
	void DelayedDeactivate();
};


// Class Remnant.RemnantBeamWeapon
// 0x0008 (0x0C78 - 0x0C70)
class ARemnantBeamWeapon : public ARemnantRangedWeapon
{
public:
	bool                                               BeamWeaponFiring;                                         // 0x0C70(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0C71(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantBeamWeapon");
		return ptr;
	}


	void SetBeamFiring_Server(bool* Firing);
	void OnRep_BeamFiring();
	void OnEndBeamFX();
	void OnBeginBeamFX();
	bool IsBeamFiring();
};


// Class Remnant.RemnantCharacter
// 0x0230 (0x0CD0 - 0x0AA0)
class ARemnantCharacter : public APlayerGunfire
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0AA0(0x0008) MISSED OFFSET
	class UVisualComponent*                            VisualComp;                                               // 0x0AA8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URemnantPlayerInventoryComponent*            Inventory;                                                // 0x0AB0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEmotesComponent*                            Emotes;                                                   // 0x0AB8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FemaleAnimInstanceClass;                                  // 0x0AC0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               FemaleSkeletalMesh;                                       // 0x0AC8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVisualSet*                                  FemaleVisualSet;                                          // 0x0AD0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGender                                            Gender;                                                   // 0x0AD8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0AD9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPossessedBy;                                            // 0x0AE0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bHasAggro;                                                // 0x0AF0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0AF1(0x0003) MISSED OFFSET
	int                                                ControllerIndex;                                          // 0x0AF4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LastUsedItemId;                                           // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0AFC(0x0004) MISSED OFFSET
	class FString                                      CurrentPlayerInfoTag;                                     // 0x0B00(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowHelmet;                                               // 0x0B10(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0B11(0x0003) MISSED OFFSET
	struct FName                                       HelmetSlot;                                               // 0x0B14(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       ShowHelmetOption;                                         // 0x0B1C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0B24(0x0004) MISSED OFFSET
	class ACheckpoint*                                 GrabbedCheckpoint;                                        // 0x0B28(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PrimaryWeaponType;                                        // 0x0B30(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ObstructedAdditionalDistance;                             // 0x0B38(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ObstructedAdditionalRadius;                               // 0x0B3C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGunObstructionParameters                   StandingParameters;                                       // 0x0B40(0x0054) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGunObstructionParameters                   StandingExtentParameters;                                 // 0x0B94(0x0054) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGunObstructionParameters                   CrouchingParameters;                                      // 0x0BE8(0x0054) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGunObstructionParameters                   CrouchExtentParameters;                                   // 0x0C3C(0x0054) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bDeactivated;                                             // 0x0C90(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0C91(0x0007) MISSED OFFSET
	class ARemnantPlayerController*                    OldController;                                            // 0x0C98(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPersistentBuff>                     PersistentBuffs;                                          // 0x0CA0(0x0010) (ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	bool                                               bOnlyExitDialogFromHostileDamage;                         // 0x0CB0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bManualIgnoreDamageExitingDialog;                         // 0x0CB1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x6];                                       // 0x0CB2(0x0006) MISSED OFFSET
	TArray<class UClass*>                              ExitDialogDamageClasses;                                  // 0x0CB8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	class APawn*                                       LocalValidationPawn;                                      // 0x0CC8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantCharacter");
		return ptr;
	}


	void UpdatePlayerInfoTag();
	void UpdatePersistentBuffs();
	void TeleportToSpawnPoint(class AActor** SpawnPoint);
	void SetSpawnPoint(class ASpawnPoint** SpawnPoint);
	void SetOldController(class ARemnantPlayerController** PreviousController);
	void SetHelmetShown(bool* bShow);
	void SetGrabbedCheckpoint(class ACheckpoint** NewCheckpoint);
	void SetDeactivated();
	void ServerSetHelmetShown(bool* bShow);
	void ResetAmmoInClip();
	void RemovePersistentBuff(class UActionBuff** Buff);
	void OnShowHelmetOptionChanged(class UUserSetting** AppliedSetting, class UGameUserSettingsGunfire** UserSettings);
	void OnRespawnAfterDeath();
	void OnRep_ShowHelmet();
	void OnRep_GrabbedCheckpoint(class ACheckpoint** Previous);
	void OnRep_Deactivated();
	void OnCharacterDied(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause);
	bool IsReviving();
	bool IsDead();
	void InitializePersistentBuffs();
	class ARemnantPlayerController* GetOldController();
	class ARangedWeapon* GetCurrentRangedWeapon();
	class USavedCharacter* GetCharacterInfo();
	int GetAge();
	int ComputePowerLevel();
	int ComputeOffenseLevel();
	int ComputeDefenseLevel();
	void ClientTeleportToSpawnPoint(class ASpawnPoint** SpawnPoint);
	void ClientTeleport(struct FTransform* Transform);
	void ClientSetSpawnPoint(struct FPersistenceKey* SpawnPointID);
	void ClientRemoveAllPings();
	void AddPersistentBuff(class UActionBuff** Buff);
};


// Class Remnant.SavedCharacter
// 0x0130 (0x0158 - 0x0028)
class USavedCharacter : public UObject
{
public:
	int                                                Level;                                                    // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Age;                                                      // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TraitRank;                                                // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UClass>                       Archetype;                                                // 0x0038(0x0028) (BlueprintVisible, SaveGame, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasInitializedArchetype;                                  // 0x0060(0x0001) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFinishedIntro;                                           // 0x0061(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSkipIntro;                                               // 0x0062(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0063(0x0005) MISSED OFFSET
	TArray<struct FVisualSlot>                         Visuals;                                                  // 0x0068(0x0010) (BlueprintVisible, ZeroConstructor, SaveGame, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FSavedEquipmentVisual>               EquipmentVisuals;                                         // 0x0078(0x0010) (ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	EGender                                            Gender;                                                   // 0x0088(0x0001) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELastHostType                                      HostType;                                                 // 0x0089(0x0001) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x2];                                       // 0x008A(0x0002) MISSED OFFSET
	int                                                ID;                                                       // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              CharacterBlob;                                            // 0x0090(0x0010) (ZeroConstructor, SaveGame, Deprecated, NativeAccessSpecifierPublic)
	struct FPersistenceBlob                            CharacterData;                                            // 0x00A0(0x0010) (SaveGame, NativeAccessSpecifierPublic)
	int                                                QuestDifficulty;                                          // 0x00B0(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InitialDifficulty;                                        // 0x00B4(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PowerLevel;                                               // 0x00B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	TArray<struct FName>                               Keys;                                                     // 0x00C0(0x0010) (ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TMap<struct FName, int>                            Counters;                                                 // 0x00D0(0x0050) (ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	class FString                                      Name;                                                     // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	ERemnantCharacterType                              CharacterType;                                            // 0x0130(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDeceased;                                                // 0x0131(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0132(0x0002) MISSED OFFSET
	int                                                BossCount;                                                // 0x0134(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bValidExit;                                               // 0x0138(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	int                                                InvalidExitCount;                                         // 0x013C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAccountAwardInstance>               ReceivedAwards;                                           // 0x0140(0x0010) (ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	bool                                               bHasHandledCurrencyAward;                                 // 0x0150(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0151(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.SavedCharacter");
		return ptr;
	}


	void SetSkipIntro(bool* ShouldSkipIntro);
	void SetKey(struct FName* Key);
	void SetCharacterType(ERemnantCharacterType* NewCharacterType);
	void MarkValidExit();
	void IncrementCounter(struct FName* Counter);
	bool HasKey(struct FName* Key);
	int GetCounter(struct FName* Counter);
	bool CheckForInvalidExit();
};


// Class Remnant.RemnantSaveGameProfile
// 0x00E8 (0x0130 - 0x0048)
class URemnantSaveGameProfile : public USaveGameProfile
{
public:
	TArray<class USavedCharacter*>                     Characters;                                               // 0x0048(0x0010) (ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	int                                                ActiveCharacterIndex;                                     // 0x0058(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNeedsCheatedSaveConfirmation;                            // 0x005C(0x0001) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	TArray<class UClass*>                              AccountAwards;                                            // 0x0060(0x0010) (ZeroConstructor, SaveGame, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FAccountCurrencyInstance>            AccountCurrencies;                                        // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	int                                                SurvivalBossesKilled;                                     // 0x0080(0x0004) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SurvivalCoopBossesKilled;                                 // 0x0084(0x0004) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SurvivalItemsAcquired;                                    // 0x0088(0x0004) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	TMap<TSoftObjectPtr<class UClass>, int>            SurvivalMiniBossQuestsCompleteMap;                        // 0x0090(0x0050) (BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TMap<TSoftObjectPtr<class UClass>, int>            SurvivalWorldBossQuestsCompleteMap;                       // 0x00E0(0x0050) (BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantSaveGameProfile");
		return ptr;
	}


	bool UpdateAccountCurrency(class UClass** CurrencyType, int* Quantity);
	int GetAccountCurrencyForItemType(class UClass** CurrencyType);
};


// Class Remnant.RemnantCharacterManager
// 0x00D0 (0x00F8 - 0x0028)
class URemnantCharacterManager : public UObject
{
public:
	struct FScriptMulticastDelegate                    CharacterCreated;                                         // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    CharacterDeleted;                                         // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    CharaterCreationFailed;                                   // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    CharacterLoadingFailed;                                   // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnActiveCharacterChanged;                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	TArray<class USavedCharacter*>                     TransientCharacters;                                      // 0x0080(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TMap<class APlayerController*, class USavedCharacter*> ClientCharacters;                                         // 0x0090(0x0050) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UClass*>                              NewCharacterEquipmentVisuals;                             // 0x00E0(0x0010) (BlueprintVisible, ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantCharacterManager");
		return ptr;
	}


	bool STATIC_ShouldAwardHardcoreRewards(class UObject** WorldContextObject);
	bool SetActiveCharacter(int* ID);
	bool RestoreCharacters();
	bool ResolvePendingExit();
	bool STATIC_IsHardcore(class UObject** WorldContextObject);
	bool STATIC_IsDeceasedCharacter(class UObject** WorldContextObject);
	bool HasBackupCharacters();
	bool HasActiveCharacter();
	TArray<class USavedCharacter*> GetTransientCharacters();
	int GetMaxCharacterCount();
	TArray<class USavedCharacter*> GetCharacters();
	class URemnantCharacterManager* STATIC_GetCharacterManager(class UObject** WorldContextObject);
	class USavedCharacter* GetCharacterInfo(class APlayerController** Controller);
	int GetCharacterCount();
	class USavedCharacter* GetCharacterAt(int* Index);
	class USavedCharacter* GetCharacter(int* ID);
	void GetActiveEquipmentVisuals(class USavedCharacter** CharacterInfo, TArray<class UClass*>* OutVisuals, TArray<unsigned char>* OutLevels, TArray<class UClass*>* OutSkins);
	class USavedCharacter* GetActiveCharacter();
	bool DeleteTransientCharacters();
	bool DeleteTransientCharacter(int* ID);
	bool DeleteCharacter(int* ID);
	class USavedCharacter* CreateTransientCharacter(class FString* Name, class UClass** SaveGameClass, bool* SetActive, ERemnantCharacterType* CharacterType, bool* ShouldSkipIntro, TSoftObjectPtr<class UClass>* Archetype, int* StartingDifficulty, class USavedCharacter** ReferenceCharacter, TArray<class UClass*>* AllowedAccountAwards, int* ErrorCode);
	class USavedCharacter* CreateCharacter(class FString* Name, class UClass** SaveGameClass, bool* SetActive, ERemnantCharacterType* CharacterType, bool* ShouldSkipIntro, TSoftObjectPtr<class UClass>* Archetype, int* StartingDifficulty, int* ErrorCode);
};


// Class Remnant.RemnantCharacterSettings
// 0x0008 (0x0030 - 0x0028)
class URemnantCharacterSettings : public UObject
{
public:
	bool                                               CreateMalePIE;                                            // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantCharacterSettings");
		return ptr;
	}

};


// Class Remnant.RemnantCheatManager
// 0x0000 (0x00E0 - 0x00E0)
class URemnantCheatManager : public UCheatManagerGunfire
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantCheatManager");
		return ptr;
	}


	void UnlockAllWaypoints();
	void UnlockAllEmotes();
	void TravelToQuest(class FString* QuestName, class FString* ComponentName);
	void ToggleShowBlood();
	void ToggleFogOfWar();
	void ToggleDLC(ELicensedContent* License);
	void SpawnDebugQuest(class FString* NameOfBP);
	void ShowMatchmakingPowerLevel();
	void SetDifficulty(int* Difficulty);
	void RaiseDifficulty();
	void LowerDifficulty();
	void Joinability(bool* isJoinable);
	void GiveAccountAward(class FString* NameOfBP);
	void AddScrap(int* Amount);
	void AddExperience(int* Amount);
};


// Class Remnant.RemnantDifficultyScalingComponent
// 0x0000 (0x01A8 - 0x01A8)
class URemnantDifficultyScalingComponent : public UDifficultyScalingComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantDifficultyScalingComponent");
		return ptr;
	}

};


// Class Remnant.RemnantFlyCameraState
// 0x0018 (0x0108 - 0x00F0)
class URemnantFlyCameraState : public UFlyCameraState
{
public:
	class ARemnantMiniMapDisplayActor*                 CachedMiniMap;                                            // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      PreviousLockActor;                                        // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantFlyCameraState");
		return ptr;
	}

};


// Class Remnant.RemnantFogOfWarComponent
// 0x0040 (0x4730 - 0x46F0)
class URemnantFogOfWarComponent : public UFogOfWarComponent
{
public:
	float                                              Scale;                                                    // 0x46F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PanOffset;                                                // 0x46F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      LockedActor;                                              // 0x4700(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AZoneActor*                                  VisitedCoordinatesOwner;                                  // 0x4708(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x20];                                      // 0x4710(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantFogOfWarComponent");
		return ptr;
	}


	void UpdateMaterial(class UMaterialInstanceDynamic** MaterialInstance, struct FVector* WorldLocation, bool* bSetMask, float* ScaleOverride);
	void SetDebugLocation(struct FVector* NewLocation);
	void LockToActor(class AActor** Actor);
	bool HasDebugLocation();
	class AActor* GetLockActor();
	void ClearDebugLocation();
};


// Class Remnant.RemnantGameInstance
// 0x0030 (0x0310 - 0x02E0)
class URemnantGameInstance : public UGameInstanceGunfire
{
public:
	class URemnantCharacterManager*                    CharacterManager;                                         // 0x02E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPresenceJoinResult;                                     // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x18];                                      // 0x02F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantGameInstance");
		return ptr;
	}


	void OnOnlinePrivilegeChecked();
	void OnMainMenuLoaded();
	void OnDeviceChanged(int* ControllerId, EInputDevice* NewDevice);
	void OnActiveProfileSet();
	bool IsDemo();
	ERemnantDemoMode GetDemoMode();
	void DoJoinViaPresence();
	void DoAuth();
	void CheckConnectionStatusChanges();
};


// Class Remnant.RemnantGameMode
// 0x00E0 (0x0610 - 0x0530)
class ARemnantGameMode : public AGameModeGunfire
{
public:
	class UClass*                                      BaseQuest;                                                // 0x0530(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AutoLoadQuest;                                            // 0x0538(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DemoQuest;                                                // 0x0540(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DebugQuest;                                               // 0x0548(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DebugTileName;                                            // 0x0550(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DebugWaypointBP;                                          // 0x0558(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTileSet*                                    DebugTileset;                                             // 0x0560(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0568(0x0008) MISSED OFFSET
	class ARemnantQuest*                               DebugQuestInstance;                                       // 0x0570(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnAllPlayersDead;                                         // 0x0578(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnFinishRespawnAllPlayers;                                // 0x0588(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	float                                              FailResetDelay;                                           // 0x0598(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxFailResetDelay;                                        // 0x059C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ZoneTravelDelay;                                          // 0x05A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05A4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnWorldReset;                                             // 0x05A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x28];                                      // 0x05B8(0x0028) MISSED OFFSET
	struct FTimerHandle                                RespawnHandle;                                            // 0x05E0(0x0008) (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimerHandle                                FailsafeRespawnHandle;                                    // 0x05E8(0x0008) (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimerHandle                                PostAllDeathRespawnHandle;                                // 0x05F0(0x0008) (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x8];                                       // 0x05F8(0x0008) MISSED OFFSET
	TArray<class ARemnantPlayerController*>            WorldResetPlayers;                                        // 0x0600(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantGameMode");
		return ptr;
	}


	void TravelToZone(int* DestZoneID, struct FName* DestLink, class AActor** Source, bool* bForce, bool* bInstant);
	void TravelToLastCheckpoint(class AActor** Source);
	void SetPostDeathScreenTime(float* Time);
	bool SetAsRootCheckpoint(struct FZoneLinkInfo* NewZoneLink, bool* IgnoreActive);
	bool SetAsRespawnZoneLink(struct FZoneLinkInfo* NewZoneLink, bool* bIgnoreWorldState);
	void OnFullGameAvailable();
	bool IsEveryoneEntitled(ELicensedContent* License, bool* ShowFailDialog, bool* KickUnentitled);
	void IncrementAllPlayersBossCounters();
	struct FZoneLinkInfo GetRespawnZoneLink();
	void ActivateCheckpoint(class ACheckpoint** Checkpoint);
};


// Class Remnant.RemnantGameSession
// 0x0008 (0x0350 - 0x0348)
class ARemnantGameSession : public AGameSession
{
public:
	int                                                NumPublicConnections;                                     // 0x0348(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x034C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantGameSession");
		return ptr;
	}

};


// Class Remnant.RemnantGameState
// 0x0080 (0x0490 - 0x0410)
class ARemnantGameState : public AGameStateGunfire
{
public:
	bool                                               bTestMap;                                                 // 0x0410(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0411(0x0003) MISSED OFFSET
	float                                              TravelCountdownAdditionalDistance;                        // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URemnantPingManager*                         PingManager;                                              // 0x0418(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PingManagerType;                                          // 0x0420(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URemnantSpawnFilterManager*                  SpawnFilterManager;                                       // 0x0428(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnZoneTravelStateChanged;                                 // 0x0430(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAllPlayersFinishedTravel;                               // 0x0440(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FZoneTravelState                            ZoneTravelState;                                          // 0x0450(0x0018) (Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class ACheckpoint*                                 ActivatedCheckpoint;                                      // 0x0468(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ACheckpoint*                                 DeactivatingCheckpoint;                                   // 0x0470(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0478(0x0008) MISSED OFFSET
	class ACheckpoint*                                 PreviouslyActivatingCheckpoint;                           // 0x0480(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                      TravelCountdownSource;                                    // 0x0488(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantGameState");
		return ptr;
	}


	void OnRep_ZoneTravelState();
	void OnRep_ActivatedCheckpoint();
	bool STATIC_IsZoneTravelPending(class UObject** WorldContextObject, float* OutTimeRemaining);
	bool STATIC_IsZoneTravelAvailable(class UObject** WorldContextObject, class AActor** Source, bool* bIsTravelMenu, float* AdditionalDistance, EZoneTravelLock* OutReason);
	class ACheckpoint* STATIC_GetActivatedCheckpoint(class UObject** WorldContextObject, bool* bIncludeDeactivatingCheckpoint);
};


// Class Remnant.RemnantGameType
// 0x0030 (0x0058 - 0x0028)
class URemnantGameType : public UObject
{
public:
	struct FText                                       Label;                                                    // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, AssetRegistrySearchable, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                              // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, AssetRegistrySearchable, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantGameType");
		return ptr;
	}

};


// Class Remnant.RemnantHUD
// 0x0008 (0x0478 - 0x0470)
class ARemnantHUD : public AUIHud
{
public:
	class AActor*                                      ContextActor;                                             // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantHUD");
		return ptr;
	}


	bool ShouldShowSubtitles();
	bool ShouldShowHealthBars();
	void OnStopPendingTravel();
	void OnStartPendingTravel();
	bool HasInvalidDialog();
};


// Class Remnant.RemnantMapGenComponent
// 0x0020 (0x0330 - 0x0310)
class URemnantMapGenComponent : public UMapGenComponent
{
public:
	int                                                NumZones;                                                 // 0x0310(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              ZoneCoverage;                                             // 0x0314(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FZoneTileDef>                        ZoneTiles;                                                // 0x0318(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class URandomWorld*                                RandomWorld;                                              // 0x0328(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantMapGenComponent");
		return ptr;
	}

};


// Class Remnant.RemnantMeleeWeapon
// 0x0010 (0x05E0 - 0x05D0)
class ARemnantMeleeWeapon : public AMeleeWeapon
{
public:
	class UWeaponAffinityComponent*                    WeaponAffinity;                                           // 0x05D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      OverridePower2DamageType;                                 // 0x05D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantMeleeWeapon");
		return ptr;
	}

};


// Class Remnant.RemnantMiniMapDisplayActor
// 0x0010 (0x0470 - 0x0460)
class ARemnantMiniMapDisplayActor : public AMiniMapDisplayActor
{
public:
	class URemnantFogOfWarComponent*                   FogOfWar;                                                 // 0x0460(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0468(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantMiniMapDisplayActor");
		return ptr;
	}


	void OnFogOfWarChanged(int* X, int* Y);
	bool STATIC_IsAnyMiniMapDisplayed();
};


// Class Remnant.RemnantMiniMapLevelRegion
// 0x0000 (0x0358 - 0x0358)
class ARemnantMiniMapLevelRegion : public AMiniMapLevelRegion
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantMiniMapLevelRegion");
		return ptr;
	}

};


// Class Remnant.RemnantMiniMapWidget
// 0x0020 (0x0288 - 0x0268)
class URemnantMiniMapWidget : public UMiniMapWidget
{
public:
	bool                                               bIgnoreFogOfWar;                                          // 0x0268(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0269(0x0003) MISSED OFFSET
	float                                              FogOfWarOffset;                                           // 0x026C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FogOfWarTolerance;                                        // 0x0270(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0274(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantMiniMapWidget");
		return ptr;
	}


	void UpdateWidgetVisibility();
	bool ShouldIgnoreFogOfWar();
	void SetVisibleFromLevel(bool* bVisible);
	bool IsWidgetVisible();
};


// Class Remnant.RemnantPingActor
// 0x0000 (0x0330 - 0x0330)
class ARemnantPingActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantPingActor");
		return ptr;
	}


	void SetPingDetails(float* Duration, class UTexture2D** Icon, struct FColor* Color, ETailType* Tail);
	void OnCinematicEvent(class APlayerControllerGunfire** PlayerController, bool* bIsInCinematic);
};


// Class Remnant.PingSubContext
// 0x0058 (0x0080 - 0x0028)
class UPingSubContext : public UObject
{
public:
	unsigned char                                      PingType;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETownLock                                          TownLock;                                                 // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	class UTexture2D*                                  Icon;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  WorldIconOverride;                                        // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldOverrideWorldColor;                                 // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FColor                                      WorldObjectColorOverride;                                 // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       SubContextText;                                           // 0x0048(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FName                                       SoundSetID;                                               // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       SubtitleText;                                             // 0x0068(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.PingSubContext");
		return ptr;
	}


	bool IsValidForPingType(EPingType* Type);
};


// Class Remnant.PingEmoteSubContext
// 0x0008 (0x0088 - 0x0080)
class UPingEmoteSubContext : public UPingSubContext
{
public:
	int                                                EmoteIndex;                                               // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.PingEmoteSubContext");
		return ptr;
	}

};


// Class Remnant.PingRequestSubContext
// 0x0010 (0x0090 - 0x0080)
class UPingRequestSubContext : public UPingSubContext
{
public:
	EPingSubRequestType                                RequestType;                                              // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	float                                              RequestDuration;                                          // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  RequestHudIcon;                                           // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.PingRequestSubContext");
		return ptr;
	}

};


// Class Remnant.RemnantPingManager
// 0x01B8 (0x02B0 - 0x00F8)
class URemnantPingManager : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnCharacterPing;                                          // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPingRemoved;                                            // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRequestPing;                                            // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCharacterPingCooldown;                                  // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              VOCoolDownActors;                                         // 0x0138(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class AActor*>                              PingCoolDownActors;                                       // 0x0148(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<class AActor*, unsigned char>                 CharacterPingAttempts;                                    // 0x0158(0x0050) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<class AActor*, struct FTimerHandle>           CharacterPingCooldownHandles;                             // 0x01A8(0x0050) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<EPingType, struct FPrimaryPingInfo>           PingTypeMap;                                              // 0x01F8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<class UPingSubContext*>                     PingSubContexts;                                          // 0x0248(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UPingSubContext*                             PrimaryAmmoRequest;                                       // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPingSubContext*                             SecondaryAmmoRequest;                                     // 0x0260(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPingSubContext*                             HealingRequest;                                           // 0x0268(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0270(0x0010) MISSED OFFSET
	class UClass*                                      RangedWeaponType;                                         // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      PrimaryAmmoClass;                                         // 0x0288(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      SecondaryAmmoClass;                                       // 0x0290(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      PingActorBP;                                              // 0x0298(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              DefaultPingDuration;                                      // 0x02A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              VoCooldownDuration;                                       // 0x02A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      AllowedPingsPerInterval;                                  // 0x02A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02A9(0x0003) MISSED OFFSET
	float                                              PingCooldownDuration;                                     // 0x02AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantPingManager");
		return ptr;
	}


	bool IsCharacterOnVOCooldown(class AActor** Character);
	bool IsCharacterOnPingCooldown(class AActor** Character);
	float GetRemainingCharacterPingCooldown(class AActor** Character);
	class URemnantPingManager* STATIC_GetPingManager(class UObject** WorldContextObject);
	bool GetPingFromCharacter(class AActor** Character, struct FActionPing* OutPing, int* PingIndex);
	TArray<struct FActionPing> GetCurrentPings();
	void Client_UpdateCharacterPing(class AActor** Character, struct FActionPing* NewPing);
	void Client_MarkPlayerSoloPing(class AActor** Character, bool* IsSolo);
};


// Class Remnant.RemnantPlayerController
// 0x0390 (0x0A48 - 0x06B8)
class ARemnantPlayerController : public APlayerControllerGunfire
{
public:
	struct FScriptMulticastDelegate                    OnSetPawn;                                                // 0x06B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNotifyQuestReward;                                      // 0x06C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFinishTravelEvent;                                      // 0x06D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBeginTravelEvent;                                       // 0x06E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UClass*                                      TravelAction;                                             // 0x06F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelsOnDuplicateTrait;                                   // 0x0700(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bKeepPawnWhenTraveling;                                   // 0x0704(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPlayerTravelState                                 TravelState;                                              // 0x0705(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0706(0x0002) MISSED OFFSET
	float                                              TravelCleanupDelay;                                       // 0x0708(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x070C(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UClass>                       IntroQuest;                                               // 0x0710(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       IntroQuestStartLink;                                      // 0x0738(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLocalPlayerFinishedLevelSequence;                       // 0x0740(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0750(0x0003) MISSED OFFSET
	bool                                               bPrimaryWeaponToggled;                                    // 0x0753(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bJoiningMustSpectate;                                     // 0x0754(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0755(0x0003) MISSED OFFSET
	TArray<int>                                        RequiredZones;                                            // 0x0758(0x0010) (Net, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        RequiredQuests;                                           // 0x0768(0x0010) (Net, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x80];                                      // 0x0778(0x0080) MISSED OFFSET
	struct FTimerHandle                                FinishTravelHandle;                                       // 0x07F8(0x0008) (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x28];                                      // 0x0800(0x0028) MISSED OFFSET
	class URemnantArchetype*                           CachedArchetype;                                          // 0x0828(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CurrentZoneID;                                            // 0x0830(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                PendingDestinationZoneID;                                 // 0x0834(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                DestinationZoneID;                                        // 0x0838(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       DestinationLink;                                          // 0x083C(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0844(0x0004) MISSED OFFSET
	TArray<struct FRemnantQuestReward>                 QueuedQuestRewards;                                       // 0x0848(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FRemnantQuestReward>                 QueuedNotifyQueue;                                        // 0x0858(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0868(0x0004) MISSED OFFSET
	struct FName                                       MusicState;                                               // 0x086C(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData08[0x14];                                      // 0x0874(0x0014) MISSED OFFSET
	bool                                               Respawning;                                               // 0x0888(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData09[0x13];                                      // 0x0889(0x0013) MISSED OFFSET
	struct FName                                       LoadingState;                                             // 0x089C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       PendingTravelState;                                       // 0x08A4(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       CinematicState;                                           // 0x08AC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       FinalizeResetState;                                       // 0x08B4(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       AliveResetState;                                          // 0x08BC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       RespawnedResetState;                                      // 0x08C4(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       DeadResetState;                                           // 0x08CC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       SpectatingState;                                          // 0x08D4(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       DyingState;                                               // 0x08DC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       JoiningState;                                             // 0x08E4(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AudioListenerPlayerCamLerp;                               // 0x08EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AudioListenerPlayerOffset;                                // 0x08F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData10[0x4];                                       // 0x08F4(0x0004) MISSED OFFSET
	TArray<struct FName>                               TeleportStates;                                           // 0x08F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class APawn*                                       DeadPawn;                                                 // 0x0908(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData11[0x1];                                       // 0x0910(0x0001) MISSED OFFSET
	bool                                               bIsJoining;                                               // 0x0911(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData12[0xCE];                                      // 0x0912(0x00CE) MISSED OFFSET
	TArray<int>                                        PendingRewards;                                           // 0x09E0(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<int>                                        PendingCurrencyRewards;                                   // 0x09F0(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData13[0x8];                                       // 0x0A00(0x0008) MISSED OFFSET
	TArray<struct FRemnantClientInventoryChangeInfo>   ClientValidatedInventoryExceptions;                       // 0x0A08(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnLicensesGiven;                                          // 0x0A18(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData14[0x20];                                      // 0x0A28(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantPlayerController");
		return ptr;
	}


	void UpdatePlayState();
	void UpdatePerformanceLevel();
	void TravelPlayerTo(int* DestZoneID, struct FName* DestLink, bool* bForce, bool* bInstant);
	void SwapCharacter(struct FZoneLinkInfo* StartingWaypoint);
	void SetReadyToTravel();
	void SetIntroComplete();
	void ServerWorldResetComplete();
	void ServerUpdateUsingMultiplayerFeatures();
	void ServerUpdateLicensedContent(TArray<ELicensedContent>* Licenses);
	void ServerUnlockItemAward(class UClass** ItemAward, bool* bDoNotify);
	void ServerUnlockAccountCurrency(class UClass** CurrencyType, int* Quantity, bool* bDoNotify);
	void ServerStreamSwapCharacter(TArray<unsigned char>* CharacterData);
	void ServerStreamCharacterFinalize();
	void ServerStreamCharacter(TArray<unsigned char>* CharacterData);
	void ServerSetCurrentLock(EZoneTravelLock* NewLock, bool* bNewIsSaving, bool* bNewWantsTravelMenuAccess);
	void ServerRespawnSwappedCharacter(int* ZoneID, struct FName* ZoneNameId);
	void ServerRemoveTravelState();
	void ServerRemoveItem(class FString* NameOfBP, int* Quantity);
	void ServerReliableCameraLocationUpdate(struct FVector_NetQuantize* CamLoc);
	void ServerReadyToTravel();
	void ServerReadyForWorldReset();
	void ServerHandleSkipIntro();
	void ServerGiveItem(class FString* NameOfBP, int* Quantity, int* LevelOverride, bool* bAutoEquip);
	void ServerFinalizeStreamSwapCharacter();
	void ServerDestinationZoneLoaded();
	void ServerClearWaitingForZones(int* SyncCounter);
	void ServerBeginPlay();
	void ServerAddExperience(class UProgressionComponent** Progression, int* Amount);
	void Respawn(struct FZoneLinkInfo* StartingWaypoint);
	void STATIC_RemoveAccountAwardListener(struct FScriptDelegate* Event);
	void RefreshAccountAwards();
	void QueueValidClientSoftInventoryChange(TSoftObjectPtr<class UClass>* ItemSoftRef, int* Quantity, int* ItemLevel, bool* IsItemRemoval);
	void QueueValidClientInventoryChange(class UClass** ItemBP, int* Quantity, int* ItemLevel, bool* IsItemRemoval);
	void QueueManualQuestReward(class ARemnantQuest** Quest, TArray<TSoftObjectPtr<class UClass>>* Items, bool* bSkipDuplicates, bool* bAutoEquip, ERemnantQuestRewardType* RewardType, int* Quantity, int* LevelOverride, bool* bIsArchetype, bool* bWantsSaveOnAward);
	void OnSessionDisconnected(class UWorld** InWorld, class UNetDriver** NetDriver);
	void OnServerFinalizeTravel();
	void OnReadyToTravel(int* PendingZoneID);
	void OnPlayStateChanged(struct FName* PreviousState, struct FName* NewState);
	void OnPlayInEditor();
	void OnPlayerDied(unsigned char* Reason, class ACharacterGunfire** DeadCharacter, class AActor** Cause);
	void OnFinishWorldReset(class ACheckpoint** ActivatedCheckpoint);
	void OnFinishTravelLoad();
	void OnFinishTravel();
	void OnFinishPlayStateTransition(struct FName* NewState);
	void OnDeceased();
	void OnBeginWorldReset(class ACheckpoint** ActivatedCheckpoint, bool* bWasDead);
	void OnBeginTravel(int* PendingZoneID);
	void NetUpdateActiveCharacter();
	void MarkRevived();
	bool IsPlayerDead();
	bool STATIC_IsIntroQuestDisabled(class UObject** WorldContextObject);
	bool STATIC_IsIntroQuestComplete(class UObject** WorldContextObject);
	bool HasServerBegunPlay();
	bool HasLicense(ELicensedContent* License);
	bool HasGivenLicenses();
	void HandleSkipIntro();
	void GiveQuestRewards(class ARemnantQuest** Quest, class USpawnTable** SpawnTable, TArray<struct FName>* SpawnTags, ERemnantQuestRewardType* RewardType, int* RandomSeed, bool* bSkipDuplicates);
	void GiveAccountAward(class UClass** NewAward);
	float GetTimeSinceLastInput();
	bool GetTargetZoneLink(bool* bSkipTravelDestination, struct FZoneLinkInfo* OutZoneLink);
	class UInventoryComponent* GetRelevantInventoryComponentForItemType(class UClass** ItemType);
	class UInventoryComponent* GetRelevantInventoryComponentForItem(class UClass** Item);
	class UInventoryComponent* GetPlayerInventory();
	class AZoneActor* GetCurrentZone();
	EZoneTravelLock GetCurrentTravelLock();
	class APawn* GetCurrentOrDeadPawn();
	EPingGenerationResult GatherPing(struct FActionPing* OutPing);
	void EnableWidgetComponentInteraction(bool* bEnabled);
	int ComputePowerLevel();
	int ComputeItemLevel();
	void ClientUpdateUsingMultiplayerFeatures(bool* bEnabled);
	void ClientUpdateFogOfWar(int* ZoneID, struct FVisitedCoordinates* VisitedCoordinatesMap);
	void ClientUpdateAchievement(struct FAchievementId* AchievementName, int* Progress, EAchievementUpdateType* Type);
	void ClientSetWaitingForZones(int* SyncCounter);
	void ClientSetMusicState(struct FName* State);
	void ClientOnSessionChanged();
	void ClientNotifyQuestReward(struct FRemnantQuestReward* QuestReward);
	void ClientLoadDestinationZone(int* DestZoneID);
	void ClientIncrementBossCounter();
	void ClientHandleDeceased(bool* bExitToMenu);
	void ClientGiveAccountAward(class UClass** NewAward);
	void ClientFinishWorldReset(class ACheckpoint** ActivatedCheckpoint);
	void ClientFinishTravel(struct FTransform* Destination);
	void ClientBeginWorldReset(class ACheckpoint** ActivatedCheckpoint, bool* bWasDead);
	void ClientBeginTravel(bool* bRespawning, int* PendingZoneID);
	void ClearTravelLock(EZoneTravelLock* Lock);
	void ClearPawn(bool* SetCurrentAsDead, bool* ShouldClearDeadPawn);
	void ClearDeadPawn();
	void ClearCachedArchetype();
	bool CanRespawnPlayers();
	void BroadcastPing(struct FActionPing* PingRequest);
	void BroadcastFinishedLevelSequence(struct FSequencerPlayerSettings* DummySettings, class ULevelSequence** CurrentSequence, class AActor** SequenceInstigator);
	void BroadcastEmote(class UClass** Emote);
	void BroadcastClientFinishedLevelSequence(struct FSequencerPlayerSettings* SequenceSettings, class ULevelSequence** CurrentSequence, class AActor** SequenceInstigator);
	void AwardArchetype(class URemnantArchetype** ArchetypeClass, class ARemnantQuest** Quest, ERemnantQuestRewardType* RewardType, bool* bUseWhitelist, TArray<class UClass*>* WhitelistClasses, bool* bAddTraits);
	EPingGenerationResult AttemptPing();
	void ApplyTravelLock(EZoneTravelLock* Lock);
	void STATIC_AddAccountAwardListener(struct FScriptDelegate* Event);
};


// Class Remnant.PlayStateEffect_TeleportPause
// 0x0008 (0x0038 - 0x0030)
class UPlayStateEffect_TeleportPause : public UPlayStateEffect
{
public:
	bool                                               bWaitForTeleport;                                         // 0x0030(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.PlayStateEffect_TeleportPause");
		return ptr;
	}

};


// Class Remnant.RemnantPlayerInventoryComponent
// 0x0190 (0x03F0 - 0x0260)
class URemnantPlayerInventoryComponent : public UInventoryComponent
{
public:
	TArray<struct FName>                               UniqueMaterialRecipeTags;                                 // 0x0260(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAutoUpgradeableItem>                AutoUpgradeableItems;                                     // 0x0270(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UClass>>               LimitInitialLevelClasses;                                 // 0x0280(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              EquipmentVisualsSlotTypes;                                // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FCheatProtectedItemParams>           TypesToValidate;                                          // 0x02A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int                                                MaxValidItemAmountOverTime;                               // 0x02B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AddedItemTimeOutSeconds;                                  // 0x02B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DoCurrencyOverTimeValidation;                             // 0x02B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DoCurrencyValidationOnRemove;                             // 0x02B9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02BA(0x0002) MISSED OFFSET
	int                                                CurrencyQuantityTolerance;                                // 0x02BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UClass>                       NullReferenceReplacementClass;                            // 0x02C0(0x0028) (Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnClientExceptionAddedOnServer;                           // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPickedUpDuplicateUnique;                                // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<class UClass*, struct FValidationTrackedItemParams> ValidationTrackedItems;                                   // 0x0308(0x0050) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TMap<class UClass*, struct FClientValidatedItemInfo> ClientValidatedExceptions;                                // 0x0358(0x0050) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FAddedItemTypeTimeStamp>             AddedItemQueue;                                           // 0x03A8(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FInventoryScalingInfo>               LocalScalingInfo;                                         // 0x03B8(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x28];                                      // 0x03C8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantPlayerInventoryComponent");
		return ptr;
	}


	void ServerOnClientExceptionUpdate(class UClass** ItemBP, int* Quantity);
	void OnTrackedInstanceDataChanged();
	int ModifyLevelForNewItem(class UClass** ItemBP, int* ItemLevel);
	void MarkClientSoftInventoryChangeValid(TSoftObjectPtr<class UClass>* ItemSoftRef, int* Quantity, int* ItemLevel, bool* IsItemRemoval);
	void MarkClientInventoryChangeValid(class UClass** ItemBP, int* Quantity, int* ItemLevel, bool* IsItemRemoval);
	bool IsItemCheatProtected(class UClass** ItemBP);
	bool IsCheatValidationEnabled();
	int STATIC_GetLevelForNewItem(class AActor** Actor, class UClass** ItemBP, int* ItemLevel);
	void ClientValidationTimeOut();
	void AddProtectionTimeOut();
};


// Class Remnant.RemnantProgressionComponent
// 0x0058 (0x01A0 - 0x0148)
class URemnantProgressionComponent : public UProgressionComponent
{
public:
	int                                                MaxValidExperienceOverTime;                               // 0x0148(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExpTimeOutSeconds;                                        // 0x014C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FProgressionValidationInfo>          ProgressionTimeOutInfo;                                   // 0x0150(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0160(0x0020) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnExperienceGained;                                       // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0190(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantProgressionComponent");
		return ptr;
	}


	void ServerAddExperience(int* Exp);
	void ClientAddProgressionTimeOut();
	void AddProtectionTimeOut();
};


// Class Remnant.RemnantQuest
// 0x0168 (0x0540 - 0x03D8)
class ARemnantQuest : public AQuest
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET
	class UPersistenceComponent*                       PersistenceComponent;                                     // 0x03E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPersistenceKeysComponent*                   PersistenceKeysComponent;                                 // 0x03E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERemnantQuestType                                  Type;                                                     // 0x03F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERemnantQuestRarity                                Rarity;                                                   // 0x03F1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03F2(0x0006) MISSED OFFSET
	TArray<struct FName>                               QuestTags;                                                // 0x03F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, AssetRegistrySearchable, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ParentQuestTags;                                          // 0x0408(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, AssetRegistrySearchable, NativeAccessSpecifierPublic)
	TArray<struct FName>                               QuestRewardTags;                                          // 0x0418(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, AssetRegistrySearchable, NativeAccessSpecifierPublic)
	int                                                MaxUsageCount;                                            // 0x0428(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERemnantQuestDebugState                            DebugState;                                               // 0x042C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EQuestMode                                         QuestGameMode;                                            // 0x042D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x2];                                       // 0x042E(0x0002) MISSED OFFSET
	struct FName                                       UnlockKey;                                                // 0x0430(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELicensedContent                                   RequiredEntitlement;                                      // 0x0438(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	TArray<class USpawnTable*>                         ResourceCachedSpawns;                                     // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UWorld>                       Container;                                                // 0x0450(0x0028) (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelMin;                                                 // 0x0478(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelMax;                                                 // 0x047C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x0480(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Difficulty;                                               // 0x0484(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                                   PlayTime;                                                 // 0x0488(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SlotID;                                                   // 0x0490(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ZoneID;                                                   // 0x0494(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ParentQuestID;                                            // 0x0498(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERemnantQuestStatus                                Status;                                                   // 0x049C(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x3];                                       // 0x049D(0x0003) MISSED OFFSET
	class FString                                      BiomeName;                                                // 0x04A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  ItemValueTable;                                           // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnQuestLoaded;                                            // 0x04B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class URemnantQuestComponent*                      ParentQuestComponent;                                     // 0x04C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                LastCheckpointZoneID;                                     // 0x04D0(0x0004) (Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       LastCheckpointNameID;                                     // 0x04D4(0x0008) (Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET
	class ULevelStreaming*                             ContainerLevel;                                           // 0x04E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               Created;                                                  // 0x04E8(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData06[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET
	TMap<class FString, int>                           UsageCount;                                               // 0x04F0(0x0050) (ZeroConstructor, SaveGame, Protected, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuest");
		return ptr;
	}


	void OnRep_Status();
	bool IsLoaded();
	bool HasLastCheckpoint();
	void GiveRewardToPlayerController(class ARemnantPlayerController** Player, class USpawnTable** SpawnTable, struct FName* SpawnTag, TArray<struct FName>* AdditionalTags, ERemnantQuestRewardType* RewardType, int* RandomSeed, bool* bSkipDuplicates);
	void GiveRewardToPlayer(class ARemnantCharacter** Player, class USpawnTable** SpawnTable, struct FName* SpawnTag, TArray<struct FName>* AdditionalTags, ERemnantQuestRewardType* RewardType);
	void GiveReward(class USpawnTable** SpawnTable, struct FName* SpawnTag, TArray<struct FName>* AdditionalTags, ERemnantQuestRewardType* RewardType, bool* bSkipDuplicates);
	class ARemnantQuest* GetRootQuest();
	class UInventoryComponent* GetQuestInventory();
	bool GetObjectQuestValue(class UClass** ObjectBP, int* ObjectValue, float* OutSellScalar, int* OutPickupValue);
	int GetLevel();
	struct FZoneLinkInfo GetLastCheckpoint();
	class FString GetBiomeName();
	TArray<struct FZoneLinkInfo> GetAutoJoinZoneLinks();
	void DeactivateQuest();
	void AddQuestLootTags(TArray<struct FName>* LootTags, bool* Rtn);
	void ActivateQuest();
};


// Class Remnant.RemnantQuestComponent
// 0x0000 (0x02A0 - 0x02A0)
class URemnantQuestComponent : public UQuestComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestComponent");
		return ptr;
	}


	bool IsZoneLoaded();
	class AZoneActor* GetZone();
	struct FName GetUniqueName();
	class ARemnantQuest* GetRootQuest();
	class ARemnantQuest* GetRemnantQuest();
	class URemnantQuestZone* GetQuestZone();
	class URemnantQuestTile* GetQuestTile();
	class URemnantQuestEntity* GetQuestEntity();
	void DebugTravelTo(class APlayerController** Player);
	bool DebugCanTravelTo();
};


// Class Remnant.RemnantQuestAIDirector
// 0x0070 (0x0310 - 0x02A0)
class URemnantQuestAIDirector : public URemnantQuestComponent
{
public:
	TArray<struct FEncounterGroup>                     Groups;                                                   // 0x02A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnSpawned;                                                // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnDestroyed;                                              // 0x02C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnAllSpawnsDestroyed;                                     // 0x02D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnEncounterEvent;                                         // 0x02E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x20];                                      // 0x02F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestAIDirector");
		return ptr;
	}


	void StopAllGroups(bool* DestroyActiveSpawns);
	void SetSpawnTable(class USpawnTable** SpawnTable);
	void OnEncounterGroupRemoved(class UEncounterGroupInstance** EncounterGroup);
	void OnEncounterGroupActorSpawned(class UEncounterGroupInstance** EncounterGroup, class AActor** Actor);
	void OnEncounterGroupActorDead(class UEncounterGroupInstance** EncounterGroup, class AActor** Actor);
	bool HasActiveSpawns(bool* IncludeQueuedSpawns);
	int GetTotalSpawns(bool* IncludeQueuedSpawns);
	void EventPlayerExit(struct FEventRegionCharacter* Character);
	void EventPlayerEnter(struct FEventRegionCharacter* Character);
	void EventEncounterEvent(class UEncounterGroupInstance** EncounterGroup, struct FName* EventName);
};


// Class Remnant.LootSourceInterface
// 0x0000 (0x0028 - 0x0028)
class ULootSourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.LootSourceInterface");
		return ptr;
	}


	void OverrideLootTable(class USpawnTable** SpawnTable, TArray<struct FName>* SpawnTags);
};


// Class Remnant.RemnantQuestEntity
// 0x0090 (0x03A0 - 0x0310)
class URemnantQuestEntity : public UQuestEntity
{
public:
	TArray<struct FName>                               SpawnTags;                                                // 0x0310(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               Transient;                                                // 0x0320(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceSpawnIfNotFound;                                     // 0x0321(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HackGenerateSpawnsIfMissing;                              // 0x0322(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PersistDestroyed;                                         // 0x0323(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ActorNameID;                                              // 0x0324(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	TArray<struct FName>                               ActorTags;                                                // 0x0330(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay, NativeAccessSpecifierPublic)
	class USpawnTable*                                 LootSpawnTable;                                           // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               LootSpawnTags;                                            // 0x0348(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UClass*                                      Faction;                                                  // 0x0358(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0360(0x0010) MISSED OFFSET
	TArray<class AActor*>                              Actors;                                                   // 0x0370(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FRemnantQuestEntityInfo>             Spawns;                                                   // 0x0380(0x0010) (ZeroConstructor, SaveGame, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0390(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestEntity");
		return ptr;
	}


	void ZoneUnloaded();
	void SetFactionAffiliation(class UClass** TargetFaction, EAffiliation* Affiliation, bool* Propogate);
	void SetFaction(class UClass** NewFaction);
	void ResetSpawns();
	void ReactivateSpawns();
	void OnSpawnListLoaded();
	void OnDead(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause);
	void OnActorRegistered(class AActor** Actor);
	void OnActorDestroyed(class AActor** Actor);
	void OnActorDead(struct FDamageInfo* DamageInfo);
	class AZoneActor* GetZone();
	class ARemnantQuest* GetRootQuest();
	class ARemnantQuest* GetRemnantQuest();
	class URemnantQuestZone* GetQuestZone();
	class URemnantQuestTile* GetQuestTile();
	int GetNumSpawns();
	TArray<class AActor*> GetActors();
};


// Class Remnant.RemnantQuestEntityDialog
// 0x0010 (0x02B0 - 0x02A0)
class URemnantQuestEntityDialog : public URemnantQuestComponent
{
public:
	class UEventTree*                                  Dialog;                                                   // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestEntityDialog");
		return ptr;
	}


	void OnActorSpawned(class AActor** Actor);
};


// Class Remnant.RemnantQuestEventRegion
// 0x0060 (0x0300 - 0x02A0)
class URemnantQuestEventRegion : public URemnantQuestComponent
{
public:
	struct FScriptMulticastDelegate                    OnBegin;                                                  // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEnd;                                                    // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerEnter;                                            // 0x02C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerExit;                                             // 0x02D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMusicSet*                                   MusicSet;                                                 // 0x02E0(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideExistingSet;                                     // 0x02E8(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyAggroGroupToStack;                                  // 0x02E9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02EA(0x0006) MISSED OFFSET
	class AEventRegion*                                EventRegion;                                              // 0x02F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestEventRegion");
		return ptr;
	}


	void SetMusicState(struct FName* MusicState);
	void OnActorRegistered(class AActor** Actor);
	void LockEvent();
	bool IsEventRegionActive();
	bool IsComplete();
	TArray<class ARemnantCharacter*> GetPlayersInRegion();
	int GetNumPlayersInRegion();
	class ARemnantCharacter* GetFirstPlayerInRegion();
	class AEventRegion* GetEventRegion();
	struct FName GetAggroGroup();
	void EventPlayerExit(struct FEventRegionCharacter* Player);
	void EventPlayerEnter(struct FEventRegionCharacter* Player);
	void EventOnEnd();
	void EventOnBegin();
	void End();
	void CompleteEvent();
	void Begin();
};


// Class Remnant.RemnantQuestLink
// 0x0040 (0x02E0 - 0x02A0)
class URemnantQuestLink : public URemnantQuestComponent
{
public:
	struct FName                                       ComponentName;                                            // 0x02A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoLink;                                                 // 0x02A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02A9(0x0007) MISSED OFFSET
	TArray<struct FName>                               QuestTags;                                                // 0x02B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FName>                               RequiredSlots;                                            // 0x02C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int                                                AutoLinkQuestID;                                          // 0x02D0(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0xC];                                       // 0x02D4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestLink");
		return ptr;
	}


	void OnLinkDeactivated(class UQuestComponent** Component);
	void OnLinkActivated(class UQuestComponent** Component);
};


// Class Remnant.RemnantQuestManager
// 0x0020 (0x0160 - 0x0140)
class URemnantQuestManager : public UQuestManager
{
public:
	struct FScriptMulticastDelegate                    OnQuestLoaded;                                            // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FRemnantQuestEntry>                  RegisteredQuests;                                         // 0x0150(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestManager");
		return ptr;
	}


	TArray<struct FRemnantQuestEntry> STATIC_SortQuestList(TArray<struct FRemnantQuestEntry>* QuestList);
	bool IsQuestValid(class ARemnantQuest** Quest, class AActor** Actor);
	TArray<class ARemnantQuest*> GetRootQuests();
	class ARemnantQuest* GetRootQuestForSlot(int* SlotID);
	TArray<struct FRemnantQuestEntry> GetRegisteredRootQuestsForMode(EQuestMode* Mode);
	TArray<struct FRemnantQuestEntry> GetRegisteredRootQuests();
	TArray<struct FRemnantQuestEntry> GetRegisteredQuests();
	struct FRemnantQuestEntry GetRegisteredQuestByID(class FString* QuestID);
	void GetQuestsForActor(class AActor** Actor, bool* IncludeInjectedQuests, TArray<class ARemnantQuest*>* Rtn);
	bool GetLicenseForSoftQuest(TSoftObjectPtr<class UClass>* Quest, ELicensedContent* OutLicense);
	class UQuestObjective* GetCurrentQuestObjective(class ARemnantQuest** Quest);
	class ARemnantQuest* GetActiveRootQuest();
	void DestroyRootQuest(class ARemnantQuest** Quest);
	class ARemnantQuest* CreateRootQuest(int* SlotID, class FString* QuestID, int* Difficulty);
	void ActivateRootQuest(class ARemnantQuest** Quest);
};


// Class Remnant.RemnantQuestSubQuest
// 0x0060 (0x0300 - 0x02A0)
class URemnantQuestSubQuest : public URemnantQuestComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A0(0x0020) MISSED OFFSET
	ERemnantQuestType                                  QuestType;                                                // 0x02C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02C1(0x0007) MISSED OFFSET
	TArray<struct FName>                               QuestTags;                                                // 0x02C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              ChanceToSpawn;                                            // 0x02D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelMin;                                                 // 0x02DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QuestID;                                                  // 0x02E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSubQuestComplete;                                       // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestSubQuest");
		return ptr;
	}


	void SubQuestComplete(class AQuest** Quest, EQuestResult* Result);
	void OnLinkDeactivated(class UQuestComponent** Component);
	void OnLinkActivated(class UQuestComponent** Component);
	class ARemnantQuest* GetSubQuest();
};


// Class Remnant.RemnantQuestTile
// 0x0070 (0x0310 - 0x02A0)
class URemnantQuestTile : public URemnantQuestComponent
{
public:
	class UTileSet*                                    OverrideTileSet;                                          // 0x02A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SupportedTags;                                            // 0x02A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FName                                       OverrideTileTag;                                          // 0x02B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTileSpawnList>                      OverrideSpawnLists;                                       // 0x02C0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQuestTileDependency>                TileDependencies;                                         // 0x02D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               Exclusive;                                                // 0x02E0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	int                                                Flags;                                                    // 0x02E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileID;                                                   // 0x02E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSetTileActive;                                          // 0x02F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0300(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestTile");
		return ptr;
	}


	void SetTileActive(int* ID, bool* Active);
	class AActor* GetZoneLink(struct FName* ZoneLinkNameID);
	struct FTileCoord GetTileCoord();
	bool GetTileAttribute(struct FName* Key, struct FMapGenAttribute* Out);
};


// Class Remnant.RemnantQuestTrigger
// 0x0030 (0x02D0 - 0x02A0)
class URemnantQuestTrigger : public URemnantQuestComponent
{
public:
	struct FScriptMulticastDelegate                    OnPlayerEnter;                                            // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerExit;                                             // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class AQuestTrigger*                               Trigger;                                                  // 0x02C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestTrigger");
		return ptr;
	}


	void OnActorRegistered(class AActor** Actor);
	class AQuestTrigger* GetTrigger();
	TArray<class ARemnantCharacter*> GetPlayersInTrigger();
	int GetNumPlayersInTrigger();
	void EventPlayerExit(class ARemnantCharacter** Player);
	void EventPlayerEnter(class ARemnantCharacter** Player);
};


// Class Remnant.RemnantQuestWaveEncounter
// 0x0050 (0x02F0 - 0x02A0)
class URemnantQuestWaveEncounter : public URemnantQuestComponent
{
public:
	TArray<struct FEncounterWave>                      Waves;                                                    // 0x02A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnWaveComplete;                                           // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnAllWavesComplete;                                       // 0x02C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D0(0x0008) MISSED OFFSET
	class AActor*                                      EncounterTarget;                                          // 0x02D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AEventRegion*                                EventRegion;                                              // 0x02E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEncounterInstance*                          EncounterInstance;                                        // 0x02E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestWaveEncounter");
		return ptr;
	}


	void WaveComplete(class UEncounterInstance** Instance);
	void Stop(bool* DestroyActiveSpawns);
	void SpawnWave();
	void Resume();
	void Pause();
	bool IsQuestWaveActive();
	void EventPlayerExit(struct FEventRegionCharacter* Character);
	void EventPlayerEnter(struct FEventRegionCharacter* Character);
	void EventOnEnd();
	void Begin(class AActor** Target);
};


// Class Remnant.ZoneDef
// 0x0040 (0x0068 - 0x0028)
class UZoneDef : public UObject
{
public:
	TArray<TSoftObjectPtr<class UWorld>>               MapTemplates;                                             // 0x0028(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	class UTileSet*                                    TileSet;                                                  // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTileSpawnList>                      SpawnLists;                                               // 0x0040(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      Resources;                                                // 0x0050(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      ColorScheme;                                              // 0x0058(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.ZoneDef");
		return ptr;
	}

};


// Class Remnant.RemnantQuestZone
// 0x0110 (0x03B0 - 0x02A0)
class URemnantQuestZone : public URemnantQuestComponent
{
public:
	struct FText                                       Label;                                                    // 0x02A0(0x0018) (Edit, NativeAccessSpecifierPublic)
	class UClass*                                      ZoneDef;                                                  // 0x02B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Static;                                                   // 0x02C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02C1(0x0003) MISSED OFFSET
	int                                                RequestedID;                                              // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceLevelOffset;                                        // 0x02C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02C9(0x0003) MISSED OFFSET
	struct FVector                                     ForceLevelOffset;                                         // 0x02CC(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UWorld>>               MapTemplates;                                             // 0x02D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	class UTileSet*                                    TileSet;                                                  // 0x02E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTileSpawnList>                      SpawnLists;                                               // 0x02F0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                      ColorScheme;                                              // 0x0300(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ThemeTag;                                                 // 0x0310(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelMin;                                                 // 0x0318(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x031C(0x0004) MISSED OFFSET
	TArray<struct FName>                               Slots;                                                    // 0x0320(0x0010) (Edit, ZeroConstructor, SaveGame, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnZoneLoaded;                                             // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPreZoneUnloaded;                                        // 0x0340(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnZoneUnloaded;                                           // 0x0350(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerEnteredZone;                                      // 0x0360(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerExitedZone;                                       // 0x0370(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class URemnantQuestTile*>                   QuestTiles;                                               // 0x0380(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                               OwnsZone;                                                 // 0x0390(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0391(0x0003) MISSED OFFSET
	int                                                ZoneID;                                                   // 0x0394(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               AssetsGathered;                                           // 0x0398(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x17];                                      // 0x0399(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestZone");
		return ptr;
	}


	void ZoneUnloaded();
	void ZoneLoaded();
	void TravelToParent();
	void SetSpawnTableOverride(class USpawnTable** SpawnTable);
	void PlayerExitedZone(class APlayerController** Controller);
	void PlayerEnteredZone(class APlayerController** Controller);
	void ParentMapLoaded();
	void MapLoaded();
};


// Class Remnant.RemnantQuestZoneLink
// 0x0070 (0x0310 - 0x02A0)
class URemnantQuestZoneLink : public URemnantQuestComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02A0(0x0004) MISSED OFFSET
	struct FName                                       ZoneLinkNameID;                                           // 0x02A4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               StartsActive;                                             // 0x02AC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02AD(0x0003) MISSED OFFSET
	struct FName                                       Category;                                                 // 0x02B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DefaultWaypointSpawnTag;                                  // 0x02B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Label;                                                    // 0x02C0(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UClass*                                      WaypointBP;                                               // 0x02D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>                   Image;                                                    // 0x02E0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OwnsLink;                                                 // 0x0308(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0309(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantQuestZoneLink");
		return ptr;
	}


	void MulticastSetLinkActive(class AZoneActor** Zone, bool* Active);
	void MapLoaded();
	void DestinationZoneLoaded();
	void DestinationMapLoaded();
	void DeactivateWaypoint();
	void ActivateWaypoint(bool* SetAsRespawnPoint);
};


// Class Remnant.RemnantSaveGame
// 0x0060 (0x00A8 - 0x0048)
class URemnantSaveGame : public USaveGameWorld
{
public:
	bool                                               NewGame;                                                  // 0x0048(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasMainCampaign;                                          // 0x0049(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	int                                                LastActiveRootSlot;                                       // 0x004C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ZoneIDGen;                                                // 0x0050(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QuestIDGen;                                               // 0x0054(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, int>                           QuestFailCount;                                           // 0x0058(0x0050) (ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantSaveGame");
		return ptr;
	}

};


// Class Remnant.RemnantSequencerManager
// 0x0000 (0x0140 - 0x0140)
class URemnantSequencerManager : public USequencerManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantSequencerManager");
		return ptr;
	}

};


// Class Remnant.RemnantSettings
// 0x0038 (0x0060 - 0x0028)
class URemnantSettings : public UObject
{
public:
	float                                              ModPowerSplashScalar;                                     // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ModPowerSplashFromOtherModScalar;                         // 0x002C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BonusModPower;                                            // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UClass>                       ModDamageClass;                                           // 0x0038(0x0028) (Edit, Config, GlobalConfig, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantSettings");
		return ptr;
	}

};


// Class Remnant.RemnantSilhouetteComponent
// 0x0000 (0x0118 - 0x0118)
class URemnantSilhouetteComponent : public USilhouetteComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantSilhouetteComponent");
		return ptr;
	}

};


// Class Remnant.RemnantSkyboxManager
// 0x0028 (0x0120 - 0x00F8)
class URemnantSkyboxManager : public UActorComponent
{
public:
	TArray<struct FSkyboxModifierVolumeInfo>           ModifierVolumes;                                          // 0x00F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSkyboxManagerInit;                                      // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class AActor*                                      SkyboxRefActor;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantSkyboxManager");
		return ptr;
	}


	void RegisterSkyboxModifierVolume(class AActor** SkyboxModVolume);
	void RefreshModifierVolumes();
	void OnPlayerExitVolume(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex);
	void OnPlayerEnterVolume(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* FromSweep, struct FHitResult* SweepResult);
	bool IsPlayerInAnyModifierVolumes(class AActor** Player, class AActor** ExcludedVolume);
	void InitSkyboxManager(class AActor** SkyboxActor);
	class URemnantSkyboxManager* STATIC_GetInstance(class UObject** WorldContextObject);
};


// Class Remnant.RemnantSpawnFilterManager
// 0x0000 (0x0108 - 0x0108)
class URemnantSpawnFilterManager : public USpawnFilterManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantSpawnFilterManager");
		return ptr;
	}


	class URemnantSpawnFilterManager* STATIC_GetManagerInstance(class UObject** WorldContextObject);
};


// Class Remnant.RemnantSpectatorPawn
// 0x0010 (0x03C8 - 0x03B8)
class ARemnantSpectatorPawn : public ASpectatorPawn
{
public:
	class USpectatorTargetComponent*                   CurrentSpectatorTarget;                                   // 0x03B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      PrevViewTarget;                                           // 0x03C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantSpectatorPawn");
		return ptr;
	}


	void OnValidTarget();
	void OnTargetUnavailable(class USpectatorTargetComponent** SpectatorTarget);
	void OnSpectateTarget(class AActor** Target);
	void OnLeaveTarget();
	void OnInvalidTarget();
	void OnFinishTravel();
	bool IsValidTarget(class AActor** Target);
	int GetNumAvailableTargets();
	class AActor* GetCurrentTarget(bool* bOnlyIfValid);
};


// Class Remnant.RemnantStateCameraComponent
// 0x0000 (0x1440 - 0x1440)
class URemnantStateCameraComponent : public UStateCameraComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantStateCameraComponent");
		return ptr;
	}

};


// Class Remnant.RemnantTrait
// 0x0008 (0x00F8 - 0x00F0)
class URemnantTrait : public UTrait
{
public:
	int                                                RequiredLegacyLevel;                                      // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantTrait");
		return ptr;
	}

};


// Class Remnant.RemnantTraitsComponent
// 0x00B0 (0x0268 - 0x01B8)
class URemnantTraitsComponent : public UTraitsComponent
{
public:
	bool                                               bFailAddIfTraitMaxLevel;                                  // 0x01B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01B9(0x0007) MISSED OFFSET
	class UClass*                                      ValidTraitType;                                           // 0x01C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxTraitPointIncrement;                                   // 0x01C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET
	TArray<struct FTraitPointValidationInfo>           TraitPointValidationInfo;                                 // 0x01D0(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSpentTraitPointValidationInfo>      SpentTraitPointValidationInfo;                            // 0x01E0(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TMap<class UClass*, struct FTraitValidationInfo>   TraitLevelValidationInfo;                                 // 0x01F0(0x0050) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0240(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantTraitsComponent");
		return ptr;
	}


	void ServerAddTraitPoints(int* Points);
	void MarkClientTraitPointChangeValid(int* AddedTraitPoints);
	TArray<struct FTraitInfo> GetTraitsForLevel(int* Level);
	TArray<int> GetTraitLevelBands();
	struct FTraitInfo GetTraitByLevelAndCategory(int* Level, struct FName* Category);
	int GetTotalAvailableTraits();
	int GetNumAvailableTraits();
	void ClientTraitPointTimeOut();
	void ClientTraitLevelTimeOut();
	void ClientSpentTraitPointTimeOut();
};


// Class Remnant.RemnantUIActor
// 0x0008 (0x03B0 - 0x03A8)
class ARemnantUIActor : public AUIActor
{
public:
	EDialogTravelLock                                  TravelLock;                                               // 0x03A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowedDuringTravel;                                     // 0x03A9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03AA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantUIActor");
		return ptr;
	}

};


// Class Remnant.RemnantUtil
// 0x0000 (0x0028 - 0x0028)
class URemnantUtil : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantUtil");
		return ptr;
	}


	bool STATIC_IsGameSessionReady(class UObject** WorldContextObject);
	int STATIC_GetGameSeed();
	bool STATIC_GetBaseZoneLinkByLabel(class UObject** WorldContextObject, class FString* Label, struct FZoneLinkInfo* OutZoneLink);
	bool STATIC_GetBaseZoneLink(class UObject** WorldContextObject, struct FZoneLinkInfo* OutZoneLink);
	int STATIC_GetBaseZoneID();
	class AZoneActor* STATIC_GetBaseZoneActor(class UObject** WorldContextObject);
	bool STATIC_CanPlayerExitGame(class UObject** WorldContextObject);
};


// Class Remnant.RemnantWeaponMod
// 0x01E0 (0x06C0 - 0x04E0)
class ARemnantWeaponMod : public AEquipmentMod
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E0(0x0008) MISSED OFFSET
	float                                              PowerBasis;                                               // 0x04E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MaxCharges;                                               // 0x04EC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EModInputMode                                      InputMode;                                                // 0x04ED(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x04EE(0x0002) MISSED OFFSET
	TArray<struct FName>                               PreviewAnimTags;                                          // 0x04F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bStowWeaponForPreview;                                    // 0x0500(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0501(0x0003) MISSED OFFSET
	float                                              MinimumHoldTime;                                          // 0x0504(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseAllChargesOnConsume;                                  // 0x0508(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bToggleable;                                              // 0x0509(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasSecondaryAction;                                      // 0x050A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequiresAllowActionForUse;                               // 0x050B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ModUsageTag;                                              // 0x050C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBlocksActionsWhileInUse;                                 // 0x0514(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0515(0x0003) MISSED OFFSET
	struct FRangedWeaponMode                           WeaponMode;                                               // 0x0518(0x0120) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FName                                       ActivateAnimation;                                        // 0x0638(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DeactivateAnimation;                                      // 0x0640(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       UseAnimation;                                             // 0x0648(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SecondaryUseAnimation;                                    // 0x0650(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       UseState;                                                 // 0x0658(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       UseCrouchState;                                           // 0x0660(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStowWeaponForUseAnimation;                               // 0x0668(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0669(0x0003) MISSED OFFSET
	struct FName                                       ActiveVisual;                                             // 0x066C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0674(0x0004) MISSED OFFSET
	TArray<struct FName>                               CharacterAnimTags;                                        // 0x0678(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0688(0x0008) MISSED OFFSET
	TArray<struct FLoadableModAsset>                   Assets;                                                   // 0x0690(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData07[0x20];                                      // 0x06A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.RemnantWeaponMod");
		return ptr;
	}


	bool ShowReticule();
	void SetMinHoldTime(float* HoldTime);
	void OnUse();
	void OnStartCustomIdle();
	void OnSecondaryActivate();
	void OnPreviewStart();
	void OnPreviewEnd();
	void OnPreFireEnd();
	void OnPreFireBegin();
	void OnPreActivate();
	void OnFireEnd();
	void OnFireBegin();
	void OnFire(struct FVector* from, struct FVector* to, float* WeaponSpread);
	void OnFinishLoadingAssets();
	void OnEndUse();
	void OnEndCustomIdle();
	void OnDeactivate();
	void OnChargesChanged(int* Charges);
	void OnCharacterHitTarget(struct FDamageInfo* DamageInfo);
	void OnBeginUse();
	void OnActivate();
	void ModifyModPower(float* Delta);
	bool IsUseState(struct FName* State);
	bool IsPreviewing();
	class ARemnantRangedWeapon* GetWeapon();
	struct FName GetUseState();
	class UClass* GetModAssetAsClass(struct FName* AssetName);
	class UObject* GetModAsset(struct FName* AssetName);
	float GetModActiveRemainingPct();
	bool GetClientAimVector(struct FVector* AimOrigin, struct FVector* AimEnd);
	bool CanUse();
	bool CanDeactivateMod();
	bool CalculateClientAimVector(struct FVector* AimOrigin, struct FVector* AimEnd);
	bool AreAssetsLoaded();
	void ApplyDamageInfoToModPower(struct FDamageInfo* DamageInfo, float* ModPowerScalar, bool* bForce, bool* bIgnorePenalties);
	void AddModPower(float* Damage, float* BonusModPowerMod);
};


// Class Remnant.ShowLastEquipmentDecorator
// 0x0000 (0x0030 - 0x0030)
class UShowLastEquipmentDecorator : public UShowEquipmentAbstractDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.ShowLastEquipmentDecorator");
		return ptr;
	}

};


// Class Remnant.SpawnFilterAccountAward
// 0x0030 (0x0080 - 0x0050)
class USpawnFilterAccountAward : public USpawnFilterElement
{
public:
	TSoftObjectPtr<class UClass>                       AwardToFilter;                                            // 0x0050(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldFilterByHardcore;                                  // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FilterHardcoreAwards;                                     // 0x0079(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x007A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.SpawnFilterAccountAward");
		return ptr;
	}

};


// Class Remnant.SpawnFilterTrait
// 0x0028 (0x0078 - 0x0050)
class USpawnFilterTrait : public USpawnFilterElement
{
public:
	TSoftObjectPtr<class UClass>                       TraitToFilter;                                            // 0x0050(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.SpawnFilterTrait");
		return ptr;
	}

};


// Class Remnant.SpawnTableAccountAward
// 0x0030 (0x00B8 - 0x0088)
class USpawnTableAccountAward : public USpawnTableEntry
{
public:
	TSoftObjectPtr<class UClass>                       Award;                                                    // 0x0088(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHardcoreOnly;                                            // 0x00B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFilterByRootQuestMode;                                   // 0x00B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInvertValidQuestMode;                                    // 0x00B2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EQuestMode                                         ValidQuestMode;                                           // 0x00B3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.SpawnTableAccountAward");
		return ptr;
	}

};


// Class Remnant.SpawnTableAchievement
// 0x0010 (0x0098 - 0x0088)
class USpawnTableAchievement : public USpawnTableEntry
{
public:
	struct FAchievementId                              Achievement;                                              // 0x0088(0x0008) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	EAchievementUpdateType                             Type;                                                     // 0x0090(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	int                                                Amount;                                                   // 0x0094(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.SpawnTableAchievement");
		return ptr;
	}

};


// Class Remnant.SpawnTableCharacterMod
// 0x0008 (0x0090 - 0x0088)
class USpawnTableCharacterMod : public USpawnTableEntry
{
public:
	class UClass*                                      Modifier;                                                 // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.SpawnTableCharacterMod");
		return ptr;
	}

};


// Class Remnant.SpawnTableExperience
// 0x0010 (0x0098 - 0x0088)
class USpawnTableExperience : public USpawnTableEntry
{
public:
	int                                                ExperienceMin;                                            // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExperienceMax;                                            // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExperienceIncPerLevel;                                    // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExperienceExpPerLevel;                                    // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.SpawnTableExperience");
		return ptr;
	}

};


// Class Remnant.SpawnTableSmartAmmo
// 0x0030 (0x00B8 - 0x0088)
class USpawnTableSmartAmmo : public USpawnTableElement
{
public:
	TArray<struct FSmartAmmo>                          AmmoTypes;                                                // 0x0088(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	int                                                WeightedChanceForNoAmmo;                                  // 0x0098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                WeighteChanceWhenEmpty;                                   // 0x009C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                WeighteChanceQuarter;                                     // 0x00A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                WeighteChanceHalf;                                        // 0x00A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                WeighteChanceThreeQuarters;                               // 0x00A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                WeighteChanceLessThanFull;                                // 0x00AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AmmoProximityRadius;                                      // 0x00B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.SpawnTableSmartAmmo");
		return ptr;
	}

};


// Class Remnant.SpawnTableTrait
// 0x0008 (0x0090 - 0x0088)
class USpawnTableTrait : public USpawnTableEntry
{
public:
	class UClass*                                      TraitBP;                                                  // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.SpawnTableTrait");
		return ptr;
	}

};


// Class Remnant.SpectatorTargetComponent
// 0x0010 (0x0108 - 0x00F8)
class USpectatorTargetComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnNotifySpectatorTargetUnavail;                           // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.SpectatorTargetComponent");
		return ptr;
	}


	void OnSpectatorTargetUnavailable();
};


// Class Remnant.UtilityItemInstanceData
// 0x0008 (0x0048 - 0x0040)
class UUtilityItemInstanceData : public UItemInstanceData
{
public:
	unsigned char                                      Charges;                                                  // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              Cooldown;                                                 // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.UtilityItemInstanceData");
		return ptr;
	}

};


// Class Remnant.UtilityItem
// 0x0008 (0x0600 - 0x05F8)
class AUtilityItem : public AUseableItem
{
public:
	unsigned char                                      MaxCharges;                                               // 0x05F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05F9(0x0003) MISSED OFFSET
	float                                              CooldownTime;                                             // 0x05FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.UtilityItem");
		return ptr;
	}


	void UseCharge();
	void Recharge();
	float GetCooldownPct();
	unsigned char GetCharges();
};


// Class Remnant.WorldGenVisualizer
// 0x00A8 (0x03D8 - 0x0330)
class AWorldGenVisualizer : public AActor
{
public:
	int                                                NumFeatures;                                              // 0x0330(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ZoneCoverage;                                             // 0x0334(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FZoneTileDef>                        ZoneTiles;                                                // 0x0338(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class URandomWorld*                                World;                                                    // 0x0348(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0350(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.WorldGenVisualizer");
		return ptr;
	}

};


// Class Remnant.WorldResetInterface
// 0x0000 (0x0028 - 0x0028)
class UWorldResetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.WorldResetInterface");
		return ptr;
	}


	void OnWorldReset();
	void OnNotifyAllWorldReset();
};


// Class Remnant.WorldResetUtil
// 0x0000 (0x0028 - 0x0028)
class UWorldResetUtil : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.WorldResetUtil");
		return ptr;
	}


	bool STATIC_IsWorldResetInProgress(class UObject** WorldContextObject);
	unsigned char STATIC_GetWorldResetColorIndex();
};


// Class Remnant.ZoneActor
// 0x01D0 (0x0500 - 0x0330)
class AZoneActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0330(0x0010) MISSED OFFSET
	class UMapGenComponent*                            MapGen;                                                   // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIDirector*                                 AIDirector;                                               // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEncounterManager*                           EncounterManager;                                         // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAmbientSpawnManager*                        AmbientSpawnManager;                                      // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UResourceSpawnManager*                       ResourceSpawnManager;                                     // 0x0360(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPersistenceComponent*                       PersistenceComponent;                                     // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ID;                                                       // 0x0370(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x0374(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelMin;                                                 // 0x0378(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelMax;                                                 // 0x037C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ZoneLevel;                                                // 0x0380(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemLevel;                                                // 0x0384(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ParentZoneID;                                             // 0x0388(0x0004) (Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QuestID;                                                  // 0x038C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NameID;                                                   // 0x0390(0x0008) (Edit, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Label;                                                    // 0x0398(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic)
	int                                                Seed;                                                     // 0x03B0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SlotID;                                                   // 0x03B4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UWorld>                       MapTemplate;                                              // 0x03B8(0x0028) (Edit, DisableEditOnInstance, SaveGame, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      ColorScheme;                                              // 0x03E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTileSet*                                    TileSet;                                                  // 0x03F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DayLength;                                                // 0x03F8(0x0004) (Edit, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DayOffset;                                                // 0x03FC(0x0004) (Edit, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Static;                                                   // 0x0400(0x0001) (Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	struct FVisitedCoordinates                         FowVisitedCoordinates;                                    // 0x0408(0x0010) (SaveGame, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerEnteredZone;                                      // 0x0418(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerExitedZone;                                       // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnZoneLoaded;                                             // 0x0438(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnZoneUnloaded;                                           // 0x0448(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               ZoneLevelInitialized;                                     // 0x0458(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0459(0x0007) MISSED OFFSET
	TArray<struct FZoneLinkInfo>                       ZoneLinks;                                                // 0x0460(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSoftObjectPath>                     DynamicResources;                                         // 0x0470(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, Protected, NativeAccessSpecifierProtected)
	TArray<class UObject*>                             DynamicResourceRefs;                                      // 0x0480(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0490(0x0028) MISSED OFFSET
	TArray<class APlayerController*>                   Players;                                                  // 0x04B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FZoneState                                  State;                                                    // 0x04C8(0x0010) (Edit, DisableEditOnTemplate, EditConst, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FZoneState                                  ServerState;                                              // 0x04D8(0x0010) (Edit, Net, DisableEditOnTemplate, EditConst, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x18];                                      // 0x04E8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.ZoneActor");
		return ptr;
	}


	void UpdateLevelScaling();
	void UnloadZone();
	void OnResourcesLoad();
	void OnRep_ServerState();
	void OnRep_Level();
	void OnMapGenInitialized();
	void OnMapGenFullyLoaded();
	void OnMapGenFailed();
	void OnFinalizeLoad();
	void LoadZone(struct FName* Link);
	bool IsLoaded();
	bool IsFullyUnloaded();
	bool IsChildZone();
	bool HasFailedLoad();
	EZoneStatus GetZoneStatus();
	int GetZoneLevel();
	class FString GetUniqueName();
	float GetTOD();
	class ARemnantQuest* GetQuest();
	class AZoneActor* GetParentZone();
	int GetItemLevel();
	bool ContainsActor(class AActor** Actor);
};


// Class Remnant.ZoneManager
// 0x00D0 (0x01C8 - 0x00F8)
class UZoneManager : public UActorComponent
{
public:
	TArray<class AZoneActor*>                          Zones;                                                    // 0x00F8(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class AZoneRegion*>                         ZoneRegions;                                              // 0x0108(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TMap<struct FName, class AZoneRegion*>             ActiveZoneRegions;                                        // 0x0118(0x0050) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TMap<struct FName, class AZoneRegion*>             TempZoneRegions;                                          // 0x0168(0x0050) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.ZoneManager");
		return ptr;
	}


	int UnlockAllWaypoints();
	class AZoneActor* GetZoneForSlot(int* SlotID);
	class AZoneActor* STATIC_GetZoneForActor(class AActor** Actor);
	class AZoneActor* STATIC_GetZoneByNameID(class UObject** WorldContextObject, struct FName* NameID);
	class AZoneActor* STATIC_GetZoneByID(class UObject** WorldContextObject, int* ID);
	class UZoneManager* STATIC_GetInstance(class UObject** WorldContextObject);
	class FString STATIC_GetBiomeForActor(class AActor** Actor);
	void DestroyZone(class AZoneActor** Zone);
	class AZoneActor* CreateZone(int* SlotID, class UClass** ZoneActorBP, int* SeedOverride);
};


// Class Remnant.ZoneLinkComponent
// 0x0068 (0x0160 - 0x00F8)
class UZoneLinkComponent : public UActorComponent
{
public:
	struct FName                                       NameID;                                                   // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EZoneLinkStatus                                    Status;                                                   // 0x0100(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInitialized;                                            // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               AutoRegister;                                             // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EZoneLinkType                                      Type;                                                     // 0x0119(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	struct FText                                       Label;                                                    // 0x0120(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBecomeRespawnZoneLink;                                  // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnClearRespawnZoneLink;                                   // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                              RequiredPlayerProximity;                                  // 0x0158(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsRespawnZoneLink;                                       // 0x015C(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHasWaypointAccess;                                       // 0x015D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x2];                                       // 0x015E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.ZoneLinkComponent");
		return ptr;
	}


	void TravelToWaypoint(struct FName* LinkNameID);
	void TravelToDestinationZone(bool* Force, bool* Instant);
	void OnRep_NameID();
	void OnRep_IsRespawnZoneLink();
	bool IsWaypoint();
	bool IsRespawnZoneLink();
	bool IsLinkActive();
	bool IsDestinationZoneLoaded();
	bool HasBeenUsed();
	EZoneLinkType GetType();
	class ASpawnPoint* GetSpawnPoint();
	struct FZoneLinkInfo GetLinkInfo();
	class AZoneActor* GetDestinationZone();
	TArray<struct FZoneLinkInfo> GetAccessibleWaypoints();
	void ActivateLink();
};


// Class Remnant.ZoneRegion
// 0x0010 (0x0340 - 0x0330)
class AZoneRegion : public AActor
{
public:
	int                                                Priority;                                                 // 0x0330(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RegionType;                                               // 0x0334(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x033C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Remnant.ZoneRegion");
		return ptr;
	}


	void OnRegionExit();
	void OnRegionEnter();
	bool Contains(struct FVector* Location);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
