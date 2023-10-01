#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_MiniMap_Overview_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_MiniMap_Overview.Widget_MiniMap_Overview_C.TryUnregisterPanel
struct UWidget_MiniMap_Overview_C_TryUnregisterPanel_Params
{
};

// Function Widget_MiniMap_Overview.Widget_MiniMap_Overview_C.InitMiniMapWidget
struct UWidget_MiniMap_Overview_C_InitMiniMapWidget_Params
{
	class AMiniMapDisplayActor**                       DisplayActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MiniMap_Overview.Widget_MiniMap_Overview_C.Destruct
struct UWidget_MiniMap_Overview_C_Destruct_Params
{
};

// Function Widget_MiniMap_Overview.Widget_MiniMap_Overview_C.ExecuteUbergraph_Widget_MiniMap_Overview
struct UWidget_MiniMap_Overview_C_ExecuteUbergraph_Widget_MiniMap_Overview_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
