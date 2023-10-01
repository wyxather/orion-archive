#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Ranged2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Ranged2.Passive_Beastmaster_Ranged2_C.OnActivated
struct UPassive_Beastmaster_Ranged2_C_OnActivated_Params
{
};

// Function Passive_Beastmaster_Ranged2.Passive_Beastmaster_Ranged2_C.CausedDeath_Ranged2
struct UPassive_Beastmaster_Ranged2_C_CausedDeath_Ranged2_Params
{
	class UDamageComponent*                            Damaged;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_Beastmaster_Ranged2.Passive_Beastmaster_Ranged2_C.WeaponReloadEnded_Ranged2
struct UPassive_Beastmaster_Ranged2_C_WeaponReloadEnded_Ranged2_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Ranged2.Passive_Beastmaster_Ranged2_C.ClassModUnique03_KillSkillTrigger
struct UPassive_Beastmaster_Ranged2_C_ClassModUnique03_KillSkillTrigger_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Ranged2.Passive_Beastmaster_Ranged2_C.ExecuteUbergraph_Passive_Beastmaster_Ranged2
struct UPassive_Beastmaster_Ranged2_C_ExecuteUbergraph_Passive_Beastmaster_Ranged2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
