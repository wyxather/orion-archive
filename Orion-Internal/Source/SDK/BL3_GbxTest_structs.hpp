#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_GbxUI_classes.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_GbxProbesCore_classes.hpp"
#include "BL3_GbxProbes_classes.hpp"
#include "BL3_InputCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxTest.EAutomationUIAction
enum class EAutomationUIAction : uint8_t
{
	PressDigitalUp                 = 0,
	PressDigitalDown               = 1,
	PressDigitalLeft               = 2,
	PressDigitalRight              = 3,
	PressFaceTop                   = 4,
	PressFaceBottom                = 5,
	PressFaceLeft                  = 6,
	PressFaceRight                 = 7,
	PressLeftStick                 = 8,
	PressLeftShoulder              = 9,
	PressLeftTrigger               = 10,
	PressRightStick                = 11,
	PressRightShoulder             = 12,
	PressRightTrigger              = 13,
	EAutomationUIAction_MAX        = 14
};


// Enum GbxTest.EAutomationUIDirection
enum class EAutomationUIDirection : uint8_t
{
	Up                             = 0,
	Down                           = 1,
	Left                           = 2,
	Right                          = 3,
	EAutomationUIDirection_MAX     = 4
};


// Enum GbxTest.ECompare
enum class ECompare : uint8_t
{
	EQ                             = 0,
	NE                             = 1,
	GT                             = 2,
	GE                             = 3,
	LT                             = 4,
	LE                             = 5,
	ECompare_MAX                   = 6
};


// Enum GbxTest.ESnapshotExecOutput
enum class ESnapshotExecOutput : uint8_t
{
	Succeeded                      = 0,
	Failed                         = 1,
	ESnapshotExecOutput_MAX        = 2
};


// Enum GbxTest.ESyntaxOption
enum class ESyntaxOption : uint8_t
{
	E_ICASE                        = 0,
	E_NOSUBS                       = 1,
	E_OPTIMIZE                     = 2,
	E_COLLATE                      = 3,
	E_ECMASCRIPT                   = 4,
	E_BASIC                        = 5,
	E_EXTENDED                     = 6,
	E_AWK                          = 7,
	E_GREP                         = 8,
	E_EGREP                        = 9,
	E_MAX                          = 10
};


// Enum GbxTest.ETestIssueType
enum class ETestIssueType : uint8_t
{
	Info                           = 0,
	Skipped                        = 1,
	Warning                        = 2,
	Bug                            = 3,
	Critical                       = 4,
	Count                          = 5,
	ETestIssueType_MAX             = 6
};


// Enum GbxTest.ECollectionType
enum class ECollectionType : uint8_t
{
	ECT_System                     = 0,
	ECT_Local                      = 1,
	ECT_Private                    = 2,
	ECT_Shared                     = 3,
	ECT_MAX                        = 4
};


// Enum GbxTest.EGbxTestPlanOutput
enum class EGbxTestPlanOutput : uint8_t
{
	FullName                       = 0,
	Console                        = 1,
	Commandline                    = 2,
	EGbxTestPlanOutput_MAX         = 3
};


// Enum GbxTest.EGbxTestPlan
enum class EGbxTestPlan : uint8_t
{
	None                           = 0,
	ABT                            = 1,
	Nightly                        = 2,
	EGbxTestPlan_MAX               = 3
};


