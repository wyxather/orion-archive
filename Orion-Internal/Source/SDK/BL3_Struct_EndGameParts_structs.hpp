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

// UserDefinedStruct Struct_EndGameParts.Struct_EndGameParts
// 0x0050
struct FStruct_EndGameParts
{
	float                                              GameStage_5_7193729B453E1712D9DF4F8F73B3880E;             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damage_7_39142BF947B2CBE02701DBA97A4D507F;                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration_9_5EBB97554E1A0E96E99FB79D0C389934;              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class FString                                      Custom_A_Description_14_6EE0CD084B32C3DDECBD6DB23723DB9F; // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Custom_A_21_F62C55A14374986C5D004E94DD277B3D;             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class FString                                      Custom_B_Description_18_4A7C266B446410E34B7E0D8B97838C27; // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Custom_B_22_F3E78C5F4BA4BD6A1DC031AF51327791;             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class FString                                      Comment_12_DA89EB584037C279051F18BF152741D6;              // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
