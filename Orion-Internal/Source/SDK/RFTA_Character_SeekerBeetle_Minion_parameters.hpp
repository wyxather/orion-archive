#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_SeekerBeetle_Minion_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.GetMinionOwner
struct ACharacter_SeekerBeetle_Minion_C_GetMinionOwner_Params
{
	class AActor*                                      Owner;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.GetCauseDamageScalar
struct ACharacter_SeekerBeetle_Minion_C_GetCauseDamageScalar_Params
{
	float                                              Scalar;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.MinionHasDamageTag
struct ACharacter_SeekerBeetle_Minion_C_MinionHasDamageTag_Params
{
	bool                                               ExtraDamage;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DamageScalar;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.HasSoulEmberTrinket
struct ACharacter_SeekerBeetle_Minion_C_HasSoulEmberTrinket_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.GetSpawnTime
struct ACharacter_SeekerBeetle_Minion_C_GetSpawnTime_Params
{
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.IsValidMinion
struct ACharacter_SeekerBeetle_Minion_C_IsValidMinion_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.GetExplosionDamageMod
struct ACharacter_SeekerBeetle_Minion_C_GetExplosionDamageMod_Params
{
	float                                              Mod;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.GetBrutalMarkDamageMod
struct ACharacter_SeekerBeetle_Minion_C_GetBrutalMarkDamageMod_Params
{
	struct FDamageInfo*                                InputPin;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	float                                              DamageMod;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.GetArmorScalars
struct ACharacter_SeekerBeetle_Minion_C_GetArmorScalars_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	float                                              MinionDamageScalar;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.GetPunisherDamageMod
struct ACharacter_SeekerBeetle_Minion_C_GetPunisherDamageMod_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PunisherMod;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.ModifyDamage
struct ACharacter_SeekerBeetle_Minion_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.CheckSoulEmberTag
struct ACharacter_SeekerBeetle_Minion_C_CheckSoulEmberTag_Params
{
	float                                              DamageScalar;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.MC_BuildUp
struct ACharacter_SeekerBeetle_Minion_C_MC_BuildUp_Params
{
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.ReceiveBeginPlay
struct ACharacter_SeekerBeetle_Minion_C_ReceiveBeginPlay_Params
{
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.OnPostComputeStats
struct ACharacter_SeekerBeetle_Minion_C_OnPostComputeStats_Params
{
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.DestroyMinion
struct ACharacter_SeekerBeetle_Minion_C_DestroyMinion_Params
{
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.OnOwnerComputeStats
struct ACharacter_SeekerBeetle_Minion_C_OnOwnerComputeStats_Params
{
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.SeekerBeetleStartGlow
struct ACharacter_SeekerBeetle_Minion_C_SeekerBeetleStartGlow_Params
{
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.DoExplosion
struct ACharacter_SeekerBeetle_Minion_C_DoExplosion_Params
{
	bool*                                              ShouldChain;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.OnExit
struct ACharacter_SeekerBeetle_Minion_C_OnExit_Params
{
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.OnDead_Event_2
struct ACharacter_SeekerBeetle_Minion_C_OnDead_Event_2_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.SeekerBeetleStopGlow
struct ACharacter_SeekerBeetle_Minion_C_SeekerBeetleStopGlow_Params
{
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.MC_Explosion
struct ACharacter_SeekerBeetle_Minion_C_MC_Explosion_Params
{
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.NotifyHitTarget
struct ACharacter_SeekerBeetle_Minion_C_NotifyHitTarget_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.ExecuteUbergraph_Character_SeekerBeetle_Minion
struct ACharacter_SeekerBeetle_Minion_C_ExecuteUbergraph_Character_SeekerBeetle_Minion_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
