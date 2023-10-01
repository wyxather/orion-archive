#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_AnointParent_Operative_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointOperativeIsActionAbilityActive
struct UAbility_AnointParent_Operative_C_AnointOperativeIsActionAbilityActive_Params
{
	class UClass*                                      ActionSkill;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointOperativeActionSkillEnd
struct UAbility_AnointParent_Operative_C_AnointOperativeActionSkillEnd_Params
{
	TEnumAsByte<EOperativeGadgets>                     ActionSkill;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointOperativeActionSkillStart
struct UAbility_AnointParent_Operative_C_AnointOperativeActionSkillStart_Params
{
	TEnumAsByte<EOperativeGadgets>                     ActionSkill;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointCloneSwappedPlaces
struct UAbility_AnointParent_Operative_C_AnointCloneSwappedPlaces_Params
{
};

// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointCannonActivated
struct UAbility_AnointParent_Operative_C_AnointCannonActivated_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointSNTRYEnded
struct UAbility_AnointParent_Operative_C_AnointSNTRYEnded_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointSNTRYStarted
struct UAbility_AnointParent_Operative_C_AnointSNTRYStarted_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointCloneEnded
struct UAbility_AnointParent_Operative_C_AnointCloneEnded_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointCloneStarted
struct UAbility_AnointParent_Operative_C_AnointCloneStarted_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointBarrierEnded
struct UAbility_AnointParent_Operative_C_AnointBarrierEnded_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointBarrierStart
struct UAbility_AnointParent_Operative_C_AnointBarrierStart_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.OnActivated
struct UAbility_AnointParent_Operative_C_OnActivated_Params
{
};

// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.BindOperativeEvents
struct UAbility_AnointParent_Operative_C_BindOperativeEvents_Params
{
};

// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.ExecuteUbergraph_Ability_AnointParent_Operative
struct UAbility_AnointParent_Operative_C_ExecuteUbergraph_Ability_AnointParent_Operative_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
