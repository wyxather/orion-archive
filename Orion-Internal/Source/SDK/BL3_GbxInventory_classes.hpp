#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxInventory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxInventory.InventoryAspectData
// 0x0008 (0x0038 - 0x0030)
class UInventoryAspectData : public UGbxDataAsset
{
public:
	EInventoryAspectUsagePriority                      Priority;                                                 // 0x0030(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryAspectData");
		return ptr;
	}


	void K2_OnBeginPlay(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState);
	void K2_OnApplyAspect(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState);
	class FString K2_GetFriendlyDescription();
	void K2_CloneAppearance(class AActor* CloneActor, class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState);
};


// Class GbxInventory.InventoryBalanceData
// 0x0090 (0x0128 - 0x0098)
class UInventoryBalanceData : public UActorPartSelectionData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	class UClass*                                      InventoryBalanceStateClass;                               // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UInventoryBalanceData*                       BaseBalanceData;                                          // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInventoryData*                              InventoryData;                                            // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UInventoryRarityData*                        RarityData;                                               // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FInventoryManufacturerBalanceData>   Manufacturers;                                            // 0x00C0(0x0010) (Edit, ZeroConstructor)
	struct FRuntimeGenericPartListData                 RuntimeGenericPartList;                                   // 0x00D0(0x0020)
	unsigned char                                      bIsGearBuildable : 1;                                     // 0x00F0(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	class UGearBuilderCategoryData*                    GearBuilderCategory;                                      // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumPrefixes;                                           // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	class UDownloadableInventorySetData*               DlcInventorySetData;                                      // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMigratedToActorPartSelectionData;                        // 0x0110(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0111(0x0003) MISSED OFFSET
	struct FGuid                                       AssetGuid;                                                // 0x0114(0x0010) (IsPlainOldData)
	unsigned char                                      bDisableVisibilityAndCollision : 1;                       // 0x0124(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0125(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryBalanceData");
		return ptr;
	}

};


// Class GbxInventory.InventoryData
// 0x02D0 (0x0300 - 0x0030)
class UInventoryData : public UGbxDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	unsigned char                                      bInventoryNameIsFullName : 1;                             // 0x0038(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FText                                       InventoryName;                                            // 0x0040(0x0028) (Edit, DisableEditOnTemplate)
	TArray<class UInventoryNamePartData*>              PrefixPartList;                                           // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<class UInventoryNamePartData*>              TitlePartList;                                            // 0x0068(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<class UInventoryNamePartData*>              SuffixPartList;                                           // 0x0078(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	class UInventoryNamingStrategyData*                NamingStrategy;                                           // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InventoryActorClass;                                      // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAttributeEffectData>                InventoryAttributeEffects;                                // 0x0098(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FInstigatorAttributeEffectData>      InstigatorAttributeEffects;                               // 0x00A8(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<class UInventoryAspectData*>                AspectList;                                               // 0x00B8(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate)
	TArray<class UInventoryAspectData*>                StandaloneAspectList;                                     // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	bool                                               bDisplayNameInInteractionHeader;                          // 0x00D8(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bUsesItemCard;                                            // 0x00D9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00DA(0x0006) MISSED OFFSET
	class FString                                      ItemCardTypeFrameName;                                    // 0x00E0(0x0010) (Edit, ZeroConstructor)
	TArray<class UGbxCondition*>                       OnUseConstraints;                                         // 0x00F0(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate)
	bool                                               bUsesPlayerLevelRequirement;                              // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	TArray<struct FUIStatPriorityData>                 UIStats;                                                  // 0x0108(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FGuid                                       AssetGuid;                                                // 0x0118(0x0010) (IsPlainOldData)
	class UWwiseEvent*                                 PickupSound;                                              // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PickupEquipSound;                                         // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxCondition*                               SpottedCalloutCondition;                                  // 0x0138(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDialogEvent*                                SpottedCallout;                                           // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UImpactData*                                 PickupImpact;                                             // 0x0148(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 EquipUISound;                                             // 0x0150(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 DropUISound;                                              // 0x0158(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InventoryItemPickupClass;                                 // 0x0160(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicateActorInPickup;                                  // 0x0168(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSharedByPickups;                                         // 0x0169(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMustMatchGameStageToShare;                               // 0x016A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x016B(0x0005) MISSED OFFSET
	struct FName                                       PickupFlyToTarget;                                        // 0x0170(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               PickupHiddenBones;                                        // 0x0178(0x0010) (Edit, ZeroConstructor)
	bool                                               bOverrideRotationInShop;                                  // 0x0188(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0189(0x0003) MISSED OFFSET
	struct FRotator                                    RotationInShop;                                           // 0x018C(0x000C) (Edit, IsPlainOldData)
	bool                                               bOverrideTranslationInShop;                               // 0x0198(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0199(0x0003) MISSED OFFSET
	struct FVector                                     TranslationInShop;                                        // 0x019C(0x000C) (Edit, IsPlainOldData)
	bool                                               bOverrideScaleInShop;                                     // 0x01A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x01A9(0x0003) MISSED OFFSET
	struct FVector                                     ScaleInShop;                                              // 0x01AC(0x000C) (Edit, IsPlainOldData)
	bool                                               bOverrideRotationInContainer;                             // 0x01B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x01B9(0x0003) MISSED OFFSET
	struct FRotator                                    RotationInContainer;                                      // 0x01BC(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      bCanBeHolsteredOnBody : 1;                                // 0x01C8(0x0001) (Edit)
	unsigned char                                      bCanShowHolsteredInFirstPerson : 1;                       // 0x01C8(0x0001) (Edit)
	unsigned char                                      UnknownData09[0x7];                                       // 0x01C9(0x0007) MISSED OFFSET
	struct FName                                       DefaultHolsterSocketName;                                 // 0x01D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UInventoryCategoryData*                      InventoryCategory;                                        // 0x01D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EPlayerDroppability                                PlayerDroppability;                                       // 0x01E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SizeInInventory;                                          // 0x01E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x6];                                       // 0x01E2(0x0006) MISSED OFFSET
	struct FAttributeInitializationData                MonetaryValue;                                            // 0x01E8(0x0038) (Edit)
	bool                                               bIgnoreShopPriceMarkup;                                   // 0x0220(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCalculatePriceInShopUsingPlayerAsContext;                // 0x0221(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x0222(0x0002) MISSED OFFSET
	float                                              BaseMonetaryValueModifier;                                // 0x0224(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUsesInventoryScore;                                      // 0x0228(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	class UObject*                                     AssociatedCustomizationData;                              // 0x0230(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData13[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
	struct FTransform                                  ThumbnailTransform;                                       // 0x0240(0x0030) (Edit, IsPlainOldData)
	struct FTransform                                  ItemInspectInitialTransform;                              // 0x0270(0x0030) (Edit, IsPlainOldData)
	struct FTransform                                  ItemInspectInitialTransform_Vertical;                     // 0x02A0(0x0030) (Edit, IsPlainOldData)
	struct FTransform                                  ItemInspectInitialTransform_4way;                         // 0x02D0(0x0030) (Edit, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryData");
		return ptr;
	}


	void EnumeratePickupFlyToTargets(TArray<struct FName>* Targets);
};


