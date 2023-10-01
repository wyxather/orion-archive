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

// UserDefinedStruct Struct_ProvingGroundsData.Struct_ProvingGroundsData
// 0x0010
struct FStruct_ProvingGroundsData
{
	float                                              IntroDelay_25_9B13452A4BC14B04099639B3F77A8F79;           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnounterEndDelay_26_E9E9C96343C06379371650886C9C0A62;     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WatcherSpawnActionDelay_30_D1EA6CE647879922EF262EA11A151A19;// 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WatcherPauseDelay_34_98699AD442FEF2F9BC3A46B52BF84580;    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
