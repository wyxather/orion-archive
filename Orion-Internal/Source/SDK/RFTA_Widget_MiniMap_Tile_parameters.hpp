#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_MiniMap_Tile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_MiniMap_Tile.Widget_MiniMap_Tile_C.UpdateMiniMapWidget
struct UWidget_MiniMap_Tile_C_UpdateMiniMapWidget_Params
{
	struct FWidgetTransform*                           InTransform;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FWidgetTransform                            ReturnValue;                                              // (Parm, OutParm, ReturnParm, NoDestructor)
};

// Function Widget_MiniMap_Tile.Widget_MiniMap_Tile_C.OnRegisteredToPanel
struct UWidget_MiniMap_Tile_C_OnRegisteredToPanel_Params
{
	class UMiniMapPanel**                              MiniMapPanel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MiniMap_Tile.Widget_MiniMap_Tile_C.UpdateLevelVisibility
struct UWidget_MiniMap_Tile_C_UpdateLevelVisibility_Params
{
	int*                                               DisplayLevel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               MyLevel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MiniMap_Tile.Widget_MiniMap_Tile_C.ExecuteUbergraph_Widget_MiniMap_Tile
struct UWidget_MiniMap_Tile_C_ExecuteUbergraph_Widget_MiniMap_Tile_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