// Class GbxInventory.InventoryData_Simple
// 0x0020 (0x0320 - 0x0300)
class UInventoryData_Simple : public UInventoryData
{
public:
	class UClass*                                      InventoryBalanceStateClass;                               // 0x0300(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UManufacturerData*                           ManufacturerData;                                         // 0x0308(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UInventoryRarityData*                        RarityData;                                               // 0x0310(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UInventoryBalanceData*                       BalanceData;                                              // 0x0318(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryData_Simple");
		return ptr;
	}

};


// Class GbxInventory.InventoryListComponent
// 0x01F8 (0x0370 - 0x0178)
class UInventoryListComponent : public UActorComponent
{
public:
	struct FInventoryListContainer                     InventoryList;                                            // 0x0178(0x00C8) (Net)
	int                                                InventoryCapacityUsed;                                    // 0x0240(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	TMap<class UInventoryCategoryData*, struct FInventorySelectionTracker> SelectedIndexs;                                           // 0x0248(0x0050) (ZeroConstructor, Transient)
	class UClass*                                      DroppedPickupClass;                                       // 0x0298(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bCanPickupOnTouch;                                        // 0x02A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02A1(0x0003) MISSED OFFSET
	struct FGbxAttributeInteger                        MaxInventoryItems;                                        // 0x02A4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData02[0x28];                                      // 0x02B0(0x0028) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInventoryItemAdded;                                     // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInventoryItemRemoved;                                   // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInventoryItemUpdated;                                   // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInventoryItemActorReplaced;                             // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInventoryItemQuantityUpdated;                           // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInventoryItemPickedUp;                                  // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAddedToInventory_Internal;                              // 0x0338(0x0010) (ZeroConstructor, Transient, InstancedReference)
	struct FScriptMulticastDelegate                    OnPreAddToFullInventory_Internal;                         // 0x0348(0x0010) (ZeroConstructor, Transient, InstancedReference)
	struct FScriptMulticastDelegate                    OnRemovingFromInventory_Internal;                         // 0x0358(0x0010) (ZeroConstructor, Transient, InstancedReference)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0368(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryListComponent");
		return ptr;
	}


	int SizeInInventory(class AInventoryItemPickup* PickupToTest);
	void ServerTransferItem(const struct FInventoryListEntryHandle& InventoryItemHandle, class AActor* DestinationActor, int Quantity);
	void ServerSetItemUIFlags(const struct FInventoryListEntryHandle& Handle, unsigned char Flags, unsigned char FlagsMask);
	void ServerSetItemsUIFlags(class UInventoryCategoryData* Category, unsigned char Flags, unsigned char FlagsMask);
	void ServerRemoveItem(const struct FInventoryListEntryHandle& InventoryItemHandle);
	void ServerRemoveCustomizationPartFromInventoryActor(const struct FInventoryListEntryHandle& InventoryItemHandle, class UInventoryCustomizationPartData* Part);
	void ServerDropItem(const struct FInventoryListEntryHandle& InventoryItemHandle, const struct FVector& InitialLocation, const struct FRotator& InitialRotation);
	void ServerConsumeItem(const struct FInventoryListEntryHandle& InventoryItemHandle, int Quantity);
	void ServerAddCustomizationPartToInventoryActor(const struct FInventoryListEntryHandle& InventoryItemHandle, class UInventoryCustomizationPartData* Part);
	bool IsInventoryFull();
	bool HasActorInList(class AActor* ItemActor);
	class AActor* GetStoredInventoryActor(const struct FInventoryListEntryHandle& InventoryItemHandle);
	void GetSelectedItemQuantity(class UInventoryCategoryData* ChildTypeToGet, int* Quantity, int* MaxQuantity);
	int GetMaxInventoryItems();
	bool GetItem(const struct FInventoryListEntryHandle& InventoryItemHandle, struct FInventoryListEntry* ListEntry);
	struct FText STATIC_GetInventoryListEntryDisplayName(struct FInventoryListEntry* ListEntry);
	struct FText STATIC_GetInventoryListEntryDisplayDescription(struct FInventoryListEntry* ListEntry);
	int GetInventoryItemCount();
	void GetInventoryHandlesOfType(class UInventoryCategoryData* ChildTypeToGet, TArray<struct FInventoryListEntryHandle>* ItemHandleList);
	struct FText STATIC_GetInventoryDisplayName(class AActor* InventoryActor);
	struct FText STATIC_GetInventoryDisplayDescription(class AActor* InventoryActor);
	void GetCategoryOnlyInventoryHandles(class UInventoryCategoryData* ChildTypeToGet, TArray<struct FInventoryListEntryHandle>* ItemHandleList);
	int GetCategoryItemQuantity(class UInventoryCategoryData* ItemCategory);
	class AActor* GetAndConsumeSelected(class UInventoryCategoryData* TypeToConsume, int Quantity);
	class AActor* GetAndConsumeItem(const struct FInventoryListEntryHandle& InventoryItemHandle, int Quantity);
	void ClearInventory(bool DestroyInventory);
	bool CanUseSelected(class UInventoryCategoryData* ChildTypeToUse, int Quantity);
	bool CanSwapItemForPickup(class AActor* Item, class AInventoryItemPickup* Pickup);
	void AddOrUpdateCategoryOnly(class UInventoryCategoryData* ItemCategory, int Quantity);
	struct FInventoryListEntryHandle AddItemFromPickup(class AInventoryItemPickup* PickupActor);
	struct FInventoryListEntryHandle AddExternalItemEx(class UInventoryCategoryData* ItemCategory, class AActor* ActorToAdd, int Quantity, int Flags, bool bConditionalDestroyActor, int DesiredSlot, bool bBypassInventoryFull);
	struct FInventoryListEntryHandle AddExternalItem(class UInventoryCategoryData* ItemCategory, class AActor* ActorToAdd, int Quantity, bool AddedByPickup, bool bAutoEquip, bool bConditionalDestroyActor, int DesiredSlot, bool bBypassInventoryFull);
	bool AddCategory(class UInventoryCategoryData* ItemCategory, bool TrackQuantity);
};


