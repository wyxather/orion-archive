#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxAudio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxAudio.ActiveAmbientLocationChooser
// 0x0000 (0x0028 - 0x0028)
class UActiveAmbientLocationChooser : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationChooser");
		return ptr;
	}

};


// Class GbxAudio.ActiveAmbientLocationChooser_Blueprint
// 0x0000 (0x0028 - 0x0028)
class UActiveAmbientLocationChooser_Blueprint : public UActiveAmbientLocationChooser
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationChooser_Blueprint");
		return ptr;
	}


	bool NominateSoundLocation(class UActiveAmbientSoundComponent* ActiveAmbientComponent, float Out_Radius, struct FVector* Out_Location);
	void InitLocationChooser(class UActiveAmbientSoundComponent* ActiveAmbientComponent);
};


// Class GbxAudio.ActiveAmbientLocationChooser_RandomWithinActor
// 0x0020 (0x0048 - 0x0028)
class UActiveAmbientLocationChooser_RandomWithinActor : public UActiveAmbientLocationChooser
{
public:
	TLazyObjectPtr<class AActor>                       WithinActor;                                              // 0x0028(0x001C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationChooser_RandomWithinActor");
		return ptr;
	}

};


// Class GbxAudio.ActiveAmbientLocationChooser_RandomWithTrace
// 0x0010 (0x0058 - 0x0048)
class UActiveAmbientLocationChooser_RandomWithTrace : public UActiveAmbientLocationChooser_RandomWithinActor
{
public:
	struct FVector                                     TraceVector;                                              // 0x0048(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationChooser_RandomWithTrace");
		return ptr;
	}

};


// Class GbxAudio.ActiveAmbientLocationChooser_RandomOnCeiling
// 0x0000 (0x0058 - 0x0058)
class UActiveAmbientLocationChooser_RandomOnCeiling : public UActiveAmbientLocationChooser_RandomWithTrace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationChooser_RandomOnCeiling");
		return ptr;
	}

};


// Class GbxAudio.ActiveAmbientLocationChooser_RandomOnFloor
// 0x0000 (0x0058 - 0x0058)
class UActiveAmbientLocationChooser_RandomOnFloor : public UActiveAmbientLocationChooser_RandomWithTrace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationChooser_RandomOnFloor");
		return ptr;
	}

};


// Class GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation
// 0x0028 (0x0050 - 0x0028)
class UActiveAmbientLocationChooser_PreselectedLocation : public UActiveAmbientLocationChooser
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FVector>                             Locations;                                                // 0x0030(0x0010) (ZeroConstructor)
	TArray<float>                                      Radii;                                                    // 0x0040(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation");
		return ptr;
	}


	void UpdateLocations();
	void DrawLocations();
	bool AddLocation(const struct FVector& InLocation, float InRadius);
};


// Class GbxAudio.ActiveAmbientLocationChooser_Party
// 0x0038 (0x0088 - 0x0050)
class UActiveAmbientLocationChooser_Party : public UActiveAmbientLocationChooser_PreselectedLocation
{
public:
	float                                              PartierWeight;                                            // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PartierRadius;                                            // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              IntensityRange;                                           // 0x0058(0x0008) (Edit)
	float                                              PartyDecayPerNomination;                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bVisualizeParty;                                          // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	float                                              PartyVisualizationLineLength;                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<float>                                      PartyWeights;                                             // 0x0070(0x0010) (ZeroConstructor)
	float                                              TotalPartyWeight;                                         // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationChooser_Party");
		return ptr;
	}

};


// Class GbxAudio.ActiveAmbientLocationValidator
// 0x0000 (0x0028 - 0x0028)
class UActiveAmbientLocationValidator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationValidator");
		return ptr;
	}

};


// Class GbxAudio.ActiveAmbientLocationValidator_Blueprint
// 0x0000 (0x0028 - 0x0028)
class UActiveAmbientLocationValidator_Blueprint : public UActiveAmbientLocationValidator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationValidator_Blueprint");
		return ptr;
	}


	bool IsProposedLocationValid(class UActiveAmbientSoundComponent* ActiveAmbientComponent, const struct FVector& Location);
};


// Class GbxAudio.ActiveAmbientLocationValidator_DistanceFromListener
// 0x0008 (0x0030 - 0x0028)
class UActiveAmbientLocationValidator_DistanceFromListener : public UActiveAmbientLocationValidator
{
public:
	struct FFloatInterval                              Range;                                                    // 0x0028(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationValidator_DistanceFromListener");
		return ptr;
	}

};


