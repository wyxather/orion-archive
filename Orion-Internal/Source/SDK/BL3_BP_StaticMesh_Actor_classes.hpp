#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_StaticMesh_Actor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_StaticMesh_Actor.BP_StaticMesh_Actor_C
// 0x0130 (0x0598 - 0x0468)
class ABP_StaticMesh_Actor_C : public AStaticMeshActor
{
public:
	float                                              Colorize_HueShift_RandomAmount;                           // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Colorize_HueShift_Amount;                                 // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FStruct_MasterMaterial_BaseParams>   MaterialParamsArray;                                      // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Randomize_On;                                             // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	struct FRandomStream                               Random_Seed;                                              // 0x0484(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  Materials_Array;                                          // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  Default_Materials_Array;                                  // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              RandomFloatFromStream;                                    // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RandomVectorFromStream;                                   // 0x04B4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Level_Primary_Color1;                                     // 0x04C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Level_Primary_Color2;                                     // 0x04D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Level_Secondary_Color1;                                   // 0x04E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Level_Secondary_Color2;                                   // 0x04F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Level_Tertiary_Color1;                                    // 0x0500(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Level_Tertiary_Color2;                                    // 0x0510(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FStruct_MasterMaterial_Colorize>     Colorize_Array;                                           // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Is_Multi_Layer_Material;                                  // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0531(0x0003) MISSED OFFSET
	int                                                Multi_Layer_Number_of_Layers;                             // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FStruct_MasterMaterial_BaseParams_Layer2> L2_MaterialParamsArray;                                   // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FStruct_MasterMaterial_BaseParams_Layer3> L3_MaterialParamsArray;                                   // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FStruct_MasterMaterial_BaseParams_Layer4> L4_MaterialParamsArray;                                   // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               MacroOverlay_OverRideMaterial;                            // 0x0568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0569(0x0003) MISSED OFFSET
	struct FLinearColor                                MacroOverlay_BaseColor_Multiply;                          // 0x056C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MacroOverlay_BaseColor_Strength;                          // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MacroOverlay_BaseColor_Desaturation;                      // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MacroOverlay_UVs_UOffset;                                 // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MacroOverlay_UVs_VOffset;                                 // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MacroOverlay_UVs_UTiling;                                 // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MacroOverlay_UVs_VTiling;                                 // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MacroOverlay_UVs_Rotation;                                // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_StaticMesh_Actor.BP_StaticMesh_Actor_C");
		return ptr;
	}


	void Set_Per_Element_Macro_Overlay_Parameters(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int Array_Index, class UMaterialInstanceDynamic* DefaultMaterial, class UMaterialInstanceDynamic** Dynamic_Material_Instance, int* Material_ID_Out, class UMaterialInstanceDynamic** Default_Material_Out);
	void Set_Per_Element_Layer_4_Base_Material_Parameters(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int Array_Index, class UMaterialInstanceDynamic* Default_Material_In, class UMaterialInstanceDynamic** Dynamic_Material_Instance, int* Array_Index_Out, class UMaterialInstanceDynamic** Default_Material_Out);
	void Set_Per_Element_Layer_3_Base_Material_Parameters(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int Array_Index, class UMaterialInstanceDynamic* Default_Material_In, class UMaterialInstanceDynamic** Dynamic_Material_Instance, int* Array_Index_Out, class UMaterialInstanceDynamic** Default_Material_Out);
	void Set_Per_Element_Layer_2_Base_Material_Parameters(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int Array_Index, class UMaterialInstanceDynamic* Default_Material_In, class UMaterialInstanceDynamic** Dynamic_Material_Instance, int* Array_Index_Out, class UMaterialInstanceDynamic** Default_Material_Out);
	void Set_Level_ColorScheme();
	void Create_Dynamic_Material_Instance(class UMaterialInterface* Material_Instance_Interface, int Element_Index, class UStaticMeshComponent* Static_Mesh_Component, class UMaterialInstanceDynamic** Material_Instance_Dynamic, int* Material_ID);
	void Set_Per_Element_Base_Material_Parameters(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int Array_Index, class UMaterialInstanceDynamic** Dynamic_Material_Instance, int* Material_ID_Out, class UMaterialInstanceDynamic** Default_Material_Out);
	void Set_Randomized_Colorization(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int MaterialID, class UMaterialInstanceDynamic* Default_Material, class UMaterialInstanceDynamic** Material_Instance_Dynamic_Out, int* Material_ID_Out, class UMaterialInstanceDynamic** Default_Material_Out);
	void Per_Instance_Master_Material_Parameters();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
