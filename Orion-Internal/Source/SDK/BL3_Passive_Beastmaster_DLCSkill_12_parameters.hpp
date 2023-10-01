#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_DLCSkill_12_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.OnActivated
struct UPassive_Beastmaster_DLCSkill_11_C_OnActivated_Params
{
};

// Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.DLCSkill11_OnBeastmasterPetSpawned
struct UPassive_Beastmaster_DLCSkill_11_C_DLCSkill11_OnBeastmasterPetSpawned_Params
{
	class AOakCharacter*                               Pet;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.DLCSkill11_OnBeastmasterPetReleased
struct UPassive_Beastmaster_DLCSkill_11_C_DLCSkill11_OnBeastmasterPetReleased_Params
{
	class AOakCharacter*                               Pet;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.SetupPetEvents
struct UPassive_Beastmaster_DLCSkill_11_C_SetupPetEvents_Params
{
};

// Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.CleanupPetEvents
struct UPassive_Beastmaster_DLCSkill_11_C_CleanupPetEvents_Params
{
};

// Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.DLCSkill11_Pet_OnCausedDeath
struct UPassive_Beastmaster_DLCSkill_11_C_DLCSkill11_Pet_OnCausedDeath_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_12
struct UPassive_Beastmaster_DLCSkill_11_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_12_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
