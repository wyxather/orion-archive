#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Basic.hpp"
#include "RFTA_CoreUObject_classes.hpp"
#include "RFTA_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_SkyboxSettings.Struct_SkyboxSettings
// 0x06C0
struct FStruct_SkyboxSettings
{
	bool                                               HasSun__58_D1CE9E054B12BAA65F1AD9BA02A5EDD5;              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              SunInclination_64_DBC8C8D74E3044BB130B5A99938D3E41;       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SunRotation_3_367C0BF643C536BA4BB6CE93F4A15788;           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SunAngle_74_038EFEC5480C27E3A7AF8EBD7B7C7C68;             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SunScale_45_3AE41E3D4F20FEAC94CAA6AB94D8AB42;             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                SunLightColor_12_4D18B17C4EC6DEDDE219E593839CC607;        // 0x0014(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                      SunBloomTint_41_B8896FF8471CB561FBDD848DB7505A59;         // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SunVolumetricScatteringIntensity_19_B9052C704FE209FBCC8698863B785D1C;// 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UMaterialInstance>            SunMaterial_103_195067FE4BCF6863F8DF438B12A9FFF6;         // 0x0030(0x0028) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInstance>            SunLightFunction_104_B4558D8E4EB1A93A8E454DBFEB093ACC;    // 0x0058(0x0028) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInstance>            SkyboxMaterial_105_B025C729497C7696CB2EF9A4265C03B9;      // 0x0080(0x0028) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInstance>            CloudMaterial_106_454DB579445F8ECF060AD899A61658D1;       // 0x00A8(0x0028) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FLinearColor                                FogInscatteringColor_28_7A9CCD854E090D2E4B56CA91973A1CA3; // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FogDirectionalInscatteringColor_30_112C8B074B47984174CAEB9A7FE16581;// 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FogDensity_33_8D93D1FB4A8F6570CD3926B84026A975;           // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FogHeightFalloff_61_9539758940FE64521701968799569119;     // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FogMaxOpacity_80_37D921854038ECB7741B188860676B0D;        // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FogStartDistance_90_1BAF11DC4A764B1A3AC8EFA73274077A;     // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FogCutoffDistance_92_28C1FCEF43037B916AB039866371A18A;    // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FogDirectionalExponent_94_DC878F1E4CAE101B705722BD9762D26F;// 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FogZposition_96_F57D51EE4E1BC00CA9AF8EA51D10D059;         // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                VolumetricFogColor_84_6CCE8388425165EBC31FCF91BE0636DC;   // 0x010C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                SkyLightColorAmbient_71_6B65B2664945148E8F44E0961D44A8E6; // 0x011C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	struct FPostProcessSettings                        PostProcess_50_29E39D9E4C16337F77AFDD9D8F601725;          // 0x0130(0x0530) (Edit, BlueprintVisible)
	float                                              SunFunctionDistance_100_C2B7B74F4FF7CEBEE05A62BE092FAB2F; // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SunFunctionDesabledBrightness_102_40D5643A4DF4852D70E26C94BD80B3FB;// 0x0664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UParticleSystem>              AmbientParticleSystem_109_A70C062541963D467A2246AEA6038EF0;// 0x0668(0x0028) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UParticleSystem>              CharacterParticleSystem_111_67C74FDB4172849313CAB9844AA53537;// 0x0690(0x0028) (Edit, BlueprintVisible, HasGetValueTypeHash)
	class UClass*                                      AudioStateOverride_114_4649C19347FCE239404092BEDF439EA1;  // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
