#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxInventory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxInventory.InventoryAspectData.K2_OnBeginPlay
struct UInventoryAspectData_K2_OnBeginPlay_Params
{
	class AActor*                                      InventoryActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryBalanceStateComponent*             InventoryBalanceState;                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxInventory.InventoryAspectData.K2_OnApplyAspect
struct UInventoryAspectData_K2_OnApplyAspect_Params
{
	class AActor*                                      InventoryActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryBalanceStateComponent*             InventoryBalanceState;                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxInventory.InventoryAspectData.K2_GetFriendlyDescription
struct UInventoryAspectData_K2_GetFriendlyDescription_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxInventory.InventoryAspectData.K2_CloneAppearance
struct UInventoryAspectData_K2_CloneAppearance_Params
{
	class AActor*                                      CloneActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InventoryActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryBalanceStateComponent*             InventoryBalanceState;                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxInventory.InventoryData.EnumeratePickupFlyToTargets
struct UInventoryData_EnumeratePickupFlyToTargets_Params
{
	TArray<struct FName>                               Targets;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function GbxInventory.InventoryListComponent.SizeInInventory
struct UInventoryListComponent_SizeInInventory_Params
{
	class AInventoryItemPickup*                        PickupToTest;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryListComponent.ServerTransferItem
struct UInventoryListComponent_ServerTransferItem_Params
{
	struct FInventoryListEntryHandle                   InventoryItemHandle;                                      // (ConstParm, Parm, ReferenceParm)
	class AActor*                                      DestinationActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.InventoryListComponent.ServerSetItemUIFlags
struct UInventoryListComponent_ServerSetItemUIFlags_Params
{
	struct FInventoryListEntryHandle                   Handle;                                                   // (ConstParm, Parm, ReferenceParm)
	unsigned char                                      Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      FlagsMask;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.InventoryListComponent.ServerSetItemsUIFlags
struct UInventoryListComponent_ServerSetItemsUIFlags_Params
{
	class UInventoryCategoryData*                      Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      FlagsMask;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.InventoryListComponent.ServerRemoveItem
struct UInventoryListComponent_ServerRemoveItem_Params
{
	struct FInventoryListEntryHandle                   InventoryItemHandle;                                      // (ConstParm, Parm, ReferenceParm)
};

// Function GbxInventory.InventoryListComponent.ServerRemoveCustomizationPartFromInventoryActor
struct UInventoryListComponent_ServerRemoveCustomizationPartFromInventoryActor_Params
{
	struct FInventoryListEntryHandle                   InventoryItemHandle;                                      // (ConstParm, Parm, ReferenceParm)
	class UInventoryCustomizationPartData*             Part;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.InventoryListComponent.ServerDropItem
struct UInventoryListComponent_ServerDropItem_Params
{
	struct FInventoryListEntryHandle                   InventoryItemHandle;                                      // (ConstParm, Parm, ReferenceParm)
	struct FVector                                     InitialLocation;                                          // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    InitialRotation;                                          // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function GbxInventory.InventoryListComponent.ServerConsumeItem
struct UInventoryListComponent_ServerConsumeItem_Params
{
	struct FInventoryListEntryHandle                   InventoryItemHandle;                                      // (ConstParm, Parm, ReferenceParm)
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.InventoryListComponent.ServerAddCustomizationPartToInventoryActor
struct UInventoryListComponent_ServerAddCustomizationPartToInventoryActor_Params
{
	struct FInventoryListEntryHandle                   InventoryItemHandle;                                      // (ConstParm, Parm, ReferenceParm)
	class UInventoryCustomizationPartData*             Part;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.InventoryListComponent.IsInventoryFull
struct UInventoryListComponent_IsInventoryFull_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryListComponent.HasActorInList
struct UInventoryListComponent_HasActorInList_Params
{
	class AActor*                                      ItemActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryListComponent.GetStoredInventoryActor
struct UInventoryListComponent_GetStoredInventoryActor_Params
{
	struct FInventoryListEntryHandle                   InventoryItemHandle;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryListComponent.GetSelectedItemQuantity
struct UInventoryListComponent_GetSelectedItemQuantity_Params
{
	class UInventoryCategoryData*                      ChildTypeToGet;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MaxQuantity;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.InventoryListComponent.GetMaxInventoryItems
struct UInventoryListComponent_GetMaxInventoryItems_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryListComponent.GetItem
struct UInventoryListComponent_GetItem_Params
{
	struct FInventoryListEntryHandle                   InventoryItemHandle;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInventoryListEntry                         ListEntry;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryListComponent.GetInventoryListEntryDisplayName
struct UInventoryListComponent_GetInventoryListEntryDisplayName_Params
{
	struct FInventoryListEntry                         ListEntry;                                                // (Parm, OutParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxInventory.InventoryListComponent.GetInventoryListEntryDisplayDescription
struct UInventoryListComponent_GetInventoryListEntryDisplayDescription_Params
{
	struct FInventoryListEntry                         ListEntry;                                                // (Parm, OutParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxInventory.InventoryListComponent.GetInventoryItemCount
struct UInventoryListComponent_GetInventoryItemCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryListComponent.GetInventoryHandlesOfType
struct UInventoryListComponent_GetInventoryHandlesOfType_Params
{
	class UInventoryCategoryData*                      ChildTypeToGet;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FInventoryListEntryHandle>           ItemHandleList;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function GbxInventory.InventoryListComponent.GetInventoryDisplayName
struct UInventoryListComponent_GetInventoryDisplayName_Params
{
	class AActor*                                      InventoryActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxInventory.InventoryListComponent.GetInventoryDisplayDescription
struct UInventoryListComponent_GetInventoryDisplayDescription_Params
{
	class AActor*                                      InventoryActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxInventory.InventoryListComponent.GetCategoryOnlyInventoryHandles
struct UInventoryListComponent_GetCategoryOnlyInventoryHandles_Params
{
	class UInventoryCategoryData*                      ChildTypeToGet;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FInventoryListEntryHandle>           ItemHandleList;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function GbxInventory.InventoryListComponent.GetCategoryItemQuantity
struct UInventoryListComponent_GetCategoryItemQuantity_Params
{
	class UInventoryCategoryData*                      ItemCategory;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryListComponent.GetAndConsumeSelected
struct UInventoryListComponent_GetAndConsumeSelected_Params
{
	class UInventoryCategoryData*                      TypeToConsume;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryListComponent.GetAndConsumeItem
struct UInventoryListComponent_GetAndConsumeItem_Params
{
	struct FInventoryListEntryHandle                   InventoryItemHandle;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryListComponent.ClearInventory
struct UInventoryListComponent_ClearInventory_Params
{
	bool                                               DestroyInventory;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.InventoryListComponent.CanUseSelected
struct UInventoryListComponent_CanUseSelected_Params
{
	class UInventoryCategoryData*                      ChildTypeToUse;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryListComponent.CanSwapItemForPickup
struct UInventoryListComponent_CanSwapItemForPickup_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AInventoryItemPickup*                        Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryListComponent.AddOrUpdateCategoryOnly
struct UInventoryListComponent_AddOrUpdateCategoryOnly_Params
{
	class UInventoryCategoryData*                      ItemCategory;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.InventoryListComponent.AddItemFromPickup
struct UInventoryListComponent_AddItemFromPickup_Params
{
	class AInventoryItemPickup*                        PickupActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInventoryListEntryHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxInventory.InventoryListComponent.AddExternalItemEx
struct UInventoryListComponent_AddExternalItemEx_Params
{
	class UInventoryCategoryData*                      ItemCategory;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bConditionalDestroyActor;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DesiredSlot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBypassInventoryFull;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInventoryListEntryHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxInventory.InventoryListComponent.AddExternalItem
struct UInventoryListComponent_AddExternalItem_Params
{
	class UInventoryCategoryData*                      ItemCategory;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AddedByPickup;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoEquip;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bConditionalDestroyActor;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DesiredSlot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBypassInventoryFull;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInventoryListEntryHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxInventory.InventoryListComponent.AddCategory
struct UInventoryListComponent_AddCategory_Params
{
	class UInventoryCategoryData*                      ItemCategory;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TrackQuantity;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryBalanceStateComponent.PostBeginPlay
struct UInventoryBalanceStateComponent_PostBeginPlay_Params
{
};

// Function GbxInventory.InventoryBalanceStateComponent.OnRep_ReplicatedUIStats
struct UInventoryBalanceStateComponent_OnRep_ReplicatedUIStats_Params
{
};

// Function GbxInventory.InventoryBalanceStateComponent.NotifyUnequipped
struct UInventoryBalanceStateComponent_NotifyUnequipped_Params
{
	class APawn*                                       OldInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.InventoryBalanceStateComponent.NotifyEquipped
struct UInventoryBalanceStateComponent_NotifyEquipped_Params
{
	class APawn*                                       NewInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.InventoryBalanceStateComponent.NotifyAttached
struct UInventoryBalanceStateComponent_NotifyAttached_Params
{
	class APawn*                                       Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.InventoryBalanceStateComponent.K2_GetDamageType
struct UInventoryBalanceStateComponent_K2_GetDamageType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryBalanceStateComponent.IsManufactureredBy
struct UInventoryBalanceStateComponent_IsManufactureredBy_Params
{
	class UManufacturerData*                           Manufacturer;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryBalanceStateComponent.GetReRollCount
struct UInventoryBalanceStateComponent_GetReRollCount_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryBalanceStateComponent.GetPartList
struct UInventoryBalanceStateComponent_GetPartList_Params
{
	TArray<class UInventoryPartData*>                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function GbxInventory.InventoryBalanceStateComponent.GetMonetaryValue
struct UInventoryBalanceStateComponent_GetMonetaryValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryBalanceStateComponent.GetManufacturer
struct UInventoryBalanceStateComponent_GetManufacturer_Params
{
	class UManufacturerData*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryScoreValue
struct UInventoryBalanceStateComponent_GetInventoryScoreValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootBeamOverride
struct UInventoryBalanceStateComponent_GetInventoryRarityLootBeamOverride_Params
{
	class UParticleSystem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootBeamHeight
struct UInventoryBalanceStateComponent_GetInventoryRarityLootBeamHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootAudioStinger
struct UInventoryBalanceStateComponent_GetInventoryRarityLootAudioStinger_Params
{
	class UWwiseEvent*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLifeSpanType
struct UInventoryBalanceStateComponent_GetInventoryRarityLifeSpanType_Params
{
	EDropLifeSpanType                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLifeSpan
struct UInventoryBalanceStateComponent_GetInventoryRarityLifeSpan_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityFrameName
struct UInventoryBalanceStateComponent_GetInventoryRarityFrameName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityDisplayName
struct UInventoryBalanceStateComponent_GetInventoryRarityDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityData
struct UInventoryBalanceStateComponent_GetInventoryRarityData_Params
{
	class UInventoryRarityData*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityColorOutline
struct UInventoryBalanceStateComponent_GetInventoryRarityColorOutline_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityColorFX
struct UInventoryBalanceStateComponent_GetInventoryRarityColorFX_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryDisplayRarityOutline
struct UInventoryBalanceStateComponent_GetInventoryDisplayRarityOutline_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryData
struct UInventoryBalanceStateComponent_GetInventoryData_Params
{
	class UInventoryData*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryBalanceData
struct UInventoryBalanceStateComponent_GetInventoryBalanceData_Params
{
	class UInventoryBalanceData*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryBalanceStateComponent.GetGenericPartList
struct UInventoryBalanceStateComponent_GetGenericPartList_Params
{
	TArray<class UInventoryGenericPartData*>           ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function GbxInventory.InventoryBalanceStateComponent.GetDisplayName
struct UInventoryBalanceStateComponent_GetDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxInventory.InventoryBalanceStateComponent.GetDamageType
struct UInventoryBalanceStateComponent_GetDamageType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryBalanceStateComponent.GetCustomizationPartList
struct UInventoryBalanceStateComponent_GetCustomizationPartList_Params
{
	TArray<class UInventoryCustomizationPartData*>     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function GbxInventory.InventoryBalanceStateComponent.CloneAppearance
struct UInventoryBalanceStateComponent_CloneAppearance_Params
{
	class AActor*                                      DestActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ParentComp;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bAbsoluteScale;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.InventoryItemPickup.WaitForBalanceState
struct AInventoryItemPickup_WaitForBalanceState_Params
{
};

// Function GbxInventory.InventoryItemPickup.SetCanOnlyBePickedUpByOwner
struct AInventoryItemPickup_SetCanOnlyBePickedUpByOwner_Params
{
	bool                                               bNewCanOnlyBePickedUpByOwnerController;                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.InventoryItemPickup.ResetBumpOnPickupFail
struct AInventoryItemPickup_ResetBumpOnPickupFail_Params
{
};

// Function GbxInventory.InventoryItemPickup.OnUsedBy
struct AInventoryItemPickup_OnUsedBy_Params
{
	struct FUseEvent                                   UseEvent;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxInventory.InventoryItemPickup.OnRespawnEvent
struct AInventoryItemPickup_OnRespawnEvent_Params
{
};

// Function GbxInventory.InventoryItemPickup.OnRep_RepLootSpawnAction
struct AInventoryItemPickup_OnRep_RepLootSpawnAction_Params
{
};

// Function GbxInventory.InventoryItemPickup.OnRep_PickupActorClientSpawnData
struct AInventoryItemPickup_OnRep_PickupActorClientSpawnData_Params
{
};

// Function GbxInventory.InventoryItemPickup.OnRep_PickupActor
struct AInventoryItemPickup_OnRep_PickupActor_Params
{
};

// Function GbxInventory.InventoryItemPickup.OnRep_PickedUpBy
struct AInventoryItemPickup_OnRep_PickedUpBy_Params
{
};

// Function GbxInventory.InventoryItemPickup.OnRep_IsActive
struct AInventoryItemPickup_OnRep_IsActive_Params
{
};

// Function GbxInventory.InventoryItemPickup.OnRep_BumpAngularDir
struct AInventoryItemPickup_OnRep_BumpAngularDir_Params
{
};

// Function GbxInventory.InventoryItemPickup.OnPickedUpEvent
struct AInventoryItemPickup_OnPickedUpEvent_Params
{
	class AActor*                                      WasPickedUpBy;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.InventoryItemPickup.OnLookedAtByPlayer
struct AInventoryItemPickup_OnLookedAtByPlayer_Params
{
	class APlayerController*                           InstigatingPlayer;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanInteractWith;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewUsableComponentImpactPoint;                            // (Parm, IsPlainOldData)
	float                                              NewUsableDistanceAway;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.InventoryItemPickup.IsPickupInitialized
struct AInventoryItemPickup_IsPickupInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryItemPickup.GiveInventoryToUser
struct AInventoryItemPickup_GiveInventoryToUser_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoEquip;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.InventoryItemPickup.GetMeshComponent
struct AInventoryItemPickup_GetMeshComponent_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxInventory.InventoryItemPickup.GetInventoryRarityLootBeamOverride
struct AInventoryItemPickup_GetInventoryRarityLootBeamOverride_Params
{
	class UParticleSystem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryItemPickup.GetInventoryRarityLootAudioStinger
struct AInventoryItemPickup_GetInventoryRarityLootAudioStinger_Params
{
	class UWwiseEvent*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryItemPickup.GetInventoryRarityLifeSpanType
struct AInventoryItemPickup_GetInventoryRarityLifeSpanType_Params
{
	EDropLifeSpanType                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryItemPickup.GetInventoryRarityColorOutline
struct AInventoryItemPickup_GetInventoryRarityColorOutline_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryItemPickup.GetInventoryRarityColorFX
struct AInventoryItemPickup_GetInventoryRarityColorFX_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryItemPickup.GetInventoryDisplayRarityOutline
struct AInventoryItemPickup_GetInventoryDisplayRarityOutline_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryItemPickup.GetInventoryBalanceStateComponent
struct AInventoryItemPickup_GetInventoryBalanceStateComponent_Params
{
	class UInventoryBalanceStateComponent*             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxInventory.InventoryItemPickup.DeactivatePickup
struct AInventoryItemPickup_DeactivatePickup_Params
{
};

// Function GbxInventory.InventoryItemPickup.CanBePickedUp
struct AInventoryItemPickup_CanBePickedUp_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UsedByOther;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseHeld;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForMassPickup;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryItemPickup.ActivatePickup
struct AInventoryItemPickup_ActivatePickup_Params
{
};

// Function GbxInventory.InventoryItemPickup.ActivateAfterSpawnDelay
struct AInventoryItemPickup_ActivateAfterSpawnDelay_Params
{
};

// Function GbxInventory.DroppedInventoryItemPickup.OnRep_ShrinkLifeSpan
struct ADroppedInventoryItemPickup_OnRep_ShrinkLifeSpan_Params
{
};

// Function GbxInventory.DroppedInventoryItemPickup.OnRep_InitialMassScale
struct ADroppedInventoryItemPickup_OnRep_InitialMassScale_Params
{
};

// Function GbxInventory.DroppedInventoryItemPickup.OnRep_DroppedQuantity
struct ADroppedInventoryItemPickup_OnRep_DroppedQuantity_Params
{
};

// Function GbxInventory.DroppedInventoryItemPickup.OnPickupHit
struct ADroppedInventoryItemPickup_OnPickupHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxInventory.DroppedInventoryItemPickup.OnPhysicsWake
struct ADroppedInventoryItemPickup_OnPhysicsWake_Params
{
	class UPrimitiveComponent*                         WakingComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.DroppedInventoryItemPickup.OnPhysicsSleep
struct ADroppedInventoryItemPickup_OnPhysicsSleep_Params
{
	class UPrimitiveComponent*                         WakingComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.InventoryPartData.GetMonetaryValueModifier
struct UInventoryPartData_GetMonetaryValueModifier_Params
{
	struct FAttributeInitializationData                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function GbxInventory.InventoryRarityData.GetRaritySortValue
struct UInventoryRarityData_GetRaritySortValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryRarityData.GetRarityOutlineDepthStencilValue
struct UInventoryRarityData_GetRarityOutlineDepthStencilValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryRarityData.GetRarityLootBeamOverride
struct UInventoryRarityData_GetRarityLootBeamOverride_Params
{
	bool                                               bInventoryHasAFoilPart;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryRarityData.GetRarityLootBeamHeight
struct UInventoryRarityData_GetRarityLootBeamHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryRarityData.GetRarityLootAudioStinger
struct UInventoryRarityData_GetRarityLootAudioStinger_Params
{
	class UWwiseEvent*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryRarityData.GetRarityLifeSpanType
struct UInventoryRarityData_GetRarityLifeSpanType_Params
{
	EDropLifeSpanType                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryRarityData.GetRarityLifeSpan
struct UInventoryRarityData_GetRarityLifeSpan_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryRarityData.GetRarityDisplayName
struct UInventoryRarityData_GetRarityDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function GbxInventory.InventoryRarityData.GetRarityColorOutline
struct UInventoryRarityData_GetRarityColorOutline_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryRarityData.GetRarityColorFX
struct UInventoryRarityData_GetRarityColorFX_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryRarityData.GetItemScoreRarityModifier
struct UInventoryRarityData_GetItemScoreRarityModifier_Params
{
	struct FAttributeInitializationData                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function GbxInventory.InventoryRarityData.GetDisplayRarityOutline
struct UInventoryRarityData_GetDisplayRarityOutline_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.LootableComponent.SpawnAndDropLoot
struct ULootableComponent_SpawnAndDropLoot_Params
{
	struct FName                                       SelectedConfigurationName;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.LootableComponent.SpawnAndAttachLoot
struct ULootableComponent_SpawnAndAttachLoot_Params
{
	struct FName                                       SelectedConfigurationName;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.LootableComponent.SetBalanceContextOverride
struct ULootableComponent_SetBalanceContextOverride_Params
{
	class AActor*                                      NewOverrideContext;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyUseForGameStage;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.LootableComponent.InitializeLootConfigurations
struct ULootableComponent_InitializeLootConfigurations_Params
{
	class ULootableBalanceData*                        LootableBalanceData;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.LootableComponent.GetAttachedPickups
struct ULootableComponent_GetAttachedPickups_Params
{
	TArray<class ADroppedInventoryItemPickup*>         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxInventory.LootableComponent.ActivateAttachedLoot
struct ULootableComponent_ActivateAttachedLoot_Params
{
};

// Function GbxInventory.InventoryBlueprintLibrary.GetPossibleGenericParts
struct UInventoryBlueprintLibrary_GetPossibleGenericParts_Params
{
	class UInventoryBalanceStateComponent*             InventoryBalanceState;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       Tags;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bMustHaveAllTags;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bExcludeCurrentlySelectedParts;                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UInventoryGenericPartData*>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxInventory.InventoryBlueprintLibrary.GetInventoryBalanceState
struct UInventoryBlueprintLibrary_GetInventoryBalanceState_Params
{
	class AActor*                                      Inventory;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryBalanceStateComponent*             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxInventory.InventoryBlueprintLibrary.CreateInventory
struct UInventoryBlueprintLibrary_CreateInventory_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCreatePickup;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // (Parm, IsPlainOldData)
	struct FInventoryBalanceStateInitializationData    InitData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryBlueprintLibrary.CloneInventory
struct UInventoryBlueprintLibrary_CloneInventory_Params
{
	class AActor*                                      SourceInventory;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryBlueprintLibrary.BuildInventory
struct UInventoryBlueprintLibrary_BuildInventory_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCreatePickup;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // (Parm, IsPlainOldData)
	struct FInventoryBalanceStateInitializationData    InitData;                                                 // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxInventory.InventoryGenericPartExpansionData.EnumeratePartListForPartType
struct UInventoryGenericPartExpansionData_EnumeratePartListForPartType_Params
{
	unsigned char                                      PartType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorPartData*>                      OutPartList;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function GbxInventory.InventoryOwnerInterface.AttachedItemPickedUp
struct UInventoryOwnerInterface_AttachedItemPickedUp_Params
{
	class AInventoryItemPickup*                        InventoryItemPickedUp;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PickedUpBy;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInventory.ItemPoolPartSelectionOverrideData.EnumerateInventoryParts
struct UItemPoolPartSelectionOverrideData_EnumerateInventoryParts_Params
{
	unsigned char                                      PartType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorPartData*>                      OutPartList;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function GbxInventory.LootFunctionLibrary.SpawnItemsRaw
struct ULootFunctionLibrary_SpawnItemsRaw_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UItemPoolListData*>                   ItemPoolLists;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FItemPoolInfo>                       ExtraItemPools;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                GameStage;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	float                                              InitialVelocity;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