// Class GbxInventory.InventoryBalanceStateComponent
// 0x0170 (0x0348 - 0x01D8)
class UInventoryBalanceStateComponent : public UBalanceStateComponent
{
public:
	struct FInventoryReplicationData                   PackedReplicationData;                                    // 0x01D8(0x0010) (Net, Transient)
	TArray<class UInventoryNamePartData*>              NamePartList;                                             // 0x01E8(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	float                                              MonetaryValueModifierTotal;                               // 0x01F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MonetaryValue;                                            // 0x01FC(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              InventoryScoreModifierTotal;                              // 0x0200(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                InventoryScoreValue;                                      // 0x0204(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class UInventoryData*                              InventoryData;                                            // 0x0208(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	class UInventoryBalanceData*                       InventoryBalanceData;                                     // 0x0210(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	class UManufacturerData*                           ManufacturerData;                                         // 0x0218(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	TArray<class UInventoryPartData*>                  PartList;                                                 // 0x0220(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	TArray<class UInventoryGenericPartData*>           GenericPartList;                                          // 0x0230(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	TArray<unsigned char>                              AdditionalData;                                           // 0x0240(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	TArray<class UInventoryCustomizationPartData*>     CustomizationPartList;                                    // 0x0250(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	unsigned char                                      ReRollCount;                                              // 0x0260(0x0001) (Edit, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0268(0x0028) (Edit, Transient, EditConst)
	TArray<class UInventoryAspectData*>                GenericAspects;                                           // 0x0280(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	class UGestaltData*                                GestaltData;                                              // 0x0290(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	TArray<struct FName>                               GestaltMeshPartNames;                                     // 0x0298(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FGbxAttributeModifierHandle>         InstigatorAttributeModifiers;                             // 0x02A8(0x0010) (ZeroConstructor, Transient)
	TArray<struct FInventoryPrimitiveAspectSetData>    PrimitiveAspectSetList;                                   // 0x02B8(0x0010) (ZeroConstructor, Transient)
	TArray<class UInventoryConditionalDamageAspectData*> ConditionalDamageAspectList;                              // 0x02C8(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	TArray<class UInventoryAttributeEffectsAspectData*> AttributeEffectsAspectList;                               // 0x02D8(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	TArray<class UInventoryParticleAspectData*>        ParticleAspects;                                          // 0x02E8(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	struct FCachedUIStatCollectionData                 UIStats;                                                  // 0x02F8(0x0010) (Transient)
	struct FReplicatedUIStatCollectionData             ReplicatedUIStats;                                        // 0x0308(0x0010) (Net)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0318(0x0008) MISSED OFFSET
	TArray<class UInventoryMaterialAspectTextureAssetStreamer*> InventoryMaterialAspectTextureAssetStreamers;             // 0x0320(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0330(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryBalanceStateComponent");
		return ptr;
	}


	void PostBeginPlay();
	void OnRep_ReplicatedUIStats();
	void NotifyUnequipped(class APawn* OldInstigator);
	void NotifyEquipped(class APawn* NewInstigator);
	void NotifyAttached(class APawn* Instigator);
	class UClass* K2_GetDamageType();
	bool IsManufactureredBy(class UManufacturerData* Manufacturer);
	unsigned char GetReRollCount();
	TArray<class UInventoryPartData*> GetPartList();
	int GetMonetaryValue();
	class UManufacturerData* GetManufacturer();
	int GetInventoryScoreValue();
	class UParticleSystem* GetInventoryRarityLootBeamOverride();
	float GetInventoryRarityLootBeamHeight();
	class UWwiseEvent* GetInventoryRarityLootAudioStinger();
	EDropLifeSpanType GetInventoryRarityLifeSpanType();
	float GetInventoryRarityLifeSpan();
	class FString GetInventoryRarityFrameName();
	struct FText GetInventoryRarityDisplayName();
	class UInventoryRarityData* GetInventoryRarityData();
	struct FLinearColor GetInventoryRarityColorOutline();
	struct FLinearColor GetInventoryRarityColorFX();
	bool GetInventoryDisplayRarityOutline();
	class UInventoryData* GetInventoryData();
	class UInventoryBalanceData* GetInventoryBalanceData();
	TArray<class UInventoryGenericPartData*> GetGenericPartList();
	struct FText GetDisplayName();
	class UClass* GetDamageType();
	TArray<class UInventoryCustomizationPartData*> GetCustomizationPartList();
	void CloneAppearance(class AActor* DestActor, class USceneComponent* ParentComp, bool bAbsoluteScale);
};


