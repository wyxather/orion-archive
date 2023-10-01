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

// UserDefinedStruct Grenade_Balance_Struct.Grenade_Balance_Struct
// 0x0010
struct FGrenade_Balance_Struct
{
	float                                              Damage_12_F33DA0994756D761207677A51A156787;               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius_13_9DDB780D4981106D3843E19FAC0856D3;               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ElementalChance_27_7937D4CF4A8DD22697D5E4B2D4C91A2C;      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ElementalDamage_29_5B61CFB144632591AA0579A20584A549;      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
