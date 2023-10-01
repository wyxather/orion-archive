#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PD_Board_Wood_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PD_Board_Wood.PD_Board_Wood_C.UserConstructionScript
struct APD_Board_Wood_C_UserConstructionScript_Params
{
};

// Function PD_Board_Wood.PD_Board_Wood_C.ReceiveBeginPlay
struct APD_Board_Wood_C_ReceiveBeginPlay_Params
{
};

// Function PD_Board_Wood.PD_Board_Wood_C.ExecuteUbergraph_PD_Board_Wood
struct APD_Board_Wood_C_ExecuteUbergraph_PD_Board_Wood_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
