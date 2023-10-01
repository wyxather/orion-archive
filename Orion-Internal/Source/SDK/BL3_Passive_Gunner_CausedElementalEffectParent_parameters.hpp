#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_CausedElementalEffectParent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.OnActivated
struct UPassive_Gunner_CausedElementalEffectParent_C_OnActivated_Params
{
};

// Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.GunnerCausedElementalEffect
struct UPassive_Gunner_CausedElementalEffectParent_C_GunnerCausedElementalEffect_Params
{
	class AActor*                                      Causer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FStatusEffectSpec                           Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.Gunner_IronBearEnteredAndReady
struct UPassive_Gunner_CausedElementalEffectParent_C_Gunner_IronBearEnteredAndReady_Params
{
	class AOakCharacter_IronBear*                      IronBear;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.ExecuteUbergraph_Passive_Gunner_CausedElementalEffectParent
struct UPassive_Gunner_CausedElementalEffectParent_C_ExecuteUbergraph_Passive_Gunner_CausedElementalEffectParent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
