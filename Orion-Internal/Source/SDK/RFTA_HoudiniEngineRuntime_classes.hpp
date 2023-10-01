#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_HoudiniEngineRuntime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class HoudiniEngineRuntime.HoudiniAssetComponent
// 0x0770 (0x0CF0 - 0x0580)
class UHoudiniAssetComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      bGeneratedDoubleSidedGeometry : 1;                        // 0x0580(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0581(0x0007) MISSED OFFSET
	class UPhysicalMaterial*                           GeneratedPhysMaterial;                                    // 0x0588(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBodyInstance                               DefaultBodyInstance;                                      // 0x0590(0x0148) (Edit, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionTraceFlag>                   GeneratedCollisionTraceFlag;                              // 0x06D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06D9(0x0003) MISSED OFFSET
	int                                                GeneratedLightMapResolution;                              // 0x06DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GeneratedLpvBiasMultiplier;                               // 0x06E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GeneratedDistanceFieldResolutionScale;                    // 0x06E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWalkableSlopeOverride                      GeneratedWalkableSlopeOverride;                           // 0x06E8(0x0010) (Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	int                                                GeneratedLightMapCoordinateIndex;                         // 0x06F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGeneratedUseMaximumStreamingTexelRatio : 1;              // 0x06FC(0x0001) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x06FD(0x0003) MISSED OFFSET
	float                                              GeneratedStreamingDistanceMultiplier;                     // 0x0700(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0704(0x0004) MISSED OFFSET
	class UFoliageType_InstancedStaticMesh*            GeneratedFoliageDefaultSettings;                          // 0x0708(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAssetUserData*>                      GeneratedAssetUserData;                                   // 0x0710(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x478];                                     // 0x0720(0x0478) MISSED OFFSET
	struct FText                                       BakeFolder;                                               // 0x0B98(0x0018) (Protected, NativeAccessSpecifierProtected)
	struct FText                                       TempCookFolder;                                           // 0x0BB0(0x0018) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x128];                                     // 0x0BC8(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetComponent");
		return ptr;
	}


	int GetAssetId();
};


