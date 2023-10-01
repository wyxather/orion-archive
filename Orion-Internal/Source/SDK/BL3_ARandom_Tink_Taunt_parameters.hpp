#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARandom_Tink_Taunt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ARandom_Tink_Taunt.ARandom_Tink_Taunt_C.OnBegin
struct UARandom_Tink_Taunt_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ARandom_Tink_Taunt.ARandom_Tink_Taunt_C.OnEnd
struct UARandom_Tink_Taunt_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ARandom_Tink_Taunt.ARandom_Tink_Taunt_C.ExecuteUbergraph_ARandom_Tink_Taunt
struct UARandom_Tink_Taunt_C_ExecuteUbergraph_ARandom_Tink_Taunt_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
