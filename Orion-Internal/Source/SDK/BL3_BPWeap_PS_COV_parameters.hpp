#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_PS_COV_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_PS_COV.BPWeap_PS_COV_C.DisablePlug
struct ABPWeap_PS_COV_C_DisablePlug_Params
{
};

// Function BPWeap_PS_COV.BPWeap_PS_COV_C.EnablePlug
struct ABPWeap_PS_COV_C_EnablePlug_Params
{
};

// Function BPWeap_PS_COV.BPWeap_PS_COV_C.UserConstructionScript
struct ABPWeap_PS_COV_C_UserConstructionScript_Params
{
};

// Function BPWeap_PS_COV.BPWeap_PS_COV_C.ReceiveBeginPlay
struct ABPWeap_PS_COV_C_ReceiveBeginPlay_Params
{
};

// Function BPWeap_PS_COV.BPWeap_PS_COV_C.FirstPersonCreated
struct ABPWeap_PS_COV_C_FirstPersonCreated_Params
{
};

// Function BPWeap_PS_COV.BPWeap_PS_COV_C.Notify_ReloadEnded
struct ABPWeap_PS_COV_C_Notify_ReloadEnded_Params
{
	bool*                                              bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_PS_COV.BPWeap_PS_COV_C.ExecuteUbergraph_BPWeap_PS_COV
struct ABPWeap_PS_COV_C_ExecuteUbergraph_BPWeap_PS_COV_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
