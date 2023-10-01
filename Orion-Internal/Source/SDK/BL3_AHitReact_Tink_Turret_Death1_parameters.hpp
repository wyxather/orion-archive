#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_Tink_Turret_Death1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AHitReact_Tink_Turret_Death1.AHitReact_Tink_Turret_Death1_C.DeathExplosion1
struct UAHitReact_Tink_Turret_Death1_C_DeathExplosion1_Params
{
};

// Function AHitReact_Tink_Turret_Death1.AHitReact_Tink_Turret_Death1_C.DeathExplosion2
struct UAHitReact_Tink_Turret_Death1_C_DeathExplosion2_Params
{
};

// Function AHitReact_Tink_Turret_Death1.AHitReact_Tink_Turret_Death1_C.OnBegin
struct UAHitReact_Tink_Turret_Death1_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AHitReact_Tink_Turret_Death1.AHitReact_Tink_Turret_Death1_C.OnEnd
struct UAHitReact_Tink_Turret_Death1_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AHitReact_Tink_Turret_Death1.AHitReact_Tink_Turret_Death1_C.ExecuteUbergraph_AHitReact_Tink_Turret_Death1
struct UAHitReact_Tink_Turret_Death1_C_ExecuteUbergraph_AHitReact_Tink_Turret_Death1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
