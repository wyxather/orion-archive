#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_DLCSkill_10_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.GetManualHUDIconValues
struct UPassive_Beastmaster_DLCSkill_9_C_GetManualHUDIconValues_Params
{
	int                                                outStackCount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              outDuration;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              outTimeRemaining;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.SetupPetDamageEvent
struct UPassive_Beastmaster_DLCSkill_9_C_SetupPetDamageEvent_Params
{
};

// Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.RemovePetDamageEvent
struct UPassive_Beastmaster_DLCSkill_9_C_RemovePetDamageEvent_Params
{
};

// Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_OnBeastPetSpawned
struct UPassive_Beastmaster_DLCSkill_9_C_DLCSkill9_OnBeastPetSpawned_Params
{
	class AOakCharacter*                               Pet;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_OnBeastmasterPetReleased
struct UPassive_Beastmaster_DLCSkill_9_C_DLCSkill9_OnBeastmasterPetReleased_Params
{
	class AOakCharacter*                               Pet;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_Pet_OnCausedAnyDamage
struct UPassive_Beastmaster_DLCSkill_9_C_DLCSkill9_Pet_OnCausedAnyDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_Player_OnWeaponUsed
struct UPassive_Beastmaster_DLCSkill_9_C_DLCSkill9_Player_OnWeaponUsed_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.OnActivated
struct UPassive_Beastmaster_DLCSkill_9_C_OnActivated_Params
{
};

// Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_10
struct UPassive_Beastmaster_DLCSkill_9_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_10_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
