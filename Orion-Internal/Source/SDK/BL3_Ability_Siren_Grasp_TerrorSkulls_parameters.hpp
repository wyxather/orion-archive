#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Siren_Grasp_TerrorSkulls_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Siren_Grasp_TerrorSkulls.Ability_Siren_Grasp_TerrorSkulls_C.OnActivated
struct UAbility_Siren_Grasp_TerrorSkulls_C_OnActivated_Params
{
};

// Function Ability_Siren_Grasp_TerrorSkulls.Ability_Siren_Grasp_TerrorSkulls_C.GraspedTarget
struct UAbility_Siren_Grasp_TerrorSkulls_C_GraspedTarget_Params
{
	class AActor*                                      Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPhaseTranceElementalType                          Element;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Siren_Grasp_TerrorSkulls.Ability_Siren_Grasp_TerrorSkulls_C.ExecuteUbergraph_Ability_Siren_Grasp_TerrorSkulls
struct UAbility_Siren_Grasp_TerrorSkulls_C_ExecuteUbergraph_Ability_Siren_Grasp_TerrorSkulls_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
