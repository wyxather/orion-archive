#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_PickupUsableComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PickupUsableComponent.BP_PickupUsableComponent_C.K2_GetOptionalErrorText
struct UBP_PickupUsableComponent_C_K2_GetOptionalErrorText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_PickupUsableComponent.BP_PickupUsableComponent_C.K2_CanBeUsed
struct UBP_PickupUsableComponent_C_K2_CanBeUsed_Params
{
	struct FUsabilityQuery*                            Query;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
