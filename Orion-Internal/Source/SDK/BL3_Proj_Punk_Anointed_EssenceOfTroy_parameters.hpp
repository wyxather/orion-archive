#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Punk_Anointed_EssenceOfTroy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_Punk_Anointed_EssenceOfTroy.Proj_Punk_Anointed_EssenceOfTroy_C.InitHomingTarget
struct AProj_Punk_Anointed_EssenceOfTroy_C_InitHomingTarget_Params
{
};

// Function Proj_Punk_Anointed_EssenceOfTroy.Proj_Punk_Anointed_EssenceOfTroy_C.UserConstructionScript
struct AProj_Punk_Anointed_EssenceOfTroy_C_UserConstructionScript_Params
{
};

// Function Proj_Punk_Anointed_EssenceOfTroy.Proj_Punk_Anointed_EssenceOfTroy_C.ReceiveBeginPlay
struct AProj_Punk_Anointed_EssenceOfTroy_C_ReceiveBeginPlay_Params
{
};

// Function Proj_Punk_Anointed_EssenceOfTroy.Proj_Punk_Anointed_EssenceOfTroy_C.OnExplode
struct AProj_Punk_Anointed_EssenceOfTroy_C_OnExplode_Params
{
};

// Function Proj_Punk_Anointed_EssenceOfTroy.Proj_Punk_Anointed_EssenceOfTroy_C.BndEvt__AOECollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Proj_Punk_Anointed_HomingBall
struct AProj_Punk_Anointed_EssenceOfTroy_C_BndEvt__AOECollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Proj_Punk_Anointed_HomingBall_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_Punk_Anointed_EssenceOfTroy.Proj_Punk_Anointed_EssenceOfTroy_C.BndEvt__AOECollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Proj_Punk_Anointed_HomingBall
struct AProj_Punk_Anointed_EssenceOfTroy_C_BndEvt__AOECollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Proj_Punk_Anointed_HomingBall_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Punk_Anointed_EssenceOfTroy.Proj_Punk_Anointed_EssenceOfTroy_C.ExecuteUbergraph_Proj_Punk_Anointed_EssenceOfTroy
struct AProj_Punk_Anointed_EssenceOfTroy_C_ExecuteUbergraph_Proj_Punk_Anointed_EssenceOfTroy_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
