#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_PhaseLock_Paralysis_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.CanStayInParalysis
struct UControlledMove_PhaseLock_Paralysis_C_CanStayInParalysis_Params
{
	bool                                               bRes;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.OnServerStart
struct UControlledMove_PhaseLock_Paralysis_C_OnServerStart_Params
{
	float*                                             MoveDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.OnTakeDamage
struct UControlledMove_PhaseLock_Paralysis_C_OnTakeDamage_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.OnServerStop
struct UControlledMove_PhaseLock_Paralysis_C_OnServerStop_Params
{
	bool*                                              bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.EndParalysisEarly
struct UControlledMove_PhaseLock_Paralysis_C_EndParalysisEarly_Params
{
};

// Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.UnbindFromAll
struct UControlledMove_PhaseLock_Paralysis_C_UnbindFromAll_Params
{
};

// Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.OnDeath
struct UControlledMove_PhaseLock_Paralysis_C_OnDeath_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.ExecuteUbergraph_ControlledMove_PhaseLock_Paralysis
struct UControlledMove_PhaseLock_Paralysis_C_ExecuteUbergraph_ControlledMove_PhaseLock_Paralysis_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
