#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxLevelEditorPreview.GbxLevelEditorPreviewInstanceData
// 0x0008
struct FGbxLevelEditorPreviewInstanceData
{
	int                                                Integer0;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Bool0;                                                    // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct GbxLevelEditorPreview.PreviewAnimationDescriptor
// 0x0020
struct FPreviewAnimationDescriptor
{
	class FString                                      Title;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             Animation;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
