#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_EventTreeNode_Fade_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EventTreeNode_Fade.EventTreeNode_Fade_C.Begin
struct UEventTreeNode_Fade_C_Begin_Params
{
	class UEventTreeComponent**                        Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EventTreeNode_Fade.EventTreeNode_Fade_C.ExecuteUbergraph_EventTreeNode_Fade
struct UEventTreeNode_Fade_C_ExecuteUbergraph_EventTreeNode_Fade_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
