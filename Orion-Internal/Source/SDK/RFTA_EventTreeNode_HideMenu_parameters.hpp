#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_EventTreeNode_HideMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EventTreeNode_HideMenu.EventTreeNode_HideMenu_C.GetEditorLabel
struct UEventTreeNode_HideMenu_C_GetEditorLabel_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function EventTreeNode_HideMenu.EventTreeNode_HideMenu_C.Begin
struct UEventTreeNode_HideMenu_C_Begin_Params
{
	class UEventTreeComponent**                        Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EventTreeNode_HideMenu.EventTreeNode_HideMenu_C.ExecuteUbergraph_EventTreeNode_HideMenu
struct UEventTreeNode_HideMenu_C_ExecuteUbergraph_EventTreeNode_HideMenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
