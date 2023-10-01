#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Beastmaster_AttackCommand_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.Notify_Attack
struct UAction_Beastmaster_AttackCommand_C_Notify_Attack_Params
{
};

// Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.OnBeginBringUpWeapon
struct UAction_Beastmaster_AttackCommand_C_OnBeginBringUpWeapon_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.OnBegin
struct UAction_Beastmaster_AttackCommand_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.Notify_Feedback
struct UAction_Beastmaster_AttackCommand_C_Notify_Feedback_Params
{
};

// Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.OnServerEnd
struct UAction_Beastmaster_AttackCommand_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.ExecuteUbergraph_Action_Beastmaster_AttackCommand
struct UAction_Beastmaster_AttackCommand_C_ExecuteUbergraph_Action_Beastmaster_AttackCommand_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
