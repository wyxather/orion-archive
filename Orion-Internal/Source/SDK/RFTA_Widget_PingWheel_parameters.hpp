#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_PingWheel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_PingWheel.Widget_PingWheel_C.IsContextAvailableForLocation
struct UWidget_PingWheel_C_IsContextAvailableForLocation_Params
{
	class UPingSubContext**                            SubContext;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanAdd;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_PingWheel.Widget_PingWheel_C.OnShowEmoteScreen
struct UWidget_PingWheel_C_OnShowEmoteScreen_Params
{
	int*                                               Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PingWheel.Widget_PingWheel_C.SelectWidget
struct UWidget_PingWheel_C_SelectWidget_Params
{
	class UWidget_PingWheelContext_C**                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PingWheel.Widget_PingWheel_C.AddAmmoContexts
struct UWidget_PingWheel_C_AddAmmoContexts_Params
{
	struct FActionPing*                                Ping;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function Widget_PingWheel.Widget_PingWheel_C.MakeSelection
struct UWidget_PingWheel_C_MakeSelection_Params
{
};

// Function Widget_PingWheel.Widget_PingWheel_C.DetermineHoveredOptionGamepad
struct UWidget_PingWheel_C_DetermineHoveredOptionGamepad_Params
{
};

// Function Widget_PingWheel.Widget_PingWheel_C.DetermineHoveredOptionMouse
struct UWidget_PingWheel_C_DetermineHoveredOptionMouse_Params
{
};

// Function Widget_PingWheel.Widget_PingWheel_C.AddSubcontextEmote
struct UWidget_PingWheel_C_AddSubcontextEmote_Params
{
	class UPingEmoteSubContext**                       EmoteSubcontext;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               NumEmoteSubcontexts;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               SubcontextIndex;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActionPing*                                Ping;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function Widget_PingWheel.Widget_PingWheel_C.AddSubcontextPing
struct UWidget_PingWheel_C_AddSubcontextPing_Params
{
	class UPingSubContext**                            SubContext;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               NumPingSubcontexts;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               SubcontextIndex;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActionPing*                                Ping;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function Widget_PingWheel.Widget_PingWheel_C.AddDefaultSelection
struct UWidget_PingWheel_C_AddDefaultSelection_Params
{
	struct FActionPing*                                Ping;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function Widget_PingWheel.Widget_PingWheel_C.OnPingContextUpdated
struct UWidget_PingWheel_C_OnPingContextUpdated_Params
{
	struct FActionPing*                                PingContext;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function Widget_PingWheel.Widget_PingWheel_C.Construct
struct UWidget_PingWheel_C_Construct_Params
{
};

// Function Widget_PingWheel.Widget_PingWheel_C.Tick
struct UWidget_PingWheel_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PingWheel.Widget_PingWheel_C.ExecuteUbergraph_Widget_PingWheel
struct UWidget_PingWheel_C_ExecuteUbergraph_Widget_PingWheel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
