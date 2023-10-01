#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_GroundSlam_High_Gunner_Exit_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_GroundSlam_High_Gunner_Exit.Action_GroundSlam_High_Gunner_Exit_C.OnBeginBringUpWeapon
struct UAction_GroundSlam_High_Gunner_Exit_C_OnBeginBringUpWeapon_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_GroundSlam_High_Gunner_Exit.Action_GroundSlam_High_Gunner_Exit_C.OnEnd
struct UAction_GroundSlam_High_Gunner_Exit_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_GroundSlam_High_Gunner_Exit.Action_GroundSlam_High_Gunner_Exit_C.PlayVFX
struct UAction_GroundSlam_High_Gunner_Exit_C_PlayVFX_Params
{
};

// Function Action_GroundSlam_High_Gunner_Exit.Action_GroundSlam_High_Gunner_Exit_C.OnBegin
struct UAction_GroundSlam_High_Gunner_Exit_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_GroundSlam_High_Gunner_Exit.Action_GroundSlam_High_Gunner_Exit_C.ExecuteUbergraph_Action_GroundSlam_High_Gunner_Exit
struct UAction_GroundSlam_High_Gunner_Exit_C_ExecuteUbergraph_Action_GroundSlam_High_Gunner_Exit_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
