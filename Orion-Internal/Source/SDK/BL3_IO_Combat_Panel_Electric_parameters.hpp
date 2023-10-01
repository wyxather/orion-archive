#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Combat_Panel_Electric_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.SetElectricalPanelState
struct AIO_Combat_Panel_Electric_C_SetElectricalPanelState_Params
{
	bool                                               Electrified;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.UserConstructionScript
struct AIO_Combat_Panel_Electric_C_UserConstructionScript_Params
{
};

// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.StopElectrifiedFeedback
struct AIO_Combat_Panel_Electric_C_StopElectrifiedFeedback_Params
{
};

// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.StartElectrifiedFeedback
struct AIO_Combat_Panel_Electric_C_StartElectrifiedFeedback_Params
{
};

// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.ReceiveBeginPlay
struct AIO_Combat_Panel_Electric_C_ReceiveBeginPlay_Params
{
};

// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.OnDisabled
struct AIO_Combat_Panel_Electric_C_OnDisabled_Params
{
};

// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.OnEnabled
struct AIO_Combat_Panel_Electric_C_OnEnabled_Params
{
};

// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_3_ElementalInteractionStartedEvent__DelegateSignature_IO_Combat_Panel_Electric
struct AIO_Combat_Panel_Electric_C_BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_3_ElementalInteractionStartedEvent__DelegateSignature_IO_Combat_Panel_Electric_Params
{
	class UElementalInteractionData*                   State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInitialState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.PowerOn
struct AIO_Combat_Panel_Electric_C_PowerOn_Params
{
};

// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.PowerOff
struct AIO_Combat_Panel_Electric_C_PowerOff_Params
{
};

// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.SwitchOn
struct AIO_Combat_Panel_Electric_C_SwitchOn_Params
{
	class AActor*                                      LastActorToUseSwitch;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.SwitchOff
struct AIO_Combat_Panel_Electric_C_SwitchOff_Params
{
	class AActor*                                      LastActorToUseSwitch;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.ExecuteUbergraph_IO_Combat_Panel_Electric
struct AIO_Combat_Panel_Electric_C_ExecuteUbergraph_IO_Combat_Panel_Electric_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.OnElectrifiedStop__DelegateSignature
struct AIO_Combat_Panel_Electric_C_OnElectrifiedStop__DelegateSignature_Params
{
};

// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.OnElectrifiedStart__DelegateSignature
struct AIO_Combat_Panel_Electric_C_OnElectrifiedStart__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
