#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_VarkidSpit_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_VarkidSpit.Proj_VarkidSpit_C.UserConstructionScript
struct AProj_VarkidSpit_C_UserConstructionScript_Params
{
};

// Function Proj_VarkidSpit.Proj_VarkidSpit_C.HNT_Throw
struct AProj_VarkidSpit_C_HNT_Throw_Params
{
};

// Function Proj_VarkidSpit.Proj_VarkidSpit_C.HNT_Prime
struct AProj_VarkidSpit_C_HNT_Prime_Params
{
};

// Function Proj_VarkidSpit.Proj_VarkidSpit_C.HNT_Drop
struct AProj_VarkidSpit_C_HNT_Drop_Params
{
};

// Function Proj_VarkidSpit.Proj_VarkidSpit_C.OnExplode
struct AProj_VarkidSpit_C_OnExplode_Params
{
};

// Function Proj_VarkidSpit.Proj_VarkidSpit_C.OnHitWorld
struct AProj_VarkidSpit_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_VarkidSpit.Proj_VarkidSpit_C.OnHitDamagableObject
struct AProj_VarkidSpit_C_OnHitDamagableObject_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_VarkidSpit.Proj_VarkidSpit_C.ExecuteUbergraph_Proj_VarkidSpit
struct AProj_VarkidSpit_C_ExecuteUbergraph_Proj_VarkidSpit_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
