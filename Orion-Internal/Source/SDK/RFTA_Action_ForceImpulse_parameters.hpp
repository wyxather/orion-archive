#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_ForceImpulse_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_ForceImpulse.Action_ForceImpulse_C.ApplyOffset
struct UAction_ForceImpulse_C_ApplyOffset_Params
{
	struct FVector*                                    Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_ForceImpulse.Action_ForceImpulse_C.GetMassScale
struct UAction_ForceImpulse_C_GetMassScale_Params
{
	class ACharacter**                                 Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_ForceImpulse.Action_ForceImpulse_C.OnTick
struct UAction_ForceImpulse_C_OnTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_ForceImpulse.Action_ForceImpulse_C.OnActionStart
struct UAction_ForceImpulse_C_OnActionStart_Params
{
};

// Function Action_ForceImpulse.Action_ForceImpulse_C.ExecuteUbergraph_Action_ForceImpulse
struct UAction_ForceImpulse_C_ExecuteUbergraph_Action_ForceImpulse_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
