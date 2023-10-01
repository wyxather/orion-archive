#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Weapon_TOR_HW_Swarm_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.GenerateEndLocation
struct AProj_Weapon_TOR_HW_Swarm_C_GenerateEndLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.UserConstructionScript
struct AProj_Weapon_TOR_HW_Swarm_C_UserConstructionScript_Params
{
};

// Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.ReceiveBeginPlay
struct AProj_Weapon_TOR_HW_Swarm_C_ReceiveBeginPlay_Params
{
};

// Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.FindHomingTarget
struct AProj_Weapon_TOR_HW_Swarm_C_FindHomingTarget_Params
{
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.TargetFound
struct AProj_Weapon_TOR_HW_Swarm_C_TargetFound_Params
{
};

// Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.InitSwarm
struct AProj_Weapon_TOR_HW_Swarm_C_InitSwarm_Params
{
};

// Function Proj_Weapon_TOR_HW_Swarm.Proj_Weapon_TOR_HW_Swarm_C.ExecuteUbergraph_Proj_Weapon_TOR_HW_Swarm
struct AProj_Weapon_TOR_HW_Swarm_C_ExecuteUbergraph_Proj_Weapon_TOR_HW_Swarm_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
