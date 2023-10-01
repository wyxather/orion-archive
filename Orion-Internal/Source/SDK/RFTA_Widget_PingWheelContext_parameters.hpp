#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_PingWheelContext_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_PingWheelContext.Widget_PingWheelContext_C.SetPing
struct UWidget_PingWheelContext_C_SetPing_Params
{
	struct FActionPing*                                Ping;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function Widget_PingWheelContext.Widget_PingWheelContext_C.OnActivate
struct UWidget_PingWheelContext_C_OnActivate_Params
{
};

// Function Widget_PingWheelContext.Widget_PingWheelContext_C.NotifySelectedChanged
struct UWidget_PingWheelContext_C_NotifySelectedChanged_Params
{
	bool*                                              Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_PingWheelContext.Widget_PingWheelContext_C.UpdateFromContext
struct UWidget_PingWheelContext_C_UpdateFromContext_Params
{
	class UPingSubContext**                            Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PingWheelContext.Widget_PingWheelContext_C.SetContext
struct UWidget_PingWheelContext_C_SetContext_Params
{
	class UPingSubContext**                            NewContext;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActionPing*                                InitialPing;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
