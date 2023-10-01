#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_GbxRuntime_classes.hpp"
#include "BL3_AnimGraphRuntime_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxAnimRuntimeBase.EGbxLookAxisOption
enum class EGbxLookAxisOption : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	X_Neg                          = 3,
	Y_Neg                          = 4,
	Z_Neg                          = 5,
	EGbxLookAxisOption_MAX         = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxAnimRuntimeBase.GbxAnimNode_LegIK
// 0x0740 (0x08B0 - 0x0170)
struct FGbxAnimNode_LegIK : public FAnimNode_LegIK
{
	float                                              FootIKTraceUpScale;                                       // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootIKTraceDownScale;                                     // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootIKOffsetInterpSpeed;                                  // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FootIKTargetOffset;                                       // 0x017C(0x000C) (Edit, IsPlainOldData)
	int                                                FootIKLODThreshold;                                       // 0x0188(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x018C(0x0004) MISSED OFFSET
	struct FScreenSizeSelection                        FootIkTraceScreenSizeThreshold;                           // 0x0190(0x0018) (Edit)
	bool                                               bUseFootIkTraceScreenSizeThreshold;                       // 0x01A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x62F];                                     // 0x01A9(0x062F) MISSED OFFSET
	struct FNumericRange                               MeshOffsetCharacterSpeedRange;                            // 0x07D8(0x0008) (Edit)
	float                                              MeshIKOffsetInterpSpeed;                                  // 0x07E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldLimitFootDistanceToMeshOffset;                     // 0x07E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x27];                                      // 0x07E5(0x0027) MISSED OFFSET
	struct FVector                                     SlopeAdaptation;                                          // 0x080C(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0818(0x0010) MISSED OFFSET
	struct FBoneReference                              SlopeAdaptationBone;                                      // 0x0828(0x0018) (Edit)
	float                                              MaxSlopeAngle;                                            // 0x0840(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlopeNormalMinInterpSpeed;                                // 0x0844(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlopeNormalMaxInterpSpeed;                                // 0x0848(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNumericRange                               SlopeNormalCharacterSpeedRange;                           // 0x084C(0x0008) (Edit)
	unsigned char                                      UnknownData04[0x4C];                                      // 0x0854(0x004C) MISSED OFFSET
	float                                              MinVelocity;                                              // 0x08A0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              MaxVelocity;                                              // 0x08A4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x08A8(0x0008) MISSED OFFSET
};

// ScriptStruct GbxAnimRuntimeBase.BoneBlendParams
// 0x0050
struct FBoneBlendParams
{
	struct FBoneReference                              Bone;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible)
	float                                              Weight;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              YawWeight;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchWeight;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FNumericRange                               YawClamp;                                                 // 0x0024(0x0008) (Edit, BlueprintVisible)
	struct FNumericRange                               PitchClamp;                                               // 0x002C(0x0008) (Edit, BlueprintVisible)
	struct FRotator                                    RotationOffset;                                           // 0x0034(0x000C) (Edit, IsPlainOldData)
	bool                                               bUseRotationOffset;                                       // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              LookAtClamp;                                              // 0x0044(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EGbxLookAxisOption>                    LookAxis;                                                 // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGbxLookAxisOption>                    UpAxis;                                                   // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
};

// ScriptStruct GbxAnimRuntimeBase.GbxAnimNode_LookAt
// 0x0190 (0x02D0 - 0x0140)
struct FGbxAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x0140(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              ParentBoneToModify;                                       // 0x0158(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<EGbxLookAxisOption>                    ParentLookAxis;                                           // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
	TArray<struct FBoneBlendParams>                    BonesToModify;                                            // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBoneBlendParams>                    EyeBonesToModify;                                         // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     HeadLookAtLocation;                                       // 0x0198(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     EyeLookAtLocation;                                        // 0x01A4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              HeadLookPercentage;                                       // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDebug;                                             // 0x01B4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseEyeMovement;                                          // 0x01B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x01B6(0x0002) MISSED OFFSET
	struct FRotator                                    EyeShiftMin;                                              // 0x01B8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    EyeShiftMax;                                              // 0x01C4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    EyeGlanceMin;                                             // 0x01D0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    EyeGlanceMax;                                             // 0x01DC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              EyeFocusTimeMin;                                          // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EyeFocusTimeMax;                                          // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EyeGlanceTimeMin;                                         // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EyeGlanceTimeMax;                                         // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EyeShiftTimeMin;                                          // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EyeShiftTimeMax;                                          // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EyeLODThreshold;                                          // 0x0200(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0204(0x0004) MISSED OFFSET
	struct FScreenSizeSelection                        EyeScreenSizeThreshold;                                   // 0x0208(0x0018) (Edit)
	bool                                               bUseEyeScreenSizeThreshold;                               // 0x0220(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	struct FPoseLink                                   ReferencePoseLink;                                        // 0x0228(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData04[0x90];                                      // 0x0240(0x0090) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
