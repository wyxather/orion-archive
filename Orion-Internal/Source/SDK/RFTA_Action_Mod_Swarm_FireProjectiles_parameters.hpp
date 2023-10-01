#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_Swarm_FireProjectiles_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.DestroyVFX
struct UAction_Mod_Swarm_FireProjectiles_C_DestroyVFX_Params
{
};

// Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.ProcessGroupedVFX
struct UAction_Mod_Swarm_FireProjectiles_C_ProcessGroupedVFX_Params
{
};

// Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.ConditionallyFinish
struct UAction_Mod_Swarm_FireProjectiles_C_ConditionallyFinish_Params
{
};

// Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.InitProjectile
struct UAction_Mod_Swarm_FireProjectiles_C_InitProjectile_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Projectile_Homing_MultiTarget_Base_C**   Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.OnTick
struct UAction_Mod_Swarm_FireProjectiles_C_OnTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.FinishFiringProjectiles
struct UAction_Mod_Swarm_FireProjectiles_C_FinishFiringProjectiles_Params
{
};

// Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.OnHomeStatusChanged
struct UAction_Mod_Swarm_FireProjectiles_C_OnHomeStatusChanged_Params
{
	class AActor**                                     CurrentProjectile;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              IsHome;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.OnActionStop
struct UAction_Mod_Swarm_FireProjectiles_C_OnActionStop_Params
{
};

// Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.MultiPlayGroupedVFX
struct UAction_Mod_Swarm_FireProjectiles_C_MultiPlayGroupedVFX_Params
{
};

// Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.MultiDestroyGroupedVFX
struct UAction_Mod_Swarm_FireProjectiles_C_MultiDestroyGroupedVFX_Params
{
};

// Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.ExecuteUbergraph_Action_Mod_Swarm_FireProjectiles
struct UAction_Mod_Swarm_FireProjectiles_C_ExecuteUbergraph_Action_Mod_Swarm_FireProjectiles_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
