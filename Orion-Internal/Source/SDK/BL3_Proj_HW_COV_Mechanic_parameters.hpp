#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_HW_COV_Mechanic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.ProjectileDisarm
struct AProj_HW_COV_Mechanic_C_ProjectileDisarm_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.ProjectileArm
struct AProj_HW_COV_Mechanic_C_ProjectileArm_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.ProjectileDetonate
struct AProj_HW_COV_Mechanic_C_ProjectileDetonate_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.UserConstructionScript
struct AProj_HW_COV_Mechanic_C_UserConstructionScript_Params
{
};

// Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.ReceiveBeginPlay
struct AProj_HW_COV_Mechanic_C_ReceiveBeginPlay_Params
{
};

// Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.OnExplode
struct AProj_HW_COV_Mechanic_C_OnExplode_Params
{
};

// Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.OnHitWorld
struct AProj_HW_COV_Mechanic_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.ExecuteUbergraph_Proj_HW_COV_Mechanic
struct AProj_HW_COV_Mechanic_C_ExecuteUbergraph_Proj_HW_COV_Mechanic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