// Class GbxInventory.InventoryItemPickup
// 0x0190 (0x05E8 - 0x0458)
class AInventoryItemPickup : public AActor
{
public:
	class UWwiseEvent*                                 PickupAudioEvent;                                         // 0x0458(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 CompletePickupAudioEvent;                                 // 0x0460(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DestroyOnPickup;                                          // 0x0468(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0469(0x0003) MISSED OFFSET
	float                                              UseFailBumpUpVelocity;                                    // 0x046C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UseFailBumpBaseRotation;                                  // 0x0470(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	class AActor*                                      PickedUpBy;                                               // 0x0478(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class UStaticMeshComponent*                        PickupMesh;                                               // 0x0480(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      PickupSkelMesh;                                           // 0x0488(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            PickupActorParticles;                                     // 0x0490(0x0010) (ExportObject, ZeroConstructor, Transient)
	int                                                Quantity;                                                 // 0x04A0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bCanOnlyBePickedUpByOwnerController : 1;                  // 0x04A4(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	unsigned char                                      bHighDetail : 1;                                          // 0x04A4(0x0001) (Edit)
	unsigned char                                      bSharedWithAllPlayers : 1;                                // 0x04A4(0x0001) (Edit)
	unsigned char                                      bSharedPlayersMustBeOnFriendlyTeam : 1;                   // 0x04A4(0x0001) (Edit)
	unsigned char                                      bReplicatePickupActor : 1;                                // 0x04A4(0x0001) (Edit)
	unsigned char                                      StaticPickup : 1;                                         // 0x04A4(0x0001) (Edit)
	unsigned char                                      bUseInventoryDataPickupActionType : 1;                    // 0x04A4(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04A5(0x0003) MISSED OFFSET
	class UClass*                                      DefaultPickupActorClass;                                  // 0x04A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDrawDistance;                                          // 0x04B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EPickupActionType                                  DefaultPickupActionType;                                  // 0x04B4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EPickupActionType                                  StaticPickupActionType;                                   // 0x04B5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x04B6(0x0002) MISSED OFFSET
	class UGbxCondition*                               CanBeTouchedCondition;                                    // 0x04B8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInventoryCategoryData*                      PickupCategory;                                           // 0x04C0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPickupSpawnUnpaused;                                    // 0x04C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPickupSpawnActive;                                      // 0x04D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPickupIsActive;                                         // 0x04E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPickedUp;                                               // 0x04F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FVector                                     StaticLocation;                                           // 0x0508(0x000C) (IsPlainOldData)
	struct FRotator                                    StaticRotation;                                           // 0x0514(0x000C) (IsPlainOldData)
	bool                                               NotAddedToInventory;                                      // 0x0520(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0521(0x0003) MISSED OFFSET
	float                                              PickupSphereRadius;                                       // 0x0524(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PickupSphereRadiusHideScale;                              // 0x0528(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x052C(0x0004) MISSED OFFSET
	class USphereComponent*                            PickupSphereComponent;                                    // 0x0530(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UInventoryData*                              AssociatedInventoryData;                                  // 0x0538(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FText                                       OverrideErrorText;                                        // 0x0540(0x0028) (BlueprintVisible, BlueprintReadOnly, Transient)
	bool                                               PlacedPickup;                                             // 0x0558(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0559(0x0007) MISSED OFFSET
	class UInventoryBalanceStateComponent*             CachedInventoryBalanceComponent;                          // 0x0560(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AActor*                                      PickupActor;                                              // 0x0568(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ReplicatedPickupActor;                                    // 0x0570(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FInventoryItemPickupClientSpawnData         PickupActorClientSpawnData;                               // 0x0578(0x0030) (Net, Transient)
	unsigned char                                      bPickupSpawnPaused : 1;                                   // 0x05A8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      bIsActive : 1;                                            // 0x05A8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData07[0x3];                                       // 0x05A9(0x0003) MISSED OFFSET
	struct FVector_NetQuantizeNormal                   BumpAngularDir;                                           // 0x05AC(0x000C) (Net, Transient)
	unsigned char                                      UnknownData08[0x20];                                      // 0x05B8(0x0020) MISSED OFFSET
	class UClass*                                      LootSpawnAction;                                          // 0x05D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      RepLootSpawnAction;                                       // 0x05E0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryItemPickup");
		return ptr;
	}


	void WaitForBalanceState();
	void SetCanOnlyBePickedUpByOwner(bool bNewCanOnlyBePickedUpByOwnerController, class AController* OwnerController);
	void ResetBumpOnPickupFail();
	void OnUsedBy(const struct FUseEvent& UseEvent);
	void OnRespawnEvent();
	void OnRep_RepLootSpawnAction();
	void OnRep_PickupActorClientSpawnData();
	void OnRep_PickupActor();
	void OnRep_PickedUpBy();
	void OnRep_IsActive();
	void OnRep_BumpAngularDir();
	void OnPickedUpEvent(class AActor* WasPickedUpBy);
	void OnLookedAtByPlayer(class APlayerController* InstigatingPlayer, bool bCanInteractWith, const struct FVector& NewUsableComponentImpactPoint, float NewUsableDistanceAway);
	bool IsPickupInitialized();
	void GiveInventoryToUser(class AActor* Other, bool bAutoEquip);
	class UMeshComponent* GetMeshComponent();
	class UParticleSystem* GetInventoryRarityLootBeamOverride();
	class UWwiseEvent* GetInventoryRarityLootAudioStinger();
	EDropLifeSpanType GetInventoryRarityLifeSpanType();
	struct FLinearColor GetInventoryRarityColorOutline();
	struct FLinearColor GetInventoryRarityColorFX();
	bool GetInventoryDisplayRarityOutline();
	class UInventoryBalanceStateComponent* GetInventoryBalanceStateComponent();
	void DeactivatePickup();
	bool CanBePickedUp(class AActor* Other, bool UsedByOther, bool bUseHeld, bool bForMassPickup);
	void ActivatePickup();
	void ActivateAfterSpawnDelay();
};


// Class GbxInventory.DroppedInventoryItemPickup
// 0x0078 (0x0660 - 0x05E8)
class ADroppedInventoryItemPickup : public AInventoryItemPickup
{
public:
	float                                              LinearDamping;                                            // 0x05E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NextImpactDistanceThreshold;                              // 0x05EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NextImpactTimeThreshold;                                  // 0x05F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpactVelocityThreshold;                                  // 0x05F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultVelocity;                                          // 0x05F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector_NetQuantize10                       DefaultAngularVelocity;                                   // 0x05FC(0x000C) (Transient)
	float                                              InitialMassScale;                                         // 0x0608(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                DroppedQuantity;                                          // 0x060C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ShrinkLifeSpan;                                           // 0x0610(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0614(0x000C) MISSED OFFSET
	bool                                               bDroppedFromPlayerInventory;                              // 0x0620(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3F];                                      // 0x0621(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.DroppedInventoryItemPickup");
		return ptr;
	}


	void OnRep_ShrinkLifeSpan();
	void OnRep_InitialMassScale();
	void OnRep_DroppedQuantity();
	void OnPickupHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnPhysicsWake(class UPrimitiveComponent* WakingComponent, const struct FName& BoneName);
	void OnPhysicsSleep(class UPrimitiveComponent* WakingComponent, const struct FName& BoneName);
};


