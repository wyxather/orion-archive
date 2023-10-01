#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_IronBearHardpoint_DamageCalc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Init_IronBearHardpoint_DamageCalc.Init_IronBearHardpoint_DamageCalc_C.GetStrengthThroughBalanceScalar
struct UInit_IronBearHardpoint_DamageCalc_C_GetStrengthThroughBalanceScalar_Params
{
	class AOakCharacter_IronBear*                      InIronBear;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
