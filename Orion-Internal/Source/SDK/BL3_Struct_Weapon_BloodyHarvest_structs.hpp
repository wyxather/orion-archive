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

// UserDefinedStruct Struct_Weapon_BloodyHarvest.Struct_Weapon_BloodyHarvest
// 0x004C
struct FStruct_Weapon_BloodyHarvest
{
	float                                              DamageScale_2_6249E51D41B75899C0DEDD8B5EFE89ED;           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinGameStage_5_E58A410440250F1307D8AEA27894B1D9;          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxGameStage_7_A01853C44CC42F80C7935D84CB00521B;          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       Custom_A_Description_10_D38C112C4FFC8714450955993D007573; // 0x0010(0x0028) (Edit, BlueprintVisible)
	float                                              Custom_A_13_96126EEB4B7199E448815B86D27D05D8;             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FText                                       Custom_B_Description_16_8B64CAC74E2CFA864935C98EED24545D; // 0x0030(0x0028) (Edit, BlueprintVisible)
	float                                              Custom_B_19_181C776D44CEF963839836922CD17B77;             // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
