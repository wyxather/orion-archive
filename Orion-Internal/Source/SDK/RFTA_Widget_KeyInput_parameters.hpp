#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_KeyInput_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_KeyInput.Widget_KeyInput_C.Init
struct UWidget_KeyInput_C_Init_Params
{
	struct FText*                                      Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_KeyInput.Widget_KeyInput_C.Construct
struct UWidget_KeyInput_C_Construct_Params
{
};

// Function Widget_KeyInput.Widget_KeyInput_C.ExecuteUbergraph_Widget_KeyInput
struct UWidget_KeyInput_C_ExecuteUbergraph_Widget_KeyInput_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
