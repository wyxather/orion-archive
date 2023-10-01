#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_WwiseAudio_classes.hpp"
#include "BL3_GbxFluidSimulation_classes.hpp"
#include "BL3_GbxRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxAudio.EDistributedSoundDebugVisualizationMode
enum class EDistributedSoundDebugVisualizationMode : uint8_t
{
	Off                            = 0,
	ActiveLocations                = 1,
	Tree                           = 2,
	LeafNodes                      = 3,
	EDistributedSoundDebugVisualizationMode_MAX = 4
};


// Enum GbxAudio.EWwiseNotifyComponentMethod
enum class EWwiseNotifyComponentMethod : uint8_t
{
	UseActorDefaultComponent       = 0,
	FindComponentsByTag            = 1,
	SpawnComponentAtSocket         = 2,
	EWwiseNotifyComponentMethod_MAX = 3
};


// Enum GbxAudio.EOcclusionVoxelThinningAlgorithm
enum class EOcclusionVoxelThinningAlgorithm : uint8_t
{
	Skeletal                       = 0,
	MedialPlane                    = 1,
	EOcclusionVoxelThinningAlgorithm_MAX = 2
};


// Enum GbxAudio.EFilterResultOperation
enum class EFilterResultOperation : uint8_t
{
	AcceptAsNewResult              = 0,
	Add                            = 1,
	Subtract                       = 2,
	EFilterResultOperation_MAX     = 3
};


// Enum GbxAudio.ECharacterSoundType
enum class ECharacterSoundType : uint8_t
{
	SFX                            = 0,
	Vocalization                   = 1,
	ECharacterSoundType_MAX        = 2
};


