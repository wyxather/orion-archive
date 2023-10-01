#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_IO_ExplodingPipe_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.GetPipeFlowState
struct UBPI_IO_ExplodingPipe_C_GetPipeFlowState_Params
{
	bool                                               HasFlow;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.GetPipeDestroyedState
struct UBPI_IO_ExplodingPipe_C_GetPipeDestroyedState_Params
{
	bool                                               Destroyed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.SetPipeState
struct UBPI_IO_ExplodingPipe_C_SetPipeState_Params
{
	TEnumAsByte<Enum_IO_ExplodingPipe_DestroyedState>  PipeState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.SetPipeFlowState
struct UBPI_IO_ExplodingPipe_C_SetPipeFlowState_Params
{
	bool                                               HasFlow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.DestroyPipe
struct UBPI_IO_ExplodingPipe_C_DestroyPipe_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
