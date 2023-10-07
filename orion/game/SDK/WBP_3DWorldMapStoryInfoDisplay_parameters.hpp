#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x30 (0x30 - 0x0)
// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetForceHidden
struct UWBP_3DWorldMapStoryInfoDisplay_C_SetForceHidden_Params
{
public:
	bool                                         IsHidden;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.InitIsFocus
struct UWBP_3DWorldMapStoryInfoDisplay_C_InitIsFocus_Params
{
public:
	enum class EWorldMapZoomType                 ZoomType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.ChangeUIFocus
struct UWBP_3DWorldMapStoryInfoDisplay_C_ChangeUIFocus_Params
{
public:
	bool                                         IsFocus;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsFast;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x148 (0x148 - 0x0)
// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.GetCharacterIcon
struct UWBP_3DWorldMapStoryInfoDisplay_C_GetCharacterIcon_Params
{
public:
	enum class EPlayableCharacterID              CharacterID;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_121E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            IconImage;                                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetSubIcon
struct UWBP_3DWorldMapStoryInfoDisplay_C_SetSubIcon_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetCharacterIcon2
struct UWBP_3DWorldMapStoryInfoDisplay_C_SetCharacterIcon2_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetCharacterIcon1
struct UWBP_3DWorldMapStoryInfoDisplay_C_SetCharacterIcon1_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetOneLineText
struct UWBP_3DWorldMapStoryInfoDisplay_C_SetOneLineText_Params
{
public:
	class FName                                  InText;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetupVisibility
struct UWBP_3DWorldMapStoryInfoDisplay_C_SetupVisibility_Params
{
public:
	bool                                         NameAndChapter;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         RecommendLevel;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         OneLineText;                                       // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CharacterIcon1;                                    // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CharacterIcon2;                                    // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SubIcon;                                           // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetupMerchantStory
struct UWBP_3DWorldMapStoryInfoDisplay_C_SetupMerchantStory_Params
{
public:
	struct FWorldMapDestinationData              WorldMapDestinationData;                           // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x50 (0x50 - 0x0)
// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetupCouplingStory
struct UWBP_3DWorldMapStoryInfoDisplay_C_SetupCouplingStory_Params
{
public:
	struct FWorldMapDestinationData              WorldMapDestinationData;                           // 0x0(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x201 (0x201 - 0x0)
// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetupMainStory
struct UWBP_3DWorldMapStoryInfoDisplay_C_SetupMainStory_Params
{
public:
	struct FWorldMapDestinationData              WorldMapDestinationData;                           // 0x0(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x42 (0x42 - 0x0)
// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.Setup
struct UWBP_3DWorldMapStoryInfoDisplay_C_Setup_Params
{
public:
	struct FWorldMapDestinationData              StoryInfo;                                         // 0x0(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetRecommendationLevel
struct UWBP_3DWorldMapStoryInfoDisplay_C_SetRecommendationLevel_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetCapter
struct UWBP_3DWorldMapStoryInfoDisplay_C_SetCapter_Params
{
public:
	class FName                                  InText;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.SetCharacterName
struct UWBP_3DWorldMapStoryInfoDisplay_C_SetCharacterName_Params
{
public:
	class FName                                  CharacterText;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_3DWorldMapStoryInfoDisplay.WBP_3DWorldMapStoryInfoDisplay_C.ExecuteUbergraph_WBP_3DWorldMapStoryInfoDisplay
struct UWBP_3DWorldMapStoryInfoDisplay_C_ExecuteUbergraph_WBP_3DWorldMapStoryInfoDisplay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


