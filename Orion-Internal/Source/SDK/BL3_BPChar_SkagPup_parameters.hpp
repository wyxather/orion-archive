#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_SkagPup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_SkagPup.BPChar_SkagPup_C.UserConstructionScript
struct ABPChar_SkagPup_C_UserConstructionScript_Params
{
};

// Function BPChar_SkagPup.BPChar_SkagPup_C.ReceiveBeginPlay
struct ABPChar_SkagPup_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_SkagPup.BPChar_SkagPup_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagPup
struct ABPChar_SkagPup_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagPup_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_SkagPup.BPChar_SkagPup_C.ExecuteUbergraph_BPChar_SkagPup
struct ABPChar_SkagPup_C_ExecuteUbergraph_BPChar_SkagPup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
