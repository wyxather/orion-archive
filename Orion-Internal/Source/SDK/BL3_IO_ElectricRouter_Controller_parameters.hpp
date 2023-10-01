#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_ElectricRouter_Controller_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.GetDoorState
struct AIO_ElectricRouter_Controller_C_GetDoorState_Params
{
	TEnumAsByte<Enum_Door_State>                       DoorState;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.GetDoorLockedState
struct AIO_ElectricRouter_Controller_C_GetDoorLockedState_Params
{
	bool                                               Locked;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.GetDoorInteractiveState
struct AIO_ElectricRouter_Controller_C_GetDoorInteractiveState_Params
{
	bool                                               Interactive;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.GetDoorFeedbackState
struct AIO_ElectricRouter_Controller_C_GetDoorFeedbackState_Params
{
	TEnumAsByte<Enum_States_DoorLocked>                FeedbackState;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.UserConstructionScript
struct AIO_ElectricRouter_Controller_C_UserConstructionScript_Params
{
};

// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.TimeLine01__FinishedFunc
struct AIO_ElectricRouter_Controller_C_TimeLine01__FinishedFunc_Params
{
};

// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.TimeLine01__UpdateFunc
struct AIO_ElectricRouter_Controller_C_TimeLine01__UpdateFunc_Params
{
};

// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.TimeLine01__EventTrigger__EventFunc
struct AIO_ElectricRouter_Controller_C_TimeLine01__EventTrigger__EventFunc_Params
{
};

// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.SetDoorState
struct AIO_ElectricRouter_Controller_C_SetDoorState_Params
{
	TEnumAsByte<Enum_Door_State>                       DoorState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.SetDoorLockedState
struct AIO_ElectricRouter_Controller_C_SetDoorLockedState_Params
{
	bool                                               Locked_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.SetDoorInteractiveState
struct AIO_ElectricRouter_Controller_C_SetDoorInteractiveState_Params
{
	bool                                               Interactive_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.SetDoorFeedbackState
struct AIO_ElectricRouter_Controller_C_SetDoorFeedbackState_Params
{
	TEnumAsByte<Enum_States_DoorLocked>                FeedbackState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.StartElectrifiedFeedback
struct AIO_ElectricRouter_Controller_C_StartElectrifiedFeedback_Params
{
};

// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.StopElectrifiedFeedback
struct AIO_ElectricRouter_Controller_C_StopElectrifiedFeedback_Params
{
};

// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_3_ElementalInteractionStartedEvent__DelegateSignature_IO_Combat_Panel_Electric
struct AIO_ElectricRouter_Controller_C_BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_3_ElementalInteractionStartedEvent__DelegateSignature_IO_Combat_Panel_Electric_Params
{
	class UElementalInteractionData*                   State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInitialState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.__UserState_ElectricState_2
struct AIO_ElectricRouter_Controller_C___UserState_ElectricState_2_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.__UserState_ElectricState_1
struct AIO_ElectricRouter_Controller_C___UserState_ElectricState_1_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.__UserState_Overload_2
struct AIO_ElectricRouter_Controller_C___UserState_Overload_2_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_ElectricRouter_Controller.IO_ElectricRouter_Controller_C.ExecuteUbergraph_IO_ElectricRouter_Controller
struct AIO_ElectricRouter_Controller_C_ExecuteUbergraph_IO_ElectricRouter_Controller_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
