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

// UserDefinedStruct Struct_ExperienceTypeProperties.Struct_ExperienceTypeProperties
// 0x0008
struct FStruct_ExperienceTypeProperties
{
	float                                              ExperienceMultiplier_4_E38B42A1421B17019903B88106752ACE;  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PercentOfLevelAwarded_7_D7EF4E024213305A751FEAA33AF260AD; // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
