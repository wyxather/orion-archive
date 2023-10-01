#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_MapGenDebug_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_MapGenDebug.Widget_MapGenDebug_C.GetText_1
struct UWidget_MapGenDebug_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_MapGenDebug.Widget_MapGenDebug_C.UpdateQuestInfo
struct UWidget_MapGenDebug_C_UpdateQuestInfo_Params
{
};

// Function Widget_MapGenDebug.Widget_MapGenDebug_C.UpdateMapGenInfo
struct UWidget_MapGenDebug_C_UpdateMapGenInfo_Params
{
};

// Function Widget_MapGenDebug.Widget_MapGenDebug_C.UpdateTileInfo
struct UWidget_MapGenDebug_C_UpdateTileInfo_Params
{
};

// Function Widget_MapGenDebug.Widget_MapGenDebug_C.SetZone
struct UWidget_MapGenDebug_C_SetZone_Params
{
	class AZoneActor**                                 ZoneActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MapGenDebug.Widget_MapGenDebug_C.Tick
struct UWidget_MapGenDebug_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MapGenDebug.Widget_MapGenDebug_C.ExecuteUbergraph_Widget_MapGenDebug
struct UWidget_MapGenDebug_C_ExecuteUbergraph_Widget_MapGenDebug_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
