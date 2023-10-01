#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_RiftWalker_Clone_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.GetMinionOwner
struct ACharacter_RiftWalker_Clone_Base_C_GetMinionOwner_Params
{
	class AActor*                                      Owner;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.GetCauseDamageScalar
struct ACharacter_RiftWalker_Clone_Base_C_GetCauseDamageScalar_Params
{
	float                                              Scalar;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.MinionHasDamageTag
struct ACharacter_RiftWalker_Clone_Base_C_MinionHasDamageTag_Params
{
	bool                                               ExtraDamage;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DamageScalar;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.HasSoulEmberTrinket
struct ACharacter_RiftWalker_Clone_Base_C_HasSoulEmberTrinket_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.GetSpawnTime
struct ACharacter_RiftWalker_Clone_Base_C_GetSpawnTime_Params
{
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.IsValidMinion
struct ACharacter_RiftWalker_Clone_Base_C_IsValidMinion_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.GetExplosionDamageMod
struct ACharacter_RiftWalker_Clone_Base_C_GetExplosionDamageMod_Params
{
	float                                              Mod;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.GetBrutalMarkDamageMod
struct ACharacter_RiftWalker_Clone_Base_C_GetBrutalMarkDamageMod_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	float                                              DamageMod;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.GetArmorScalars
struct ACharacter_RiftWalker_Clone_Base_C_GetArmorScalars_Params
{
	struct FDamageInfo*                                DamInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	float                                              MinionDamageScalar;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.GetPunisherDamageMod
struct ACharacter_RiftWalker_Clone_Base_C_GetPunisherDamageMod_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PunisherMod;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.StopPostProcess
struct ACharacter_RiftWalker_Clone_Base_C_StopPostProcess_Params
{
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.SpawnPostProcess
struct ACharacter_RiftWalker_Clone_Base_C_SpawnPostProcess_Params
{
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.ModifyDamage
struct ACharacter_RiftWalker_Clone_Base_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.CheckSoulEmberTag
struct ACharacter_RiftWalker_Clone_Base_C_CheckSoulEmberTag_Params
{
	float                                              DamageScalar;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.AddNearbyThreat
struct ACharacter_RiftWalker_Clone_Base_C_AddNearbyThreat_Params
{
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.InitializeNearbyThreat
struct ACharacter_RiftWalker_Clone_Base_C_InitializeNearbyThreat_Params
{
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.UserConstructionScript
struct ACharacter_RiftWalker_Clone_Base_C_UserConstructionScript_Params
{
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.FinishSpawning
struct ACharacter_RiftWalker_Clone_Base_C_FinishSpawning_Params
{
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.MultiDissolveEvent
struct ACharacter_RiftWalker_Clone_Base_C_MultiDissolveEvent_Params
{
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.OnTimer
struct ACharacter_RiftWalker_Clone_Base_C_OnTimer_Params
{
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.DestroyMinion
struct ACharacter_RiftWalker_Clone_Base_C_DestroyMinion_Params
{
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.OnOwnerComputeStats
struct ACharacter_RiftWalker_Clone_Base_C_OnOwnerComputeStats_Params
{
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.OnPostComputeStats
struct ACharacter_RiftWalker_Clone_Base_C_OnPostComputeStats_Params
{
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.OnAOE
struct ACharacter_RiftWalker_Clone_Base_C_OnAOE_Params
{
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.OnSetState
struct ACharacter_RiftWalker_Clone_Base_C_OnSetState_Params
{
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.MC_Explosion
struct ACharacter_RiftWalker_Clone_Base_C_MC_Explosion_Params
{
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.CustomEvent_1
struct ACharacter_RiftWalker_Clone_Base_C_CustomEvent_1_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.NotifyHitTarget
struct ACharacter_RiftWalker_Clone_Base_C_NotifyHitTarget_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.ReceiveEndPlay
struct ACharacter_RiftWalker_Clone_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.ReceiveBeginPlay
struct ACharacter_RiftWalker_Clone_Base_C_ReceiveBeginPlay_Params
{
};

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.ExecuteUbergraph_Character_RiftWalker_Clone_Base
struct ACharacter_RiftWalker_Clone_Base_C_ExecuteUbergraph_Character_RiftWalker_Clone_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