// Enum GbxTest.EDiscovery
enum class EDiscovery : uint8_t
{
	Single                         = 0,
	Ignore                         = 1,
	AllContent                     = 2,
	AllQAMaps                      = 3,
	AllPersistentGameMaps          = 4,
	AllGameMissions                = 5,
	HierarchicalCommands           = 6,
	AllTraitContent                = 7,
	Custom                         = 8,
	Count                          = 9,
	EDiscovery_MAX                 = 10
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxTest.OptionalValue
// 0x0001
struct FOptionalValue
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxTest.OptionalBool
// 0x0001 (0x0002 - 0x0001)
struct FOptionalBool : public FOptionalValue
{
	bool                                               Value;                                                    // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxTest.OptionalInt32
// 0x0007 (0x0008 - 0x0001)
struct FOptionalInt32 : public FOptionalValue
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Value;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxTest.OptionalFloat
// 0x0007 (0x0008 - 0x0001)
struct FOptionalFloat : public FOptionalValue
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxTest.OptionalName
// 0x000F (0x0010 - 0x0001)
struct FOptionalName : public FOptionalValue
{
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       Value;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxTest.OptionalLODGroup
// 0x0000 (0x0010 - 0x0010)
struct FOptionalLODGroup : public FOptionalName
{

};

// ScriptStruct GbxTest.OptionalTextureCompressionMethod
// 0x0000 (0x0010 - 0x0010)
struct FOptionalTextureCompressionMethod : public FOptionalName
{

};

// ScriptStruct GbxTest.OptionalTextureLODGroup
// 0x0000 (0x0010 - 0x0010)
struct FOptionalTextureLODGroup : public FOptionalName
{

};

// ScriptStruct GbxTest.AutomationMenuFocusInfo
// 0x0030
struct FAutomationMenuFocusInfo
{
	struct FName                                       ClassName;                                                // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectName;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ObjectNum;                                                // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class FString                                      Label;                                                    // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EGbxGFxButtonType                                  ButtonType;                                               // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsButton;                                                 // 0x0029(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsListCell;                                               // 0x002A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsListItem;                                               // 0x002B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsGridList;                                               // 0x002C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct GbxTest.MapParameters
// 0x0050
struct FMapParameters
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	float                                              Density;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLighting;                                                // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpecular;                                                // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	float                                              Gamma;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumeX;                                                  // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumeY;                                                  // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumeZ;                                                  // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StartIndexX;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StartIndexY;                                              // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      OutputPattern;                                            // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct GbxTest.Regex
// 0x0028
struct FRegex
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct GbxTest.GbxTestHierarchicalCommandL3
// 0x0020
struct FGbxTestHierarchicalCommandL3
{
	class FString                                      DisplayName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      TestCommand;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct GbxTest.GbxTestHierarchicalCommandL2
// 0x0030
struct FGbxTestHierarchicalCommandL2
{
	class FString                                      DisplayName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      TestCommand;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FGbxTestHierarchicalCommandL3>       SubCommands;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct GbxTest.GbxTestHierarchicalCommandL1
// 0x0030
struct FGbxTestHierarchicalCommandL1
{
	class FString                                      DisplayName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      TestCommand;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FGbxTestHierarchicalCommandL2>       SubCommands;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct GbxTest.TestInfoTexture
// 0x0028
struct FTestInfoTexture
{
	TArray<class UAssetTraitTexture*>                  AssetTraits;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       CompressionMethod;                                        // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       LODGroup;                                                 // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LODBias;                                                  // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HasAlpha;                                                 // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HassRGB;                                                  // 0x0025(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
};

// ScriptStruct GbxTest.TestInfoMeshLOD
// 0x001C
struct FTestInfoMeshLOD
{
	int                                                LODIndex;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TriangleCount;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VertexCount;                                              // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TexCoordCount;                                            // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SectionCount;                                             // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ScreenSize;                                               // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasDegenerateSections;                                   // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct GbxTest.TestInfoMeshLODSummary
// 0x0024
struct FTestInfoMeshLODSummary
{
	int                                                LODCount;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LODMaxTriangleCount;                                      // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LODMaxVertexCount;                                        // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LODMinTexCoordCount;                                      // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LODMaxTexCoordCount;                                      // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LODMinSectionCount;                                       // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LODMaxSectionCount;                                       // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LODMinScreenSize;                                         // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LODMaxScreenSize;                                         // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxTest.TestInfoMesh
// 0x0024
struct FTestInfoMesh
{
	struct FBoxSphereBounds                            Bounds;                                                   // 0x0000(0x001C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                SocketCount;                                              // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HasSockets;                                               // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct GbxTest.TestInfoStaticMesh
// 0x0030
struct FTestInfoStaticMesh
{
	TArray<class UAssetTraitStaticMesh*>               AssetTraits;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                PrimitiveCount;                                           // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LightMapResolution;                                       // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LightMapIndex;                                            // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FName                                       LODGroupName;                                             // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               CastShadow;                                               // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               EnableCollision;                                          // 0x0029(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct GbxTest.TestInfoSkeletalMesh
// 0x0018
struct FTestInfoSkeletalMesh
{
	TArray<class UAssetTraitSkeletalMesh*>             AssetTraits;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               Placeholder;                                              // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct GbxTest.TestInfoParticleEmitter
// 0x0030
struct FTestInfoParticleEmitter
{
	int                                                EmitterIndex;                                             // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       EmitterName;                                              // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
	int                                                SuperMaxDrawCount;                                        // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinUnitScalar;                                            // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	bool                                               bHasLowestLOD;                                            // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasAnimTrailData;                                        // 0x0021(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasGpuSpriteData;                                        // 0x0022(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasMeshData;                                             // 0x0023(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasRibbonOrBeamData;                                     // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasRequiredModule;                                       // 0x0025(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasSpawnPerUnitModule;                                   // 0x0026(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasLifetimeModule;                                       // 0x0027(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasLightModule;                                          // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMaxDrawCountDisabled;                                 // 0x0029(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasInfiniteMaxDrawCount;                                 // 0x002A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasInfiniteLifetime;                                     // 0x002B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bKillOnCompletedNotSet;                                   // 0x002C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseInverseSquaredFalloffSet;                             // 0x002D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
};

// ScriptStruct GbxTest.TestInfoParticleSystem
// 0x0060
struct FTestInfoParticleSystem
{
	TArray<class UAssetTraitParticleSystem*>           AssetTraits;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FTestInfoParticleEmitter>            EmitterInfo;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              FixedRelativeBoundsSize;                                  // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UpdateTime;                                               // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WarmupTime;                                               // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LODDistanceCheckTime;                                     // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TemplateCost;                                             // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EmitterCount;                                             // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MinModuleCount;                                           // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxModuleCount;                                           // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LODCount;                                                 // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AnimTrailDataCount;                                       // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                GpuSpriteDataCount;                                       // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MeshDataCount;                                            // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RibbonOrBeamDataCount;                                    // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUsesFixedRelativeBounds;                                 // 0x0054(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bZAxisOrientedTowardsCamera;                              // 0x0055(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllEmittersHaveRequiredModules;                          // 0x0056(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllEmittersHaveLowestLOD;                                // 0x0057(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bKillFlagsNotSet;                                         // 0x0058(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct GbxTest.TestInfoMaterial
// 0x0020
struct FTestInfoMaterial
{
	TArray<class UAssetTraitMaterial*>                 AssetTraits;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bUsedWithSkeletalMesh;                                    // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUsedWithParticleSprites;                                 // 0x0011(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUsedWithBeamTrails;                                      // 0x0012(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUsedWithMeshParticles;                                   // 0x0013(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUsedWithStaticLighting;                                  // 0x0014(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUsedWithMorphTargets;                                    // 0x0015(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUsedWithSplineMesh;                                      // 0x0016(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUsedWithInstancedStaticMeshes;                           // 0x0017(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUsedWithClothing;                                        // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasPhysMatSet;                                           // 0x0019(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct GbxTest.GbxTestInputAction
// 0x0030
struct FGbxTestInputAction
{
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FKey                                        InputKey;                                                 // 0x0008(0x0018) (Edit, BlueprintVisible)
	float                                              StartTime;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmountDepressed;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmountDelta;                                              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
