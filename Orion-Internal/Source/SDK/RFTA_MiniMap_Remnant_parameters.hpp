#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_MiniMap_Remnant_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MiniMap_Remnant.MiniMap_Remnant_C.AddToActiveMinimap
struct UMiniMap_Remnant_C_AddToActiveMinimap_Params
{
};

// Function MiniMap_Remnant.MiniMap_Remnant_C.ReceiveBeginPlay
struct UMiniMap_Remnant_C_ReceiveBeginPlay_Params
{
};

// Function MiniMap_Remnant.MiniMap_Remnant_C.ReceiveEndPlay
struct UMiniMap_Remnant_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MiniMap_Remnant.MiniMap_Remnant_C.AutoAddToMiniMap
struct UMiniMap_Remnant_C_AutoAddToMiniMap_Params
{
};

// Function MiniMap_Remnant.MiniMap_Remnant_C.ExecuteUbergraph_MiniMap_Remnant
struct UMiniMap_Remnant_C_ExecuteUbergraph_MiniMap_Remnant_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
