#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Operative_Barrier_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetBarrierHidden
struct AIO_Operative_Barrier_C_SetBarrierHidden_Params
{
	bool                                               bIsHidden;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.GetDeterrenceFieldDamageForCharacter
struct AIO_Operative_Barrier_C_GetDeterrenceFieldDamageForCharacter_Params
{
	class AOakCharacter*                               Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Val;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStateTransitionEnd
struct AIO_Operative_Barrier_C_OnStateTransitionEnd_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStateTransitionBegin
struct AIO_Operative_Barrier_C_OnStateTransitionBegin_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.DetachFromPlayer
struct AIO_Operative_Barrier_C_DetachFromPlayer_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.AttachToPlayer
struct AIO_Operative_Barrier_C_AttachToPlayer_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.IsShuttingDown
struct AIO_Operative_Barrier_C_IsShuttingDown_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupPhysicsAssetOverride
struct AIO_Operative_Barrier_C_SetupPhysicsAssetOverride_Params
{
	class UPhysicsAsset*                               InAssetOverride;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupMultiModBarrierFX
struct AIO_Operative_Barrier_C_SetupMultiModBarrierFX_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.GetDamageRTPCValue
struct AIO_Operative_Barrier_C_GetDamageRTPCValue_Params
{
	float                                              res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupStressTest
struct AIO_Operative_Barrier_C_SetupStressTest_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.TryActivateSystem
struct AIO_Operative_Barrier_C_TryActivateSystem_Params
{
	class UParticleSystemComponent*                    Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.ConfigureTemplates
struct AIO_Operative_Barrier_C_ConfigureTemplates_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupModMaterial
struct AIO_Operative_Barrier_C_SetupModMaterial_Params
{
	struct FName                                       ParamName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Val;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupElectromagneticTherapy
struct AIO_Operative_Barrier_C_SetupElectromagneticTherapy_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupChargedRelay
struct AIO_Operative_Barrier_C_SetupChargedRelay_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupDeterrenceField
struct AIO_Operative_Barrier_C_SetupDeterrenceField_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetBarrierHoldScalar
struct AIO_Operative_Barrier_C_SetBarrierHoldScalar_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.UserConstructionScript
struct AIO_Operative_Barrier_C_UserConstructionScript_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.TurboTimeline__FinishedFunc
struct AIO_Operative_Barrier_C_TurboTimeline__FinishedFunc_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.TurboTimeline__UpdateFunc
struct AIO_Operative_Barrier_C_TurboTimeline__UpdateFunc_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.UpdateFX_OnCarried
struct AIO_Operative_Barrier_C_UpdateFX_OnCarried_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStartState_Carried
struct AIO_Operative_Barrier_C_OnStartState_Carried_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnEndState_Carried
struct AIO_Operative_Barrier_C_OnEndState_Carried_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnEndState_Activating
struct AIO_Operative_Barrier_C_OnEndState_Activating_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.UpdateFX_OnDeployed
struct AIO_Operative_Barrier_C_UpdateFX_OnDeployed_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStartState_Deployed
struct AIO_Operative_Barrier_C_OnStartState_Deployed_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnEndState_Deployed
struct AIO_Operative_Barrier_C_OnEndState_Deployed_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.ReceiveBeginPlay
struct AIO_Operative_Barrier_C_ReceiveBeginPlay_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.HandleBarrierStateChange
struct AIO_Operative_Barrier_C_HandleBarrierStateChange_Params
{
	EOperativeBarrierState*                            OldState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EOperativeBarrierState*                            NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.SetupBarrierMods
struct AIO_Operative_Barrier_C_SetupBarrierMods_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.UpdateFX
struct AIO_Operative_Barrier_C_UpdateFX_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.StartNextBarrierState
struct AIO_Operative_Barrier_C_StartNextBarrierState_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnTurbochargedStateChanged
struct AIO_Operative_Barrier_C_OnTurbochargedStateChanged_Params
{
	bool*                                              InbIsTurbocharged;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.OnStartState_ShuttingDown
struct AIO_Operative_Barrier_C_OnStartState_ShuttingDown_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.ApplyDeterrenceFieldToEnemy
struct AIO_Operative_Barrier_C_ApplyDeterrenceFieldToEnemy_Params
{
	class AActor**                                     Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.DigistructOut
struct AIO_Operative_Barrier_C_DigistructOut_Params
{
};

// Function IO_Operative_Barrier.IO_Operative_Barrier_C.ExecuteUbergraph_IO_Operative_Barrier
struct AIO_Operative_Barrier_C_ExecuteUbergraph_IO_Operative_Barrier_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
