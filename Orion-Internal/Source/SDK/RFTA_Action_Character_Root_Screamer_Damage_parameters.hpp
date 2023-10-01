#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Character_Root_Screamer_Damage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Character_Root_Screamer_Damage.Action_Character_Root_Screamer_Damage_C.GetTime
struct UAction_Character_Root_Screamer_Damage_C_GetTime_Params
{
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Character_Root_Screamer_Damage.Action_Character_Root_Screamer_Damage_C.OnStop
struct UAction_Character_Root_Screamer_Damage_C_OnStop_Params
{
};

// Function Action_Character_Root_Screamer_Damage.Action_Character_Root_Screamer_Damage_C.OnActionStart
struct UAction_Character_Root_Screamer_Damage_C_OnActionStart_Params
{
};

// Function Action_Character_Root_Screamer_Damage.Action_Character_Root_Screamer_Damage_C.OnTimer
struct UAction_Character_Root_Screamer_Damage_C_OnTimer_Params
{
};

// Function Action_Character_Root_Screamer_Damage.Action_Character_Root_Screamer_Damage_C.OnDead_Event_1
struct UAction_Character_Root_Screamer_Damage_C_OnDead_Event_1_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Character_Root_Screamer_Damage.Action_Character_Root_Screamer_Damage_C.OnStateChange_Event_1
struct UAction_Character_Root_Screamer_Damage_C_OnStateChange_Event_1_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      PreviousStateName;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Character_Root_Screamer_Damage.Action_Character_Root_Screamer_Damage_C.ExecuteUbergraph_Action_Character_Root_Screamer_Damage
struct UAction_Character_Root_Screamer_Damage_C_ExecuteUbergraph_Action_Character_Root_Screamer_Damage_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
