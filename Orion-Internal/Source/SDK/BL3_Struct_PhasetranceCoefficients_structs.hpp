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

// UserDefinedStruct Struct_PhasetranceCoefficients.Struct_PhasetranceCoefficients
// 0x0008
struct FStruct_PhasetranceCoefficients
{
	float                                              DamageCoefficient_2_70FF0AD64324CB4406E965B6AFF3BED8;     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CooldownCoefficient_4_F654EB144A946CD7D29756AF24FC67B8;   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
