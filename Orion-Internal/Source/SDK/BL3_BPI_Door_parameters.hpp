#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_Door_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_Door.BPI_Door_C.GetDoorFeedbackState
struct UBPI_Door_C_GetDoorFeedbackState_Params
{
	TEnumAsByte<Enum_States_DoorLocked>                FeedbackState;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Door.BPI_Door_C.SetDoorFeedbackState
struct UBPI_Door_C_SetDoorFeedbackState_Params
{
	TEnumAsByte<Enum_States_DoorLocked>                FeedbackState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Door.BPI_Door_C.GetDoorInteractiveState
struct UBPI_Door_C_GetDoorInteractiveState_Params
{
	bool                                               Interactive;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Door.BPI_Door_C.GetDoorLockedState
struct UBPI_Door_C_GetDoorLockedState_Params
{
	bool                                               Locked;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Door.BPI_Door_C.GetDoorState
struct UBPI_Door_C_GetDoorState_Params
{
	TEnumAsByte<Enum_Door_State>                       DoorState;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Door.BPI_Door_C.SetDoorInteractiveState
struct UBPI_Door_C_SetDoorInteractiveState_Params
{
	bool                                               Interactive_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Door.BPI_Door_C.SetDoorLockedState
struct UBPI_Door_C_SetDoorLockedState_Params
{
	bool                                               Locked_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Door.BPI_Door_C.SetDoorState
struct UBPI_Door_C_SetDoorState_Params
{
	TEnumAsByte<Enum_Door_State>                       DoorState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
