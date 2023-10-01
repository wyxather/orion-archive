#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_NetWait_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dialog_NetWait.Dialog_NetWait_C.EndDialog
struct ADialog_NetWait_C_EndDialog_Params
{
};

// Function Dialog_NetWait.Dialog_NetWait_C.OnBeginDialog
struct ADialog_NetWait_C_OnBeginDialog_Params
{
};

// Function Dialog_NetWait.Dialog_NetWait_C.OnWaitDialog_Event_1
struct ADialog_NetWait_C_OnWaitDialog_Event_1_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Dialog_NetWait.Dialog_NetWait_C.ReceiveDestroyed
struct ADialog_NetWait_C_ReceiveDestroyed_Params
{
};

// Function Dialog_NetWait.Dialog_NetWait_C.ExecuteUbergraph_Dialog_NetWait
struct ADialog_NetWait_C_ExecuteUbergraph_Dialog_NetWait_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
