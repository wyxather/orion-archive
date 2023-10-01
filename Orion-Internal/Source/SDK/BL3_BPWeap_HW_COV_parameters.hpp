#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_HW_COV_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_HW_COV.BPWeap_HW_COV_C.DisablePlug
struct ABPWeap_HW_COV_C_DisablePlug_Params
{
};

// Function BPWeap_HW_COV.BPWeap_HW_COV_C.EnablePlug
struct ABPWeap_HW_COV_C_EnablePlug_Params
{
};

// Function BPWeap_HW_COV.BPWeap_HW_COV_C.DisableOilCan
struct ABPWeap_HW_COV_C_DisableOilCan_Params
{
};

// Function BPWeap_HW_COV.BPWeap_HW_COV_C.EnableOilCan
struct ABPWeap_HW_COV_C_EnableOilCan_Params
{
};

// Function BPWeap_HW_COV.BPWeap_HW_COV_C.UserConstructionScript
struct ABPWeap_HW_COV_C_UserConstructionScript_Params
{
};

// Function BPWeap_HW_COV.BPWeap_HW_COV_C.ReceiveBeginPlay
struct ABPWeap_HW_COV_C_ReceiveBeginPlay_Params
{
};

// Function BPWeap_HW_COV.BPWeap_HW_COV_C.FirstPersonCreated
struct ABPWeap_HW_COV_C_FirstPersonCreated_Params
{
};

// Function BPWeap_HW_COV.BPWeap_HW_COV_C.Notify_ReloadEnded
struct ABPWeap_HW_COV_C_Notify_ReloadEnded_Params
{
	bool*                                              bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_HW_COV.BPWeap_HW_COV_C.SmallSpark
struct ABPWeap_HW_COV_C_SmallSpark_Params
{
};

// Function BPWeap_HW_COV.BPWeap_HW_COV_C.StartOiling
struct ABPWeap_HW_COV_C_StartOiling_Params
{
};

// Function BPWeap_HW_COV.BPWeap_HW_COV_C.ExecuteUbergraph_BPWeap_HW_COV
struct ABPWeap_HW_COV_C_ExecuteUbergraph_BPWeap_HW_COV_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
