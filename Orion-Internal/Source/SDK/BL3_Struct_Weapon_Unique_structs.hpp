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

// UserDefinedStruct Struct_Weapon_Unique.Struct_Weapon_Unique
// 0x004C
struct FStruct_Weapon_Unique
{
	float                                              DamageScale_2_4F6EF14648BA8F2AE9217DAFEA60EE53;           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinGameStage_5_E12DB0C74420238367FBC1A5221AFB84;          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxGameStage_14_CD5B031C48F8AFF772F3878A744812EA;         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       Custom_A_Description_19_8D03F19B49848DF026B78A8DCDEC0931; // 0x0010(0x0028) (Edit, BlueprintVisible)
	float                                              Custom_A_10_6BE78EF448AB3F6F228BC7B266814C86;             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FText                                       Custom_B_Description_21_B8FD1FD4497D0BDF7839C2B8C9E9F35A; // 0x0030(0x0028) (Edit, BlueprintVisible)
	float                                              Custom_B_11_6D4E8C1140CC269ED614BC958ECB0E22;             // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
