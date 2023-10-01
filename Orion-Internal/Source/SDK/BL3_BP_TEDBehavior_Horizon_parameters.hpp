#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_TEDBehavior_Horizon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_TEDBehavior_Horizon.BP_TEDBehavior_Horizon_C.K2_OnComboTargetTriggered
struct UBP_TEDBehavior_Horizon_C_K2_OnComboTargetTriggered_Params
{
	class ATedioreProjectile**                         Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TEDBehavior_Horizon.BP_TEDBehavior_Horizon_C.K2_ComboTargetTriggeredEvent
struct UBP_TEDBehavior_Horizon_C_K2_ComboTargetTriggeredEvent_Params
{
	class ATedioreProjectile**                         Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TEDBehavior_Horizon.BP_TEDBehavior_Horizon_C.ExecuteUbergraph_BP_TEDBehavior_Horizon
struct UBP_TEDBehavior_Horizon_C_ExecuteUbergraph_BP_TEDBehavior_Horizon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
