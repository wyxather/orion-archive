#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_Operative_Drone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.ShouldStopAbilityOnPawnSlotComponentAttach
struct UActionSkill_Operative_Drone_C_ShouldStopAbilityOnPawnSlotComponentAttach_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.GetGoodMisfortuneRechargeValue
struct UActionSkill_Operative_Drone_C_GetGoodMisfortuneRechargeValue_Params
{
	int*                                               TotalKills;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.TrySpawnPrimaryDrone
struct UActionSkill_Operative_Drone_C_TrySpawnPrimaryDrone_Params
{
	class AOakDroneProjectile_GRMLN*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.ShouldAbortActivation
struct UActionSkill_Operative_Drone_C_ShouldAbortActivation_Params
{
	unsigned char                                      OutAbortCode;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.TryFindNewDroneTarget
struct UActionSkill_Operative_Drone_C_TryFindNewDroneTarget_Params
{
};

// Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStartActionAbility
struct UActionSkill_Operative_Drone_C_OnStartActionAbility_Params
{
};

// Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStartCalledShot
struct UActionSkill_Operative_Drone_C_OnStartCalledShot_Params
{
};

// Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStopCalledShot
struct UActionSkill_Operative_Drone_C_OnStopCalledShot_Params
{
};

// Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.StopButtonPress
struct UActionSkill_Operative_Drone_C_StopButtonPress_Params
{
};

// Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.OnStopActionAbility
struct UActionSkill_Operative_Drone_C_OnStopActionAbility_Params
{
};

// Function ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C.ExecuteUbergraph_ActionSkill_Operative_Drone
struct UActionSkill_Operative_Drone_C_ExecuteUbergraph_ActionSkill_Operative_Drone_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