// Class GbxAudio.ActiveAmbientSound
// 0x0010 (0x0468 - 0x0458)
class AActiveAmbientSound : public AActor
{
public:
	int                                                TargetInstances;                                          // 0x0458(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	class UActiveAmbientSoundComponent*                ActiveAmbientSound;                                       // 0x0460(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientSound");
		return ptr;
	}


	void EnableSounds();
	void DisableSounds();
};


// Class GbxAudio.ActiveAmbientSoundComponent
// 0x0090 (0x0208 - 0x0178)
class UActiveAmbientSoundComponent : public UActorComponent
{
public:
	class UWwiseEvent*                                 StartEvent;                                               // 0x0178(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              LoopDuration;                                             // 0x0180(0x0008) (Edit)
	class UWwiseEvent*                                 ExpiredStopEvent;                                         // 0x0188(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExpiredStopFadeTime;                                      // 0x0190(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TargetSimultaneousInstances;                              // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              RepopulateDelay;                                          // 0x0198(0x0008) (Edit)
	class UActiveAmbientLocationChooser*               LocationChooser;                                          // 0x01A0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActiveAmbientLocationValidator*             LocationValidator;                                        // 0x01A8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UActiveAmbientUpdater*>               Updaters;                                                 // 0x01B0(0x0010) (Edit, ExportObject, ZeroConstructor)
	bool                                               bWaryOfPlayers;                                           // 0x01C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01C1(0x0003) MISSED OFFSET
	float                                              WaryDistance;                                             // 0x01C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WaryStopEvent;                                            // 0x01C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WaryStopFadeTime;                                         // 0x01D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartleRecoveryTime;                                      // 0x01D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StartedStopEvent;                                         // 0x01D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartledStopFadeTime;                                     // 0x01E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET
	TArray<struct FActiveAmbientInstance>              ActiveAmbientInstances;                                   // 0x01E8(0x0010) (ZeroConstructor, Transient)
	float                                              NextSpawnTime;                                            // 0x01F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeSinceLastSpawn;                                       // 0x01FC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RemainingStartleRecovery;                                 // 0x0200(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0204(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientSoundComponent");
		return ptr;
	}


	void Startle(const struct FVector& Location, float Radius);
};


// Class GbxAudio.ActiveAmbientUpdater
// 0x0000 (0x0028 - 0x0028)
class UActiveAmbientUpdater : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientUpdater");
		return ptr;
	}

};


// Class GbxAudio.ActiveAmbientUpdater_Blueprint
// 0x0000 (0x0028 - 0x0028)
class UActiveAmbientUpdater_Blueprint : public UActiveAmbientUpdater
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientUpdater_Blueprint");
		return ptr;
	}


	void UpdateActiveAmbientInstance(class UActiveAmbientSoundComponent* ActiveAmbientComponent, float DeltaTime, struct FActiveAmbientInstance* ActiveAmbientInstance);
	void InitializeActiveAmbientInstance(class UActiveAmbientSoundComponent* ActiveAmbientComponent, struct FActiveAmbientInstance* ActiveAmbientInstance);
};


// Class GbxAudio.ActiveAmbientUpdater_MoveInRandomDirection
// 0x0008 (0x0030 - 0x0028)
class UActiveAmbientUpdater_MoveInRandomDirection : public UActiveAmbientUpdater
{
public:
	struct FFloatInterval                              SpeedRange;                                               // 0x0028(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientUpdater_MoveInRandomDirection");
		return ptr;
	}

};


// Class GbxAudio.ActiveAmbientUpdater_MoveWithWobble
// 0x0008 (0x0038 - 0x0030)
class UActiveAmbientUpdater_MoveWithWobble : public UActiveAmbientUpdater_MoveInRandomDirection
{
public:
	float                                              DirectionUpdateFrequency;                                 // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DirectionUpdateCone;                                      // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientUpdater_MoveWithWobble");
		return ptr;
	}

};


// Class GbxAudio.AmbientSoundBox
// 0x0008 (0x0540 - 0x0538)
class AAmbientSoundBox : public AWwiseAmbientSound
{
public:
	class UBoxComponent*                               BoxComponent;                                             // 0x0538(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AmbientSoundBox");
		return ptr;
	}

};


