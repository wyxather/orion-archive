#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_GbxRuntime_classes.hpp"
#include "BL3_GbxUI_classes.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_GbxGameSystemCore_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_OnlineSubsystemUtils_classes.hpp"
#include "BL3_GameplayTags_classes.hpp"
#include "BL3_UMG_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxInventory.EPickupLootAttachmentMode
enum class EPickupLootAttachmentMode : uint8_t
{
	Origin                         = 0,
	Center                         = 1,
	CenterAndScale                 = 2,
	CenterAndScaleUpOrDown         = 3,
	ScaleDown                      = 4,
	EPickupLootAttachmentMode_MAX  = 5
};


// Enum GbxInventory.EPlayerDroppability
enum class EPlayerDroppability : uint8_t
{
	EPD_CanDropAndSell             = 0,
	EPD_NoDrop                     = 1,
	EPD_NoDropOrSell               = 2,
	EPD_MAX                        = 3
};


// Enum GbxInventory.EPickupActionType
enum class EPickupActionType : uint8_t
{
	OnUseOrTouch                   = 0,
	OnUseOnly                      = 1,
	OnTouchOnly                    = 2,
	EPickupActionType_MAX          = 3
};


// Enum GbxInventory.EInventoryAspectUsagePriority
enum class EInventoryAspectUsagePriority : uint8_t
{
	Default                        = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	Ultra                          = 4,
	Legendary                      = 5,
	EInventoryAspectUsagePriority_MAX = 6
};


// Enum GbxInventory.EInventoryConditionalDamageApplicationTarget
enum class EInventoryConditionalDamageApplicationTarget : uint8_t
{
	Inventory                      = 0,
	InstigatorDamageCaused         = 1,
	InstigatorDamageReceived       = 2,
	EInventoryConditionalDamageApplicationTarget_MAX = 3
};


// Enum GbxInventory.EAddInventoryItemFlags
enum class EAddInventoryItemFlags : uint8_t
{
	AutoEquip                      = 0,
	AddedByPickup                  = 1,
	AddedBySave                    = 2,
	MissionReward                  = 3,
	EAddInventoryItemFlags_MAX     = 4
};


// Enum GbxInventory.EDropLifeSpanType
enum class EDropLifeSpanType : uint8_t
{
	DROP_VeryShortLived            = 0,
	DROP_ShortLived                = 1,
	DROP_LongLived                 = 2,
	DROP_LiveForever               = 3,
	DROP_LiveAsLongAsLevel         = 4,
	DROP_MAX                       = 5
};


// Enum GbxInventory.EInventorySerialNumberState
enum class EInventorySerialNumberState : uint8_t
{
	Empty                          = 0,
	Writing                        = 1,
	Full                           = 2,
	Reading                        = 3,
	Encrypted                      = 4,
	EInventorySerialNumberState_MAX = 5
};