// Class GbxInventory.DownloadableInventorySetData
// 0x0000 (0x0078 - 0x0078)
class UDownloadableInventorySetData : public UDownloadableContentData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.DownloadableInventorySetData");
		return ptr;
	}

};


// Class GbxInventory.InventoryCustomizationPartData
// 0x0020 (0x0150 - 0x0130)
class UInventoryCustomizationPartData : public UGbxCustomizationData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET
	struct FGuid                                       AssetGuid;                                                // 0x0138(0x0010) (IsPlainOldData)
	bool                                               bShouldRemovePartWhenDropped;                             // 0x0148(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0149(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryCustomizationPartData");
		return ptr;
	}

};


// Class GbxInventory.InventoryPartData
// 0x0150 (0x0250 - 0x0100)
class UInventoryPartData : public UActorPartData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	struct FAttributeInitializationData                MonetaryValueModifier;                                    // 0x0108(0x0038) (Edit, DisableEditOnTemplate)
	struct FAttributeInitializationData                InventoryScoreModifier;                                   // 0x0140(0x0038) (Edit, DisableEditOnTemplate)
	TArray<class UInventoryNamePartData*>              PrefixPartList;                                           // 0x0178(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<class UInventoryNamePartData*>              TitlePartList;                                            // 0x0188(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<class UInventoryNamePartData*>              SuffixPartList;                                           // 0x0198(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	struct FName                                       InventoryNamingTag;                                       // 0x01A8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<struct FAttributeEffectData>                InventoryAttributeEffects;                                // 0x01B0(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FInstigatorAttributeEffectData>      InstigatorAttributeEffects;                               // 0x01C0(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FUIStatPriorityData>                 UIStats;                                                  // 0x01D0(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	bool                                               bAvailableForPartInspection;                              // 0x01E0(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01E1(0x0007) MISSED OFFSET
	TArray<class UUIStatData_Text*>                    PartInspectionTitleOverride;                              // 0x01E8(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	class UUIStatData_Text*                            PartInspectionDescription;                                // 0x01F8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bHideStatsForPartInspection;                              // 0x0200(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0201(0x0007) MISSED OFFSET
	TArray<class UInventoryAspectData*>                AspectList;                                               // 0x0208(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate)
	class FString                                      GearBuilderDescription;                                   // 0x0218(0x0010) (Edit, ZeroConstructor)
	bool                                               bShouldIgnorePartBoundsForPickupAttachment;               // 0x0228(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	TArray<struct FName>                               ExcludedGestaltMeshPartNamesForItemInspectionAndThumbnailBounds;// 0x0230(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	struct FGuid                                       AssetGuid;                                                // 0x0240(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryPartData");
		return ptr;
	}


	struct FAttributeInitializationData GetMonetaryValueModifier();
};


// Class GbxInventory.InventoryGenericPartData
// 0x0028 (0x0278 - 0x0250)
class UInventoryGenericPartData : public UInventoryPartData
{
public:
	bool                                               bOverridePartSelection;                                   // 0x0250(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0251(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       Tags;                                                     // 0x0258(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryGenericPartData");
		return ptr;
	}

};


// Class GbxInventory.InventoryNamingStrategyData
// 0x0000 (0x0030 - 0x0030)
class UInventoryNamingStrategyData : public UGbxDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryNamingStrategyData");
		return ptr;
	}

};


// Class GbxInventory.InventoryRarityData
// 0x0118 (0x0148 - 0x0030)
class UInventoryRarityData : public UGbxDataAsset
{
public:
	struct FLinearColor                                RarityColorFX;                                            // 0x0030(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                RarityColorOutline;                                       // 0x0040(0x0010) (Edit, IsPlainOldData)
	int                                                RarityOutlineDepthStencilValue;                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DisplayRarityOutline;                                     // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	class FString                                      RarityFrameName;                                          // 0x0058(0x0010) (Edit, ZeroConstructor)
	EDropLifeSpanType                                  RarityLifeSpanType;                                       // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FText                                       RarityDisplayname;                                        // 0x0070(0x0028) (Edit)
	int                                                RaritySortValue;                                          // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class UParticleSystem*                             RarityLootBeamOverride;                                   // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             RarityLootBeamForInventoryWithFoilParts;                  // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RarityLootBeamHeight;                                     // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FAttributeInitializationData                ItemScoreRarityModifier;                                  // 0x00A8(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UWwiseEvent*                                 RarityLootAudioStinger;                                   // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAttributeInitializationData                MonetaryValueModifier;                                    // 0x00E8(0x0038) (Edit, DisableEditOnTemplate)
	TSoftObjectPtr<class UGameStatData>                OnPickedUpStat;                                           // 0x0120(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryRarityData");
		return ptr;
	}


	int GetRaritySortValue();
	int GetRarityOutlineDepthStencilValue();
	class UParticleSystem* GetRarityLootBeamOverride(bool bInventoryHasAFoilPart);
	float GetRarityLootBeamHeight();
	class UWwiseEvent* GetRarityLootAudioStinger();
	EDropLifeSpanType GetRarityLifeSpanType();
	float GetRarityLifeSpan();
	struct FText GetRarityDisplayName();
	struct FLinearColor GetRarityColorOutline();
	struct FLinearColor GetRarityColorFX();
	struct FAttributeInitializationData GetItemScoreRarityModifier();
	bool GetDisplayRarityOutline();
};


