#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Debug_Properties_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Debug_Properties.Widget_Debug_Properties_C.SetComponent
struct UWidget_Debug_Properties_C_SetComponent_Params
{
	class UQuestComponent**                            QuestComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Debug_Properties.Widget_Debug_Properties_C.ClearProperties
struct UWidget_Debug_Properties_C_ClearProperties_Params
{
};

// Function Widget_Debug_Properties.Widget_Debug_Properties_C.AddProperty
struct UWidget_Debug_Properties_C_AddProperty_Params
{
	struct FText*                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_Debug_Properties.Widget_Debug_Properties_C.Construct
struct UWidget_Debug_Properties_C_Construct_Params
{
};

// Function Widget_Debug_Properties.Widget_Debug_Properties_C.ExecuteUbergraph_Widget_Debug_Properties
struct UWidget_Debug_Properties_C_ExecuteUbergraph_Widget_Debug_Properties_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
