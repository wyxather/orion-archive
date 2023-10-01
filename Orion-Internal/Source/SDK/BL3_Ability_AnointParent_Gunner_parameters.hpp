#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_AnointParent_Gunner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointAutoBearEnded
struct UAbility_AnointParent_Gunner_C_AnointAutoBearEnded_Params
{
	bool                                               HasValidTarget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ChargeTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointAutoBearStarted
struct UAbility_AnointParent_Gunner_C_AnointAutoBearStarted_Params
{
};

// Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointIronBearEnded
struct UAbility_AnointParent_Gunner_C_AnointIronBearEnded_Params
{
};

// Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointIronIronBearStarted
struct UAbility_AnointParent_Gunner_C_AnointIronIronBearStarted_Params
{
	class AOakCharacter_IronBear*                      IronBear;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.OnActivated
struct UAbility_AnointParent_Gunner_C_OnActivated_Params
{
};

// Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.BindGunnerEvents
struct UAbility_AnointParent_Gunner_C_BindGunnerEvents_Params
{
};

// Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.ExecuteUbergraph_Ability_AnointParent_Gunner
struct UAbility_AnointParent_Gunner_C_ExecuteUbergraph_Ability_AnointParent_Gunner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
