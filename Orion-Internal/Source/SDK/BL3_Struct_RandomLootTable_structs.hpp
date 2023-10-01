#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_Struct_RandomLootOdds_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_RandomLootTable.Struct_RandomLootTable
// 0x0030
struct FStruct_RandomLootTable
{
	int                                                Default_14_4189D9DA42C2B912FC25209E8C353A26;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FStruct_RandomLootOdds>              DropCount_15_A4643C45437ECBC97BC6629ECC66F6B6;            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       Comment_13_11E6C8E8493E0A73AF9B35891E7CE111;              // 0x0018(0x0028) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
