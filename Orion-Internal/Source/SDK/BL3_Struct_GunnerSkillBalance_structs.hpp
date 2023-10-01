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

// UserDefinedStruct Struct_GunnerSkillBalance.Struct_GunnerSkillBalance
// 0x0028
struct FStruct_GunnerSkillBalance
{
	float                                              DamageScalar_2_28B25EC8493D1EB6C2138A962F659BCD;          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cooldown_4_8A38A09E46E89B75CDB6F39A50278802;              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius_6_D31CD7A5410D01037586C9AACA4B7EE1;                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Secondary_13_BE03AB154A90401B6BFE67BB3B3554E0;            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Tertiary_14_F7F8785341E034348C7398B20AD7DA70;             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class FString                                      Comments_15_E5185A7744FBCB974E75DA9F57A235E0;             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
