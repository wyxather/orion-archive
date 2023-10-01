#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Rakk_ChromaticSwap_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Rakk_ChromaticSwap.A_Rakk_ChromaticSwap_C.OnBegin
struct UA_Rakk_ChromaticSwap_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Rakk_ChromaticSwap.A_Rakk_ChromaticSwap_C.Notify_SwapElements
struct UA_Rakk_ChromaticSwap_C_Notify_SwapElements_Params
{
};

// Function A_Rakk_ChromaticSwap.A_Rakk_ChromaticSwap_C.Notify_ChargeUp
struct UA_Rakk_ChromaticSwap_C_Notify_ChargeUp_Params
{
};

// Function A_Rakk_ChromaticSwap.A_Rakk_ChromaticSwap_C.Notify_Explode
struct UA_Rakk_ChromaticSwap_C_Notify_Explode_Params
{
};

// Function A_Rakk_ChromaticSwap.A_Rakk_ChromaticSwap_C.ExecuteUbergraph_A_Rakk_ChromaticSwap
struct UA_Rakk_ChromaticSwap_C_ExecuteUbergraph_A_Rakk_ChromaticSwap_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