// Enum GbxInventory.EPickupFlyToAlignmentType
enum class EPickupFlyToAlignmentType : uint8_t
{
	Spin                           = 0,
	TargetFacing                   = 1,
	EPickupFlyToAlignmentType_MAX  = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxInventory.InventoryManufacturerBalanceData
// 0x0080
struct FInventoryManufacturerBalanceData
{
	class UManufacturerData*                           ManufacturerData;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameStageGradeWeightData                   GameStageWeight;                                          // 0x0008(0x0070) (Edit)
	class UItemPoolPartSelectionOverrideData*          PartSelectionOverrideData;                                // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxInventory.RuntimeGenericPartListData
// 0x0020
struct FRuntimeGenericPartListData
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FWeightedActorPartData>              PartList;                                                 // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct GbxInventory.InventoryListEntryHandle
// 0x0004
struct FInventoryListEntryHandle
{
	int                                                Handle;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxInventory.InventoryListEntry
// 0x0034 (0x0040 - 0x000C)
struct FInventoryListEntry : public FFastArraySerializerItem
{
	struct FInventoryListEntryHandle                   Handle;                                                   // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly)
	class UInventoryCategoryData*                      BaseCategoryDefinition;                                   // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class AActor*                                      StoredActor;                                              // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPlayerDroppability                                PlayerDroppability;                                       // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0029(0x0017) MISSED OFFSET
};

// ScriptStruct GbxInventory.InventoryListContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FInventoryListContainer : public FFastArraySerializer
{
	TArray<struct FInventoryListEntry>                 Items;                                                    // 0x00B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
};

// ScriptStruct GbxInventory.InventorySelectionTracker
// 0x000C
struct FInventorySelectionTracker
{
	int                                                SelectedIndex;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               TrackQuantity;                                            // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FInventoryListEntryHandle                   SelectedHandle;                                           // 0x0008(0x0004)
};

// ScriptStruct GbxInventory.InventoryReplicationData
// 0x0010
struct FInventoryReplicationData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GbxInventory.InventoryPrimitiveSectionAspectSetData
// 0x0018
struct FInventoryPrimitiveSectionAspectSetData
{
	class UInventoryMaterialAspectData*                PrimaryMaterialAspect;                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UInventoryMaterialAspectData*>        MaterialAspects;                                          // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct GbxInventory.InventoryPrimitiveAspectSetData
// 0x0020
struct FInventoryPrimitiveAspectSetData
{
	struct FName                                       PrimitiveComponentName;                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       PrimitiveComponentTag;                                    // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FInventoryPrimitiveSectionAspectSetData> SectionAspectSetList;                                     // 0x0010(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct GbxInventory.InventoryItemPickupClientSpawnData
// 0x0030
struct FInventoryItemPickupClientSpawnData
{
	bool                                               bSpawnDefaultPickupActor;                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FInventoryReplicationData                   BalanceData;                                              // 0x0008(0x0010)
	struct FReplicatedUIStatCollectionData             UIStats;                                                  // 0x0018(0x0010)
	int                                                MonetaryValue;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InventoryScoreValue;                                      // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxInventory.PoolSocketAttachmentInfo
// 0x0048
struct FPoolSocketAttachmentInfo
{
	class UItemPoolData*                               ItemPool;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachmentPointName;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAttributeInitializationData                Weight;                                                   // 0x0010(0x0038) (Edit)
};

// ScriptStruct GbxInventory.LootAttachmentInfo
// 0x0058
struct FLootAttachmentInfo
{
	class UItemPoolData*                               ItemPool;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachmentPointName;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAttributeInitializationData                Probability;                                              // 0x0010(0x0038) (Edit)
	TArray<struct FPoolSocketAttachmentInfo>           OverrideAttachmentList;                                   // 0x0048(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxInventory.LootConfigurationInfo
// 0x0058
struct FLootConfigurationInfo
{
	struct FName                                       ConfigurationName;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LootGameStageVarianceFormula;                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAttributeInitializationData                Weight;                                                   // 0x0010(0x0038) (Edit)
	TArray<struct FLootAttachmentInfo>                 ItemAttachments;                                          // 0x0048(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxInventory.BalancedInventoryInfo
// 0x0070
struct FBalancedInventoryInfo
{
	class UItemPoolData*                               ItemPoolData;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class UInventoryBalanceData>        InventoryBalanceData;                                     // 0x0008(0x0028) (Edit)
	class UInventoryBalanceData*                       ResolvedInventoryBalanceData;                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FAttributeInitializationData                Weight;                                                   // 0x0038(0x0038) (Edit)
};

// ScriptStruct GbxInventory.RarityMaterialData
// 0x0010
struct FRarityMaterialData
{
	class UInventoryRarityData*                        Rarity;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxInventory.MaterialParameterData
// 0x0008
struct FMaterialParameterData
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxInventory.MaterialVectorParameterData
// 0x0010 (0x0018 - 0x0008)
struct FMaterialVectorParameterData : public FMaterialParameterData
{
	struct FLinearColor                                Vector;                                                   // 0x0008(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct GbxInventory.MaterialScalarParameterData
// 0x0008 (0x0010 - 0x0008)
struct FMaterialScalarParameterData : public FMaterialParameterData
{
	float                                              Scalar;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxInventory.MaterialTextureParameterData
// 0x0008 (0x0010 - 0x0008)
struct FMaterialTextureParameterData : public FMaterialParameterData
{
	class UTexture*                                    Texture;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxInventory.MaterialTextureAssetParameterData
// 0x0028 (0x0030 - 0x0008)
struct FMaterialTextureAssetParameterData : public FMaterialParameterData
{
	TSoftObjectPtr<class UTexture>                     Texture;                                                  // 0x0008(0x0028) (Edit)
};

// ScriptStruct GbxInventory.MaterialFontParameterData
// 0x0010 (0x0018 - 0x0008)
struct FMaterialFontParameterData : public FMaterialParameterData
{
	class UFont*                                       Font;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FontPage;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct GbxInventory.InventoryGenericPartListData
// 0x0000 (0x0028 - 0x0028)
struct FInventoryGenericPartListData : public FActorPartListData
{

};

// ScriptStruct GbxInventory.InventoryBalanceStateInitializationData
// 0x0068
struct FInventoryBalanceStateInitializationData
{
	int                                                GameStage;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UInventoryData*                              InventoryData;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UInventoryBalanceData*                       InventoryBalanceData;                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UManufacturerData*                           ManufacturerData;                                         // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class UInventoryPartData*>                  PartList;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	TArray<class UInventoryGenericPartData*>           GenericPartList;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	TArray<unsigned char>                              AdditionalData;                                           // 0x0040(0x0010) (ZeroConstructor)
	TArray<class UInventoryCustomizationPartData*>     CustomizationPartList;                                    // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      ReRollCount;                                              // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDroppedFromAI;                                           // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
};

// ScriptStruct GbxInventory.InventoryConditionalDamageAspectInfo
// 0x0010
struct FInventoryConditionalDamageAspectInfo
{
	class UConditionalDamageModifier*                  ConditionalModifier;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseInventoryForDamageValueContext;                       // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EInventoryConditionalDamageApplicationTarget       ApplicationTarget;                                        // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct GbxInventory.InventoryGenericPartExpansionListData
// 0x0000 (0x0028 - 0x0028)
struct FInventoryGenericPartExpansionListData : public FActorPartListData
{

};

// ScriptStruct GbxInventory.ConditionalInventoryParticleEmitter
// 0x0018
struct FConditionalInventoryParticleEmitter
{
	class UGbxCondition*                               EnableCondition;                                          // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               EmitterNames;                                             // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxInventory.ItemPoolInfo
// 0x0088
struct FItemPoolInfo
{
	class UItemPoolData*                               ItemPool;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAttributeInitializationData                PoolProbability;                                          // 0x0008(0x0038) (Edit, BlueprintVisible)
	struct FAttributeInitializationData                NumberOfTimesToSelectFromThisPool;                        // 0x0040(0x0038) (Edit, BlueprintVisible)
	TArray<class UItemPoolPartSelectionOverrideData*>  PartSelectionOverrides;                                   // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct GbxInventory.ItemPoolPartSelectionPartTypeOverrideData
// 0x0018
struct FItemPoolPartSelectionPartTypeOverrideData
{
	unsigned char                                      PartType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UActorPartData*>                      PreferredParts;                                           // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxInventory.SelectedInventoryInfo
// 0x0060
struct FSelectedInventoryInfo
{
	class UInventoryData*                              InventoryData;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInventoryBalanceData*                       InventoryBalanceData;                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UManufacturerData*                           ManufacturerData;                                         // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                GameStage;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FActorPartSelectionOverrideData             PartSelectionOverrideData;                                // 0x0020(0x0010)
	struct FActorPartList                              GenericPartSelectionOverrideData;                         // 0x0030(0x0018)
	TArray<class UInventoryGenericPartData*>           GenericPartsToInject;                                     // 0x0048(0x0010) (ZeroConstructor)
	bool                                               bCompileUIStats;                                          // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDroppedFromAI;                                           // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
};

// ScriptStruct GbxInventory.InventorySaveGameData
// 0x0080
struct FInventorySaveGameData
{
	TArray<unsigned char>                              EncryptedSerialNumber;                                    // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FInventoryBalanceStateInitializationData    DevelopmentSaveData;                                      // 0x0010(0x0068) (Edit, EditConst)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct GbxInventory.ItemPoolCollection
// 0x0020
struct FItemPoolCollection
{
	TArray<struct FItemPoolInfo>                       ItemPools;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UItemPoolListData*>                   ItemPoolLists;                                            // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxInventory.InventoryListEntryUIData
// 0x0008
struct FInventoryListEntryUIData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct GbxInventory.InventoryCategorySaveData
// 0x0010
struct FInventoryCategorySaveData
{
	class UInventoryCategoryData*                      BaseCategoryDefinition;                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxInventory.InventorySerialNumber
// 0x0020
struct FInventorySerialNumber
{
	EInventorySerialNumberState                        State;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<unsigned char>                              Buffer;                                                   // 0x0008(0x0010) (ZeroConstructor)
	uint32_t                                           RunningCounter;                                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxInventory.ManufacturerGradeData
// 0x0010
struct FManufacturerGradeData
{
	class FString                                      DisplayName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
