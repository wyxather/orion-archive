#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ACharge_Skag_Shared_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ACharge_Skag_Shared.ACharge_Skag_Shared_C.OnBegin
struct UACharge_Skag_Shared_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ACharge_Skag_Shared.ACharge_Skag_Shared_C.Notify_HitTarget
struct UACharge_Skag_Shared_C_Notify_HitTarget_Params
{
};

// Function ACharge_Skag_Shared.ACharge_Skag_Shared_C.ExecuteUbergraph_ACharge_Skag_Shared
struct UACharge_Skag_Shared_C_ExecuteUbergraph_ACharge_Skag_Shared_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
