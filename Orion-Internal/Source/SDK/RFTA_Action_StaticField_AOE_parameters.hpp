#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_StaticField_AOE_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_StaticField_AOE.Action_StaticField_AOE_C.EvaluateCause
struct UAction_StaticField_AOE_C_EvaluateCause_Params
{
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire*                           Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_StaticField_AOE.Action_StaticField_AOE_C.IsValidTarget
struct UAction_StaticField_AOE_C_IsValidTarget_Params
{
	class AActor**                                     _Target;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_StaticField_AOE.Action_StaticField_AOE_C.OnRep_ExplosionDelay
struct UAction_StaticField_AOE_C_OnRep_ExplosionDelay_Params
{
};

// Function Action_StaticField_AOE.Action_StaticField_AOE_C.Get Socket Location
struct UAction_StaticField_AOE_C_Get_Socket_Location_Params
{
	struct FName*                                      InSocketName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_StaticField_AOE.Action_StaticField_AOE_C.OnTick
struct UAction_StaticField_AOE_C_OnTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_StaticField_AOE.Action_StaticField_AOE_C.OnActionStart
struct UAction_StaticField_AOE_C_OnActionStart_Params
{
};

// Function Action_StaticField_AOE.Action_StaticField_AOE_C.UpdateFX
struct UAction_StaticField_AOE_C_UpdateFX_Params
{
};

// Function Action_StaticField_AOE.Action_StaticField_AOE_C.StopFX
struct UAction_StaticField_AOE_C_StopFX_Params
{
};

// Function Action_StaticField_AOE.Action_StaticField_AOE_C.OnActionStop
struct UAction_StaticField_AOE_C_OnActionStop_Params
{
};

// Function Action_StaticField_AOE.Action_StaticField_AOE_C.ExecuteUbergraph_Action_StaticField_AOE
struct UAction_StaticField_AOE_C_ExecuteUbergraph_Action_StaticField_AOE_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
