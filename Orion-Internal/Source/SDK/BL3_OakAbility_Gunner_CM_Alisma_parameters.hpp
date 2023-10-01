#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Gunner_CM_Alisma_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.OnActivated
struct UOakAbility_Gunner_CM_Alisma_C_OnActivated_Params
{
};

// Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.OnDeactivated
struct UOakAbility_Gunner_CM_Alisma_C_OnDeactivated_Params
{
};

// Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.ExitedIronBear
struct UOakAbility_Gunner_CM_Alisma_C_ExitedIronBear_Params
{
	class AOakCharacter_IronBear*                      IronBear;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.EnteredIronBear
struct UOakAbility_Gunner_CM_Alisma_C_EnteredIronBear_Params
{
	class AOakCharacter_IronBear*                      IronBear;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.ExecuteUbergraph_OakAbility_Gunner_CM_Alisma
struct UOakAbility_Gunner_CM_Alisma_C_ExecuteUbergraph_OakAbility_Gunner_CM_Alisma_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