// Class GbxAudio.AmbientSoundSphere
// 0x0008 (0x0540 - 0x0538)
class AAmbientSoundSphere : public AWwiseAmbientSound
{
public:
	class USphereComponent*                            SphereComponent;                                          // 0x0538(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AmbientSoundSphere");
		return ptr;
	}

};


// Class GbxAudio.AmbientSoundSpline
// 0x0028 (0x0560 - 0x0538)
class AAmbientSoundSpline : public AWwiseAmbientSound
{
public:
	class USplineComponent*                            SplineComponent;                                          // 0x0538(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bForceEmitterUniformScale;                                // 0x0540(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0541(0x0003) MISSED OFFSET
	struct FBoxSphereBounds                            CachedBounds;                                             // 0x0544(0x001C) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AmbientSoundSpline");
		return ptr;
	}

};


// Class GbxAudio.AnimNotify_CharacterSound
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_CharacterSound : public UAnimNotify
{
public:
	class UCharacterSoundTag*                          Tag;                                                      // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AnimNotify_CharacterSound");
		return ptr;
	}

};


// Class GbxAudio.AnimNotify_Foley
// 0x0050 (0x0088 - 0x0038)
class UAnimNotify_Foley : public UAnimNotify
{
public:
	struct FFoleyEventParams                           FoleyParams;                                              // 0x0038(0x0048) (Edit, BlueprintReadOnly)
	bool                                               bRestrictToMatchingPlayerPerspective;                     // 0x0080(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AnimNotify_Foley");
		return ptr;
	}

};


// Class GbxAudio.AnimNotify_FootFoley
// 0x0008 (0x0090 - 0x0088)
class UAnimNotify_FootFoley : public UAnimNotify_Foley
{
public:
	int                                                FootIndex;                                                // 0x0088(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AnimNotify_FootFoley");
		return ptr;
	}

};


// Class GbxAudio.AnimNotify_WwiseEvent
// 0x0030 (0x0068 - 0x0038)
class UAnimNotify_WwiseEvent : public UAnimNotify
{
public:
	class UWwiseEvent*                                 WwiseEvent;                                               // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EWwiseNotifyComponentMethod                        PlaybackMethod;                                           // 0x0040(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0040(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FName                                       WwiseComponentTag;                                        // 0x0048(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0050(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAttachToOwner;                                           // 0x0058(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              EmitterRadius;                                            // 0x005C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnorePerspective;                                       // 0x0060(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EAcousticsMode                                     AcousticsMode;                                            // 0x0061(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0062(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AnimNotify_WwiseEvent");
		return ptr;
	}

};


// Class GbxAudio.AnimNotifyState_LoopingSound
// 0x0080 (0x00B0 - 0x0030)
class UAnimNotifyState_LoopingSound : public UAnimNotifyState
{
public:
	class UWwiseEvent*                                 StartEvent;                                               // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopEvent;                                                // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EWwiseNotifyComponentMethod                        PlaybackMethod;                                           // 0x0040(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0040(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FName                                       WwiseComponentTag;                                        // 0x0048(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0050(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAttachToOwner;                                           // 0x0058(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              EmitterRadius;                                            // 0x005C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<uint32_t, struct FActiveLoopingSoundNotifyData> ActivePlaybackInstances;                                  // 0x0060(0x0050) (BlueprintReadOnly, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AnimNotifyState_LoopingSound");
		return ptr;
	}

};


// Class GbxAudio.AudioDistanceThresholdSubscriberInterface
// 0x0000 (0x0028 - 0x0028)
class UAudioDistanceThresholdSubscriberInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AudioDistanceThresholdSubscriberInterface");
		return ptr;
	}

};


// Class GbxAudio.AudioDistanceThresholdManager
// 0x0028 (0x0050 - 0x0028)
class UAudioDistanceThresholdManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TWeakObjectPtr<class UWorld>                       World;                                                    // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FADMSubscriberData>                  SubscriberData;                                           // 0x0038(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AudioDistanceThresholdManager");
		return ptr;
	}

};


