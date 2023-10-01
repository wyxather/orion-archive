#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ACLPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ACLPlugin.ACLStatsDumpCommandlet
// 0x0000 (0x0080 - 0x0080)
class UACLStatsDumpCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ACLPlugin.ACLStatsDumpCommandlet");
		return ptr;
	}

};


// Class ACLPlugin.AnimCompress_ACLBase
// 0x0000 (0x0048 - 0x0048)
class UAnimCompress_ACLBase : public UAnimCompress
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ACLPlugin.AnimCompress_ACLBase");
		return ptr;
	}

};


// Class ACLPlugin.AnimCompress_ACL
// 0x0020 (0x0068 - 0x0048)
class UAnimCompress_ACL : public UAnimCompress_ACLBase
{
public:
	float                                              DefaultVirtualVertexDistance;                             // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SafeVirtualVertexDistance;                                // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SafetyFallbackThreshold;                                  // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorThreshold;                                           // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               BoneToIgnores;                                            // 0x0058(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ACLPlugin.AnimCompress_ACL");
		return ptr;
	}

};


// Class ACLPlugin.AnimCompress_ACLCustom
// 0x0028 (0x0070 - 0x0048)
class UAnimCompress_ACLCustom : public UAnimCompress_ACLBase
{
public:
	float                                              DefaultVirtualVertexDistance;                             // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SafeVirtualVertexDistance;                                // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EACLRotationFormat>                    RotationFormat;                                           // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EACLVectorFormat>                      TranslationFormat;                                        // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EACLVectorFormat>                      ScaleFormat;                                              // 0x0052(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0053(0x0001) MISSED OFFSET
	float                                              ErrorThreshold;                                           // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstantRotationThresholdAngle;                           // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstantTranslationThreshold;                             // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstantScaleThreshold;                                   // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bClipRangeReduceRotations : 1;                            // 0x0064(0x0001) (Edit)
	unsigned char                                      bClipRangeReduceTranslations : 1;                         // 0x0064(0x0001) (Edit)
	unsigned char                                      bClipRangeReduceScales : 1;                               // 0x0064(0x0001) (Edit)
	unsigned char                                      bEnableSegmenting : 1;                                    // 0x0064(0x0001) (Edit)
	unsigned char                                      bSegmentRangeReduceRotations : 1;                         // 0x0064(0x0001) (Edit)
	unsigned char                                      bSegmentRangeReduceTranslations : 1;                      // 0x0064(0x0001) (Edit)
	unsigned char                                      bSegmentRangeReduceScales : 1;                            // 0x0064(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	uint16_t                                           IdealNumKeyFramesPerSegment;                              // 0x0068(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           MaxNumKeyFramesPerSegment;                                // 0x006A(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ACLPlugin.AnimCompress_ACLCustom");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
