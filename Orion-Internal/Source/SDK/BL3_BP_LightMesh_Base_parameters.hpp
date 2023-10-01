#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_LightMesh_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LightMesh_Base.BP_LightMesh_Base_C.SetPointLight_LightFunction
struct ABP_LightMesh_Base_C_SetPointLight_LightFunction_Params
{
	class UPointLightComponent*                        Point_Light;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LightMesh_Base.BP_LightMesh_Base_C.SetSpotLight_LightFunction
struct ABP_LightMesh_Base_C_SetSpotLight_LightFunction_Params
{
	class USpotLightComponent*                         Spot_Light;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LightMesh_Base.BP_LightMesh_Base_C.SetSpotLight_Variables
struct ABP_LightMesh_Base_C_SetSpotLight_Variables_Params
{
	class USpotLightComponent*                         Spot_Light;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LightMesh_Base.BP_LightMesh_Base_C.SetPointLight_Variables
struct ABP_LightMesh_Base_C_SetPointLight_Variables_Params
{
	class UPointLightComponent*                        PointLight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LightMesh_Base.BP_LightMesh_Base_C.Create Bulb Material Instances
struct ABP_LightMesh_Base_C_Create_Bulb_Material_Instances_Params
{
};

// Function BP_LightMesh_Base.BP_LightMesh_Base_C.Create Light Dynamic Material Instance
struct ABP_LightMesh_Base_C_Create_Light_Dynamic_Material_Instance_Params
{
	int                                                ElementIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LightMesh_Base.BP_LightMesh_Base_C.UserConstructionScript
struct ABP_LightMesh_Base_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
