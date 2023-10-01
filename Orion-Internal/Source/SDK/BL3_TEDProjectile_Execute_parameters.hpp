#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TEDProjectile_Execute_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TEDProjectile_Execute.TEDProjectile_Execute_C.UserConstructionScript
struct ATEDProjectile_Execute_C_UserConstructionScript_Params
{
};

// Function TEDProjectile_Execute.TEDProjectile_Execute_C.ReceiveBeginPlay
struct ATEDProjectile_Execute_C_ReceiveBeginPlay_Params
{
};

// Function TEDProjectile_Execute.TEDProjectile_Execute_C.OnBounce
struct ATEDProjectile_Execute_C_OnBounce_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    ImpactVelocity;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function TEDProjectile_Execute.TEDProjectile_Execute_C.OnHitEnemy
struct ATEDProjectile_Execute_C_OnHitEnemy_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TEDProjectile_Execute.TEDProjectile_Execute_C.ExecuteUbergraph_TEDProjectile_Execute
struct ATEDProjectile_Execute_C_ExecuteUbergraph_TEDProjectile_Execute_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
