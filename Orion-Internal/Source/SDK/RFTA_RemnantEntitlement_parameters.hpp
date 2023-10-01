#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_RemnantEntitlement_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RemnantEntitlement.RemnantEntitlement_C.RevokeLicense
struct URemnantEntitlement_C_RevokeLicense_Params
{
};

// Function RemnantEntitlement.RemnantEntitlement_C.ExecuteUbergraph_RemnantEntitlement
struct URemnantEntitlement_C_ExecuteUbergraph_RemnantEntitlement_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
