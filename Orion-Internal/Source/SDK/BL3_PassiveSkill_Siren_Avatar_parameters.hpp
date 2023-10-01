#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_Avatar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.OnActivated
struct UPassiveSkill_Siren_Avatar_C_OnActivated_Params
{
};

// Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.Avatar_OnActionSkillReady
struct UPassiveSkill_Siren_Avatar_C_Avatar_OnActionSkillReady_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.Avatar_OnActionSkillActivating
struct UPassiveSkill_Siren_Avatar_C_Avatar_OnActionSkillActivating_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.PhaseTranceActivated
struct UPassiveSkill_Siren_Avatar_C_PhaseTranceActivated_Params
{
	EPhaseTranceAttackFamilyType                       FamilyType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhasetranceAttackAction>              PhaseTranceAction;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.Avatar_OnCausedDeath
struct UPassiveSkill_Siren_Avatar_C_Avatar_OnCausedDeath_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.ExecuteUbergraph_PassiveSkill_Siren_Avatar
struct UPassiveSkill_Siren_Avatar_C_ExecuteUbergraph_PassiveSkill_Siren_Avatar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
