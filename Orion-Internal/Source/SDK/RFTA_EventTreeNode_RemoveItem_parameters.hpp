#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_EventTreeNode_RemoveItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EventTreeNode_RemoveItem.EventTreeNode_RemoveItem_C.Begin
struct UEventTreeNode_RemoveItem_C_Begin_Params
{
	class UEventTreeComponent**                        Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EventTreeNode_RemoveItem.EventTreeNode_RemoveItem_C.ExecuteUbergraph_EventTreeNode_RemoveItem
struct UEventTreeNode_RemoveItem_C_ExecuteUbergraph_EventTreeNode_RemoveItem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
