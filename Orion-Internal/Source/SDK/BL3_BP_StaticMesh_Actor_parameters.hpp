#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_StaticMesh_Actor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Set Per Element Macro Overlay Parameters
struct ABP_StaticMesh_Actor_C_Set_Per_Element_Macro_Overlay_Parameters_Params
{
	class UMaterialInstanceDynamic*                    Material_Instance_Dynamic;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Array_Index;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DefaultMaterial;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Dynamic_Material_Instance;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Material_ID_Out;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Default_Material_Out;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Set Per Element Layer 4 Base Material Parameters
struct ABP_StaticMesh_Actor_C_Set_Per_Element_Layer_4_Base_Material_Parameters_Params
{
	class UMaterialInstanceDynamic*                    Material_Instance_Dynamic;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Array_Index;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Default_Material_In;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Dynamic_Material_Instance;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Array_Index_Out;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Default_Material_Out;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Set Per Element Layer 3 Base Material Parameters
struct ABP_StaticMesh_Actor_C_Set_Per_Element_Layer_3_Base_Material_Parameters_Params
{
	class UMaterialInstanceDynamic*                    Material_Instance_Dynamic;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Array_Index;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Default_Material_In;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Dynamic_Material_Instance;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Array_Index_Out;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Default_Material_Out;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Set Per Element Layer 2 Base Material Parameters
struct ABP_StaticMesh_Actor_C_Set_Per_Element_Layer_2_Base_Material_Parameters_Params
{
	class UMaterialInstanceDynamic*                    Material_Instance_Dynamic;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Array_Index;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Default_Material_In;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Dynamic_Material_Instance;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Array_Index_Out;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Default_Material_Out;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Set Level ColorScheme
struct ABP_StaticMesh_Actor_C_Set_Level_ColorScheme_Params
{
};

// Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Create Dynamic Material Instance
struct ABP_StaticMesh_Actor_C_Create_Dynamic_Material_Instance_Params
{
	class UMaterialInterface*                          Material_Instance_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Element_Index;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Static_Mesh_Component;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Material_Instance_Dynamic;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Material_ID;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Set Per Element Base Material Parameters
struct ABP_StaticMesh_Actor_C_Set_Per_Element_Base_Material_Parameters_Params
{
	class UMaterialInstanceDynamic*                    Material_Instance_Dynamic;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Array_Index;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Dynamic_Material_Instance;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Material_ID_Out;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Default_Material_Out;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Set Randomized Colorization
struct ABP_StaticMesh_Actor_C_Set_Randomized_Colorization_Params
{
	class UMaterialInstanceDynamic*                    Material_Instance_Dynamic;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaterialID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Default_Material;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Material_Instance_Dynamic_Out;                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Material_ID_Out;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Default_Material_Out;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.Per Instance Master Material Parameters
struct ABP_StaticMesh_Actor_C_Per_Instance_Master_Material_Parameters_Params
{
};

// Function BP_StaticMesh_Actor.BP_StaticMesh_Actor_C.UserConstructionScript
struct ABP_StaticMesh_Actor_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
