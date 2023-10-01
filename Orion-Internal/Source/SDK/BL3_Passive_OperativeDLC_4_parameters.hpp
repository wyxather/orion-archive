#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_OperativeDLC_4_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.CalculateAbilityState
struct UPassive_OperativeDLC_3_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.OnActivated
struct UPassive_OperativeDLC_3_C_OnActivated_Params
{
};

// Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.DLCSkill3_OnActionSkillActivated
struct UPassive_OperativeDLC_3_C_DLCSkill3_OnActionSkillActivated_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.DLCSkill3_OnWeaponUsed
struct UPassive_OperativeDLC_3_C_DLCSkill3_OnWeaponUsed_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.DLCSkill3_UsedBarrier
struct UPassive_OperativeDLC_3_C_DLCSkill3_UsedBarrier_Params
{
	bool                                               PickedUp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.DLCSkill3_SwappedPlaces
struct UPassive_OperativeDLC_3_C_DLCSkill3_SwappedPlaces_Params
{
};

// Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.DLCSkill3_SEtDroneTarget
struct UPassive_OperativeDLC_3_C_DLCSkill3_SEtDroneTarget_Params
{
	class AActor*                                      NewTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.ExecuteUbergraph_Passive_OperativeDLC_4
struct UPassive_OperativeDLC_3_C_ExecuteUbergraph_Passive_OperativeDLC_4_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
