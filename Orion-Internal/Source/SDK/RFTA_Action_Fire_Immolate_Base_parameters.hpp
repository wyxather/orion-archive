#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Fire_Immolate_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.Do Damage
struct UAction_Fire_Immolate_Base_C_Do_Damage_Params
{
};

// Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.Clear Visual
struct UAction_Fire_Immolate_Base_C_Clear_Visual_Params
{
};

// Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.Set Visual
struct UAction_Fire_Immolate_Base_C_Set_Visual_Params
{
	struct FName*                                      VisualID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire*                           AsCharacter_Gunfire;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.PlayVFX
struct UAction_Fire_Immolate_Base_C_PlayVFX_Params
{
	class UParticleSystem**                            EmitterTemplate;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      AttachPointName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.AllowAction
struct UAction_Fire_Immolate_Base_C_AllowAction_Params
{
	class UClass**                                     ActionBP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FDamageInfo*                                InDamageInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.Start Immolate
struct UAction_Fire_Immolate_Base_C_Start_Immolate_Params
{
	float*                                             FrequencyTimer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.OnDotTimer
struct UAction_Fire_Immolate_Base_C_OnDotTimer_Params
{
};

// Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.OnActionStart
struct UAction_Fire_Immolate_Base_C_OnActionStart_Params
{
};

// Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.OnDead_Event_1
struct UAction_Fire_Immolate_Base_C_OnDead_Event_1_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.OnPostComputeStats
struct UAction_Fire_Immolate_Base_C_OnPostComputeStats_Params
{
};

// Function Action_Fire_Immolate_Base.Action_Fire_Immolate_Base_C.ExecuteUbergraph_Action_Fire_Immolate_Base
struct UAction_Fire_Immolate_Base_C_ExecuteUbergraph_Action_Fire_Immolate_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