// Class GbxAudio.AudioOcclusionVoxelDataProvider
// 0x0178 (0x01A0 - 0x0028)
class UAudioOcclusionVoxelDataProvider : public UVoxelDataProvider
{
public:
	struct FIntVector                                  DataResolution;                                           // 0x0028(0x000C) (Edit, Transient, EditConst, IsPlainOldData)
	bool                                               bUseMaterialLibrary;                                      // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	class FString                                      TritonMaterialLibraryFile;                                // 0x0038(0x0010) (Edit, ZeroConstructor)
	TMap<class FString, class FString>                 ExtraTritonMaterialEquivalences;                          // 0x0048(0x0050) (Edit, ZeroConstructor)
	TEnumAsByte<ECollisionChannel>                     CheckCollisionChannel;                                    // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    CheckCollisionResponse;                                   // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bVoxelizeFoliage;                                         // 0x009A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x009B(0x0001) MISSED OFFSET
	int                                                ExtraTerrainThickness;                                    // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFlagMatchingVoxels;                                      // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	struct FAudioPrepComponentFilter                   FlagVoxelsForComponentsFilter;                            // 0x00A8(0x00A8) (Edit)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0150(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AudioOcclusionVoxelDataProvider");
		return ptr;
	}

};


// Class GbxAudio.AudioOcclusionVoxelizerZone
// 0x0000 (0x0458 - 0x0458)
class AAudioOcclusionVoxelizerZone : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AudioOcclusionVoxelizerZone");
		return ptr;
	}


	void Voxelize();
	void ExportAsRLE();
	void ExportAsRaw();
};


// Class GbxAudio.AudioPrepLocationConsumer
// 0x0000 (0x0028 - 0x0028)
class UAudioPrepLocationConsumer : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationConsumer");
		return ptr;
	}

};


// Class GbxAudio.AudioPrepLocationFinder
// 0x0000 (0x0028 - 0x0028)
class UAudioPrepLocationFinder : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder");
		return ptr;
	}

};


// Class GbxAudio.AudioPrepLocationFinder_Blueprint
// 0x0010 (0x0038 - 0x0028)
class UAudioPrepLocationFinder_Blueprint : public UAudioPrepLocationFinder
{
public:
	TScriptInterface<class UAudioPrepLocationConsumer> CurrentConsumer;                                          // 0x0028(0x0010) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_Blueprint");
		return ptr;
	}


	void AddLocation(const struct FVector& Location, const struct FRotator& Rotation, float Radius);
	void AddFoundLocations();
};


// Class GbxAudio.ActiveAmbientLocationFinder_Blueprint
// 0x0000 (0x0028 - 0x0028)
class UActiveAmbientLocationFinder_Blueprint : public UAudioPrepLocationFinder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationFinder_Blueprint");
		return ptr;
	}


	void AddFoundLocations(class UActiveAmbientSoundComponent* ActiveAmbientComponent, class UActiveAmbientLocationChooser_PreselectedLocation* PreselectedLocationChooser);
};


// Class GbxAudio.AudioPrepLocationFinder_ActorList
// 0x0000 (0x0028 - 0x0028)
class UAudioPrepLocationFinder_ActorList : public UAudioPrepLocationFinder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_ActorList");
		return ptr;
	}

};


// Class GbxAudio.AudioPrepLocationFinder_FilteredComponents
// 0x0000 (0x0028 - 0x0028)
class UAudioPrepLocationFinder_FilteredComponents : public UAudioPrepLocationFinder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_FilteredComponents");
		return ptr;
	}

};


// Class GbxAudio.AudioPrepLocationFinder_SplineTracer
// 0x0000 (0x0028 - 0x0028)
class UAudioPrepLocationFinder_SplineTracer : public UAudioPrepLocationFinder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_SplineTracer");
		return ptr;
	}

};


// Class GbxAudio.AudioPrepLocationFinder_PincushionTracer
// 0x0000 (0x0028 - 0x0028)
class UAudioPrepLocationFinder_PincushionTracer : public UAudioPrepLocationFinder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_PincushionTracer");
		return ptr;
	}

};


// Class GbxAudio.AudioPrepLocationFinder_TraceDownToActor
// 0x0000 (0x0028 - 0x0028)
class UAudioPrepLocationFinder_TraceDownToActor : public UAudioPrepLocationFinder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_TraceDownToActor");
		return ptr;
	}

};


// Class GbxAudio.AudioPrepLocationFinder_FoliageLocations
// 0x0000 (0x0028 - 0x0028)
class UAudioPrepLocationFinder_FoliageLocations : public UAudioPrepLocationFinder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_FoliageLocations");
		return ptr;
	}

};


