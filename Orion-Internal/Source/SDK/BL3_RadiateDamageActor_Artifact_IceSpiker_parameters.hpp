#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_RadiateDamageActor_Artifact_IceSpiker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.DoDamageToEnemy
struct ARadiateDamageActor_Artifact_IceSpiker_C_DoDamageToEnemy_Params
{
	class AActor*                                      Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.DoAreaDamage
struct ARadiateDamageActor_Artifact_IceSpiker_C_DoAreaDamage_Params
{
};

// Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.UserConstructionScript
struct ARadiateDamageActor_Artifact_IceSpiker_C_UserConstructionScript_Params
{
};

// Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.ReceiveBeginPlay
struct ARadiateDamageActor_Artifact_IceSpiker_C_ReceiveBeginPlay_Params
{
};

// Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.OnHitEnemy
struct ARadiateDamageActor_Artifact_IceSpiker_C_OnHitEnemy_Params
{
	class AActor**                                     EnemyActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.ReceiveEndPlay
struct ARadiateDamageActor_Artifact_IceSpiker_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.OnPerformRadiateDamageTasks
struct ARadiateDamageActor_Artifact_IceSpiker_C_OnPerformRadiateDamageTasks_Params
{
};

// Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.ExecuteUbergraph_RadiateDamageActor_Artifact_IceSpiker
struct ARadiateDamageActor_Artifact_IceSpiker_C_ExecuteUbergraph_RadiateDamageActor_Artifact_IceSpiker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
