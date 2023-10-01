#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_GravityCoreShot_PullForce_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mod_GravityCoreShot_PullForce_Base.Action_Mod_GravityCoreShot_PullForce_Base_C.ShouldMoveTarget
struct UAction_Mod_GravityCoreShot_PullForce_Base_C_ShouldMoveTarget_Params
{
	class ACharacterGunfire**                          Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_GravityCoreShot_PullForce_Base.Action_Mod_GravityCoreShot_PullForce_Base_C.GetEpicenterLocation
struct UAction_Mod_GravityCoreShot_PullForce_Base_C_GetEpicenterLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_GravityCoreShot_PullForce_Base.Action_Mod_GravityCoreShot_PullForce_Base_C.ApplyForce
struct UAction_Mod_GravityCoreShot_PullForce_Base_C_ApplyForce_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_GravityCoreShot_PullForce_Base.Action_Mod_GravityCoreShot_PullForce_Base_C.OnTick
struct UAction_Mod_GravityCoreShot_PullForce_Base_C_OnTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_GravityCoreShot_PullForce_Base.Action_Mod_GravityCoreShot_PullForce_Base_C.ExecuteUbergraph_Action_Mod_GravityCoreShot_PullForce_Base
struct UAction_Mod_GravityCoreShot_PullForce_Base_C_ExecuteUbergraph_Action_Mod_GravityCoreShot_PullForce_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
