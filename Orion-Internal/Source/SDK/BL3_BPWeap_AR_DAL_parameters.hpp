#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_AR_DAL_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.UserConstructionScript
struct ABPWeap_AR_DAL_C_UserConstructionScript_Params
{
};

// Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.ShowChainFeed
struct ABPWeap_AR_DAL_C_ShowChainFeed_Params
{
};

// Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.Notify_ReloadEnded
struct ABPWeap_AR_DAL_C_Notify_ReloadEnded_Params
{
	bool*                                              bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.HideChain
struct ABPWeap_AR_DAL_C_HideChain_Params
{
};

// Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.ExecuteUbergraph_BPWeap_AR_DAL
struct ABPWeap_AR_DAL_C_ExecuteUbergraph_BPWeap_AR_DAL_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
