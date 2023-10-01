#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_PowerUser_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PowerUser.BP_PowerUser_C.Animate
struct UBP_PowerUser_C_Animate_Params
{
	float*                                             Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PowerUser.BP_PowerUser_C.InitializeComponents
struct UBP_PowerUser_C_InitializeComponents_Params
{
};

// Function BP_PowerUser.BP_PowerUser_C.GetPowerSource
struct UBP_PowerUser_C_GetPowerSource_Params
{
	class ABP_PowerSource_C*                           Source;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PowerUser.BP_PowerUser_C.IsEnabled
struct UBP_PowerUser_C_IsEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PowerUser.BP_PowerUser_C.ReceiveBeginPlay
struct UBP_PowerUser_C_ReceiveBeginPlay_Params
{
};

// Function BP_PowerUser.BP_PowerUser_C.OnPowerSourceEnabled
struct UBP_PowerUser_C_OnPowerSourceEnabled_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PowerUser.BP_PowerUser_C.AnimateOn
struct UBP_PowerUser_C_AnimateOn_Params
{
};

// Function BP_PowerUser.BP_PowerUser_C.AnimateOff
struct UBP_PowerUser_C_AnimateOff_Params
{
};

// Function BP_PowerUser.BP_PowerUser_C.ReceiveTick
struct UBP_PowerUser_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PowerUser.BP_PowerUser_C.ExecuteUbergraph_BP_PowerUser
struct UBP_PowerUser_C_ExecuteUbergraph_BP_PowerUser_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PowerUser.BP_PowerUser_C.OnEnabled__DelegateSignature
struct UBP_PowerUser_C_OnEnabled__DelegateSignature_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
