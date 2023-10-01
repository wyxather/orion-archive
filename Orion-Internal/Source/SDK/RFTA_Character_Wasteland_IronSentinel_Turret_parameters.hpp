#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Wasteland_IronSentinel_Turret_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C.GetMinionOwner
struct ACharacter_Wasteland_IronSentinel_Turret_C_GetMinionOwner_Params
{
	class AActor*                                      Owner;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C.GetCauseDamageScalar
struct ACharacter_Wasteland_IronSentinel_Turret_C_GetCauseDamageScalar_Params
{
	float                                              Scalar;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C.MinionHasDamageTag
struct ACharacter_Wasteland_IronSentinel_Turret_C_MinionHasDamageTag_Params
{
	bool                                               ExtraDamage;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DamageScalar;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C.HasSoulEmberTrinket
struct ACharacter_Wasteland_IronSentinel_Turret_C_HasSoulEmberTrinket_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C.GetSpawnTime
struct ACharacter_Wasteland_IronSentinel_Turret_C_GetSpawnTime_Params
{
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C.IsValidMinion
struct ACharacter_Wasteland_IronSentinel_Turret_C_IsValidMinion_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C.GetBrutalMarkDamageMod
struct ACharacter_Wasteland_IronSentinel_Turret_C_GetBrutalMarkDamageMod_Params
{
	struct FDamageInfo*                                InputPin;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	float                                              DamageMod;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C.GetArmorScalars
struct ACharacter_Wasteland_IronSentinel_Turret_C_GetArmorScalars_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	float                                              MinionDamageScalar;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C.GetPunisherDamageMod
struct ACharacter_Wasteland_IronSentinel_Turret_C_GetPunisherDamageMod_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PunisherMod;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C.ModifyDamage
struct ACharacter_Wasteland_IronSentinel_Turret_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C.ModifyStats
struct ACharacter_Wasteland_IronSentinel_Turret_C_ModifyStats_Params
{
};

// Function Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C.MC_BuildUp
struct ACharacter_Wasteland_IronSentinel_Turret_C_MC_BuildUp_Params
{
};

// Function Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C.ReceiveBeginPlay
struct ACharacter_Wasteland_IronSentinel_Turret_C_ReceiveBeginPlay_Params
{
};

// Function Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C.OnDead_Event_1
struct ACharacter_Wasteland_IronSentinel_Turret_C_OnDead_Event_1_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C.MulticastDissolveOut
struct ACharacter_Wasteland_IronSentinel_Turret_C_MulticastDissolveOut_Params
{
};

// Function Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C.DissolveOut
struct ACharacter_Wasteland_IronSentinel_Turret_C_DissolveOut_Params
{
};

// Function Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C.OnPostComputeStats
struct ACharacter_Wasteland_IronSentinel_Turret_C_OnPostComputeStats_Params
{
};

// Function Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C.OnDead_Event_2
struct ACharacter_Wasteland_IronSentinel_Turret_C_OnDead_Event_2_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C.NotifyHitTarget
struct ACharacter_Wasteland_IronSentinel_Turret_C_NotifyHitTarget_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C.DestroyMinion
struct ACharacter_Wasteland_IronSentinel_Turret_C_DestroyMinion_Params
{
};

// Function Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C.OnOwnerComputeStats
struct ACharacter_Wasteland_IronSentinel_Turret_C_OnOwnerComputeStats_Params
{
};

// Function Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C.MC_Explosion
struct ACharacter_Wasteland_IronSentinel_Turret_C_MC_Explosion_Params
{
};

// Function Character_Wasteland_IronSentinel_Turret.Character_Wasteland_IronSentinel_Turret_C.ExecuteUbergraph_Character_Wasteland_IronSentinel_Turret
struct ACharacter_Wasteland_IronSentinel_Turret_C_ExecuteUbergraph_Character_Wasteland_IronSentinel_Turret_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