// Class GbxAudio.AudioPrepLocationFinder_LandscapeGrassLocations
// 0x0000 (0x0028 - 0x0028)
class UAudioPrepLocationFinder_LandscapeGrassLocations : public UAudioPrepLocationFinder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_LandscapeGrassLocations");
		return ptr;
	}

};


// Class GbxAudio.AudioPrepLocationFinder_InstanceLocations
// 0x0000 (0x0028 - 0x0028)
class UAudioPrepLocationFinder_InstanceLocations : public UAudioPrepLocationFinder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_InstanceLocations");
		return ptr;
	}

};


// Class GbxAudio.AudioPrepLocationFinder_Grid
// 0x0000 (0x0028 - 0x0028)
class UAudioPrepLocationFinder_Grid : public UAudioPrepLocationFinder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_Grid");
		return ptr;
	}

};


// Class GbxAudio.AudioPrepLocationFinder_TraceGrid
// 0x0000 (0x0028 - 0x0028)
class UAudioPrepLocationFinder_TraceGrid : public UAudioPrepLocationFinder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_TraceGrid");
		return ptr;
	}

};


// Class GbxAudio.AudioPrepLocationFinder_VoxelMaterialBoundary
// 0x0000 (0x0028 - 0x0028)
class UAudioPrepLocationFinder_VoxelMaterialBoundary : public UAudioPrepLocationFinder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_VoxelMaterialBoundary");
		return ptr;
	}

};


// Class GbxAudio.CharacterSoundData
// 0x0070 (0x00A0 - 0x0030)
class UCharacterSoundData : public UGbxDataAsset
{
public:
	struct FGbxTriggerProperty                         TriggerRefreshAll;                                        // 0x0030(0x0001) (Edit, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UCharacterSoundData*                         InheritData;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FInheritableSoundMap                        Sounds;                                                   // 0x0040(0x0050) (Edit)
	struct FInheritableVocalLoopList                   VocalLoops;                                               // 0x0090(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.CharacterSoundData");
		return ptr;
	}


	void RefreshAll();
};


// Class GbxAudio.CharacterSoundInterface
// 0x0000 (0x0028 - 0x0028)
class UCharacterSoundInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.CharacterSoundInterface");
		return ptr;
	}

};


// Class GbxAudio.CharacterSoundLogicComponent
// 0x01C0 (0x0338 - 0x0178)
class UCharacterSoundLogicComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	struct FCurrentVocalization                        CurrentVocalization;                                      // 0x0180(0x0020) (Transient)
	struct FCurrentVocalLoopInfo                       CurrentVocalLoop;                                         // 0x01A0(0x0048) (Transient)
	unsigned char                                      UnknownData01[0x150];                                     // 0x01E8(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.CharacterSoundLogicComponent");
		return ptr;
	}

};


// Class GbxAudio.CharacterSoundTag
// 0x0010 (0x0040 - 0x0030)
class UCharacterSoundTag : public UGbxDataAsset
{
public:
	ECharacterSoundType                                Type;                                                     // 0x0030(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              ChanceToPlay;                                             // 0x0034(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHighPriorityInterruptingVox;                             // 0x0038(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPainVox;                                                 // 0x0039(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDeathVox;                                                // 0x003A(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x003B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.CharacterSoundTag");
		return ptr;
	}

};


// Class GbxAudio.DistributedAmbientSound
// 0x0090 (0x04E8 - 0x0458)
class ADistributedAmbientSound : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0458(0x0010) MISSED OFFSET
	TArray<class UWwiseEvent*>                         SoundVariants;                                            // 0x0468(0x0010) (Edit, ZeroConstructor)
	EDistributedSoundMode                              SoundMode;                                                // 0x0478(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	class UAudioPrepLocationFinder*                    LocationFinder;                                           // 0x0480(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bTreatLocationsAsOneSource;                               // 0x0488(0x0001) (ZeroConstructor, IsPlainOldData)
	EWwiseMultiPositionType                            MultiPositionType;                                        // 0x0489(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x048A(0x0002) MISSED OFFSET
	float                                              DOffset;                                                  // 0x048C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DScale;                                                   // 0x0490(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxEmitterSize;                                           // 0x0494(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CombinedSourceVolumeRatio;                                // 0x0498(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseUnconditionalSampleModeForAcoustics;                  // 0x049C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x049D(0x0003) MISSED OFFSET
	TArray<class UWwiseAudioComponent*>                AudioComponents;                                          // 0x04A0(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<unsigned char>                              PackedTreeData;                                           // 0x04B0(0x0010) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x04C0(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x04DC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.DistributedAmbientSound");
		return ptr;
	}


	void DoUpdateTree();
	void DoFindNewLocationsAndRebuild();
};


