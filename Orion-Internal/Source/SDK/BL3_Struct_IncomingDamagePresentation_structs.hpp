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

// UserDefinedStruct Struct_IncomingDamagePresentation.Struct_IncomingDamagePresentation
// 0x000C
struct FStruct_IncomingDamagePresentation
{
	float                                              DamageThreshold_2_F5E8579A44C473129FDE6DBFA502FD4F;       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageScore_4_38BE320F42C43E1E141EC3A7074A3370;           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageScoreThreshold_6_7AF08B8D433CBFEB34DAF48187247FF6;  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
