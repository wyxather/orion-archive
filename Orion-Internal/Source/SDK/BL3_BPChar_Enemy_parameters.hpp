#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Enemy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_Enemy.BPChar_Enemy_C.UserConstructionScript
struct ABPChar_Enemy_C_UserConstructionScript_Params
{
};

// Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnThoughtLockStart
struct ABPChar_Enemy_C_Enemy_OnThoughtLockStart_Params
{
};

// Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnThoughtLockStop
struct ABPChar_Enemy_C_Enemy_OnThoughtLockStop_Params
{
};

// Function BPChar_Enemy.BPChar_Enemy_C.Player_SpawnTransfusionProjectile
struct ABPChar_Enemy_C_Player_SpawnTransfusionProjectile_Params
{
	class UClass*                                      DataBlueprint__Override_;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType__Override_;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SourceActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer__Override_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Enemy.BPChar_Enemy_C.ReceiveBeginPlay
struct ABPChar_Enemy_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnPhaseLockStop
struct ABPChar_Enemy_C_Enemy_OnPhaseLockStop_Params
{
};

// Function BPChar_Enemy.BPChar_Enemy_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_ElementalDeathDelegate__DelegateSignature_BPChar_Enemy
struct ABPChar_Enemy_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_ElementalDeathDelegate__DelegateSignature_BPChar_Enemy_Params
{
	EOakElementalType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Enemy.BPChar_Enemy_C.Enemy_OnPhaseLockStart
struct ABPChar_Enemy_C_Enemy_OnPhaseLockStart_Params
{
};

// Function BPChar_Enemy.BPChar_Enemy_C.Radation_DeathExplosion
struct ABPChar_Enemy_C_Radation_DeathExplosion_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Enemy.BPChar_Enemy_C.Player_HealthDepleted
struct ABPChar_Enemy_C_Player_HealthDepleted_Params
{
	class AOakCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Enemy.BPChar_Enemy_C.ExecuteUbergraph_BPChar_Enemy
struct ABPChar_Enemy_C_ExecuteUbergraph_BPChar_Enemy_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