// Class GbxAudio.FluidSimExampleZone
// 0x0000 (0x0458 - 0x0458)
class AFluidSimExampleZone : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.FluidSimExampleZone");
		return ptr;
	}


	void UpdateVisualization();
	void ExportVectorField();
	void ApplyToOtherSim();
};


// Class GbxAudio.FoleyAccessoryComponent
// 0x0050 (0x0320 - 0x02D0)
class UFoleyAccessoryComponent : public USceneComponent
{
public:
	class UWwiseEvent*                                 FoleyAccessoryWwiseEvent;                                 // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 LoopStartWwiseEvent;                                      // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccessoryVolume;                                          // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccesoryPitch;                                            // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccessoryRadius;                                          // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	class UFoleyMainComponent*                         MyFoleyMain;                                              // 0x02F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x02F8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.FoleyAccessoryComponent");
		return ptr;
	}

};


// Class GbxAudio.FoleyImplementerInterface
// 0x0000 (0x0028 - 0x0028)
class UFoleyImplementerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.FoleyImplementerInterface");
		return ptr;
	}

};


// Class GbxAudio.FoleyMainComponent
// 0x0100 (0x0278 - 0x0178)
class UFoleyMainComponent : public UActorComponent
{
public:
	class UWwiseEvent*                                 FoleyMainWwiseEvent;                                      // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 LoopStartWwiseEvent;                                      // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 FootstepWwiseEvent;                                       // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UWwiseEvent*>                         PerFootFootstepWwiseEvents;                               // 0x0190(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UWwiseSwitch*                                CharacterSizeSwitch;                                      // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoleyVolume;                                              // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoleyPitch;                                               // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootstepVolume;                                           // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootstepPitch;                                            // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               FootstepFoleyComponentTags;                               // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              FoleyAccessoryVolume;                                     // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoleyAccessoryPitch;                                      // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FExtraFoleyParameter>                ExtraParameters;                                          // 0x01D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              AttenuationScalingFactor;                                 // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET
	struct FFoleyEventParams                           CachedFootstepParams;                                     // 0x01E8(0x0048) (Transient)
	class UWwiseSwitch*                                LastMaterialSwitch;                                       // 0x0230(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWwiseEvent*                                 SurfaceModifierEvent;                                     // 0x0238(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              SurfaceModifierVolume;                                    // 0x0240(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              SurfaceModifierFootstepVolumeMultiplier;                  // 0x0244(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UFoleyAccessoryComponent*>            AssociatedFoleyAccessories;                               // 0x0248(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0258(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.FoleyMainComponent");
		return ptr;
	}


	void SetSurfaceModifier(class UWwiseEvent* PlayEvent, float Volume, float FootstepVolumeMultiplier);
	void PlayFootstepEvent(const struct FFoleyEventParams& EventParams);
	void PlayFootstep(const struct FVector& FootstepLocation, const struct FRotator& FootstepRotation, class UWwiseSwitch* MaterialSwitch, float VolumeAdjustment, float PitchAdjustment, class UWwiseEvent* ConfigureEvent, bool bPreview);
};


// Class GbxAudio.GbxAudioBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UGbxAudioBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.GbxAudioBlueprintLibrary");
		return ptr;
	}


	void STATIC_TriggerCharacterSound(class AActor* Character, class UCharacterSoundTag* SoundTag);
	void STATIC_RemoveListenerAudioEffect(class AActor* Character, class UWwiseAuxBus* Efx);
	bool STATIC_PassesAudioPreparationHitFilter(const struct FHitResult& Hit, const struct FAudioPrepHitResultFilter& Filter);
	bool STATIC_PassesAudioPreparationComponentFilter(class UPrimitiveComponent* Component, const struct FAudioPrepComponentFilter& Filter);
	void STATIC_ApplyListenerAudioEffect(class AActor* Character, class UWwiseAuxBus* Efx, float WetVolume, float DryVolume);
};


