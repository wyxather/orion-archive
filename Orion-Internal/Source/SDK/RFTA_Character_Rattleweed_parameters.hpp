#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Rattleweed_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Character_Rattleweed.Character_Rattleweed_C.GetMinionOwner
struct ACharacter_Rattleweed_C_GetMinionOwner_Params
{
	class AActor*                                      Owner;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Rattleweed.Character_Rattleweed_C.GetCauseDamageScalar
struct ACharacter_Rattleweed_C_GetCauseDamageScalar_Params
{
	float                                              Scalar;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Rattleweed.Character_Rattleweed_C.MinionHasDamageTag
struct ACharacter_Rattleweed_C_MinionHasDamageTag_Params
{
	bool                                               ExtraDamage;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DamageScalar;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Rattleweed.Character_Rattleweed_C.HasSoulEmberTrinket
struct ACharacter_Rattleweed_C_HasSoulEmberTrinket_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Rattleweed.Character_Rattleweed_C.GetSpawnTime
struct ACharacter_Rattleweed_C_GetSpawnTime_Params
{
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Rattleweed.Character_Rattleweed_C.IsValidMinion
struct ACharacter_Rattleweed_C_IsValidMinion_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Rattleweed.Character_Rattleweed_C.GetPunisherDamageMod
struct ACharacter_Rattleweed_C_GetPunisherDamageMod_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PunisherMod;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Rattleweed.Character_Rattleweed_C.ModifyDamage
struct ACharacter_Rattleweed_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Rattleweed.Character_Rattleweed_C.AddNearbyThreat
struct ACharacter_Rattleweed_C_AddNearbyThreat_Params
{
};

// Function Character_Rattleweed.Character_Rattleweed_C.InitializeNearbyThreat
struct ACharacter_Rattleweed_C_InitializeNearbyThreat_Params
{
};

// Function Character_Rattleweed.Character_Rattleweed_C.MC_BuildUp
struct ACharacter_Rattleweed_C_MC_BuildUp_Params
{
};

// Function Character_Rattleweed.Character_Rattleweed_C.ReceiveBeginPlay
struct ACharacter_Rattleweed_C_ReceiveBeginPlay_Params
{
};

// Function Character_Rattleweed.Character_Rattleweed_C.OnTimer
struct ACharacter_Rattleweed_C_OnTimer_Params
{
};

// Function Character_Rattleweed.Character_Rattleweed_C.OnDead_Event_1
struct ACharacter_Rattleweed_C_OnDead_Event_1_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Rattleweed.Character_Rattleweed_C.OnComputeStats
struct ACharacter_Rattleweed_C_OnComputeStats_Params
{
};

// Function Character_Rattleweed.Character_Rattleweed_C.FinishSpawning
struct ACharacter_Rattleweed_C_FinishSpawning_Params
{
};

// Function Character_Rattleweed.Character_Rattleweed_C.MultiDissolveEvent
struct ACharacter_Rattleweed_C_MultiDissolveEvent_Params
{
};

// Function Character_Rattleweed.Character_Rattleweed_C.DestroyMinion
struct ACharacter_Rattleweed_C_DestroyMinion_Params
{
};

// Function Character_Rattleweed.Character_Rattleweed_C.OnOwnerComputeStats
struct ACharacter_Rattleweed_C_OnOwnerComputeStats_Params
{
};

// Function Character_Rattleweed.Character_Rattleweed_C.NotifyHitTarget
struct ACharacter_Rattleweed_C_NotifyHitTarget_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Character_Rattleweed.Character_Rattleweed_C.MC_Explosion
struct ACharacter_Rattleweed_C_MC_Explosion_Params
{
};

// Function Character_Rattleweed.Character_Rattleweed_C.ExecuteUbergraph_Character_Rattleweed
struct ACharacter_Rattleweed_C_ExecuteUbergraph_Character_Rattleweed_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
