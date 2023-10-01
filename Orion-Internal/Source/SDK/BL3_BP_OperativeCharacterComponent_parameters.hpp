#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_OperativeCharacterComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_OperativeCharacterComponent.BP_OperativeCharacterComponent_C.SetOperativeDeviceVisible
struct UBP_OperativeCharacterComponent_C_SetOperativeDeviceVisible_Params
{
	bool*                                              bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OperativeCharacterComponent.BP_OperativeCharacterComponent_C.ExecuteUbergraph_BP_OperativeCharacterComponent
struct UBP_OperativeCharacterComponent_C_ExecuteUbergraph_BP_OperativeCharacterComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
