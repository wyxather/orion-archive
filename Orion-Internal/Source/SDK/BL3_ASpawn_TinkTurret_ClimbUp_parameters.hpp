#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ASpawn_TinkTurret_ClimbUp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ASpawn_TinkTurret_ClimbUp.ASpawn_TinkTurret_ClimbUp_C.TurretVisible
struct UASpawn_TinkTurret_ClimbUp_C_TurretVisible_Params
{
};

// Function ASpawn_TinkTurret_ClimbUp.ASpawn_TinkTurret_ClimbUp_C.OnBegin
struct UASpawn_TinkTurret_ClimbUp_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ASpawn_TinkTurret_ClimbUp.ASpawn_TinkTurret_ClimbUp_C.ExecuteUbergraph_ASpawn_TinkTurret_ClimbUp
struct UASpawn_TinkTurret_ClimbUp_C_ExecuteUbergraph_ASpawn_TinkTurret_ClimbUp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
