#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Tentacle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Character_Tentacle.Character_Tentacle_C.GetMinionOwner
struct ACharacter_Tentacle_C_GetMinionOwner_Params
{
	class AActor*                                      Owner;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Tentacle.Character_Tentacle_C.GetCauseDamageScalar
struct ACharacter_Tentacle_C_GetCauseDamageScalar_Params
{
	float                                              Scalar;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Tentacle.Character_Tentacle_C.MinionHasDamageTag
struct ACharacter_Tentacle_C_MinionHasDamageTag_Params
{
	bool                                               ExtraDamage;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DamageScalar;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Tentacle.Character_Tentacle_C.HasSoulEmberTrinket
struct ACharacter_Tentacle_C_HasSoulEmberTrinket_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Tentacle.Character_Tentacle_C.GetSpawnTime
struct ACharacter_Tentacle_C_GetSpawnTime_Params
{
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Tentacle.Character_Tentacle_C.IsValidMinion
struct ACharacter_Tentacle_C_IsValidMinion_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Tentacle.Character_Tentacle_C.GetShockDamageMod
struct ACharacter_Tentacle_C_GetShockDamageMod_Params
{
	float                                              Mod;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Tentacle.Character_Tentacle_C.GetBrutalMarkDamageMod
struct ACharacter_Tentacle_C_GetBrutalMarkDamageMod_Params
{
	struct FDamageInfo*                                InputPin;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	float                                              DamageMod;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Tentacle.Character_Tentacle_C.GetArmorScalars
struct ACharacter_Tentacle_C_GetArmorScalars_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	float                                              MinionDamageScalar;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Tentacle.Character_Tentacle_C.GetPunisherDamageMod
struct ACharacter_Tentacle_C_GetPunisherDamageMod_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PunisherMod;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Tentacle.Character_Tentacle_C.GetDevotion
struct ACharacter_Tentacle_C_GetDevotion_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Tentacle.Character_Tentacle_C.DoDevoted
struct ACharacter_Tentacle_C_DoDevoted_Params
{
	float*                                             Heal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Devotion;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Tentacle.Character_Tentacle_C.GetCharactersForDevotion
struct ACharacter_Tentacle_C_GetCharactersForDevotion_Params
{
	class ACharacterGunfire**                          Ref;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACharacterGunfire*>                   Characters;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Character_Tentacle.Character_Tentacle_C.GetSiphonerTraitLifeStealMod
struct ACharacter_Tentacle_C_GetSiphonerTraitLifeStealMod_Params
{
	float                                              ModDamage;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Tentacle.Character_Tentacle_C.ModifyDamage
struct ACharacter_Tentacle_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Tentacle.Character_Tentacle_C.GetHealthPerHitScalar
struct ACharacter_Tentacle_C_GetHealthPerHitScalar_Params
{
	float                                              Scalar;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Tentacle.Character_Tentacle_C.HealOwner
struct ACharacter_Tentacle_C_HealOwner_Params
{
};

// Function Character_Tentacle.Character_Tentacle_C.InitializeNearbyThreat
struct ACharacter_Tentacle_C_InitializeNearbyThreat_Params
{
};

// Function Character_Tentacle.Character_Tentacle_C.MC_BuildUp
struct ACharacter_Tentacle_C_MC_BuildUp_Params
{
};

// Function Character_Tentacle.Character_Tentacle_C.ReceiveBeginPlay
struct ACharacter_Tentacle_C_ReceiveBeginPlay_Params
{
};

// Function Character_Tentacle.Character_Tentacle_C.OnDead_Event_1
struct ACharacter_Tentacle_C_OnDead_Event_1_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Tentacle.Character_Tentacle_C.FinishSpawning
struct ACharacter_Tentacle_C_FinishSpawning_Params
{
};

// Function Character_Tentacle.Character_Tentacle_C.OnAlert
struct ACharacter_Tentacle_C_OnAlert_Params
{
};

// Function Character_Tentacle.Character_Tentacle_C.CollisionOff
struct ACharacter_Tentacle_C_CollisionOff_Params
{
};

// Function Character_Tentacle.Character_Tentacle_C.CollisionOn
struct ACharacter_Tentacle_C_CollisionOn_Params
{
};

// Function Character_Tentacle.Character_Tentacle_C.OnLifetime Expired
struct ACharacter_Tentacle_C_OnLifetime_Expired_Params
{
};

// Function Character_Tentacle.Character_Tentacle_C.OnCharacterDied
struct ACharacter_Tentacle_C_OnCharacterDied_Params
{
};

// Function Character_Tentacle.Character_Tentacle_C.OnPostComputeStats
struct ACharacter_Tentacle_C_OnPostComputeStats_Params
{
};

// Function Character_Tentacle.Character_Tentacle_C.NotifyHitTarget
struct ACharacter_Tentacle_C_NotifyHitTarget_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Character_Tentacle.Character_Tentacle_C.DestroyMinion
struct ACharacter_Tentacle_C_DestroyMinion_Params
{
};

// Function Character_Tentacle.Character_Tentacle_C.OnOwnerComputeStats
struct ACharacter_Tentacle_C_OnOwnerComputeStats_Params
{
};

// Function Character_Tentacle.Character_Tentacle_C.MC_Explosion
struct ACharacter_Tentacle_C_MC_Explosion_Params
{
};

// Function Character_Tentacle.Character_Tentacle_C.ExecuteUbergraph_Character_Tentacle
struct ACharacter_Tentacle_C_ExecuteUbergraph_Character_Tentacle_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
