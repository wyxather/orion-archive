#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_SplineDecorator_New_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SplineDecorator_New.BP_SplineDecorator_New_C.GetResampledSpline
struct ABP_SplineDecorator_New_C_GetResampledSpline_Params
{
	class USplineComponent*                            NewParam;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SplineDecorator_New.BP_SplineDecorator_New_C.Check Overrides
struct ABP_SplineDecorator_New_C_Check_Overrides_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Static_Mesh;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point_Offset;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function BP_SplineDecorator_New.BP_SplineDecorator_New_C.Show Spline Point Index
struct ABP_SplineDecorator_New_C_Show_Spline_Point_Index_Params
{
};

// Function BP_SplineDecorator_New.BP_SplineDecorator_New_C.Place Decoration
struct ABP_SplineDecorator_New_C_Place_Decoration_Params
{
	struct FStruct_SplineDecoratorParams               Spline_Decoration_Params;                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SplineDecorator_New.BP_SplineDecorator_New_C.Genereate Spline Mesh Segments
struct ABP_SplineDecorator_New_C_Genereate_Spline_Mesh_Segments_Params
{
};

// Function BP_SplineDecorator_New.BP_SplineDecorator_New_C.Resample Builder Spline
struct ABP_SplineDecorator_New_C_Resample_Builder_Spline_Params
{
};

// Function BP_SplineDecorator_New.BP_SplineDecorator_New_C.UserConstructionScript
struct ABP_SplineDecorator_New_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
