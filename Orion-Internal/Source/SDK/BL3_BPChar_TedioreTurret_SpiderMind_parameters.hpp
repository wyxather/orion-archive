#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_TedioreTurret_SpiderMind_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_TedioreTurret_SpiderMind.BPChar_TedioreTurret_SpiderMind_C.UserConstructionScript
struct ABPChar_TedioreTurret_SpiderMind_C_UserConstructionScript_Params
{
};

// Function BPChar_TedioreTurret_SpiderMind.BPChar_TedioreTurret_SpiderMind_C.ReceiveBeginPlay
struct ABPChar_TedioreTurret_SpiderMind_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_TedioreTurret_SpiderMind.BPChar_TedioreTurret_SpiderMind_C.InitializeWeapon
struct ABPChar_TedioreTurret_SpiderMind_C_InitializeWeapon_Params
{
};

// Function BPChar_TedioreTurret_SpiderMind.BPChar_TedioreTurret_SpiderMind_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_TedioreTurret
struct ABPChar_TedioreTurret_SpiderMind_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_TedioreTurret_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BPChar_TedioreTurret_SpiderMind.BPChar_TedioreTurret_SpiderMind_C.ExecuteUbergraph_BPChar_TedioreTurret_SpiderMind
struct ABPChar_TedioreTurret_SpiderMind_C_ExecuteUbergraph_BPChar_TedioreTurret_SpiderMind_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
