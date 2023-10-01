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

// UserDefinedStruct Struct_ProvingGroundsTimedGem.Struct_ProvingGroundsTimedGem
// 0x000C
struct FStruct_ProvingGroundsTimedGem
{
	int                                                GoldTime_33_9B13452A4BC14B04099639B3F77A8F79;             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SilverTime_34_E9E9C96343C06379371650886C9C0A62;           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BronzeTime_35_538224124CA99A853213ACA7BB73A212;           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
