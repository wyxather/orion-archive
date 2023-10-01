#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Operative_ShoulderCannon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonCreateLightProjectile
struct AIO_Operative_ShoulderCannon_C_OperativeShoulderCannonCreateLightProjectile_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonSetState
struct AIO_Operative_ShoulderCannon_C_OperativeShoulderCannonSetState_Params
{
	TEnumAsByte<EOperativeShoulderCannon>              NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeFireShoulderCannon
struct AIO_Operative_ShoulderCannon_C_OperativeFireShoulderCannon_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonDigistructFinished
struct AIO_Operative_ShoulderCannon_C_OperativeShoulderCannonDigistructFinished_Params
{
	bool                                               DigistructIn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TryCannonMod5
struct AIO_Operative_ShoulderCannon_C_TryCannonMod5_Params
{
	class UObject*                                     DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TryCannonMod4
struct AIO_Operative_ShoulderCannon_C_TryCannonMod4_Params
{
	bool                                               WarCrit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TryCannonMod3
struct AIO_Operative_ShoulderCannon_C_TryCannonMod3_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasCritOrDeath;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.CanBePulled
struct AIO_Operative_ShoulderCannon_C_CanBePulled_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.PlayCannonFeedback
struct AIO_Operative_ShoulderCannon_C_PlayCannonFeedback_Params
{
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.AttachToOwner
struct AIO_Operative_ShoulderCannon_C_AttachToOwner_Params
{
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.GetFireAction
struct AIO_Operative_ShoulderCannon_C_GetFireAction_Params
{
	class UClass*                                      res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.GetShoulderCannonDamage
struct AIO_Operative_ShoulderCannon_C_GetShoulderCannonDamage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnBeginReload
struct AIO_Operative_ShoulderCannon_C_OnBeginReload_Params
{
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnFininshedDespawned
struct AIO_Operative_ShoulderCannon_C_OnFininshedDespawned_Params
{
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnDespawning
struct AIO_Operative_ShoulderCannon_C_OnDespawning_Params
{
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnCannonFired
struct AIO_Operative_ShoulderCannon_C_OnCannonFired_Params
{
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnCannonCreated
struct AIO_Operative_ShoulderCannon_C_OnCannonCreated_Params
{
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnRep_CannonState
struct AIO_Operative_ShoulderCannon_C_OnRep_CannonState_Params
{
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.UserConstructionScript
struct AIO_Operative_ShoulderCannon_C_UserConstructionScript_Params
{
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.BeginReloadAnim
struct AIO_Operative_ShoulderCannon_C_BeginReloadAnim_Params
{
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.EndReload
struct AIO_Operative_ShoulderCannon_C_EndReload_Params
{
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonReload
struct AIO_Operative_ShoulderCannon_C_OperativeShoulderCannonReload_Params
{
	bool                                               Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeRemoveShoulderCannon
struct AIO_Operative_ShoulderCannon_C_OperativeRemoveShoulderCannon_Params
{
	bool                                               Fast;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.StartIdleAfterFireTimer
struct AIO_Operative_ShoulderCannon_C_StartIdleAfterFireTimer_Params
{
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.IdleToUnequip
struct AIO_Operative_ShoulderCannon_C_IdleToUnequip_Params
{
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TransitionToUnequipState
struct AIO_Operative_ShoulderCannon_C_TransitionToUnequipState_Params
{
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.StartUnequippedIdle
struct AIO_Operative_ShoulderCannon_C_StartUnequippedIdle_Params
{
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ShoulderCannon_OnCausedDeath
struct AIO_Operative_ShoulderCannon_C_ShoulderCannon_OnCausedDeath_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.BeginCannonFireAnim
struct AIO_Operative_ShoulderCannon_C_BeginCannonFireAnim_Params
{
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ShoulderCannon_OnCausedAnyDamage
struct AIO_Operative_ShoulderCannon_C_ShoulderCannon_OnCausedAnyDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ReceiveBeginPlay
struct AIO_Operative_ShoulderCannon_C_ReceiveBeginPlay_Params
{
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.Audio_PlayFiringSound
struct AIO_Operative_ShoulderCannon_C_Audio_PlayFiringSound_Params
{
};

// Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ExecuteUbergraph_IO_Operative_ShoulderCannon
struct AIO_Operative_ShoulderCannon_C_ExecuteUbergraph_IO_Operative_ShoulderCannon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
