#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_MiniMap_NPC_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_MiniMap_NPC.Widget_MiniMap_NPC_C.UpdateMiniMapWidget
struct UWidget_MiniMap_NPC_C_UpdateMiniMapWidget_Params
{
	struct FWidgetTransform*                           InTransform;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FWidgetTransform                            ReturnValue;                                              // (Parm, OutParm, ReturnParm, NoDestructor)
};

// Function Widget_MiniMap_NPC.Widget_MiniMap_NPC_C.UpdateFactionColor
struct UWidget_MiniMap_NPC_C_UpdateFactionColor_Params
{
	EAffiliation*                                      Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MiniMap_NPC.Widget_MiniMap_NPC_C.OnRegisteredToPanel
struct UWidget_MiniMap_NPC_C_OnRegisteredToPanel_Params
{
	class UMiniMapPanel**                              MiniMapPanel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MiniMap_NPC.Widget_MiniMap_NPC_C.OnFactionChanged
struct UWidget_MiniMap_NPC_C_OnFactionChanged_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MiniMap_NPC.Widget_MiniMap_NPC_C.ExecuteUbergraph_Widget_MiniMap_NPC
struct UWidget_MiniMap_NPC_C_ExecuteUbergraph_Widget_MiniMap_NPC_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