// Class GbxAudio.GbxAudioGlobalsData
// 0x01B8 (0x01E8 - 0x0030)
class UGbxAudioGlobalsData : public UGbxDataAsset
{
public:
	class UWwiseEvent*                                 PauseGameAudioEvent;                                      // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 UnpauseGameAudioEvent;                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PreLevelTransitionEvent;                                  // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PostLevelTransitionEvent;                                 // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  MasterVolumeParameter;                                    // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  UserVolumeMusicParameter;                                 // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  UserVolumeSfxParameter;                                   // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  UserVolumeVOParameter;                                    // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  UserVolumeHdrSfxParameter;                                // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  UserVolumeHdrVOParameter;                                 // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  UserVolumeHdrMixRtpc;                                     // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  UserPS4ControllerRtpc;                                    // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UWwiseBank*>                          AlwaysLoadedBanks;                                        // 0x0090(0x0010) (Edit, ZeroConstructor)
	bool                                               bEnableAcoustics;                                         // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	float                                              OcclusionStrength;                                        // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              RedirectionVolumeInterval;                                // 0x00A8(0x0008) (Edit)
	class UCurveFloat*                                 EarlyReflectionsVolumeCurve;                              // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LateReverbVolumeCurve;                                    // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ReverbBoostOutdoornessModifierCurve;                      // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReverbBoostDryGainFraction;                               // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EarlyReflectionsReverbBoostStrength;                      // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LateReverbReverbBoostStrength;                            // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WeaponFireReverbBoost;                                    // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionReverbBoost;                                     // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 MusicVolumeSliderPreviewSound;                            // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 MusicVolumeSliderPreviewSoundStop;                        // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 SFXVolumeSliderPreviewSound;                              // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 VOVolumeSliderPreviewSound;                               // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 VoiceCommVolumeSliderPreviewSound;                        // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StartStandardCinematicModeEvent;                          // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 EndStandardCinematicModeEvent;                            // 0x0110(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StartExclusiveCinematicModeEvent;                         // 0x0118(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 EndExclusiveCinematicModeEvent;                           // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCharacterSoundTag*                          JumpedVocalizationTag;                                    // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  FootstepVolumeRtpc;                                       // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  FoleyMainVolumeRtpc;                                      // 0x0138(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  FoleyAccessoryVolumeRtpc;                                 // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  FootstepPitchRtpc;                                        // 0x0148(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  FoleyMainPitchRtpc;                                       // 0x0150(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  FoleyAccessoryPitchRtpc;                                  // 0x0158(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  FoleyPerspectiveRtpc;                                     // 0x0160(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  SurfaceModifierVolumeRtpc;                                // 0x0168(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseSwitch*                                HighDetailFoleySwitch;                                    // 0x0170(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseSwitch*                                LowDetailFoleySwitch;                                     // 0x0178(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 FootstepAction;                                           // 0x0180(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 HandPlantAction;                                          // 0x0188(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FirstPersonFootstepsForwardOffset;                        // 0x0190(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	class UWwiseRtpc*                                  CharacterRelativeSpeedRtpc;                               // 0x0198(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  CharacterRelativeVerticalAirSpeedRtpc;                    // 0x01A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  WalkingSlopeRtpc;                                         // 0x01A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  WaterDepthRtpc;                                           // 0x01B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  RelativeWaterDepthRtpc;                                   // 0x01B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  RandomVariationRtpc;                                      // 0x01C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  PerspectiveRtpc;                                          // 0x01C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  ExplosionSizeRtpc;                                        // 0x01D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  PlayerLocationOutdoornessRTPC;                            // 0x01D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  OutdoornessRTPC;                                          // 0x01E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.GbxAudioGlobalsData");
		return ptr;
	}

};


// Class GbxAudio.GbxAudioSettings
// 0x0040 (0x0068 - 0x0028)
class UGbxAudioSettings : public UObject
{
public:
	class UGbxAudioGlobalsData*                        AudioGlobalsData;                                         // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FSoftObjectPath                             DefaultAudioGlobalsData;                                  // 0x0030(0x0018) (Edit, Config)
	float                                              FoleyCullingDistanceFraction;                             // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FoleyCullingDistanceMinVolumeForReduction;                // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FoleyCullingDistanceReductionFractionPerDBOverMin;        // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FSoftObjectPath>                     SkipCinematicEvents;                                      // 0x0058(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.GbxAudioSettings");
		return ptr;
	}

};


