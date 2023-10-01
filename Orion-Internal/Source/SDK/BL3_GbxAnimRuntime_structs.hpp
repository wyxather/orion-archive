#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_AnimGraphRuntime_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxAnimRuntime.EGbxCustomEventContext
enum class EGbxCustomEventContext : uint8_t
{
	Owner                          = 0,
	Instigator                     = 1,
	EGbxCustomEventContext_MAX     = 2
};


// Enum GbxAnimRuntime.EFloatComparisonType
enum class EFloatComparisonType : uint8_t
{
	Equal                          = 0,
	NotEqual                       = 1,
	GreaterThan                    = 2,
	GreaterThanOrEqual             = 3,
	LessThan                       = 4,
	LessThanOrEqual                = 5,
	EFloatComparisonType_MAX       = 6
};


// Enum GbxAnimRuntime.EWeightTypeToUse
enum class EWeightTypeToUse : uint8_t
{
	Zero                           = 0,
	One                            = 1,
	Cached                         = 2,
	Dynamic                        = 3,
	EWeightTypeToUse_MAX           = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxAnimRuntime.GbxAnimNode_AnimTable
// 0x0020 (0x0088 - 0x0068)
struct FGbxAnimNode_AnimTable : public FAnimNode_AssetPlayerBase
{
	class UGbxAnimTable*                               AnimTable;                                                // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxAnimInstance*                            GbxAnimInstance;                                          // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bScaleRateByMeshScale;                                    // 0x0080(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
};

// ScriptStruct GbxAnimRuntime.GbxAnimNode_BlendListByFloatComparison
// 0x0010 (0x00D8 - 0x00C8)
struct FGbxAnimNode_BlendListByFloatComparison : public FAnimNode_BlendListBase
{
	float                                              ValueA;                                                   // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ValueB;                                                   // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFloatComparisonType                               Comparison;                                               // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
};

// ScriptStruct GbxAnimRuntime.FloatMinMaxRange
// 0x0008
struct FFloatMinMaxRange
{
	float                                              MinValue;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAnimRuntime.GbxAnimNode_BlendListByFloatInRange
// 0x0020 (0x00E8 - 0x00C8)
struct FGbxAnimNode_BlendListByFloatInRange : public FAnimNode_BlendListBase
{
	float                                              BlendValue;                                               // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	TArray<struct FFloatMinMaxRange>                   MinMaxRanges;                                             // 0x00D0(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	int                                                CurrentRangeIndex;                                        // 0x00E0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
};

// ScriptStruct GbxAnimRuntime.IntMinMaxRange
// 0x0008
struct FIntMinMaxRange
{
	int                                                MinValue;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxValue;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAnimRuntime.GbxAnimNode_BlendListByIntInRange
// 0x0020 (0x00E8 - 0x00C8)
struct FGbxAnimNode_BlendListByIntInRange : public FAnimNode_BlendListBase
{
	int                                                BlendValue;                                               // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	TArray<struct FIntMinMaxRange>                     MinMaxRanges;                                             // 0x00D0(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	int                                                CurrentRangeIndex;                                        // 0x00E0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
};

// ScriptStruct GbxAnimRuntime.BoneWeightCurveOverride
// 0x0038
struct FBoneWeightCurveOverride
{
	ECurveOverrideType                                 CurveOverrideType;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FNormalizeCurvesOverride                    NormalizeCurveOverrideData;                               // 0x0008(0x0018)
	struct FName                                       SingleOverrideCurveName;                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        CacheWeightIndicesToUpdate;                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxAnimRuntime.GbxAnimNode_BlendTwoPosesPerBone
// 0x00C0 (0x00F0 - 0x0030)
struct FGbxAnimNode_BlendTwoPosesPerBone : public FAnimNode_Base
{
	struct FPoseLink                                   PoseA;                                                    // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FPoseLink                                   PoseB;                                                    // 0x0048(0x0018) (Edit, BlueprintVisible)
	TArray<float>                                      CachedBlendWeights;                                       // 0x0060(0x0010) (ZeroConstructor)
	TArray<float>                                      DynamicCachedBlendWeights;                                // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FBoneWeightCurveOverride>            BoneWeightCurveOverrides;                                 // 0x0080(0x0010) (ZeroConstructor)
	class UGbxAnimInstance*                            GbxAnimInstance;                                          // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGuid                                       SkeletonGuid;                                             // 0x0098(0x0010) (IsPlainOldData)
	struct FGuid                                       VirtualBoneGuid;                                          // 0x00A8(0x0010) (IsPlainOldData)
	class UGbxBoneSet*                                 BoneSet;                                                  // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       BoneSetGuid;                                              // 0x00C0(0x0010) (IsPlainOldData)
	struct FName                                       ActionSlotName;                                           // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00D8(0x0018) MISSED OFFSET
};

// ScriptStruct GbxAnimRuntime.GbxAnimNode_CopyParentTransforms
// 0x0010 (0x0040 - 0x0030)
struct FGbxAnimNode_CopyParentTransforms : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct GbxAnimRuntime.GbxAnimNode_HandIK
// 0x00E0 (0x0370 - 0x0290)
struct FGbxAnimNode_HandIK : public FAnimNode_TwoBoneIK
{
	struct FBoneReference                              ObjectBone;                                               // 0x0290(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET
	struct FTransform                                  ObjectOffset;                                             // 0x02B0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  WorldOffset;                                              // 0x02E0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  HandOffsetToIkWorld;                                      // 0x0310(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bWorldIkOverride;                                         // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	struct FBoneReference                              EffectorAlignmentBone;                                    // 0x0348(0x0018) (Edit)
	float                                              AlignToObjectAlpha;                                       // 0x0360(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0364(0x000C) MISSED OFFSET
};

// ScriptStruct GbxAnimRuntime.InputTransforms
// 0x0010
struct FInputTransforms
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct GbxAnimRuntime.GbxAnimNode_ModifyBoneList
// 0x0038 (0x0178 - 0x0140)
struct FGbxAnimNode_ModifyBoneList : public FAnimNode_SkeletalControlBase
{
	TArray<struct FBoneReference>                      BonesToModify;                                            // 0x0140(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                          // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                             // 0x0151(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                // 0x0152(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                         // 0x0153(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                            // 0x0154(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     ScaleSpace;                                               // 0x0155(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0156(0x0002) MISSED OFFSET
	struct FInputTransforms                            InputTransforms;                                          // 0x0158(0x0010) (Edit, EditFixedSize)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0168(0x0010) MISSED OFFSET
};

// ScriptStruct GbxAnimRuntime.GbxAnimNode_Print
// 0x0040 (0x0070 - 0x0030)
struct FGbxAnimNode_Print : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                   // 0x0030(0x0018) (Edit, BlueprintVisible)
	class FString                                      inString;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bPrintToLog;                                              // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintToScreen;                                           // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	struct FLinearColor                                TextColor;                                                // 0x005C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Duration;                                                 // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAnimRuntime.GbxAnimNode_Spin
// 0x0038 (0x0178 - 0x0140)
struct FGbxAnimNode_Spin : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x0140(0x0018) (Edit)
	struct FRotator                                    RotationAmount;                                           // 0x0158(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0164(0x000C) MISSED OFFSET
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                            // 0x0170(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
