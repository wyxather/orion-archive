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

// UserDefinedStruct Struct_EnemyDamage.Struct_EnemyDamage
// 0x0210
struct FStruct_EnemyDamage
{
	struct FGbxParam                                   Multiplier_46_80DB035D40990764A852C490FCE2E692;           // 0x0000(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   Radius_38_28A9CA704BAF39A99F7404A1C43B8282;               // 0x0080(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   Angle_39_E43219F94F5760FC493909B1338CEA58;                // 0x0100(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   HalfHeight_44_562DF27A429800DA2E0D9EAB7746A76F;           // 0x0180(0x0080) (Edit, BlueprintVisible)
	class FString                                      Comment_40_301AAA14458CCFCF171605A6833B274C;              // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
