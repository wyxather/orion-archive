#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Aura_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Aura.Action_Aura_C.DoAction
struct UAction_Aura_C_DoAction_Params
{
	class UActionComponent**                           ActionComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Aura.Action_Aura_C.GetRadius
struct UAction_Aura_C_GetRadius_Params
{
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Aura.Action_Aura_C.UpdateOverlaps
struct UAction_Aura_C_UpdateOverlaps_Params
{
};

// Function Action_Aura.Action_Aura_C.ValidateActor
struct UAction_Aura_C_ValidateActor_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Aura.Action_Aura_C.OnTick
struct UAction_Aura_C_OnTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Aura.Action_Aura_C.OnBeginOverlap
struct UAction_Aura_C_OnBeginOverlap_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Aura.Action_Aura_C.OnEndOverlap
struct UAction_Aura_C_OnEndOverlap_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Aura.Action_Aura_C.OnActionStop
struct UAction_Aura_C_OnActionStop_Params
{
};

// Function Action_Aura.Action_Aura_C.ExecuteUbergraph_Action_Aura
struct UAction_Aura_C_ExecuteUbergraph_Action_Aura_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
