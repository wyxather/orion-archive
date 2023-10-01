#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_UnderwearTink_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_UnderwearTink.Mission_UnderwearTink_C.OnDialogSequenceFinished_3
struct UMission_UnderwearTink_C_OnDialogSequenceFinished_3_Params
{
};

// Function Mission_UnderwearTink.Mission_UnderwearTink_C.Obj_KillUndertaker
struct UMission_UnderwearTink_C_Obj_KillUndertaker_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_UnderwearTink.Mission_UnderwearTink_C.Set_UnderTaker
struct UMission_UnderwearTink_C_Set_UnderTaker_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_UnderwearTink.Mission_UnderwearTink_C.MCE_KilledTheUnderTaker
struct UMission_UnderwearTink_C_MCE_KilledTheUnderTaker_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_UnderwearTink.Mission_UnderwearTink_C.MCE_BountyUndertakerSeen
struct UMission_UnderwearTink_C_MCE_BountyUndertakerSeen_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_UnderwearTink.Mission_UnderwearTink_C.See_UnderwearTink
struct UMission_UnderwearTink_C_See_UnderwearTink_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_UnderwearTink.Mission_UnderwearTink_C.ExecuteUbergraph_Mission_UnderwearTink
struct UMission_UnderwearTink_C_ExecuteUbergraph_Mission_UnderwearTink_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
