#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_MiniMap_Ping_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_MiniMap_Ping.Widget_MiniMap_Ping_C.UpdateMinimapDisplay
struct UWidget_MiniMap_Ping_C_UpdateMinimapDisplay_Params
{
};

// Function Widget_MiniMap_Ping.Widget_MiniMap_Ping_C.OnRegisteredToPanel
struct UWidget_MiniMap_Ping_C_OnRegisteredToPanel_Params
{
	class UMiniMapPanel**                              MiniMapPanel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MiniMap_Ping.Widget_MiniMap_Ping_C.ExecuteUbergraph_Widget_MiniMap_Ping
struct UWidget_MiniMap_Ping_C_ExecuteUbergraph_Widget_MiniMap_Ping_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