// Class HoudiniEngineRuntime.HDAComponent
// 0x0000 (0x0CF0 - 0x0CF0)
class UHDAComponent : public UHoudiniAssetComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HDAComponent");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAsset
// 0x0030 (0x0058 - 0x0028)
class UHoudiniAsset : public UObject
{
public:
	class FString                                      AssetFileName;                                            // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UThumbnailInfo*                              ThumbnailInfo;                                            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAsset");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetActor
// 0x0010 (0x0340 - 0x0330)
class AHoudiniAssetActor : public AActor
{
public:
	class UHDAComponent*                               HoudiniAssetComponent;                                    // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetActor");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetComponentMaterials
// 0x00A8 (0x00D0 - 0x0028)
class UHoudiniAssetComponentMaterials : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetComponentMaterials");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameter
// 0x0078 (0x00A0 - 0x0028)
class UHoudiniAssetParameter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameter");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetInput
// 0x0160 (0x0200 - 0x00A0)
class UHoudiniAssetInput : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x00A0(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetInput");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetInstanceInput
// 0x00E0 (0x0180 - 0x00A0)
class UHoudiniAssetInstanceInput : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x00A0(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetInstanceInput");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetInstanceInputField
// 0x0178 (0x01A0 - 0x0028)
class UHoudiniAssetInstanceInputField : public UObject
{
public:
	unsigned char                                      UnknownData00[0x178];                                     // 0x0028(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetInstanceInputField");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterButton
// 0x0000 (0x00A0 - 0x00A0)
class UHoudiniAssetParameterButton : public UHoudiniAssetParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterButton");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterChoice
// 0x0038 (0x00D8 - 0x00A0)
class UHoudiniAssetParameterChoice : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00A0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterChoice");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterColor
// 0x0010 (0x00B0 - 0x00A0)
class UHoudiniAssetParameterColor : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterColor");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterFile
// 0x0028 (0x00C8 - 0x00A0)
class UHoudiniAssetParameterFile : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00A0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterFile");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterFloat
// 0x0038 (0x00D8 - 0x00A0)
class UHoudiniAssetParameterFloat : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00A0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterFloat");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterFolder
// 0x0000 (0x00A0 - 0x00A0)
class UHoudiniAssetParameterFolder : public UHoudiniAssetParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterFolder");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterFolderList
// 0x0000 (0x00A0 - 0x00A0)
class UHoudiniAssetParameterFolderList : public UHoudiniAssetParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterFolderList");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterInt
// 0x0030 (0x00D0 - 0x00A0)
class UHoudiniAssetParameterInt : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00A0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterInt");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterLabel
// 0x0000 (0x00A0 - 0x00A0)
class UHoudiniAssetParameterLabel : public UHoudiniAssetParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterLabel");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterMultiparm
// 0x0010 (0x00B0 - 0x00A0)
class UHoudiniAssetParameterMultiparm : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterMultiparm");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterRampCurveFloat
// 0x0008 (0x00C0 - 0x00B8)
class UHoudiniAssetParameterRampCurveFloat : public UCurveFloat
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterRampCurveFloat");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterRampCurveColor
// 0x0018 (0x0268 - 0x0250)
class UHoudiniAssetParameterRampCurveColor : public UCurveLinearColor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0250(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterRampCurveColor");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterRamp
// 0x0018 (0x00C8 - 0x00B0)
class UHoudiniAssetParameterRamp : public UHoudiniAssetParameterMultiparm
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterRamp");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterSeparator
// 0x0000 (0x00A0 - 0x00A0)
class UHoudiniAssetParameterSeparator : public UHoudiniAssetParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterSeparator");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterString
// 0x0010 (0x00B0 - 0x00A0)
class UHoudiniAssetParameterString : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterString");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterToggle
// 0x0010 (0x00B0 - 0x00A0)
class UHoudiniAssetParameterToggle : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterToggle");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAttributeDataComponent
// 0x0010 (0x0108 - 0x00F8)
class UHoudiniAttributeDataComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAttributeDataComponent");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoCommandlet
// 0x0000 (0x0080 - 0x0080)
class UHoudiniEngineConvertBgeoCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoCommandlet");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoDirCommandlet
// 0x0000 (0x0080 - 0x0080)
class UHoudiniEngineConvertBgeoDirCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoDirCommandlet");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.TestHoudiniParameterBuilder
// 0x00A0 (0x00C8 - 0x0028)
class UTestHoudiniParameterBuilder : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.TestHoudiniParameterBuilder");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniHandleComponent
// 0x00B0 (0x0310 - 0x0260)
class UHoudiniHandleComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0260(0x00A8) MISSED OFFSET
	EHoudiniHandleType                                 HandleType;                                               // 0x0308(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0309(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniHandleComponent");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInstancedActorComponent
// 0x0010 (0x0270 - 0x0260)
class UHoudiniInstancedActorComponent : public USceneComponent
{
public:
	TArray<class AActor*>                              Instances;                                                // 0x0260(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniInstancedActorComponent");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent
// 0x0020 (0x0280 - 0x0260)
class UHoudiniMeshSplitInstancerComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMesh*                                 InstancedMesh;                                            // 0x0270(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0278(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniRuntimeSettings
// 0x0390 (0x03B8 - 0x0028)
class UHoudiniRuntimeSettings : public UObject
{
public:
	TEnumAsByte<EHoudiniRuntimeSettingsSessionType>    SessionType;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class FString                                      ServerHost;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ServerPort;                                               // 0x0040(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class FString                                      ServerPipeName;                                           // 0x0048(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStartAutomaticServer;                                    // 0x0058(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              AutomaticServerTimeout;                                   // 0x005C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowMultiAssetDialog;                                    // 0x0060(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPauseCookingOnStart;                                     // 0x0061(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableCooking;                                           // 0x0062(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUploadTransformsToHoudiniEngine;                         // 0x0063(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTransformChangeTriggersCooks;                            // 0x0064(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisplaySlateCookingNotifications;                        // 0x0065(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCookCurvesOnMouseRelease;                                // 0x0066(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0067(0x0001) MISSED OFFSET
	struct FText                                       TemporaryCookFolder;                                      // 0x0068(0x0018) (Edit, Config, EditConst, GlobalConfig, NativeAccessSpecifierPublic)
	bool                                               bTreatRampParametersAsMultiparms;                         // 0x0080(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	class FString                                      CollisionGroupNamePrefix;                                 // 0x0088(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      RenderedCollisionGroupNamePrefix;                         // 0x0098(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      UCXCollisionGroupNamePrefix;                              // 0x00A8(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      UCXRenderedCollisionGroupNamePrefix;                      // 0x00B8(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      SimpleCollisionGroupNamePrefix;                           // 0x00C8(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      SimpleRenderedCollisionGroupNamePrefix;                   // 0x00D8(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      MarshallingAttributeMaterial;                             // 0x00E8(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      MarshallingAttributeMaterialHole;                         // 0x00F8(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      MarshallingAttributeInstanceOverride;                     // 0x0108(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      MarshallingAttributeFaceSmoothingMask;                    // 0x0118(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      MarshallingAttributeLightmapResolution;                   // 0x0128(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      MarshallingAttributeGeneratedMeshName;                    // 0x0138(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      MarshallingAttributeInputMeshName;                        // 0x0148(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      MarshallingAttributeInputSourceFile;                      // 0x0158(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MarshallingSplineResolution;                              // 0x0168(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MarshallingLandscapesUseDefaultUnrealScaling;             // 0x016C(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MarshallingLandscapesUseFullResolution;                   // 0x016D(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MarshallingLandscapesForceMinMaxValues;                   // 0x016E(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x1];                                       // 0x016F(0x0001) MISSED OFFSET
	float                                              MarshallingLandscapesForcedMinValue;                      // 0x0170(0x0004) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MarshallingLandscapesForcedMaxValue;                      // 0x0174(0x0004) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GeneratedGeometryScaleFactor;                             // 0x0178(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TransformScaleFactor;                                     // 0x017C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EHoudiniRuntimeSettingsAxisImport>     ImportAxis;                                               // 0x0180(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0181(0x0003) MISSED OFFSET
	unsigned char                                      bDoubleSidedGeometry : 1;                                 // 0x0184(0x0001) (Edit, Config, GlobalConfig, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0185(0x0003) MISSED OFFSET
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0188(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBodyInstance                               DefaultBodyInstance;                                      // 0x0190(0x0148) (Edit, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionTraceFlag>                   CollisionTraceFlag;                                       // 0x02D8(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x3];                                       // 0x02D9(0x0003) MISSED OFFSET
	int                                                LightMapResolution;                                       // 0x02DC(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LpvBiasMultiplier;                                        // 0x02E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GeneratedDistanceFieldResolutionScale;                    // 0x02E4(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWalkableSlopeOverride                      WalkableSlopeOverride;                                    // 0x02E8(0x0010) (Edit, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	int                                                LightMapCoordinateIndex;                                  // 0x02F8(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseMaximumStreamingTexelRatio : 1;                       // 0x02FC(0x0001) (Edit, Config, GlobalConfig, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData09[0x3];                                       // 0x02FD(0x0003) MISSED OFFSET
	float                                              StreamingDistanceMultiplier;                              // 0x0300(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0304(0x0004) MISSED OFFSET
	class UFoliageType_InstancedStaticMesh*            FoliageDefaultSettings;                                   // 0x0308(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAssetUserData*>                      AssetUserData;                                            // 0x0310(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               bUseFullPrecisionUVs;                                     // 0x0320(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0321(0x0003) MISSED OFFSET
	int                                                SrcLightmapIndex;                                         // 0x0324(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DstLightmapIndex;                                         // 0x0328(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinLightmapResolution;                                    // 0x032C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveDegenerates;                                       // 0x0330(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag>  GenerateLightmapUVsFlag;                                  // 0x0331(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag>  RecomputeNormalsFlag;                                     // 0x0332(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag>  RecomputeTangentsFlag;                                    // 0x0333(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseMikkTSpace;                                           // 0x0334(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBuildAdjacencyBuffer;                                    // 0x0335(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseCustomHoudiniLocation;                                // 0x0336(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData12[0x1];                                       // 0x0337(0x0001) MISSED OFFSET
	struct FDirectoryPath                              CustomHoudiniLocation;                                    // 0x0338(0x0010) (Edit, Config, EditConst, GlobalConfig, NativeAccessSpecifierPublic)
	bool                                               bHidePlacementModeHoudiniTools;                           // 0x0348(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0349(0x0007) MISSED OFFSET
	TArray<struct FHoudiniToolDirectory>               CustomHoudiniToolsLocation;                               // 0x0350(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
	int                                                CookingThreadStackSize;                                   // 0x0360(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	class FString                                      HoudiniEnvironmentFiles;                                  // 0x0368(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      OtlSearchPath;                                            // 0x0378(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      DsoSearchPath;                                            // 0x0388(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      ImageDsoSearchPath;                                       // 0x0398(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      AudioDsoSearchPath;                                       // 0x03A8(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniRuntimeSettings");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniSplineComponent
// 0x0100 (0x0360 - 0x0260)
class UHoudiniSplineComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0260(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniSplineComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