// Class GbxInventory.LootableComponent
// 0x00A0 (0x0218 - 0x0178)
class ULootableComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnPickupAttached;                                         // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPickupDetached;                                         // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAllPickupsDetached;                                     // 0x0198(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class ULootableBalanceData*                        BalanceData;                                              // 0x01A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialDropLootMassScale;                                 // 0x01B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EPickupLootAttachmentMode                          LootAttachmentMode;                                       // 0x01B4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01B5(0x0003) MISSED OFFSET
	TArray<class UClass*>                              LootSpawnActions;                                         // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bForceSpawnedLootToHaveInfiniteLifespan;                  // 0x01C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01C9(0x0003) MISSED OFFSET
	struct FVector                                     UseOverrideBoxExtents;                                    // 0x01CC(0x000C) (Edit, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bOverrideUseWithBox;                                      // 0x01D8(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01D9(0x0007) MISSED OFFSET
	TArray<struct FLootConfigurationInfo>              LootConfigurations;                                       // 0x01E0(0x0010) (ZeroConstructor, Transient)
	TArray<class ADroppedInventoryItemPickup*>         AttachedLoot;                                             // 0x01F0(0x0010) (ZeroConstructor, Transient)
	class ULootableBalanceData*                        LootableBalanceDataOverride;                              // 0x0200(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      BalanceContextOverride;                                   // 0x0208(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.LootableComponent");
		return ptr;
	}


	void SpawnAndDropLoot(struct FName* SelectedConfigurationName);
	void SpawnAndAttachLoot(struct FName* SelectedConfigurationName);
	void SetBalanceContextOverride(class AActor* NewOverrideContext, bool bOnlyUseForGameStage);
	void InitializeLootConfigurations(class ULootableBalanceData* LootableBalanceData);
	TArray<class ADroppedInventoryItemPickup*> GetAttachedPickups();
	void ActivateAttachedLoot();
};


// Class GbxInventory.ManufacturerData
// 0x00E0 (0x0110 - 0x0030)
class UManufacturerData : public UGbxDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	struct FAttributeInitializationData                MinGameStage;                                             // 0x0038(0x0038) (Edit)
	struct FAttributeInitializationData                MaxGameStage;                                             // 0x0070(0x0038) (Edit)
	struct FText                                       ManufacturerName;                                         // 0x00A8(0x0028) (Edit)
	struct FText                                       Blurb;                                                    // 0x00C0(0x0028) (Edit)
	TArray<class UUIStatData*>                         UIStats;                                                  // 0x00D8(0x0010) (Edit, ExportObject, ZeroConstructor)
	struct FGuid                                       AssetGuid;                                                // 0x00E8(0x0010) (IsPlainOldData)
	class FString                                      ManufacturerLogoFrameName;                                // 0x00F8(0x0010) (Edit, ZeroConstructor)
	class UDialogEnumValue*                            ManufacturerDialogEnumValue;                              // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.ManufacturerData");
		return ptr;
	}

};


// Class GbxInventory.ItemPoolListInterface
// 0x0010 (0x0040 - 0x0030)
class UItemPoolListInterface : public UGbxDataAsset
{
public:
	TArray<class UItemPoolPartSelectionOverrideData*>  PartSelectionOverrides;                                   // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.ItemPoolListInterface");
		return ptr;
	}

};


// Class GbxInventory.ItemPoolData
// 0x0088 (0x00C8 - 0x0040)
class UItemPoolData : public UItemPoolListInterface
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
	TArray<struct FBalancedInventoryInfo>              BalancedItems;                                            // 0x0048(0x0010) (Edit, ZeroConstructor)
	bool                                               bSupportsGameStageVariance;                               // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                Quantity;                                                 // 0x0060(0x0038) (Edit)
	class UGbxAttributeData*                           MinGameStageRequirement;                                  // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxAttributeData*                           MaxGameStageRequirement;                                  // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UItemPoolExpansionData*>              Expansions;                                               // 0x00A8(0x0010) (ZeroConstructor, Transient)
	struct FGuid                                       AssetGuid;                                                // 0x00B8(0x0010) (DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.ItemPoolData");
		return ptr;
	}

};


// Class GbxInventory.InventoryMaterialAspectData
// 0x0080 (0x00B8 - 0x0038)
class UInventoryMaterialAspectData : public UInventoryAspectData
{
public:
	struct FName                                       PrimitiveComponentName;                                   // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       PrimitiveComponentTag;                                    // 0x0040(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SectionIndex;                                             // 0x0048(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          Material;                                                 // 0x0050(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FRarityMaterialData>                 RaritySpecificMaterials;                                  // 0x0058(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FMaterialVectorParameterData>        VectorParameters;                                         // 0x0068(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FMaterialScalarParameterData>        ScalarParameters;                                         // 0x0078(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FMaterialTextureParameterData>       TextureParameters;                                        // 0x0088(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FMaterialTextureAssetParameterData>  TextureAssetParameters;                                   // 0x0098(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FMaterialFontParameterData>          FontParameters;                                           // 0x00A8(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryMaterialAspectData");
		return ptr;
	}

};


// Class GbxInventory.InventoryPartSetData
// 0x0028 (0x00A0 - 0x0078)
class UInventoryPartSetData : public UActorPartSetData
{
public:
	struct FInventoryGenericPartListData               GenericParts;                                             // 0x0078(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryPartSetData");
		return ptr;
	}

};


// Class GbxInventory.InventoryAttributeEffectsAspectData
// 0x0038 (0x0070 - 0x0038)
class UInventoryAttributeEffectsAspectData : public UInventoryAspectData
{
public:
	struct FGameplayTagContainer                       ComparisonTags;                                           // 0x0038(0x0020) (Edit, BlueprintReadOnly, DisableEditOnTemplate)
	bool                                               bResetAttributes;                                         // 0x0058(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	TArray<struct FAttributeEffectData>                InventoryAttributeEffects;                                // 0x0060(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryAttributeEffectsAspectData");
		return ptr;
	}

};


// Class GbxInventory.GbxCondition_InventoryRarityComparison
// 0x0010 (0x0098 - 0x0088)
class UGbxCondition_InventoryRarityComparison : public UGbxCondition
{
public:
	EConditionComparisonOperatorType                   Operator;                                                 // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	class UInventoryRarityData*                        ReferenceRarity;                                          // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.GbxCondition_InventoryRarityComparison");
		return ptr;
	}

};


