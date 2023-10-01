#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_MiniMap_Display_RevealMap_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.Has MiniMap
struct AMiniMap_Display_RevealMap_C_Has_MiniMap_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.Set Widget MiniMap Default Visibility
struct AMiniMap_Display_RevealMap_C_Set_Widget_MiniMap_Default_Visibility_Params
{
};

// Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.Init
struct AMiniMap_Display_RevealMap_C_Init_Params
{
	class ACharacter_Master_Player_C**                 CharacterMasterPlayer;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.Init HUD
struct AMiniMap_Display_RevealMap_C_Init_HUD_Params
{
};

// Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.ReceiveBeginPlay
struct AMiniMap_Display_RevealMap_C_ReceiveBeginPlay_Params
{
};

// Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.Map Initialized_Event_1
struct AMiniMap_Display_RevealMap_C_Map_Initialized_Event_1_Params
{
};

// Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.ReceiveTick
struct AMiniMap_Display_RevealMap_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.FoW Initialized
struct AMiniMap_Display_RevealMap_C_FoW_Initialized_Params
{
};

// Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.MapInitEventBound
struct AMiniMap_Display_RevealMap_C_MapInitEventBound_Params
{
};

// Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.SetMiniMapMode
struct AMiniMap_Display_RevealMap_C_SetMiniMapMode_Params
{
	EMiniMapMode*                                      Mode;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C.ExecuteUbergraph_MiniMap_Display_RevealMap
struct AMiniMap_Display_RevealMap_C_ExecuteUbergraph_MiniMap_Display_RevealMap_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
