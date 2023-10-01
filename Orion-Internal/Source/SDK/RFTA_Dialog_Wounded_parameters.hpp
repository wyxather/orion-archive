#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_Wounded_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dialog_Wounded.Dialog_Wounded_C.OnBeginDialog
struct ADialog_Wounded_C_OnBeginDialog_Params
{
};

// Function Dialog_Wounded.Dialog_Wounded_C.OnWoundedState_Event_1
struct ADialog_Wounded_C_OnWoundedState_Event_1_Params
{
	class UWoundedComponent**                          WoundedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWoundedState*                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_Wounded.Dialog_Wounded_C.OnEndDialog
struct ADialog_Wounded_C_OnEndDialog_Params
{
};

// Function Dialog_Wounded.Dialog_Wounded_C.ExecuteUbergraph_Dialog_Wounded
struct ADialog_Wounded_C_ExecuteUbergraph_Dialog_Wounded_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
