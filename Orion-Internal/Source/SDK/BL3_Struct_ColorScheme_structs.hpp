#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_ColorScheme.Struct_ColorScheme
// 0x0060
struct FStruct_ColorScheme
{
	struct FLinearColor                                PrimaryColor1_12_D767F34A4DC44AE1F33DE8A608F71053;        // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                PrimaryColor2_13_647606AC47D417FEDFFD72AD07FB06B6;        // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                SecondaryColor1_14_F4E6A16F433E4AC8B7A0438CA2B621CE;      // 0x0020(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                SecondaryColor2_15_2D1AADA54B8F2CDEE414758CEA7E35A3;      // 0x0030(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                TertiaryColor1_16_2CE8BD8F44700FBFB1FB52BE31749B20;       // 0x0040(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                TertiaryColor2_17_FEC7BCCD45DAD5A19CB05C989AA7FF2E;       // 0x0050(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
