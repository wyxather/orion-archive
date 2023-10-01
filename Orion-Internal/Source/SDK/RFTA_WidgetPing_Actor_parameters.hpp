#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_WidgetPing_Actor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WidgetPing_Actor.WidgetPing_Actor_C.SetPingContext
struct UWidgetPing_Actor_C_SetPingContext_Params
{
	class UTexture2D**                                 Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor*                                     Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETailType*                                         TailType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WidgetPing_Actor.WidgetPing_Actor_C.PingInit
struct UWidgetPing_Actor_C_PingInit_Params
{
};

// Function WidgetPing_Actor.WidgetPing_Actor_C.Construct
struct UWidgetPing_Actor_C_Construct_Params
{
};

// Function WidgetPing_Actor.WidgetPing_Actor_C.Startanimation
struct UWidgetPing_Actor_C_Startanimation_Params
{
};

// Function WidgetPing_Actor.WidgetPing_Actor_C.FadeOutAnimation
struct UWidgetPing_Actor_C_FadeOutAnimation_Params
{
};

// Function WidgetPing_Actor.WidgetPing_Actor_C.ExecuteUbergraph_WidgetPing_Actor
struct UWidgetPing_Actor_C_ExecuteUbergraph_WidgetPing_Actor_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
