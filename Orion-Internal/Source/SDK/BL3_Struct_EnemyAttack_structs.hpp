#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_GbxGameSystemCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_EnemyAttack.Struct_EnemyAttack
// 0x0290
struct FStruct_EnemyAttack
{
	struct FGbxParam                                   MinDistance_26_855654CA47D6C38E7605AFBEE1401370;          // 0x0000(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   IdealDistance_27_1805015F4DAF4F789523168A5A864E12;        // 0x0080(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   MaxDistance_28_BBEDA1D849F0CA246F20AB8D749D9DEF;          // 0x0100(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   Height_37_36B8B92742A41FC215B5C294EFB1F253;               // 0x0180(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   IsInRange_30_269ECC2F46EFC13B3F56CAB640D40B6B;            // 0x0200(0x0080) (Edit, BlueprintVisible)
	class FString                                      Comment_34_301AAA14458CCFCF171605A6833B274C;              // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
