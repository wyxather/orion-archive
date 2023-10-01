#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SG_JAK_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.UserConstructionScript
struct ABPWeap_SG_JAK_C_UserConstructionScript_Params
{
};

// Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.Notify_ReloadEnded
struct ABPWeap_SG_JAK_C_Notify_ReloadEnded_Params
{
	bool*                                              bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.ResetVisibleAmmo
struct ABPWeap_SG_JAK_C_ResetVisibleAmmo_Params
{
};

// Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.ExecuteUbergraph_BPWeap_SG_JAK
struct ABPWeap_SG_JAK_C_ExecuteUbergraph_BPWeap_SG_JAK_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
