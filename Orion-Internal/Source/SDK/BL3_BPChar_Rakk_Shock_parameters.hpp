#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Rakk_Shock_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_Rakk_Shock.BPChar_Rakk_Shock_C.UserConstructionScript
struct ABPChar_Rakk_Shock_C_UserConstructionScript_Params
{
};

// Function BPChar_Rakk_Shock.BPChar_Rakk_Shock_C.ReceiveBeginPlay
struct ABPChar_Rakk_Shock_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_Rakk_Shock.BPChar_Rakk_Shock_C.SpreadDamageAura
struct ABPChar_Rakk_Shock_C_SpreadDamageAura_Params
{
	class AActor**                                     SpreadToActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Rakk_Shock.BPChar_Rakk_Shock_C.ExecuteUbergraph_BPChar_Rakk_Shock
struct ABPChar_Rakk_Shock_C_ExecuteUbergraph_BPChar_Rakk_Shock_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
