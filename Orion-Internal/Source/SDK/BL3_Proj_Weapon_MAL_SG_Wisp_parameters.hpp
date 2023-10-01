#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Weapon_MAL_SG_Wisp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_Weapon_MAL_SG_Wisp.Proj_Weapon_MAL_SG_Wisp_C.UserConstructionScript
struct AProj_Weapon_MAL_SG_Wisp_C_UserConstructionScript_Params
{
};

// Function Proj_Weapon_MAL_SG_Wisp.Proj_Weapon_MAL_SG_Wisp_C.ReceiveDestroyed
struct AProj_Weapon_MAL_SG_Wisp_C_ReceiveDestroyed_Params
{
};

// Function Proj_Weapon_MAL_SG_Wisp.Proj_Weapon_MAL_SG_Wisp_C.BndEvt__TriggerCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Proj_Weapon_MAL_SG_Wisp
struct AProj_Weapon_MAL_SG_Wisp_C_BndEvt__TriggerCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Proj_Weapon_MAL_SG_Wisp_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_Weapon_MAL_SG_Wisp.Proj_Weapon_MAL_SG_Wisp_C.BndEvt__TriggerCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Proj_Weapon_MAL_SG_Wisp
struct AProj_Weapon_MAL_SG_Wisp_C_BndEvt__TriggerCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Proj_Weapon_MAL_SG_Wisp_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Weapon_MAL_SG_Wisp.Proj_Weapon_MAL_SG_Wisp_C.ExecuteUbergraph_Proj_Weapon_MAL_SG_Wisp
struct AProj_Weapon_MAL_SG_Wisp_C_ExecuteUbergraph_Proj_Weapon_MAL_SG_Wisp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
