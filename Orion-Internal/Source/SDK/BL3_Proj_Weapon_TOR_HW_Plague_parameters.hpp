#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Weapon_TOR_HW_Plague_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.GenerateEndLocation
struct AProj_Weapon_TOR_HW_Plague_C_GenerateEndLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.UserConstructionScript
struct AProj_Weapon_TOR_HW_Plague_C_UserConstructionScript_Params
{
};

// Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.ReceiveBeginPlay
struct AProj_Weapon_TOR_HW_Plague_C_ReceiveBeginPlay_Params
{
};

// Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.FindHomingTarget
struct AProj_Weapon_TOR_HW_Plague_C_FindHomingTarget_Params
{
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.TargetFound
struct AProj_Weapon_TOR_HW_Plague_C_TargetFound_Params
{
};

// Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.InitSwarm
struct AProj_Weapon_TOR_HW_Plague_C_InitSwarm_Params
{
};

// Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.OnExplode
struct AProj_Weapon_TOR_HW_Plague_C_OnExplode_Params
{
};

// Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.ExecuteUbergraph_Proj_Weapon_TOR_HW_Plague
struct AProj_Weapon_TOR_HW_Plague_C_ExecuteUbergraph_Proj_Weapon_TOR_HW_Plague_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
