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

// UserDefinedStruct Struct_Weapon_Elemental_Damage.Struct_Weapon_Elemental_Damage
// 0x0014
struct FStruct_Weapon_Elemental_Damage
{
	float                                              Fire_7_1FDBC8F84F8FC5AB340FF5A2F6380A54;                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Shock_8_684654654B332D94359F79BEB2DB90AA;                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Corrosive_9_FCB69C7740260C055C8D32B7E96603D1;             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cryo_10_FE2073AF44E3E00A723784B1D44C2D50;                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radiation_13_2500317646FAD2F4916D158835B29E83;            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
