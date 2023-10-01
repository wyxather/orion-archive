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

// UserDefinedStruct Struct_ResourceAffectedLoot.Struct_ResourceAffectedLoot
// 0x0014
struct FStruct_ResourceAffectedLoot
{
	float                                              Resource_Threshold_17_4189D9DA42C2B912FC25209E8C353A26;   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Above_Threshold_Chance_20_A4643C45437ECBC97BC6629ECC66F6B6;// 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              No_Pool_Weight_22_11E6C8E8493E0A73AF9B35891E7CE111;       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Below_Threshold_Min_24_D6C53BB749C83ED3DFB662AECCFCBFE3;  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Below_Threshold_Max_26_3A2B28E7408BF126ECBC8797BC4F771B;  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
