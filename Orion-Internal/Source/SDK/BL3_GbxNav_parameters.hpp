#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxNav_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxNav.GbxNavComponent.TryMoving
struct UGbxNavComponent_TryMoving_Params
{
	float                                              fDuration;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxNav.GbxNavComponent.SetPathFindingData
struct UGbxNavComponent_SetPathFindingData_Params
{
	class UHavokPathFindingData*                       NewPathFindingData;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxNav.GbxNavComponent.ResetPathFindingData
struct UGbxNavComponent_ResetPathFindingData_Params
{
};

// Function GbxNav.GbxNavComponent.GetPathFindingData
struct UGbxNavComponent_GetPathFindingData_Params
{
	class UHavokPathFindingData*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxNav.AIVehicleFlightComponent.OnRep_FlightState
struct UAIVehicleFlightComponent_OnRep_FlightState_Params
{
};

// Function GbxNav.GbxAnimStateManager_AINav.Owner_PostBeginPlay
struct UGbxAnimStateManager_AINav_Owner_PostBeginPlay_Params
{
};

// Function GbxNav.GbxNavBlueprintLibrary.SetAINavPathType
struct UGbxNavBlueprintLibrary_SetAINavPathType_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EGbxPathType                                       PathType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxNav.GbxNavBlueprintLibrary.ResourceUnlockAvoidance
struct UGbxNavBlueprintLibrary_ResourceUnlockAvoidance_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxNav.GbxNavBlueprintLibrary.ResourceLockAvoidance
struct UGbxNavBlueprintLibrary_ResourceLockAvoidance_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxNav.GbxNavBlueprintLibrary.ForceNavMeshLayer
struct UGbxNavBlueprintLibrary_ForceNavMeshLayer_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxNavMeshLayer*                            ForcedNavMeshLayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxNav.GbxNavBlueprintLibrary.FindNavMeshPointForActor
struct UGbxNavBlueprintLibrary_FindNavMeshPointForActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxNav.GbxNavBlueprintLibrary.FindNavMeshPoint
struct UGbxNavBlueprintLibrary_FindNavMeshPoint_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // (Parm, OutParm, IsPlainOldData)
	class UGbxNavMeshLayer*                            Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxNav.GbxNavBoxComponent.DoAutoResize
struct UGbxNavBoxComponent_DoAutoResize_Params
{
};

// Function GbxNav.GbxNavMeshPainter.SetPainterEnabled
struct AGbxNavMeshPainter_SetPainterEnabled_Params
{
	bool                                               bNewEnabled;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxNav.GbxNavMeshPainter.IsPainterEnabled
struct AGbxNavMeshPainter_IsPainterEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxNav.GbxNavMeshPainterComponent.SetPainterEnabled
struct UGbxNavMeshPainterComponent_SetPainterEnabled_Params
{
	bool                                               bNewEnabled;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxNav.GbxNavMeshPainterComponent.SetPainterAlwaysEnabled
struct UGbxNavMeshPainterComponent_SetPainterAlwaysEnabled_Params
{
	bool                                               bNewAlwaysEnabled;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxNav.GbxNavMeshPainterComponent.ResetToStatic
struct UGbxNavMeshPainterComponent_ResetToStatic_Params
{
};

// Function GbxNav.GbxNavMeshPainterComponent.IsPainterEnabled
struct UGbxNavMeshPainterComponent_IsPainterEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxNav.HavokNavObstacleComponent.UnlockObstacle
struct UHavokNavObstacleComponent_UnlockObstacle_Params
{
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxNav.HavokNavObstacleComponent.LockObstacle
struct UHavokNavObstacleComponent_LockObstacle_Params
{
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxNav.HavokUserEdgeActor.SetEdgeEnabled
struct AHavokUserEdgeActor_SetEdgeEnabled_Params
{
	bool                                               bNewEnabled;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxNav.HavokUserEdgeActor.IsEdgeEnabled
struct AHavokUserEdgeActor_IsEdgeEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxNav.HavokUserEdgeComponent.SetEdgeEnabled
struct UHavokUserEdgeComponent_SetEdgeEnabled_Params
{
	bool                                               bNewEnabled;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxNav.HavokUserEdgeComponent.IsEdgeEnabled
struct UHavokUserEdgeComponent_IsEdgeEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxNav.HavokUserEdgeComponent.AnchorDestroyed
struct UHavokUserEdgeComponent_AnchorDestroyed_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxNav.HavokUserEdgePreviewComponent.OnBlueprintCompiled
struct UHavokUserEdgePreviewComponent_OnBlueprintCompiled_Params
{
	class UBlueprint*                                  BP;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
