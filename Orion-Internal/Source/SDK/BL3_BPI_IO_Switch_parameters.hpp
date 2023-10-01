#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_IO_Switch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchFeedbackState
struct UBPI_IO_Switch_C_GetSwitchFeedbackState_Params
{
	TEnumAsByte<Enum_States_SwitchFeedback>            FeedbackState;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchFeedbackState
struct UBPI_IO_Switch_C_SetSwitchFeedbackState_Params
{
	TEnumAsByte<Enum_States_SwitchFeedback>            FeedbackState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchInteractiveState
struct UBPI_IO_Switch_C_GetSwitchInteractiveState_Params
{
	bool                                               Interactive;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchLockedState
struct UBPI_IO_Switch_C_GetSwitchLockedState_Params
{
	bool                                               Locked;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchState
struct UBPI_IO_Switch_C_GetSwitchState_Params
{
	TEnumAsByte<Enum_Switch_State>                     SwitchState;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchInteractiveState
struct UBPI_IO_Switch_C_SetSwitchInteractiveState_Params
{
	bool                                               Interactive;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchLockedState
struct UBPI_IO_Switch_C_SetSwitchLockedState_Params
{
	bool                                               Locked;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchState
struct UBPI_IO_Switch_C_SetSwitchState_Params
{
	TEnumAsByte<Enum_Switch_State>                     SwitchState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
