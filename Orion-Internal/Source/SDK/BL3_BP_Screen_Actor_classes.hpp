#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Screen_Actor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Screen_Actor.BP_Screen_Actor_C
// 0x0191 (0x05F9 - 0x0468)
class ABP_Screen_Actor_C : public AStaticMeshActor
{
public:
	class UStaticMeshComponent*                        SM_FX_Cube_100x100x100;                                   // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BaseParameters_OverideDefaults;                           // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	TArray<struct FStruct_MasterMaterial_BaseParams>   MaterialParamsArray;                                      // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Randomize_On;                                             // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0491(0x0003) MISSED OFFSET
	struct FRandomStream                               Random_Seed;                                              // 0x0494(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  Materials_Array;                                          // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              RandomFloatFromStream;                                    // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RandomVectorFromStream;                                   // 0x04B4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Level_Primary_Color1;                                     // 0x04C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Level_Primary_Color2;                                     // 0x04D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Level_Secondary_Color1;                                   // 0x04E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Level_Secondary_Color2;                                   // 0x04F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Level_Tertiary_Color1;                                    // 0x0500(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Level_Tertiary_Color2;                                    // 0x0510(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EScreenMaterialSelection>              Screen_State;                                             // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               GenerateSpotLight;                                        // 0x0521(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0522(0x0002) MISSED OFFSET
	float                                              Spotlight_IntensityMult;                                  // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FStruct_Screen_Params                       ScreenParameters;                                         // 0x0528(0x0070) (Edit, BlueprintVisible)
	float                                              Screen_Image_Width;                                       // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Screen_Image_Height;                                      // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Screen_Image_Rotation;                                    // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Screen_Material_Element;                                  // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          ScreenMat_Off;                                            // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          ScreenMat_On;                                             // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          ScreenMat_On_NoiseOnly;                                   // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          ScreenMat_On_ImageOnly;                                   // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          ScreenMat_On_ImageAndNoise;                               // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          ScreenMat_On_ImageNoiseAndGlitches;                       // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          ScreenMat_On_ImageNoiseAndChromaticAberration;            // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightFunction_MaskRoundness;                              // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LightFunction_Scale;                                      // 0x05E4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicScreenMaterial;                                    // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMissionSafe;                                            // 0x05F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Screen_Actor.BP_Screen_Actor_C");
		return ptr;
	}


	void ManageLight();
	void Create_Dynamic_Screen_Material_Instance(class UMaterialInstanceDynamic** DynamicScreenMaterialOut, class UMaterialInterface** DefaultScreenMaterialOut, class UMaterialInstanceDynamic** DynamicLightMaterialOut);
	void Set_Per_Element_Screen_Material_Parameters(class UMaterialInstanceDynamic* DynamicScreenMat, class UMaterialInterface* DefaultScreenMaterial, class UMaterialInstanceDynamic* DynamicLightMat, class UMaterialInstanceDynamic** DynamicMaterial);
	void Set_Level_ColorScheme();
	void Set_Per_Element_Base_Material_Parameters(class UMaterialInstanceDynamic* Material_Instance_Dynamic, int Array_Index, class UMaterialInstanceDynamic** Dynamic_Material_Instance, int* Material_ID_Out, class UMaterialInstanceDynamic** Default_Material_Out);
	void Per_Instance_Master_Material_Parameters();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
