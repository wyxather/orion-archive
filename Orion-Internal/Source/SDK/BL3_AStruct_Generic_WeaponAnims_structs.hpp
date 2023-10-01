#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_AStruct_Generic_WeaponPoses_classes.hpp"
#include "BL3_AStruct_Generic_WeaponGrips_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct AStruct_Generic_WeaponAnims.AStruct_Generic_WeaponAnims
// 0x0120
struct FAStruct_Generic_WeaponAnims
{
	struct FAStruct_Generic_WeaponPoses                Poses_45_60E943BE4D8DA31D2937289B97787A23;                // 0x0000(0x0060) (Edit, BlueprintVisible)
	struct FAStruct_Generic_WeaponGrips                LeftGrips_44_0140AABB4F672565EDC91EA2473DB4A5;            // 0x0060(0x0060) (Edit, BlueprintVisible)
	struct FAStruct_Generic_WeaponGrips                RightGrips_43_957C3C7F4594DE048CE6E4833AB3038B;           // 0x00C0(0x0060) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
