#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Subtitles_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Subtitles.Widget_Subtitles_C.ShouldShowSubtitle
struct UWidget_Subtitles_C_ShouldShowSubtitle_Params
{
	class AActor**                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Subtitles.Widget_Subtitles_C.RemoveSubtitle
struct UWidget_Subtitles_C_RemoveSubtitle_Params
{
	class AActor**                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Subtitles.Widget_Subtitles_C.AddSubtitle
struct UWidget_Subtitles_C_AddSubtitle_Params
{
	class AActor**                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText*                                      Speaker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_Subtitles.Widget_Subtitles_C.Construct
struct UWidget_Subtitles_C_Construct_Params
{
};

// Function Widget_Subtitles.Widget_Subtitles_C.OnAddSubtitle_Event_1
struct UWidget_Subtitles_C_OnAddSubtitle_Event_1_Params
{
	class USubtitleInstance**                          Subtitle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Subtitles.Widget_Subtitles_C.OnRemoveSubtitle_Event_1
struct UWidget_Subtitles_C_OnRemoveSubtitle_Event_1_Params
{
	class USubtitleInstance**                          Subtitle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Subtitles.Widget_Subtitles_C.ExecuteUbergraph_Widget_Subtitles
struct UWidget_Subtitles_C_ExecuteUbergraph_Widget_Subtitles_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
