#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_DLCSkill_13_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.OnActivated
struct UPassive_Beastmaster_DLCSkill_12_C_OnActivated_Params
{
};

// Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.DLCSkill11_OnBeastmasterPetSpawned
struct UPassive_Beastmaster_DLCSkill_12_C_DLCSkill11_OnBeastmasterPetSpawned_Params
{
	class AOakCharacter*                               Pet;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.DLCSkill11_OnBeastmasterPetReleased
struct UPassive_Beastmaster_DLCSkill_12_C_DLCSkill11_OnBeastmasterPetReleased_Params
{
	class AOakCharacter*                               Pet;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.SetupPetEvents
struct UPassive_Beastmaster_DLCSkill_12_C_SetupPetEvents_Params
{
};

// Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.CleanupPetEvents
struct UPassive_Beastmaster_DLCSkill_12_C_CleanupPetEvents_Params
{
};

// Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.DLCSkill12_OnCausedAnyDamage
struct UPassive_Beastmaster_DLCSkill_12_C_DLCSkill12_OnCausedAnyDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.OpenGate
struct UPassive_Beastmaster_DLCSkill_12_C_OpenGate_Params
{
};

// Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_13
struct UPassive_Beastmaster_DLCSkill_12_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_13_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
