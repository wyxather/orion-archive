#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Screen_Actor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Screen_Actor.BP_Screen_Actor_C.ManageLight
struct ABP_Screen_Actor_C_ManageLight_Params
{
};

// Function BP_Screen_Actor.BP_Screen_Actor_C.Create Dynamic Screen Material Instance
struct ABP_Screen_Actor_C_Create_Dynamic_Screen_Material_Instance_Params
{
	class UMaterialInstanceDynamic*                    DynamicScreenMaterialOut;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DefaultScreenMaterialOut;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicLightMaterialOut;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Screen_Actor.BP_Screen_Actor_C.Set Per Element Screen Material Parameters
struct ABP_Screen_Actor_C_Set_Per_Element_Screen_Material_Parameters_Params
{
	class UMaterialInstanceDynamic*                    DynamicScreenMat;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DefaultScreenMaterial;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicLightMat;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Screen_Actor.BP_Screen_Actor_C.Set Level ColorScheme
struct ABP_Screen_Actor_C_Set_Level_ColorScheme_Params
{
};

// Function BP_Screen_Actor.BP_Screen_Actor_C.Set Per Element Base Material Parameters
struct ABP_Screen_Actor_C_Set_Per_Element_Base_Material_Parameters_Params
{
	class UMaterialInstanceDynamic*                    Material_Instance_Dynamic;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Array_Index;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Dynamic_Material_Instance;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Material_ID_Out;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Default_Material_Out;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Screen_Actor.BP_Screen_Actor_C.Per Instance Master Material Parameters
struct ABP_Screen_Actor_C_Per_Instance_Master_Material_Parameters_Params
{
};

// Function BP_Screen_Actor.BP_Screen_Actor_C.UserConstructionScript
struct ABP_Screen_Actor_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
