#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_NPCInteractableProjectileInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NPCInteractableProjectileInterface.NPCInteractableProjectileInterface_C.ProjectileDetonate
struct UNPCInteractableProjectileInterface_C_ProjectileDetonate_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NPCInteractableProjectileInterface.NPCInteractableProjectileInterface_C.ProjectileArm
struct UNPCInteractableProjectileInterface_C_ProjectileArm_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NPCInteractableProjectileInterface.NPCInteractableProjectileInterface_C.ProjectileDisarm
struct UNPCInteractableProjectileInterface_C_ProjectileDisarm_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
