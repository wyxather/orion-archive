#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_DATLA_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Interactive_DATLA.Interactive_DATLA_C.IsLocked
struct AInteractive_DATLA_C_IsLocked_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_DATLA.Interactive_DATLA_C.Initialize Crystal
struct AInteractive_DATLA_C_Initialize_Crystal_Params
{
};

// Function Interactive_DATLA.Interactive_DATLA_C.IsInitialized
struct AInteractive_DATLA_C_IsInitialized_Params
{
	bool                                               Bool;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_DATLA.Interactive_DATLA_C.ReceiveBeginPlay
struct AInteractive_DATLA_C_ReceiveBeginPlay_Params
{
};

// Function Interactive_DATLA.Interactive_DATLA_C.ActivateCrystal
struct AInteractive_DATLA_C_ActivateCrystal_Params
{
};

// Function Interactive_DATLA.Interactive_DATLA_C.ExecuteUbergraph_Interactive_DATLA
struct AInteractive_DATLA_C_ExecuteUbergraph_Interactive_DATLA_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
