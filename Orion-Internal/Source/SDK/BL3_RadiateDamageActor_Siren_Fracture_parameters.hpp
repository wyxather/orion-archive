#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_RadiateDamageActor_Siren_Fracture_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.DoDamageToEnemy
struct ARadiateDamageActor_Siren_Fracture_C_DoDamageToEnemy_Params
{
	class AActor*                                      Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.GetFractureDamage
struct ARadiateDamageActor_Siren_Fracture_C_GetFractureDamage_Params
{
	float                                              res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.OnRep_PhasetranceCombo
struct ARadiateDamageActor_Siren_Fracture_C_OnRep_PhasetranceCombo_Params
{
};

// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.SetupModData
struct ARadiateDamageActor_Siren_Fracture_C_SetupModData_Params
{
};

// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.DoAreaDamage
struct ARadiateDamageActor_Siren_Fracture_C_DoAreaDamage_Params
{
};

// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.K2_GetOwnedActionAbility
struct ARadiateDamageActor_Siren_Fracture_C_K2_GetOwnedActionAbility_Params
{
	class UOakActionAbility*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.UserConstructionScript
struct ARadiateDamageActor_Siren_Fracture_C_UserConstructionScript_Params
{
};

// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.ReceiveBeginPlay
struct ARadiateDamageActor_Siren_Fracture_C_ReceiveBeginPlay_Params
{
};

// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.OnHitEnemy
struct ARadiateDamageActor_Siren_Fracture_C_OnHitEnemy_Params
{
	class AActor**                                     EnemyActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.ReceiveEndPlay
struct ARadiateDamageActor_Siren_Fracture_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.OnPerformRadiateDamageTasks
struct ARadiateDamageActor_Siren_Fracture_C_OnPerformRadiateDamageTasks_Params
{
};

// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.ExecuteUbergraph_RadiateDamageActor_Siren_Fracture
struct ARadiateDamageActor_Siren_Fracture_C_ExecuteUbergraph_RadiateDamageActor_Siren_Fracture_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
