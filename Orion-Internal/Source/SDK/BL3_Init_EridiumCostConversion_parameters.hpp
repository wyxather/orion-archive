#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_EridiumCostConversion_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Init_EridiumCostConversion.Init_EridiumCostConversion_C.MoneyMultiplier
struct UInit_EridiumCostConversion_C_MoneyMultiplier_Params
{
	class AActor*                                      GearItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GearTypeMult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GearMoneyMult;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Init_EridiumCostConversion.Init_EridiumCostConversion_C.GearTypeMultiplier
struct UInit_EridiumCostConversion_C_GearTypeMultiplier_Params
{
	class AActor*                                      GearItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GearTypeMult;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Init_EridiumCostConversion.Init_EridiumCostConversion_C.CalculateAttributeInitialValue
struct UInit_EridiumCostConversion_C_CalculateAttributeInitialValue_Params
{
	class UObject**                                    Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
