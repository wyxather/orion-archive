#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Beastmaster_RakkAttack_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.DoPortalFX
struct UAction_Beastmaster_RakkAttack_Base_C_DoPortalFX_Params
{
	bool                                               Var2Anim;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.EnsureGoodEnd
struct UAction_Beastmaster_RakkAttack_Base_C_EnsureGoodEnd_Params
{
};

// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.GetNextHomingTarget
struct UAction_Beastmaster_RakkAttack_Base_C_GetNextHomingTarget_Params
{
	class AActor*                                      res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.HandleRakkSpawn
struct UAction_Beastmaster_RakkAttack_Base_C_HandleRakkSpawn_Params
{
	class AProjectile_RakkAttack_Rakk_C*               NewRakk;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.GetRakkSpawnTransform
struct UAction_Beastmaster_RakkAttack_Base_C_GetRakkSpawnTransform_Params
{
	struct FTransform                                  res;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.SetMaxNumRakks
struct UAction_Beastmaster_RakkAttack_Base_C_SetMaxNumRakks_Params
{
};

// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.GbxAsyncRequest_Spawned_244167AD48FDCDF195CF85BCDF0B8202
struct UAction_Beastmaster_RakkAttack_Base_C_GbxAsyncRequest_Spawned_244167AD48FDCDF195CF85BCDF0B8202_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InstanceIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_SpawnRakks
struct UAction_Beastmaster_RakkAttack_Base_C_Notify_SpawnRakks_Params
{
};

// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.OnServerBegin
struct UAction_Beastmaster_RakkAttack_Base_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.FindTargets
struct UAction_Beastmaster_RakkAttack_Base_C_FindTargets_Params
{
};

// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.OnServerEnd
struct UAction_Beastmaster_RakkAttack_Base_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_SpawnPortal
struct UAction_Beastmaster_RakkAttack_Base_C_Notify_SpawnPortal_Params
{
};

// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_SpawnPortal_Var2
struct UAction_Beastmaster_RakkAttack_Base_C_Notify_SpawnPortal_Var2_Params
{
};

// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_Rumble
struct UAction_Beastmaster_RakkAttack_Base_C_Notify_Rumble_Params
{
};

// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_CameraShake
struct UAction_Beastmaster_RakkAttack_Base_C_Notify_CameraShake_Params
{
};

// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.Notify_CameraShake_Var2
struct UAction_Beastmaster_RakkAttack_Base_C_Notify_CameraShake_Var2_Params
{
};

// Function Action_Beastmaster_RakkAttack_Base.Action_Beastmaster_RakkAttack_Base_C.ExecuteUbergraph_Action_Beastmaster_RakkAttack_Base
struct UAction_Beastmaster_RakkAttack_Base_C_ExecuteUbergraph_Action_Beastmaster_RakkAttack_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
