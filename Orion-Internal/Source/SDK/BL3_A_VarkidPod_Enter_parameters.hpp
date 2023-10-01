#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_VarkidPod_Enter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_VarkidPod_Enter.A_VarkidPod_Enter_C.OnBegin
struct UA_VarkidPod_Enter_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_VarkidPod_Enter.A_VarkidPod_Enter_C.OnEnd
struct UA_VarkidPod_Enter_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_VarkidPod_Enter.A_VarkidPod_Enter_C.Notify_ShowPod
struct UA_VarkidPod_Enter_C_Notify_ShowPod_Params
{
};

// Function A_VarkidPod_Enter.A_VarkidPod_Enter_C.Notify_HideBody
struct UA_VarkidPod_Enter_C_Notify_HideBody_Params
{
};

// Function A_VarkidPod_Enter.A_VarkidPod_Enter_C.ExecuteUbergraph_A_VarkidPod_Enter
struct UA_VarkidPod_Enter_C_ExecuteUbergraph_A_VarkidPod_Enter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
