#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_AStruct_WeaponPoses_classes.hpp"
#include "BL3_AStruct_WeaponGrips_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct AStruct_WeaponAnims.AStruct_WeaponAnims
// 0x00C0
struct FAStruct_WeaponAnims
{
	struct FAStruct_WeaponPoses                        Poses_38_60E943BE4D8DA31D2937289B97787A23;                // 0x0000(0x0060) (Edit, BlueprintVisible)
	struct FAStruct_WeaponGrips                        Grips_39_0140AABB4F672565EDC91EA2473DB4A5;                // 0x0060(0x0060) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
