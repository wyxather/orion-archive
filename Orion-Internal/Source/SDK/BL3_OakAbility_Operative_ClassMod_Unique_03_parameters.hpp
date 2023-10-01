#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Operative_ClassMod_Unique_03_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.OnSeeingRedActivated
struct UOakAbility_Operative_ClassMod_Unique_03_C_OnSeeingRedActivated_Params
{
};

// Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.OnActivated
struct UOakAbility_Operative_ClassMod_Unique_03_C_OnActivated_Params
{
};

// Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.OnCausedDeath
struct UOakAbility_Operative_ClassMod_Unique_03_C_OnCausedDeath_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.OperativeTriggerKillSkillEffect
struct UOakAbility_Operative_ClassMod_Unique_03_C_OperativeTriggerKillSkillEffect_Params
{
};

// Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.OnActionSkillActivated
struct UOakAbility_Operative_ClassMod_Unique_03_C_OnActionSkillActivated_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Operative_ClassMod_Unique_03.OakAbility_Operative_ClassMod_Unique_03_C.ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_03
struct UOakAbility_Operative_ClassMod_Unique_03_C_ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_03_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
