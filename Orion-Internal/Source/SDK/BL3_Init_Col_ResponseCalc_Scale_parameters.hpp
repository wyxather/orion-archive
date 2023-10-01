#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Col_ResponseCalc_Scale_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Init_Col_ResponseCalc_Scale.Init_Col_ResponseCalc_Scale_C.GetValueFromArchetype
struct UInit_Col_ResponseCalc_Scale_C_GetValueFromArchetype_Params
{
	struct FName                                       Archetype;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FStruct_VehicleColResponse                  VehicleColResponse;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Init_Col_ResponseCalc_Scale.Init_Col_ResponseCalc_Scale_C.CalculateAttributeInitialValue
struct UInit_Col_ResponseCalc_Scale_C_CalculateAttributeInitialValue_Params
{
	class UObject**                                    Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
