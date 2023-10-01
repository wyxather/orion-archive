#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PlayerAbility_Crouch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.FlushCrouchInput
struct UPlayerAbility_Crouch_C_FlushCrouchInput_Params
{
};

// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.IsCrouchToggle
struct UPlayerAbility_Crouch_C_IsCrouchToggle_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.GbxInpActEvt_InputAction_Discrete_Crouch_K2Node_GbxInputActionEvent_Discrete_6
struct UPlayerAbility_Crouch_C_GbxInpActEvt_InputAction_Discrete_Crouch_K2Node_GbxInputActionEvent_Discrete_6_Params
{
	class UGbxInputActionData_Discrete*                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.GbxInpActEvt_InputAction_Discrete_Crouch_K2Node_GbxInputActionEvent_Discrete_5
struct UPlayerAbility_Crouch_C_GbxInpActEvt_InputAction_Discrete_Crouch_K2Node_GbxInputActionEvent_Discrete_5_Params
{
	class UGbxInputActionData_Discrete*                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.GbxInpActEvt_InputAction_Discrete_GroundPound_K2Node_GbxInputActionEvent_Discrete_4
struct UPlayerAbility_Crouch_C_GbxInpActEvt_InputAction_Discrete_GroundPound_K2Node_GbxInputActionEvent_Discrete_4_Params
{
	class UGbxInputActionData_Discrete*                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.OnPaused
struct UPlayerAbility_Crouch_C_OnPaused_Params
{
};

// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.ExecuteUbergraph_PlayerAbility_Crouch
struct UPlayerAbility_Crouch_C_ExecuteUbergraph_PlayerAbility_Crouch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