// Class GbxInventory.GearBuilderCategoryData
// 0x0008 (0x0038 - 0x0030)
class UGearBuilderCategoryData : public UGbxDataAsset
{
public:
	struct FName                                       CategoryName;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.GearBuilderCategoryData");
		return ptr;
	}

};


// Class GbxInventory.GearBuilderWidget
// 0x0188 (0x0288 - 0x0100)
class UGearBuilderWidget : public UWidget
{
public:
	class UGearBuilderDebugMenu*                       OwnerMenu;                                                // 0x0100(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0108(0x0020) MISSED OFFSET
	struct FInventoryBalanceStateInitializationData    GearData;                                                 // 0x0128(0x0068) (Transient)
	TWeakObjectPtr<class UObject>                      SelectedItem;                                             // 0x0190(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF0];                                      // 0x0198(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.GearBuilderWidget");
		return ptr;
	}

};


// Class GbxInventory.GearBuilderDebugMenu
// 0x0008 (0x0300 - 0x02F8)
class UGearBuilderDebugMenu : public UGbxDebugMenuSubmenu
{
public:
	class UGearBuilderWidget*                          GearBuilder;                                              // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.GearBuilderDebugMenu");
		return ptr;
	}

};


// Class GbxInventory.InventoryBalanceCollectionData
// 0x0028 (0x0058 - 0x0030)
class UInventoryBalanceCollectionData : public UGbxDataAsset
{
public:
	class UInventoryBalanceCollectionData*             ParentCollection;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<TSoftObjectPtr<class UInventoryBalanceData>> InventoryBalanceList;                                     // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<class UInventoryBalanceData*>               RuntimeInventoryBalanceList;                              // 0x0048(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryBalanceCollectionData");
		return ptr;
	}

};


// Class GbxInventory.InventoryBalanceData_Generated
// 0x0000 (0x0128 - 0x0128)
class UInventoryBalanceData_Generated : public UInventoryBalanceData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryBalanceData_Generated");
		return ptr;
	}

};


// Class GbxInventory.InventoryBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UInventoryBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryBlueprintLibrary");
		return ptr;
	}


	TArray<class UInventoryGenericPartData*> STATIC_GetPossibleGenericParts(class UInventoryBalanceStateComponent* InventoryBalanceState, const struct FGameplayTagContainer& Tags, bool bMustHaveAllTags, bool bExcludeCurrentlySelectedParts);
	class UInventoryBalanceStateComponent* STATIC_GetInventoryBalanceState(class AActor* Inventory);
	class AActor* STATIC_CreateInventory(class UObject* WorldContextObject, bool bCreatePickup, const struct FVector& SpawnLocation, const struct FInventoryBalanceStateInitializationData& InitData);
	class AActor* STATIC_CloneInventory(class AActor* SourceInventory);
	class AActor* STATIC_BuildInventory(class UObject* WorldContextObject, bool bCreatePickup, const struct FVector& SpawnLocation, const struct FInventoryBalanceStateInitializationData& InitData);
};


// Class GbxInventory.InventoryCategoryData
// 0x0038 (0x0070 - 0x0038)
class UInventoryCategoryData : public UGbxInventoryCategoryData
{
public:
	bool                                               NotAddedToInventory;                                      // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EPickupActionType                                  PickupActionType;                                         // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SharedWithAllPlayers;                                     // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSharedPlayersMustBeOnFriendlyTeam;                       // 0x003B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLevelSyncPickupCurrency;                                 // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ManualActivation;                                         // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	struct FText                                       CategoryDisplayName;                                      // 0x0040(0x0028) (Edit)
	bool                                               bCanInspectItem;                                          // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanInspectManufacturer;                                  // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanInspectElementalEffects;                              // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanInspectParts;                                         // 0x005B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanChangeSkins;                                          // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseEquipAudioFromWeaponType;                             // 0x005D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDoNotUseCosmeticLabelInBackpackCells;                    // 0x005E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x005F(0x0001) MISSED OFFSET
	struct FName                                       EquipAudioEventName;                                      // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableSaveGameQuantityChangeThrottling;                  // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryCategoryData");
		return ptr;
	}

};


// Class GbxInventory.InventoryConditionalDamageAspectData
// 0x0010 (0x0048 - 0x0038)
class UInventoryConditionalDamageAspectData : public UInventoryAspectData
{
public:
	TArray<struct FInventoryConditionalDamageAspectInfo> DamageConditionals;                                       // 0x0038(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryConditionalDamageAspectData");
		return ptr;
	}

};


// Class GbxInventory.InventoryGenericPartExpansionData
// 0x0038 (0x0068 - 0x0030)
class UInventoryGenericPartExpansionData : public UGbxDataAsset
{
public:
	class UGbxCondition*                               ExpansionCondition;                                       // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInventoryBalanceCollectionData*             InventoryBalanceCollection;                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FInventoryGenericPartExpansionListData      GenericParts;                                             // 0x0040(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryGenericPartExpansionData");
		return ptr;
	}


	void EnumeratePartListForPartType(unsigned char PartType, TArray<class UActorPartData*>* OutPartList);
};


// Class GbxInventory.InventoryMaterialAspectTextureAssetStreamer
// 0x0020 (0x0048 - 0x0028)
class UInventoryMaterialAspectTextureAssetStreamer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryMaterialAspectTextureAssetStreamer");
		return ptr;
	}

};


// Class GbxInventory.InventoryModuleSettings
// 0x0030 (0x0058 - 0x0028)
class UInventoryModuleSettings : public UObject
{
public:
	class UClass*                                      DefaultDroppedPickupBlueprint;                            // 0x0028(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VeryShortLivedDropLifeSpan;                               // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ShortLivedDropLifeSpan;                                   // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              LongLivedDropLifeSpan;                                    // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PickupShrinkDuration;                                     // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ResetBumpOnPickupFailDelay;                               // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FName>                               PickupFlyToTargets;                                       // 0x0048(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryModuleSettings");
		return ptr;
	}

};