// Class GbxAudio.LightAudioComponent
// 0x00A0 (0x0370 - 0x02D0)
class ULightAudioComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D0(0x0008) MISSED OFFSET
	TMap<class UWwiseRtpc*, float>                     PersistentRTPCValues;                                     // 0x02D8(0x0050) (Edit, ZeroConstructor)
	TArray<class UWwiseEvent*>                         Loops;                                                    // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FWwiseLocationOverride>              RelativeDetailedLocations;                                // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bDynamicPosition;                                         // 0x0348(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0349(0x0007) MISSED OFFSET
	class UAudioDistanceThresholdManager*              SubscribedToManager;                                      // 0x0350(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0358(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.LightAudioComponent");
		return ptr;
	}


	void SetRTPCValue(class UWwiseRtpc* GameParameter, float Value, bool bPersistent, float ValueChangeDuration, EWwiseCurveInterpolation FadeCurve);
	struct FWwisePlaybackInstance PostWwiseEvent(class UWwiseEvent* WwiseEvent);
};


// Class GbxAudio.MusicSequencerComponent
// 0x00B8 (0x0230 - 0x0178)
class UMusicSequencerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	float                                              BPM;                                                      // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SequencerLatencyInSeconds;                                // 0x0184(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bKillLateEvents;                                          // 0x0188(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x9F];                                      // 0x0189(0x009F) MISSED OFFSET
	bool                                               bRegisteredWithAudioDevice;                               // 0x0228(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0229(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.MusicSequencerComponent");
		return ptr;
	}


	void StopSequence();
	void PostSequenceEvent(class UWwiseAudioComponent* WwiseComponent, class UWwiseEvent* WwiseEvent, int Note, int Velocity, int Channel, float StartBeat, float Duration);
	void PlaySequence();
	void PauseSequence();
	bool IsPlaying();
	float GetRealTimeUntilBeat(float Beat);
	float GetCurrentBeat();
};


// Class GbxAudio.ParticleModuleGbxAudioBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleGbxAudioBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.ParticleModuleGbxAudioBase");
		return ptr;
	}

};


// Class GbxAudio.ParticleModuleGbxAudioLoop
// 0x0050 (0x0088 - 0x0038)
class UParticleModuleGbxAudioLoop : public UParticleModuleGbxAudioBase
{
public:
	class UWwiseEvent*                                 LoopStartEvent;                                           // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 LoopStopEvent;                                            // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EWwiseMultiPositionType                            MultiPositionType;                                        // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              AudioComponentRadius;                                     // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRawDistributionFloat                       GainOverLifetime;                                         // 0x0050(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.ParticleModuleGbxAudioLoop");
		return ptr;
	}

};


// Class GbxAudio.ParticleModuleGbxAudioPool
// 0x0050 (0x0088 - 0x0038)
class UParticleModuleGbxAudioPool : public UParticleModuleGbxAudioBase
{
public:
	class UWwiseEvent*                                 AudioEvent;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumberOfAudioComponents;                               // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStealComponents;                                         // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              AudioComponentRadius;                                     // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FRawDistributionFloat                       GainOverLifetime;                                         // 0x0050(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.ParticleModuleGbxAudioPool");
		return ptr;
	}

};


// Class GbxAudio.WindAudioLoopComponent
// 0x0030 (0x03A0 - 0x0370)
class UWindAudioLoopComponent : public ULightAudioComponent
{
public:
	class UWwiseRtpc*                                  WindAccelerationAudioParameter;                           // 0x0370(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWindDirectionalSensitivity                 WindSensitivity;                                          // 0x0378(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0390(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.WindAudioLoopComponent");
		return ptr;
	}

};


// Class GbxAudio.WwiseListenerEffectComponent
// 0x0020 (0x0198 - 0x0178)
class UWwiseListenerEffectComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	bool                                               bRegisteredWithAudioDevice;                               // 0x0180(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0181(0x0007) MISSED OFFSET
	TArray<struct FWwiseEffectInfo>                    WwiseEffects;                                             // 0x0188(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxAudio.WwiseListenerEffectComponent");
		return ptr;
	}


	void RemoveAudioEffect(class UWwiseAuxBus* Efx);
	void RemoveAllAudioEffects();
	void ApplyAudioEffect(class UWwiseAuxBus* Efx, float WetPercent, float DryPercent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
