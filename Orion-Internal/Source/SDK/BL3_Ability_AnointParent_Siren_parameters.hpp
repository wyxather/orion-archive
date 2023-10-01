#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_AnointParent_Siren_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointFlareStarted
struct UAbility_AnointParent_Siren_C_AnointFlareStarted_Params
{
	EPhaseTranceAttackFamilyType                       FamilyType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhasetranceAttackAction>              ActionAction;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointCastStarted
struct UAbility_AnointParent_Siren_C_AnointCastStarted_Params
{
	EPhaseTranceAttackFamilyType                       FamilyType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhasetranceAttackAction>              AttackAction;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointGraspEnded
struct UAbility_AnointParent_Siren_C_AnointGraspEnded_Params
{
	bool                                               Killed;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointGraspStarted
struct UAbility_AnointParent_Siren_C_AnointGraspStarted_Params
{
	class AActor*                                      Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPhaseTranceElementalType                          Element;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointSlamEnded
struct UAbility_AnointParent_Siren_C_AnointSlamEnded_Params
{
};

// Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointSlamStarted
struct UAbility_AnointParent_Siren_C_AnointSlamStarted_Params
{
};

// Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.OnActivated
struct UAbility_AnointParent_Siren_C_OnActivated_Params
{
};

// Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.BindSirenEvents
struct UAbility_AnointParent_Siren_C_BindSirenEvents_Params
{
};

// Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.ExecuteUbergraph_Ability_AnointParent_Siren
struct UAbility_AnointParent_Siren_C_ExecuteUbergraph_Ability_AnointParent_Siren_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
