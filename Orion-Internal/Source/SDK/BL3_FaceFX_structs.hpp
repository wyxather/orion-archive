#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_MovieScene_classes.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_AnimGraphRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum FaceFX.EFaceFXTargetPlatform
enum class EFaceFXTargetPlatform : uint8_t
{
	PC                             = 0,
	PS4                            = 1,
	XBoxOne                        = 2,
	GGP                            = 3,
	MAX                            = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FaceFX.FaceFXIdData
// 0x0010
struct FFaceFXIdData
{
	uint64_t                                           ID;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

// ScriptStruct FaceFX.FaceFXActorData
// 0x0030
struct FFaceFXActorData
{
	TArray<unsigned char>                              ActorRawData;                                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              BonesRawData;                                             // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FFaceFXIdData>                       Ids;                                                      // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
};

// ScriptStruct FaceFX.FaceFXAnimData
// 0x0010
struct FFaceFXAnimData
{
	TArray<unsigned char>                              RawData;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct FaceFX.FaceFXAnimId
// 0x0010
struct FFaceFXAnimId
{
	struct FName                                       Group;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

// ScriptStruct FaceFX.FaceFXAudioAsset
// 0x0018
struct FFaceFXAudioAsset
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UWwiseEvent*                                 WwiseEvent;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           WwiseID;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FaceFX.FaceFXSkelMeshComponentId
// 0x0010
struct FFaceFXSkelMeshComponentId
{
	int                                                Index;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FaceFX.GbxFaceFXAnimData
// 0x0038
struct FGbxFaceFXAnimData
{
	struct FFaceFXAnimId                               FaceFXAnimId;                                             // 0x0000(0x0010) (Edit, EditConst)
	struct FFaceFXAudioAsset                           Audio;                                                    // 0x0010(0x0018) (Edit, EditConst)
	TArray<struct FFaceFXAnimData>                     AnimationRawData;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct FaceFX.GbxFaceFXAnimSetData
// 0x0010
struct FGbxFaceFXAnimSetData
{
	TArray<struct FGbxFaceFXAnimData>                  FaceFXAnimDataList;                                       // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FaceFX.FaceFXEntry
// 0x0048
struct FFaceFXEntry
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                             // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFaceFXAudioComponent*                       AudioComp;                                                // 0x0008(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TSoftObjectPtr<class UFaceFXActor>                 Asset;                                                    // 0x0010(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UFaceFXCharacter*                            Character;                                                // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bIsAutoPlaySound : 1;                                     // 0x0040(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bIsDisableMorphTargets : 1;                               // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bHasBonesFromMultipleSkeletons : 1;                       // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct FaceFX.FaceFXTrackKey
// 0x0058
struct FFaceFXTrackKey
{
	struct FFaceFXSkelMeshComponentId                  SkelMeshComponentId;                                      // 0x0000(0x0010) (Edit)
	struct FFaceFXAnimId                               AnimationId;                                              // 0x0010(0x0010) (Edit)
	TSoftObjectPtr<class UFaceFXAnim>                  Animation;                                                // 0x0020(0x0028) (Edit)
	float                                              Time;                                                     // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLoop : 1;                                                // 0x004C(0x0001) (Edit)
	unsigned char                                      bIsAnimationDurationLoaded : 1;                           // 0x004C(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	float                                              AnimationDuration;                                        // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct FaceFX.FaceFXLocalizationData
// 0x0020
struct FFaceFXLocalizationData
{
	class FString                                      GroupName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      ExportLanguage;                                           // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct FaceFX.FaceFXDLCPathSettings
// 0x0050
struct FFaceFXDLCPathSettings
{
	class FString                                      PatchContentPath;                                         // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      PluginContentPath;                                        // 0x0010(0x0010) (Edit, ZeroConstructor)
	class FString                                      ProductionFolderExtension;                                // 0x0020(0x0010) (Edit, ZeroConstructor)
	class FString                                      WwiseFolderExtension;                                     // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<class FString>                              AdditionalWwiseFolderExtensions;                          // 0x0040(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FaceFX.AnimNode_BlendFaceFXAnimation
// 0x0058 (0x0088 - 0x0030)
struct FAnimNode_BlendFaceFXAnimation : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                            // 0x0030(0x0018) (Edit, BlueprintVisible)
	float                                              Alpha;                                                    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                          // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                             // 0x004D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                // 0x004E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x29];                                      // 0x004F(0x0029) MISSED OFFSET
	TArray<struct FName>                               BoneNamesToExclude;                                       // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct FaceFX.FaceFXAnimComponentSet
// 0x0048
struct FFaceFXAnimComponentSet
{
	struct FFaceFXSkelMeshComponentId                  SkelMeshComponentId;                                      // 0x0000(0x0010) (Edit)
	struct FFaceFXAnimId                               AnimationId;                                              // 0x0010(0x0010) (Edit)
	TSoftObjectPtr<class UFaceFXAnim>                  Animation;                                                // 0x0020(0x0028) (Edit)
};

// ScriptStruct FaceFX.FaceFXAnimationSectionData
// 0x0078
struct FFaceFXAnimationSectionData
{
	struct FGuid                                       TrackId;                                                  // 0x0000(0x0010) (IsPlainOldData)
	int                                                RowIndex;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FFaceFXAnimId                               AnimationId;                                              // 0x0018(0x0010)
	TSoftObjectPtr<class UFaceFXAnim>                  Animation;                                                // 0x0028(0x0028)
	struct FFaceFXSkelMeshComponentId                  ComponentId;                                              // 0x0050(0x0010)
	float                                              AnimDuration;                                             // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartOffset;                                              // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndOffset;                                                // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                StartTime;                                                // 0x006C(0x0004)
	struct FFrameNumber                                EndTime;                                                  // 0x0070(0x0004)
	bool                                               bCachedAnimDuration;                                      // 0x0074(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
};

// ScriptStruct FaceFX.FaceFXAnimationSectionTemplate
// 0x0078 (0x0098 - 0x0020)
struct FFaceFXAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFaceFXAnimationSectionData                 SectionData;                                              // 0x0020(0x0078)
};

// ScriptStruct FaceFX.FaceFXAnimSetData
// 0x0010
struct FFaceFXAnimSetData
{
	TArray<struct FFaceFXAnimData>                     Animations;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
