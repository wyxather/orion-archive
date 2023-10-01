#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_Nog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_Nog.BPI_Nog_C.Nog_BuffDrone_NotifyDestroyed
struct UBPI_Nog_C_Nog_BuffDrone_NotifyDestroyed_Params
{
	struct FDataTableRowHandle                         NogBuff;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPI_Nog.BPI_Nog_C.Nog_SpawnBuffDrone
struct UBPI_Nog_C_Nog_SpawnBuffDrone_Params
{
	struct FDataTableRowHandle                         NogBuff;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               FromDroneMesh;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Nog.BPI_Nog_C.Nog_DroneThrow_Interrupt
struct UBPI_Nog_C_Nog_DroneThrow_Interrupt_Params
{
	bool                                               IsHandL;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Nog.BPI_Nog_C.Nog_DroneThrow_Launch
struct UBPI_Nog_C_Nog_DroneThrow_Launch_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHandL;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Nog.BPI_Nog_C.Nog_DroneThrow_InHand
struct UBPI_Nog_C_Nog_DroneThrow_InHand_Params
{
	bool                                               IsHandL;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Nog.BPI_Nog_C.Nog_ToggleStaticDroneBoard
struct UBPI_Nog_C_Nog_ToggleStaticDroneBoard_Params
{
	bool                                               EnableStaticBoard;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Nog.BPI_Nog_C.Nog_SetImmuneToVehicleImpact
struct UBPI_Nog_C_Nog_SetImmuneToVehicleImpact_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Nog.BPI_Nog_C.Nog_MindControlled
struct UBPI_Nog_C_Nog_MindControlled_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Nog.BPI_Nog_C.Nog_GetMultiTargetAttackList
struct UBPI_Nog_C_Nog_GetMultiTargetAttackList_Params
{
	TArray<class AActor*>                              TargetList;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BPI_Nog.BPI_Nog_C.Nog_GetDroneMaterial
struct UBPI_Nog_C_Nog_GetDroneMaterial_Params
{
	class UMaterialInterface*                          DroneMaterial;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Nog.BPI_Nog_C.Nog_GetDroneHealthPctOfNog
struct UBPI_Nog_C_Nog_GetDroneHealthPctOfNog_Params
{
	float                                              HealthPctOfNog;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Nog.BPI_Nog_C.Nog_GetDroneContainer
struct UBPI_Nog_C_Nog_GetDroneContainer_Params
{
	class UOakNogDroneContainerComponent*              DroneContainer;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPI_Nog.BPI_Nog_C.Nog_BuildMultiTargetAttackList
struct UBPI_Nog_C_Nog_BuildMultiTargetAttackList_Params
{
};

// Function BPI_Nog.BPI_Nog_C.Nog_MultiTargetAttack_GetTarget
struct UBPI_Nog_C_Nog_MultiTargetAttack_GetTarget_Params
{
	int                                                TargetIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OptionalDefaultTarget;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      MyTarget;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Nog.BPI_Nog_C.Nog_DeployLaserWire
struct UBPI_Nog_C_Nog_DeployLaserWire_Params
{
	int                                                WhichWave;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
