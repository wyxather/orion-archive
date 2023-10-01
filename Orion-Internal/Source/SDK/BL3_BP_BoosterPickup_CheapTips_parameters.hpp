#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_BoosterPickup_CheapTips_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BoosterPickup_CheapTips.BP_BoosterPickup_CheapTips_C.UserConstructionScript
struct ABP_BoosterPickup_CheapTips_C_UserConstructionScript_Params
{
};

// Function BP_BoosterPickup_CheapTips.BP_BoosterPickup_CheapTips_C.ReceiveBeginPlay
struct ABP_BoosterPickup_CheapTips_C_ReceiveBeginPlay_Params
{
};

// Function BP_BoosterPickup_CheapTips.BP_BoosterPickup_CheapTips_C.PickedUp
struct ABP_BoosterPickup_CheapTips_C_PickedUp_Params
{
	class AOakCharacter*                               PickupInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BoosterPickup_CheapTips.BP_BoosterPickup_CheapTips_C.ExecuteUbergraph_BP_BoosterPickup_CheapTips
struct ABP_BoosterPickup_CheapTips_C_ExecuteUbergraph_BP_BoosterPickup_CheapTips_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