// Enum GbxAudio.EDistributedSoundMode
enum class EDistributedSoundMode : uint8_t
{
	Point                          = 0,
	VolumetricSphere               = 1,
	EDistributedSoundMode_MAX      = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxAudio.ActiveAmbientInstance
// 0x0040
struct FActiveAmbientInstance
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct GbxAudio.FoleyEventParams
// 0x0048
struct FFoleyEventParams
{
	class UWwiseEvent*                                 WwiseEvent;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseSwitch*                                OptionalMaterialSwitch;                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ComponentTags;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
};

// ScriptStruct GbxAudio.ActiveLoopingSoundNotifyData
// 0x0010
struct FActiveLoopingSoundNotifyData
{
	TArray<struct FWwisePlaybackInstance>              Instances;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxAudio.ADMSubscriberData
// 0x0038
struct FADMSubscriberData
{
	TScriptInterface<class UAudioDistanceThresholdSubscriberInterface> Subscriber;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) MISSED OFFSET
};

// ScriptStruct GbxAudio.AudioPrepComponentFilter
// 0x00A8
struct FAudioPrepComponentFilter
{
	TArray<class FString>                              AssetNameFilter;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EPhysicalSurface>>              SurfaceTypeFilter;                                        // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TSoftObjectPtr<class UPhysicalMaterial>>    PhysMatFilter;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TSoftObjectPtr<class UMaterialInterface>>   MaterialFilter;                                           // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              MaterialName;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              WithinActorBoundsBlueprint;                               // 0x0050(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<TLazyObjectPtr<class AActor>>               WithinActorBounds;                                        // 0x0060(0x0010) (Edit, ZeroConstructor)
	TArray<TLazyObjectPtr<class AActor>>               AttachedToActors;                                         // 0x0070(0x0010) (Edit, ZeroConstructor)
	TArray<class FString>                              ActorClassName;                                           // 0x0080(0x0010) (Edit, ZeroConstructor)
	TArray<class FString>                              ComponentClassName;                                       // 0x0090(0x0010) (Edit, ZeroConstructor)
	bool                                               bOnlyWorldGeometry;                                       // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
};

// ScriptStruct GbxAudio.CharacterSoundImplementation
// 0x0020
struct FCharacterSoundImplementation
{
	bool                                               bOriginator;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UWwiseEvent*                                 DefaultWwiseEvent;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideWwiseEvent;                                      // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UWwiseEvent*                                 WwiseEvent;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAudio.InheritableSoundMap
// 0x0050
struct FInheritableSoundMap
{
	TMap<class UCharacterSoundTag*, struct FCharacterSoundImplementation> CharacterSounds;                                          // 0x0000(0x0050) (Edit, ZeroConstructor, DisableEditOnTemplate)
};

// ScriptStruct GbxAudio.CharacterVocalLoopImplementation
// 0x0078
struct FCharacterVocalLoopImplementation
{
	bool                                               bOriginator;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       LoopName;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPainLoop;                                                // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FGuid                                       LoopID;                                                   // 0x0014(0x0010) (IsPlainOldData)
	bool                                               bOverrideConditions;                                      // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FGuid                                       ConditionID;                                              // 0x0028(0x0010) (IsPlainOldData)
	class UGbxCondition*                               Condition;                                                // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bPlayOnce;                                                // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              StopTryingToRunAfterXSeconds;                             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       WhileConditionID;                                         // 0x0048(0x0010) (IsPlainOldData)
	class UGbxCondition*                               WhileCondition;                                           // 0x0058(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bOverrideAudio;                                           // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	class UWwiseEvent*                                 StartEvent;                                               // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopEvent;                                                // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAudio.InheritableVocalLoopList
// 0x0010
struct FInheritableVocalLoopList
{
	TArray<struct FCharacterVocalLoopImplementation>   VocalLoops;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxAudio.CurrentVocalization
// 0x0020
struct FCurrentVocalization
{
	class UCharacterSoundTag*                          Tag;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FWwisePlaybackInstance                      PlayingInstance;                                          // 0x0008(0x0018)
};

// ScriptStruct GbxAudio.CharacterSoundLoopDetails
// 0x0020
struct FCharacterSoundLoopDetails
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct GbxAudio.CurrentVocalLoopInfo
// 0x0048
struct FCurrentVocalLoopInfo
{
	struct FGuid                                       LoopID;                                                   // 0x0000(0x0010) (IsPlainOldData)
	struct FWwisePlaybackInstance                      PlayingInstance;                                          // 0x0010(0x0018)
	struct FCharacterSoundLoopDetails                  Details;                                                  // 0x0028(0x0020)
};

// ScriptStruct GbxAudio.ExtraFoleyParameter
// 0x0010
struct FExtraFoleyParameter
{
	class UWwiseRtpc*                                  RtpcParam;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxAudio.AudioPropHitFilter_DirectionLimit
// 0x0014
struct FAudioPropHitFilter_DirectionLimit
{
	struct FVector                                     Direction;                                                // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FFloatInterval                              DotProductLimits;                                         // 0x000C(0x0008) (Edit)
};

// ScriptStruct GbxAudio.AudioPrepHitResultFilter
// 0x0078
struct FAudioPrepHitResultFilter
{
	TArray<class FString>                              HitAssetNameFilter;                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EPhysicalSurface>>              SurfaceTypeFilter;                                        // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TSoftObjectPtr<class UPhysicalMaterial>>    PhysMatFilter;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TSoftObjectPtr<class UMaterialInterface>>   MaterialFilter;                                           // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              WithinActorBoundsBlueprint;                               // 0x0040(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<TLazyObjectPtr<class AActor>>               WithinActorBounds;                                        // 0x0050(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAudioPropHitFilter_DirectionLimit>  NormalDirectionLimits;                                    // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bAllowHitsWithinGeometry;                                 // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};

// ScriptStruct GbxAudio.WindLocalAxisSensitivity
// 0x0008
struct FWindLocalAxisSensitivity
{
	float                                              PositiveDirectionSensitivity;                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NegativeDirectionSensitivity;                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct GbxAudio.WindDirectionalSensitivity
// 0x0018
struct FWindDirectionalSensitivity
{
	struct FWindLocalAxisSensitivity                   LocalX;                                                   // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	struct FWindLocalAxisSensitivity                   LocalY;                                                   // 0x0008(0x0008) (Edit, DisableEditOnInstance)
	struct FWindLocalAxisSensitivity                   LocalZ;                                                   // 0x0010(0x0008) (Edit, DisableEditOnInstance)
};

// ScriptStruct GbxAudio.ResultGridFilter
// 0x0018
struct FResultGridFilter
{
	int                                                Iterations;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EFilterResultOperation                             ResultOperation;                                          // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0004(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<class FString>                              StructuringElements;                                      // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxAudio.CharacterVocalLoop
// 0x0028
struct FCharacterVocalLoop
{
	class UWwiseEvent*                                 StartEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopEvent;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxCondition*                               Condition;                                                // 0x0010(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               WhileCondition;                                           // 0x0018(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bPainLoop;                                                // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
