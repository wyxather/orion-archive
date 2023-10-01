#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Weapon_TOR_HW_BeeHive_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.MakeBees
struct AProj_Weapon_TOR_HW_BeeHive_C_MakeBees_Params
{
};

// Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.UserConstructionScript
struct AProj_Weapon_TOR_HW_BeeHive_C_UserConstructionScript_Params
{
};

// Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.ReceiveBeginPlay
struct AProj_Weapon_TOR_HW_BeeHive_C_ReceiveBeginPlay_Params
{
};

// Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.TargetFound
struct AProj_Weapon_TOR_HW_BeeHive_C_TargetFound_Params
{
};

// Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.ReceiveHit
struct AProj_Weapon_TOR_HW_BeeHive_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.ReleaseTheBEEEEEEEEEEEEEES
struct AProj_Weapon_TOR_HW_BeeHive_C_ReleaseTheBEEEEEEEEEEEEEES_Params
{
};

// Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.BurnItDown
struct AProj_Weapon_TOR_HW_BeeHive_C_BurnItDown_Params
{
};

// Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.ExecuteUbergraph_Proj_Weapon_TOR_HW_BeeHive
struct AProj_Weapon_TOR_HW_BeeHive_C_ExecuteUbergraph_Proj_Weapon_TOR_HW_BeeHive_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
