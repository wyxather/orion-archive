#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxInput_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxInput.GbxInputComponent.StartInputConsumeKeyImpl
struct UGbxInputComponent_StartInputConsumeKeyImpl_Params
{
};

// Function GbxInput.GbxInputComponent.StartInputAction_Discrete_Impl
struct UGbxInputComponent_StartInputAction_Discrete_Impl_Params
{
	class UGbxInputActionData_Discrete*                DiscreteAction;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bConsumeEvent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInput.GbxInputComponent.InputAction_Continuous_Vector_Impl
struct UGbxInputComponent_InputAction_Continuous_Vector_Impl_Params
{
	class UGbxInputActionData_Continuous_Vector*       AxisAction;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxInput.GbxInputEventHelpers.SigFunc_Button_PressPulse
struct UGbxInputEventHelpers_SigFunc_Button_PressPulse_Params
{
	float                                              NextPulseDelay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxInput.GbxInputEventHelpers.SigFunc_Axis
struct UGbxInputEventHelpers_SigFunc_Axis_Params
{
	struct FVector                                     Val;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
