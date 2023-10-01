#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Siren_Cast_ElementalChance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Siren_Cast_ElementalChance.Ability_Siren_Cast_ElementalChance_C.OnActivated
struct UAbility_Siren_Cast_ElementalChance_C_OnActivated_Params
{
};

// Function Ability_Siren_Cast_ElementalChance.Ability_Siren_Cast_ElementalChance_C.CastUsed
struct UAbility_Siren_Cast_ElementalChance_C_CastUsed_Params
{
	EPhaseTranceAttackFamilyType                       FamilyType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhasetranceAttackAction>              PhaseTranceAction;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Siren_Cast_ElementalChance.Ability_Siren_Cast_ElementalChance_C.OnDeactivated
struct UAbility_Siren_Cast_ElementalChance_C_OnDeactivated_Params
{
};

// Function Ability_Siren_Cast_ElementalChance.Ability_Siren_Cast_ElementalChance_C.ExecuteUbergraph_Ability_Siren_Cast_ElementalChance
struct UAbility_Siren_Cast_ElementalChance_C_ExecuteUbergraph_Ability_Siren_Cast_ElementalChance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
