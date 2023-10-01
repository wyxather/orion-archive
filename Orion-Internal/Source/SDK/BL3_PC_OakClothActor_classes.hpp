#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PC_OakClothActor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PC_OakClothActor.PC_OakClothActor_C
// 0x0174 (0x05EC - 0x0478)
class APC_OakClothActor_C : public AClothStaticMeshActor
{
public:
	class UWindAudioLoopComponent*                     WindAudioLoop;                                            // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FRandomStream                               Random_Seed;                                              // 0x0488(0x0008) (Edit, BlueprintVisible)
	float                                              RandomFloatFromStream;                                    // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Level_Primary_Color1;                                     // 0x0494(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Level_Primary_Color2;                                     // 0x04A4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Level_Secondary_Color1;                                   // 0x04B4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Level_Secondary_Color2;                                   // 0x04C4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Level_Tertiary_Color1;                                    // 0x04D4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Level_Tertiary_Color2;                                    // 0x04E4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04F4(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  Materials_Array;                                          // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     RandomVectorFromStream;                                   // 0x0508(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Randomize_On;                                             // 0x0514(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0515(0x0003) MISSED OFFSET
	TArray<struct FStruct_MasterMaterial_Colorize>     Colorize_Array;                                           // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInterface*>                  Default_Materials_Array;                                  // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FStruct_MasterMaterial_BaseParams>   MaterialParamsArray;                                      // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Colorize_HueShift_RandomAmount;                           // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Colorize_HueShift_Amount;                                 // 0x054C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Multi_Layer_Material;                                  // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0551(0x0003) MISSED OFFSET
	int                                                Multi_Layer_Number_of_Layers;                             // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FStruct_MasterMaterial_BaseParams_Layer2> L2_MaterialParamsArray;                                   // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FStruct_MasterMaterial_BaseParams_Layer3> L3_MaterialParamsArray;                                   // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FStruct_MasterMaterial_BaseParams_Layer4> L4_MaterialParamsArray;                                   // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInterface*>                  Material_Overrides;                                       // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UWwiseEvent*                                 ClothAudio;                                               // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               No_Backstop_Mesh;                                         // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindInfluenceMultiplier;                                  // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x05AC(0x0004) MISSED OFFSET
	class UStaticMesh*                                 Static_Mesh;                                              // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Backstop_amount;                                          // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FWindDirectionalSensitivity                 Wind_Sensitivity__no_backstop_;                           // 0x05BC(0x0018) (Edit, BlueprintVisible)
	struct FWindDirectionalSensitivity                 Wind_Sensitivity__with_backstop_;                         // 0x05D4(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PC_OakClothActor.PC_OakClothActor_C");
		return ptr;
	}


	void Set_Per_Element_Layer_4_Base_Material_Parameters(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int Array_Index, class UMaterialInstanceDynamic* Default_Material_In, class UMaterialInstanceDynamic** Dynamic_Material_Instance, int* Array_Index_Out, class UMaterialInstanceDynamic** Default_Material_Out);
	void Set_Per_Element_Layer_3_Base_Material_Parameters(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int Array_Index, class UMaterialInstanceDynamic* Default_Material_In, class UMaterialInstanceDynamic** Dynamic_Material_Instance, int* Array_Index_Out, class UMaterialInstanceDynamic** Default_Material_Out);
	void Set_Per_Element_Layer_2_Base_Material_Parameters(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int Array_Index, class UMaterialInstanceDynamic* Default_Material_In, class UMaterialInstanceDynamic** Dynamic_Material_Instance, int* Array_Index_Out, class UMaterialInstanceDynamic** Default_Material_Out);
	void Set_Randomized_Colorization(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int MaterialID, class UMaterialInstanceDynamic* Default_Material, class UMaterialInstanceDynamic** Material_Instance_Dynamic_Out, int* Material_ID_Out, class UMaterialInstanceDynamic** Default_Material_Out);
	void Set_Per_Element_Base_Material_Parameters(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int Array_Index, class UMaterialInstanceDynamic** Dynamic_Material_Instance, int* Material_ID_Out, class UMaterialInstanceDynamic** Default_Material_Out);
	void Create_Dynamic_Material_Instance(class UMaterialInterface* Material_Instance_Interface, int Element_Index, class UMeshComponent* Mesh_Component, class UMaterialInstanceDynamic** Material_Instance_Dynamic, int* Material_ID);
	void Set_Level_ColorScheme();
	void Per_Instance_Master_Material_Parameters(class UMeshComponent* Target_Component);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
