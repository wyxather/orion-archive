#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LiveLink_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LiveLink.LiveLinkBlueprintLibrary.TransformNames
struct ULiveLinkBlueprintLibrary_TransformNames_Params
{
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm)
	TArray<struct FName>                               TransformNames;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function LiveLink.LiveLinkBlueprintLibrary.TransformName
struct ULiveLinkBlueprintLibrary_TransformName_Params
{
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.RequestShutdown
struct ULiveLinkBlueprintLibrary_RequestShutdown_Params
{
	struct FLiveLinkSourceHandle                       SourceHandle;                                             // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
struct ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Params
{
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm)
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
struct ULiveLinkBlueprintLibrary_NumberOfTransforms_Params
{
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
struct ULiveLinkBlueprintLibrary_IsSourceStillValid_Params
{
	struct FLiveLinkSourceHandle                       SourceHandle;                                             // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.HasParent
struct ULiveLinkBlueprintLibrary_HasParent_Params
{
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
struct ULiveLinkBlueprintLibrary_GetTransformByName_Params
{
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm)
	struct FName                                       TransformName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
struct ULiveLinkBlueprintLibrary_GetTransformByIndex_Params
{
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm)
	int                                                TransformIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
struct ULiveLinkBlueprintLibrary_GetSourceType_Params
{
	struct FLiveLinkSourceHandle                       SourceHandle;                                             // (Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
struct ULiveLinkBlueprintLibrary_GetSourceStatus_Params
{
	struct FLiveLinkSourceHandle                       SourceHandle;                                             // (Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
struct ULiveLinkBlueprintLibrary_GetSourceMachineName_Params
{
	struct FLiveLinkSourceHandle                       SourceHandle;                                             // (Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
struct ULiveLinkBlueprintLibrary_GetRootTransform_Params
{
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm)
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetParent
struct ULiveLinkBlueprintLibrary_GetParent_Params
{
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm)
	struct FLiveLinkTransform                          Parent;                                                   // (Parm, OutParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
struct ULiveLinkBlueprintLibrary_GetMetadata_Params
{
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm)
	struct FSubjectMetadata                            MetaData;                                                 // (Parm, OutParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
struct ULiveLinkBlueprintLibrary_GetCurves_Params
{
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm)
	TMap<struct FName, float>                          Curves;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
struct ULiveLinkBlueprintLibrary_GetChildren_Params
{
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm)
	TArray<struct FLiveLinkTransform>                  Children;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
struct ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Params
{
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm)
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
struct ULiveLinkBlueprintLibrary_ChildCount_Params
{
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkComponent.GetSubjectData
struct ULiveLinkComponent_GetSubjectData_Params
{
	struct FName                                       SubjectName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm)
};

// Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
struct ULiveLinkComponent_GetAvailableSubjectNames_Params
{
	TArray<struct FName>                               SubjectNames;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
struct ULiveLinkMessageBusFinder_GetAvailableProviders_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FProviderPollResult>                 AvailableProviders;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
struct ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Params
{
	class ULiveLinkMessageBusFinder*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
struct ULiveLinkMessageBusFinder_ConnectToProvider_Params
{
	struct FProviderPollResult                         Provider;                                                 // (Parm, OutParm, ReferenceParm)
	struct FLiveLinkSourceHandle                       SourceHandle;                                             // (Parm, OutParm)
};

// Function LiveLink.LiveLinkRemapAsset.RemapCurveElements
struct ULiveLinkRemapAsset_RemapCurveElements_Params
{
	TMap<struct FName, float>                          CurveItems;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
struct ULiveLinkRemapAsset_GetRemappedCurveName_Params
{
	struct FName                                       CurveName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
struct ULiveLinkRemapAsset_GetRemappedBoneName_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
