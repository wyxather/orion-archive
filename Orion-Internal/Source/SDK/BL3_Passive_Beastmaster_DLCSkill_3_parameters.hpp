#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_DLCSkill_3_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_DLCSkill_3.Passive_Beastmaster_DLCSkill_2_C.DamageCalc
struct UPassive_Beastmaster_DLCSkill_2_C_DamageCalc_Params
{
	float                                              res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_DLCSkill_3.Passive_Beastmaster_DLCSkill_2_C.OnActivated
struct UPassive_Beastmaster_DLCSkill_2_C_OnActivated_Params
{
};

// Function Passive_Beastmaster_DLCSkill_3.Passive_Beastmaster_DLCSkill_2_C.DLCSkill2_TriggerSkill
struct UPassive_Beastmaster_DLCSkill_2_C_DLCSkill2_TriggerSkill_Params
{
	struct FGameResourcePoolReference                  ResourcePool;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Passive_Beastmaster_DLCSkill_3.Passive_Beastmaster_DLCSkill_2_C.OnPetSpawned
struct UPassive_Beastmaster_DLCSkill_2_C_OnPetSpawned_Params
{
	class AOakCharacter*                               Pet;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_DLCSkill_3.Passive_Beastmaster_DLCSkill_2_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_3
struct UPassive_Beastmaster_DLCSkill_2_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_3_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
