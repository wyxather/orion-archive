#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_HealthBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_HealthBar.BP_HealthBar_C.GetTargetHeightAndRadius
struct ABP_HealthBar_C_GetTargetHeightAndRadius_Params
{
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HealthBar.BP_HealthBar_C.DestroyHealthBar
struct ABP_HealthBar_C_DestroyHealthBar_Params
{
};

// Function BP_HealthBar.BP_HealthBar_C.UpdateTransform
struct ABP_HealthBar_C_UpdateTransform_Params
{
};

// Function BP_HealthBar.BP_HealthBar_C.Init
struct ABP_HealthBar_C_Init_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HealthBar.BP_HealthBar_C.ReceiveTick
struct ABP_HealthBar_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HealthBar.BP_HealthBar_C.ExecuteUbergraph_BP_HealthBar
struct ABP_HealthBar_C_ExecuteUbergraph_BP_HealthBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
