#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct GrenadeMod_Balance_Struct.GrenadeMod_Balance_Struct
// 0x004C
struct FGrenadeMod_Balance_Struct
{
	float                                              Damage_12_F33DA0994756D761207677A51A156787;               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius_13_9DDB780D4981106D3843E19FAC0856D3;               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FuseTime_27_7D89E52544EC113280B6F6BFA9EF8981;             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class FString                                      Primary_Comment_22_BADB46954F48600C9B20A1B72C7F9FA1;      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Primary_1_14_785154D64AF8EEEA12E3F1A63A0B04B6;            // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Primary_2_15_2B2EF17E422835A6F855B0B351652BD4;            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Primary_3_16_1E6ADA3B4212CC38E1A4E59C9B29BBE2;            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class FString                                      Secondary_Comment_24_5C90F61E4CA58905F6F7D18DC067D295;    // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Secondary_1_17_518A093F48377625749592BEC8275DC6;          // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Secondary_2_18_AB999387440701CC75633C917E78FD7B;          // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Secondary_3_19_ACA59F5242FD94CFBAB2418760866307;          // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
