#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_ProjectileVisualization_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C.PreDraw
struct ABP_ProjectileVisualization_Base_C_PreDraw_Params
{
	struct FProjectileVisualizationParams*             Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FProjectileVisualizationContext             Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C.GetRadius
struct ABP_ProjectileVisualization_Base_C_GetRadius_Params
{
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C.PostDrawPath
struct ABP_ProjectileVisualization_Base_C_PostDrawPath_Params
{
	struct FProjectileVisualizationParams*             Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FProjectileVisualizationContext*            Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FLinearColor*                               DrawColor;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C.ExecuteUbergraph_BP_ProjectileVisualization_Base
struct ABP_ProjectileVisualization_Base_C_ExecuteUbergraph_BP_ProjectileVisualization_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
