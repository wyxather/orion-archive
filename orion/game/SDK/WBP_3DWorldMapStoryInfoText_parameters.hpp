#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x8 (0x8 - 0x0)
// Function WBP_3DWorldMapStoryInfoText.WBP_3DWorldMapStoryInfoText_C.SetTextOneline
struct UWBP_3DWorldMapStoryInfoText_C_SetTextOneline_Params
{
public:
	class FName                                  OneLineText;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_3DWorldMapStoryInfoText.WBP_3DWorldMapStoryInfoText_C.SetTextOneLineVisibility
struct UWBP_3DWorldMapStoryInfoText_C_SetTextOneLineVisibility_Params
{
public:
	enum class ESlateVisibility                  InVisibility;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_3DWorldMapStoryInfoText.WBP_3DWorldMapStoryInfoText_C.SetRecommentLevelGroupVisibility
struct UWBP_3DWorldMapStoryInfoText_C_SetRecommentLevelGroupVisibility_Params
{
public:
	enum class ESlateVisibility                  InVisibility;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_3DWorldMapStoryInfoText.WBP_3DWorldMapStoryInfoText_C.SetNameAndCapterVisibility
struct UWBP_3DWorldMapStoryInfoText_C_SetNameAndCapterVisibility_Params
{
public:
	enum class ESlateVisibility                  InVisibility;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_3DWorldMapStoryInfoText.WBP_3DWorldMapStoryInfoText_C.SetRecommendationLevel
struct UWBP_3DWorldMapStoryInfoText_C_SetRecommendationLevel_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_3DWorldMapStoryInfoText.WBP_3DWorldMapStoryInfoText_C.SetCapter
struct UWBP_3DWorldMapStoryInfoText_C_SetCapter_Params
{
public:
	class FName                                  InText;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_3DWorldMapStoryInfoText.WBP_3DWorldMapStoryInfoText_C.SetCharacterName
struct UWBP_3DWorldMapStoryInfoText_C_SetCharacterName_Params
{
public:
	class FName                                  CharacterText;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_3DWorldMapStoryInfoText.WBP_3DWorldMapStoryInfoText_C.ExecuteUbergraph_WBP_3DWorldMapStoryInfoText
struct UWBP_3DWorldMapStoryInfoText_C_ExecuteUbergraph_WBP_3DWorldMapStoryInfoText_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


