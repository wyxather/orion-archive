#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARandom_PunkFemale_Dance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ARandom_PunkFemale_Dance.ARandom_PunkFemale_Dance_C.OnEnd
struct UARandom_PunkFemale_Dance_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ARandom_PunkFemale_Dance.ARandom_PunkFemale_Dance_C.ExecuteUbergraph_ARandom_PunkFemale_Dance
struct UARandom_PunkFemale_Dance_C_ExecuteUbergraph_ARandom_PunkFemale_Dance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
