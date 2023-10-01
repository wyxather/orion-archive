#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Root_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Root_Base.BP_Root_Base_C.Snap Spline Point To Grid
struct ABP_Root_Base_C_Snap_Spline_Point_To_Grid_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Root_Base.BP_Root_Base_C.CheckForSplinePointSnap
struct ABP_Root_Base_C_CheckForSplinePointSnap_Params
{
	struct FVector*                                    Local_Location;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector*                                    Local_Tangent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector*                                    Local_Location_2;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector*                                    Local_Tangent_2;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Start_Pos;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Start_Tangent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     End_Pos;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     End_Tangent;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Root_Base.BP_Root_Base_C.CreateStartCap
struct ABP_Root_Base_C_CreateStartCap_Params
{
};

// Function BP_Root_Base.BP_Root_Base_C.CreateSplinePointMeshes
struct ABP_Root_Base_C_CreateSplinePointMeshes_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Root_Base.BP_Root_Base_C.GetNearestTime
struct ABP_Root_Base_C_GetNearestTime_Params
{
};

// Function BP_Root_Base.BP_Root_Base_C.UserConstructionScript
struct ABP_Root_Base_C_UserConstructionScript_Params
{
};

// Function BP_Root_Base.BP_Root_Base_C.ReceiveBeginPlay
struct ABP_Root_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_Root_Base.BP_Root_Base_C.ExecuteUbergraph_BP_Root_Base
struct ABP_Root_Base_C_ExecuteUbergraph_BP_Root_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
