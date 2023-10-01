#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_WhiskeyTangoFoxtrotIED_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.UserConstructionScript
struct AProj_WhiskeyTangoFoxtrotIED_C_UserConstructionScript_Params
{
};

// Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.OnExplode
struct AProj_WhiskeyTangoFoxtrotIED_C_OnExplode_Params
{
};

// Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.OnHitWorld
struct AProj_WhiskeyTangoFoxtrotIED_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.OnHitEnemy
struct AProj_WhiskeyTangoFoxtrotIED_C_OnHitEnemy_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.ReceiveBeginPlay
struct AProj_WhiskeyTangoFoxtrotIED_C_ReceiveBeginPlay_Params
{
};

// Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_2_OakTouchedTriggerDelegate__DelegateSignature_Proj_WhiskeyTangoFoxtrotIED
struct AProj_WhiskeyTangoFoxtrotIED_C_BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_2_OakTouchedTriggerDelegate__DelegateSignature_Proj_WhiskeyTangoFoxtrotIED_Params
{
	class AActor*                                      TouchingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ComponentTouched;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Proj_WhiskeyTangoFoxtrotIED.Proj_WhiskeyTangoFoxtrotIED_C.ExecuteUbergraph_Proj_WhiskeyTangoFoxtrotIED
struct AProj_WhiskeyTangoFoxtrotIED_C_ExecuteUbergraph_Proj_WhiskeyTangoFoxtrotIED_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
