#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_CM_Ixora2_OPE_L01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_CM_Ixora2_OPE_L01.Ability_CM_Ixora2_OPE_L01_C.OnActivated
struct UAbility_CM_Ixora2_OPE_L01_C_OnActivated_Params
{
};

// Function Ability_CM_Ixora2_OPE_L01.Ability_CM_Ixora2_OPE_L01_C.CSM_OPE_Ixora2_OnCausedDeath
struct UAbility_CM_Ixora2_OPE_L01_C_CSM_OPE_Ixora2_OnCausedDeath_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_CM_Ixora2_OPE_L01.Ability_CM_Ixora2_OPE_L01_C.ExecuteUbergraph_Ability_CM_Ixora2_OPE_L01
struct UAbility_CM_Ixora2_OPE_L01_C_ExecuteUbergraph_Ability_CM_Ixora2_OPE_L01_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
