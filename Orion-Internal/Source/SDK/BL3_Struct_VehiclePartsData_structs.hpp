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

// UserDefinedStruct Struct_VehiclePartsData.Struct_VehiclePartsData
// 0x002C
struct FStruct_VehiclePartsData
{
	int                                                MinGameStage_15_D986BDE142AA94D9995403BC41D5DA70;         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxGameStage_16_61E2F5704120ED249761B1815BA581C6;         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthMultiplier_7_0261A41A4EE6978DE6454391C44DE8C4;      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RammingDamageMultiplier_8_1CE2448B48CF0F6F69A410A46E375DEC;// 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoostPoolMaxValueScaler_25_1F2F02954892FAB590A01C90C5917A79;// 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoostRegenDelayScaler_26_521D8AD74AE5AE704F5BDC92CDE0792E;// 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoostRegenRateScaler_27_4697DC134217A8DD9E87BE9EBA712601; // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoostConsumptionRateScaler_28_B72CF3A848A30D8AF17B2397D2DEA74F;// 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeaponDamageScale_31_40176F82433522D6C11812BBFCBC607C;    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeaponDamageRadius_32_A8B77A5847C587026E4510857777DCD0;   // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpawningWeight_35_DB892877461FA529DC86BD9E817EE61A;       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
