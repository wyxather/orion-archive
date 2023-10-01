#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_list_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_list.Action_List_C.OnActionStart
struct UAction_List_C_OnActionStart_Params
{
};

// Function Action_list.Action_List_C.OnActionStop
struct UAction_List_C_OnActionStop_Params
{
};

// Function Action_list.Action_List_C.ExecuteUbergraph_Action_List
struct UAction_List_C_ExecuteUbergraph_Action_List_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
