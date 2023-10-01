#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_WidgetPingWheelCenter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.Update_Cooldown_Timer
struct UWidgetPingWheelCenter_C_Update_Cooldown_Timer_Params
{
};

// Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.Update_Cooldown_Visibility
struct UWidgetPingWheelCenter_C_Update_Cooldown_Visibility_Params
{
	class UPingSubContext**                            SubContext;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.Get_Cancel_Visibility_1
struct UWidgetPingWheelCenter_C_Get_Cancel_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.OnActivate
struct UWidgetPingWheelCenter_C_OnActivate_Params
{
};

// Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.UpdateFromContext
struct UWidgetPingWheelCenter_C_UpdateFromContext_Params
{
	class UPingSubContext**                            Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.Construct
struct UWidgetPingWheelCenter_C_Construct_Params
{
};

// Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.Destruct
struct UWidgetPingWheelCenter_C_Destruct_Params
{
};

// Function WidgetPingWheelCenter.WidgetPingWheelCenter_C.ExecuteUbergraph_WidgetPingWheelCenter
struct UWidgetPingWheelCenter_C_ExecuteUbergraph_WidgetPingWheelCenter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
