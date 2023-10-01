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

// UserDefinedStruct Struct_Lootable_ConfigurationChances.Struct_Lootable_ConfigurationChances
// 0x0014
struct FStruct_Lootable_ConfigurationChances
{
	class FString                                      Configuration_Name_2_1D08F0E045B2B1CB61BDCAB6E1ADFC9B;    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Weight_5_B0449C0042B431A9894B3BB5323EF161;                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