// Class GbxInventory.InventoryNamePartData
// 0x0030 (0x0060 - 0x0030)
class UInventoryNamePartData : public UGbxDataAsset
{
public:
	struct FText                                       PartName;                                                 // 0x0030(0x0028) (Edit)
	float                                              Priority;                                                 // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UGbxCondition*                               Condition;                                                // 0x0050(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                MinExperienceLevel;                                       // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxExperienceLevel;                                       // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryNamePartData");
		return ptr;
	}

};


// Class GbxInventory.InventoryOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UInventoryOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryOwnerInterface");
		return ptr;
	}


	void AttachedItemPickedUp(class AInventoryItemPickup* InventoryItemPickedUp, class AActor* PickedUpBy);
};


// Class GbxInventory.InventoryParticleAspectData
// 0x0040 (0x0078 - 0x0038)
class UInventoryParticleAspectData : public UInventoryAspectData
{
public:
	class UParticleSystem*                             ParticleSystem;                                           // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ComponentName;                                            // 0x0040(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0048(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeTranslation;                                      // 0x0050(0x000C) (Edit, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x005C(0x000C) (Edit, BlueprintReadOnly, IsPlainOldData)
	TArray<struct FConditionalInventoryParticleEmitter> ConditionalEmitters;                                      // 0x0068(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventoryParticleAspectData");
		return ptr;
	}

};


// Class GbxInventory.InventorySerialNumberAssetInterface
// 0x0000 (0x0028 - 0x0028)
class UInventorySerialNumberAssetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventorySerialNumberAssetInterface");
		return ptr;
	}

};


// Class GbxInventory.InventorySerialNumberDatabase
// 0x00B8 (0x00E0 - 0x0028)
class UInventorySerialNumberDatabase : public UObject
{
public:
	TArray<class UClass*>                              AssetClasses;                                             // 0x0028(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0038(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.InventorySerialNumberDatabase");
		return ptr;
	}

};


// Class GbxInventory.ItemPoolExpansionData
// 0x0018 (0x0048 - 0x0030)
class UItemPoolExpansionData : public UGbxDataAsset
{
public:
	class UItemPoolData*                               ItemPoolToExpand;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FBalancedInventoryInfo>              BalancedItems;                                            // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.ItemPoolExpansionData");
		return ptr;
	}

};


// Class GbxInventory.ItemPoolListData
// 0x0020 (0x0060 - 0x0040)
class UItemPoolListData : public UItemPoolListInterface
{
public:
	TArray<class UItemPoolListData*>                   ItemPoolIncludedLists;                                    // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<struct FItemPoolInfo>                       ItemPools;                                                // 0x0050(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.ItemPoolListData");
		return ptr;
	}

};


// Class GbxInventory.ItemPoolPartSelectionOverrideData
// 0x0020 (0x0050 - 0x0030)
class UItemPoolPartSelectionOverrideData : public UGbxDataAsset
{
public:
	class UClass*                                      PartSetClass;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UEnum*                                       PartTypeEnum;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FItemPoolPartSelectionPartTypeOverrideData> PartTypeOverrides;                                        // 0x0040(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.ItemPoolPartSelectionOverrideData");
		return ptr;
	}


	void EnumerateInventoryParts(unsigned char PartType, TArray<class UActorPartData*>* OutPartList);
};


// Class GbxInventory.LootableBalanceData
// 0x0028 (0x0058 - 0x0030)
class ULootableBalanceData : public UGbxDataAsset
{
public:
	TArray<struct FLootConfigurationInfo>              DefaultLoot;                                              // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<class ULootListData*>                       DefaultIncludedLootLists;                                 // 0x0040(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      DefaultLootGameStageVarianceFormula;                      // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.LootableBalanceData");
		return ptr;
	}

};


// Class GbxInventory.LootFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class ULootFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.LootFunctionLibrary");
		return ptr;
	}


	void STATIC_SpawnItemsRaw(class UObject* WorldContextObject, TArray<class UItemPoolListData*> ItemPoolLists, TArray<struct FItemPoolInfo> ExtraItemPools, int GameStage, const struct FVector& Location, const struct FRotator& Rotation, float InitialVelocity);
};


// Class GbxInventory.LootListData
// 0x0010 (0x0040 - 0x0030)
class ULootListData : public UGbxDataAsset
{
public:
	TArray<struct FLootConfigurationInfo>              LootData;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.LootListData");
		return ptr;
	}

};


// Class GbxInventory.PickupableMeshActor
// 0x0030 (0x0488 - 0x0458)
class APickupableMeshActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0458(0x0008) MISSED OFFSET
	class UGbxActionComponent*                         ActionComponent;                                          // 0x0460(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0468(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.PickupableMeshActor");
		return ptr;
	}

};


// Class GbxInventory.PickupFlyToAbleInterface
// 0x0000 (0x0028 - 0x0028)
class UPickupFlyToAbleInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.PickupFlyToAbleInterface");
		return ptr;
	}

};


// Class GbxInventory.PickupFlyToData
// 0x0060 (0x0090 - 0x0030)
class UPickupFlyToData : public UGbxDataAsset
{
public:
	float                                              MaxLifetime;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetThreshold;                                          // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableSpinSpeedRange : 1;                                // 0x0038(0x0001) (Edit)
	unsigned char                                      bEnableLinearSpeedRange : 1;                              // 0x0038(0x0001) (Edit)
	unsigned char                                      bEnableTargetRotationSpeedRange : 1;                      // 0x0038(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FRotator                                    SpinSpeed;                                                // 0x003C(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    MaxSpinSpeed;                                             // 0x0048(0x000C) (Edit, IsPlainOldData)
	float                                              LinearSpeed;                                              // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLinearSpeed;                                           // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LinearAcceleration;                                       // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TerminalLinearSpeed;                                      // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetRotationSpeed;                                      // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTargetRotationSpeed;                                   // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 TargetScaleByDistanceCurve;                               // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetScaleByDistanceBlendInSpeed;                        // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 ArcCurve;                                                 // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArcCompletePercent;                                       // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.PickupFlyToData");
		return ptr;
	}

};


// Class GbxInventory.PickupFlyToTargetInterface
// 0x0000 (0x0028 - 0x0028)
class UPickupFlyToTargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxInventory.PickupFlyToTargetInterface");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
