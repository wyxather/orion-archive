#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Skag_Shared_Tongue_Run_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Skag_Shared_Tongue_Run.A_Skag_Shared_Tongue_Run_C.Notify_TongueLashRtoL
struct UA_Skag_Shared_Tongue_Run_C_Notify_TongueLashRtoL_Params
{
};

// Function A_Skag_Shared_Tongue_Run.A_Skag_Shared_Tongue_Run_C.OnBegin
struct UA_Skag_Shared_Tongue_Run_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Skag_Shared_Tongue_Run.A_Skag_Shared_Tongue_Run_C.ExecuteUbergraph_A_Skag_Shared_Tongue_Run
struct UA_Skag_Shared_Tongue_Run_C_ExecuteUbergraph_A_Skag_Shared_Tongue_Run_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
