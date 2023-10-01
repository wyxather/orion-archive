#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_PS_VLA_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeap_PS_VLA.BPWeap_PS_VLA_C.UserConstructionScript
struct ABPWeap_PS_VLA_C_UserConstructionScript_Params
{
};

// Function BPWeap_PS_VLA.BPWeap_PS_VLA_C.ModeSwitchStarted
struct ABPWeap_PS_VLA_C_ModeSwitchStarted_Params
{
};

// Function BPWeap_PS_VLA.BPWeap_PS_VLA_C.Notify_ReloadStarted
struct ABPWeap_PS_VLA_C_Notify_ReloadStarted_Params
{
	bool*                                              bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPWeap_PS_VLA.BPWeap_PS_VLA_C.ExecuteUbergraph_BPWeap_PS_VLA
struct ABPWeap_PS_VLA_C_ExecuteUbergraph_BPWeap_PS_VLA_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
