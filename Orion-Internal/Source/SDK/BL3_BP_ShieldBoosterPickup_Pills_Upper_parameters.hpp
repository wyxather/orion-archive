#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ShieldBoosterPickup_Pills_Upper_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ShieldBoosterPickup_Pills_Upper.BP_ShieldBoosterPickup_Pills_Upper_C.UserConstructionScript
struct ABP_ShieldBoosterPickup_Pills_Upper_C_UserConstructionScript_Params
{
};

// Function BP_ShieldBoosterPickup_Pills_Upper.BP_ShieldBoosterPickup_Pills_Upper_C.ReceiveBeginPlay
struct ABP_ShieldBoosterPickup_Pills_Upper_C_ReceiveBeginPlay_Params
{
};

// Function BP_ShieldBoosterPickup_Pills_Upper.BP_ShieldBoosterPickup_Pills_Upper_C.PickedUp
struct ABP_ShieldBoosterPickup_Pills_Upper_C_PickedUp_Params
{
	class AOakCharacter*                               PickupInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShieldBoosterPickup_Pills_Upper.BP_ShieldBoosterPickup_Pills_Upper_C.ExecuteUbergraph_BP_ShieldBoosterPickup_Pills_Upper
struct ABP_ShieldBoosterPickup_Pills_Upper_C_ExecuteUbergraph_BP_ShieldBoosterPickup_Pills_Upper_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
