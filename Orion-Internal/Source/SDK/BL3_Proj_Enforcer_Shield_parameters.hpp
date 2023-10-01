#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Enforcer_Shield_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_Enforcer_Shield.Proj_Enforcer_Shield_C.UserConstructionScript
struct AProj_Enforcer_Shield_C_UserConstructionScript_Params
{
};

// Function Proj_Enforcer_Shield.Proj_Enforcer_Shield_C.AIMelee_Drop
struct AProj_Enforcer_Shield_C_AIMelee_Drop_Params
{
	bool*                                              RequestNewMeleeWeapon;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Enforcer_Shield.Proj_Enforcer_Shield_C.ExecuteUbergraph_Proj_Enforcer_Shield
struct AProj_Enforcer_Shield_C_ExecuteUbergraph_Proj_Enforcer_Shield_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
