#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxLevelEditorPreview_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxLevelEditorPreview.GbxLevelEditorPreviewComponent
// 0x0020 (0x02F0 - 0x02D0)
class UGbxLevelEditorPreviewComponent : public USceneComponent
{
public:
	class UGbxLevelEditorPreviewDefinition*            Definition;                                               // 0x02D0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGbxLevelEditorPreviewInstanceData          InstanceData;                                             // 0x02D8(0x0008) (Edit)
	class FString                                      CachedInstanceNamePrefix;                                 // 0x02E0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxLevelEditorPreview.GbxLevelEditorPreviewComponent");
		return ptr;
	}

};


// Class GbxLevelEditorPreview.GbxLevelEditorPreviewDefinition
// 0x0018 (0x0040 - 0x0028)
class UGbxLevelEditorPreviewDefinition : public UObject
{
public:
	struct FText                                       PreviewTitle;                                             // 0x0028(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxLevelEditorPreview.GbxLevelEditorPreviewDefinition");
		return ptr;
	}

};


// Class GbxLevelEditorPreview.GbxLevelEditorPreviewAnimation
// 0x0010 (0x0050 - 0x0040)
class UGbxLevelEditorPreviewAnimation : public UGbxLevelEditorPreviewDefinition
{
public:
	TArray<struct FPreviewAnimationDescriptor>         DescriptorList;                                           // 0x0040(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxLevelEditorPreview.GbxLevelEditorPreviewAnimation");
		return ptr;
	}

};


// Class GbxLevelEditorPreview.GbxLevelEditorPreviewSettings
// 0x0008 (0x0040 - 0x0038)
class UGbxLevelEditorPreviewSettings : public UDeveloperSettings
{
public:
	bool                                               AllowLevelEditorPreviewComponent;                         // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxLevelEditorPreview.GbxLevelEditorPreviewSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
