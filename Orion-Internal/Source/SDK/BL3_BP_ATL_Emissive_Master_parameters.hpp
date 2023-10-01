#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ATL_Emissive_Master_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ATL_Emissive_Master.BP_ATL_Emissive_Master_C.K2_OnApplyAspect
struct UBP_ATL_Emissive_Master_C_K2_OnApplyAspect_Params
{
	class AActor**                                     InventoryActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryBalanceStateComponent**            InventoryBalanceState;                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ATL_Emissive_Master.BP_ATL_Emissive_Master_C.K2_GetFriendlyDescription
struct UBP_ATL_Emissive_Master_C_K2_GetFriendlyDescription_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
