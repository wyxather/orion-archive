#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Ping_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Ping.Widget_Ping_C.SetNavigating
struct UWidget_Ping_C_SetNavigating_Params
{
	bool*                                              IsNavigating;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              Rightward;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Ping.Widget_Ping_C.FireEmote
struct UWidget_Ping_C_FireEmote_Params
{
};

// Function Widget_Ping.Widget_Ping_C.SlotEmote
struct UWidget_Ping_C_SlotEmote_Params
{
};

// Function Widget_Ping.Widget_Ping_C.ShowEmoteScreen
struct UWidget_Ping_C_ShowEmoteScreen_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Ping.Widget_Ping_C.MakeSelection
struct UWidget_Ping_C_MakeSelection_Params
{
};

// Function Widget_Ping.Widget_Ping_C.SetPingContext
struct UWidget_Ping_C_SetPingContext_Params
{
	struct FActionPing*                                PingContext;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function Widget_Ping.Widget_Ping_C.Tick
struct UWidget_Ping_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Ping.Widget_Ping_C.Construct
struct UWidget_Ping_C_Construct_Params
{
};

// Function Widget_Ping.Widget_Ping_C.ExecuteUbergraph_Widget_Ping
struct UWidget_Ping_C_ExecuteUbergraph_Widget_Ping_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
