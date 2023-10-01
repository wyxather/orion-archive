#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_GuardianRank_Aftershock_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.HandleDamageInstanceLogic
struct UAbility_GuardianRank_Aftershock_C_HandleDamageInstanceLogic_Params
{
};

// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.HandleGroundSlamLock
struct UAbility_GuardianRank_Aftershock_C_HandleGroundSlamLock_Params
{
};

// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.DealStoredDamage
struct UAbility_GuardianRank_Aftershock_C_DealStoredDamage_Params
{
	class AActor*                                      ActorToDamage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DamageDealt;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.StoreDamage
struct UAbility_GuardianRank_Aftershock_C_StoreDamage_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.GetTotalInstanceDamageStored
struct UAbility_GuardianRank_Aftershock_C_GetTotalInstanceDamageStored_Params
{
	float                                              Total;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.InitAllDamageInstances
struct UAbility_GuardianRank_Aftershock_C_InitAllDamageInstances_Params
{
};

// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.DEBUGPrintAllDamageInstances
struct UAbility_GuardianRank_Aftershock_C_DEBUGPrintAllDamageInstances_Params
{
};

// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.ClearAllDamageInstances
struct UAbility_GuardianRank_Aftershock_C_ClearAllDamageInstances_Params
{
};

// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.OnDeactivated
struct UAbility_GuardianRank_Aftershock_C_OnDeactivated_Params
{
};

// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.OnActivated
struct UAbility_GuardianRank_Aftershock_C_OnActivated_Params
{
};

// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.On Damage Caused
struct UAbility_GuardianRank_Aftershock_C_On_Damage_Caused_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.ExecuteUbergraph_Ability_GuardianRank_Aftershock
struct UAbility_GuardianRank_Aftershock_C_ExecuteUbergraph_Ability_GuardianRank_Aftershock_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
