#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeapInterface_MAL_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeapInterface_MAL.BPWeapInterface_MAL_C.SetSecondaryElementalData
struct UBPWeapInterface_MAL_C_SetSecondaryElementalData_Params
{
	struct FLinearColor                                BaseColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                HighlightColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPWeapInterface_MAL.BPWeapInterface_MAL_C.SetPrimaryElementalData
struct UBPWeapInterface_MAL_C_SetPrimaryElementalData_Params
{
	struct FLinearColor                                BaseColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                HighlightColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
