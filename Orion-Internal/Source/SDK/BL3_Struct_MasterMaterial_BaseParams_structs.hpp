#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_EColorScheme_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_MasterMaterial_BaseParams.Struct_MasterMaterial_BaseParams
// 0x0044
struct FStruct_MasterMaterial_BaseParams
{
	struct FLinearColor                                BaseColor_Multiply_39_3C6B06D746B9EDBF6CCE07AD005F7AF2;   // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                BaseColor_Metal_Multiply_40_26CF590846898356508B92BE96BA789B;// 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               BaseColor_Multiply_UseLevelColor_77_290B254F480B007D30DF5DAB6CF512FC;// 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BaseColor_Metal_Multiply_UseLevelColor_86_42FB9CB54D73A8278984C5B903551CEB;// 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EColorScheme>                          BaseColor_Multiply_LevelColor_83_796BBE454A04A7AAFDCCC2BF69272359;// 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
	float                                              BaseColor_Desaturate_89_F51638BA49180B6201691B85CF570D03; // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseColor_HueShift_91_7E972FF44C1254963B8A7F9F0E4E0B31;   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RoughnessMin_19_E02C30D248D2AADF0113B29E893103AF;         // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RoughnessMax_21_1E4904D741D5A2ED7A90DDBC4E531BE3;         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                EmissiveColor_Multiply_41_4234211348BDBB59F88842B3EB65D1B9;// 0x0034(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
