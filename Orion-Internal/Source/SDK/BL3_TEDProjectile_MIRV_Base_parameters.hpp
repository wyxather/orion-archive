#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TEDProjectile_MIRV_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.AIProjectile_CanBeStolen
struct ATEDProjectile_MIRV_Base_C_AIProjectile_CanBeStolen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.FuelOut
struct ATEDProjectile_MIRV_Base_C_FuelOut_Params
{
};

// Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.UserConstructionScript
struct ATEDProjectile_MIRV_Base_C_UserConstructionScript_Params
{
};

// Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.OnBehaviorInitialized
struct ATEDProjectile_MIRV_Base_C_OnBehaviorInitialized_Params
{
	class UClass**                                     BehaviorClass;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.ReceiveBeginPlay
struct ATEDProjectile_MIRV_Base_C_ReceiveBeginPlay_Params
{
};

// Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.ExecuteUbergraph_TEDProjectile_MIRV_Base
struct ATEDProjectile_MIRV_Base_C_ExecuteUbergraph_TEDProjectile_MIRV_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
