#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPTiesThatBindSphere_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetBeamSourceSceneComponent
struct ABPTiesThatBindSphere_C_GetBeamSourceSceneComponent_Params
{
	class USceneComponent*                             res;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetBeamDataForLinkedTarget
struct ABPTiesThatBindSphere_C_GetBeamDataForLinkedTarget_Params
{
	class AOakCharacter**                              LinkedTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FOakPhaseWebSphereBeamData                  outBeamData;                                              // (Parm, OutParm)
};

// Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetBeamSystem
struct ABPTiesThatBindSphere_C_GetBeamSystem_Params
{
	class UParticleSystem*                             res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetSharedDamageData
struct ABPTiesThatBindSphere_C_GetSharedDamageData_Params
{
	class AOakCharacter**                              LinkedTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageSourceClass;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FOakPhaseWebSphere_SharedDamageData         SharedDamageData;                                         // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetMaxTime
struct ABPTiesThatBindSphere_C_GetMaxTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.UserConstructionScript
struct ABPTiesThatBindSphere_C_UserConstructionScript_Params
{
};

// Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.ReceiveBeginPlay
struct ABPTiesThatBindSphere_C_ReceiveBeginPlay_Params
{
};

// Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.OnWebTargetAdded
struct ABPTiesThatBindSphere_C_OnWebTargetAdded_Params
{
	class AOakCharacter**                              Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.OnGraspedTargetDied
struct ABPTiesThatBindSphere_C_OnGraspedTargetDied_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.ApplySapRefund
struct ABPTiesThatBindSphere_C_ApplySapRefund_Params
{
	float*                                             RawAccumulateDamage;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.ExecuteUbergraph_BPTiesThatBindSphere
struct ABPTiesThatBindSphere_C_ExecuteUbergraph_BPTiesThatBindSphere_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
