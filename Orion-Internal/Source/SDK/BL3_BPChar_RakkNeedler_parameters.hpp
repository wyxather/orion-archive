#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_RakkNeedler_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_RakkNeedler.BPChar_RakkNeedler_C.UserConstructionScript
struct ABPChar_RakkNeedler_C_UserConstructionScript_Params
{
};

// Function BPChar_RakkNeedler.BPChar_RakkNeedler_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_RakkNeedler
struct ABPChar_RakkNeedler_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_RakkNeedler_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_RakkNeedler.BPChar_RakkNeedler_C.ExecuteUbergraph_BPChar_RakkNeedler
struct ABPChar_RakkNeedler_C_ExecuteUbergraph_BPChar_RakkNeedler_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
