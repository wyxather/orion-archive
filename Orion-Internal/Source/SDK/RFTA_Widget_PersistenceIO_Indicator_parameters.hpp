#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_PersistenceIO_Indicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_PersistenceIO_Indicator.Widget_PersistenceIO_Indicator_C.PulseOpacity
struct UWidget_PersistenceIO_Indicator_C_PulseOpacity_Params
{
	float*                                             Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PersistenceIO_Indicator.Widget_PersistenceIO_Indicator_C.Tick
struct UWidget_PersistenceIO_Indicator_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PersistenceIO_Indicator.Widget_PersistenceIO_Indicator_C.OnShowIndicator
struct UWidget_PersistenceIO_Indicator_C_OnShowIndicator_Params
{
};

// Function Widget_PersistenceIO_Indicator.Widget_PersistenceIO_Indicator_C.OnHideIndicator
struct UWidget_PersistenceIO_Indicator_C_OnHideIndicator_Params
{
};

// Function Widget_PersistenceIO_Indicator.Widget_PersistenceIO_Indicator_C.OnInitialized
struct UWidget_PersistenceIO_Indicator_C_OnInitialized_Params
{
};

// Function Widget_PersistenceIO_Indicator.Widget_PersistenceIO_Indicator_C.PulseCompleted
struct UWidget_PersistenceIO_Indicator_C_PulseCompleted_Params
{
};

// Function Widget_PersistenceIO_Indicator.Widget_PersistenceIO_Indicator_C.ExecuteUbergraph_Widget_PersistenceIO_Indicator
struct UWidget_PersistenceIO_Indicator_C_ExecuteUbergraph_Widget_PersistenceIO_Indicator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
