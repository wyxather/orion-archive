#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PetLoader_EyeLaser_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.AttackCommandUsed
struct UAction_PetLoader_EyeLaser_C_AttackCommandUsed_Params
{
};

// Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.CustomEvent
struct UAction_PetLoader_EyeLaser_C_CustomEvent_Params
{
};

// Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.OnServerEnd
struct UAction_PetLoader_EyeLaser_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.OnEnd
struct UAction_PetLoader_EyeLaser_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Start_EyeLaser
struct UAction_PetLoader_EyeLaser_C_Start_EyeLaser_Params
{
};

// Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Stop_EyeLaser
struct UAction_PetLoader_EyeLaser_C_Stop_EyeLaser_Params
{
};

// Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.CustomEvent_4
struct UAction_PetLoader_EyeLaser_C_CustomEvent_4_Params
{
};

// Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Start_EyeLaserCharge
struct UAction_PetLoader_EyeLaser_C_Start_EyeLaserCharge_Params
{
};

// Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.OnServerBegin
struct UAction_PetLoader_EyeLaser_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Audio_EyeBeam_Charge
struct UAction_PetLoader_EyeLaser_C_Audio_EyeBeam_Charge_Params
{
};

// Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.ExecuteUbergraph_Action_PetLoader_EyeLaser
struct UAction_PetLoader_EyeLaser_C_ExecuteUbergraph_Action_PetLoader_EyeLaser_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
