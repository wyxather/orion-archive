#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x50 (0x50 - 0x0)
// Function WBP_3DWorldMapIcon.WBP_3DWorldMapIcon_C.GetOverlapArea
struct UWBP_3DWorldMapIcon_C_GetOverlapArea_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_3DWorldMapIcon.WBP_3DWorldMapIcon_C.InitIsFocusOfStoryInfoDisplays
struct UWBP_3DWorldMapIcon_C_InitIsFocusOfStoryInfoDisplays_Params
{
public:
	enum class EWorldMapZoomType                 ZoomType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x25 (0x25 - 0x0)
// Function WBP_3DWorldMapIcon.WBP_3DWorldMapIcon_C.StartStoryInfoDisplayAnimIfNeeded
struct UWBP_3DWorldMapIcon_C_StartStoryInfoDisplayAnimIfNeeded_Params
{
public:
	enum class EWorldMapZoomType                 ZoomType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFast;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x45 (0x45 - 0x0)
// Function WBP_3DWorldMapIcon.WBP_3DWorldMapIcon_C.SetupStoryInfoDisplays
struct UWBP_3DWorldMapIcon_C_SetupStoryInfoDisplays_Params
{
public:
	TArray<struct FWorldMapDestinationData>      StoryList;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x28 (0x28 - 0x0)
// Function WBP_3DWorldMapIcon.WBP_3DWorldMapIcon_C.InitVisibility
struct UWBP_3DWorldMapIcon_C_InitVisibility_Params
{
public:
	enum class EWorldMapZoomType                 ZoomType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function WBP_3DWorldMapIcon.WBP_3DWorldMapIcon_C.StartIcconVisibilityTransitionByZoomType
struct UWBP_3DWorldMapIcon_C_StartIcconVisibilityTransitionByZoomType_Params
{
public:
	enum class EWorldMapZoomType                 ZoomType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_3DWorldMapIcon.WBP_3DWorldMapIcon_C.ExecuteUbergraph_WBP_3DWorldMapIcon
struct UWBP_3DWorldMapIcon_C_ExecuteUbergraph_WBP_3DWorldMapIcon_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


