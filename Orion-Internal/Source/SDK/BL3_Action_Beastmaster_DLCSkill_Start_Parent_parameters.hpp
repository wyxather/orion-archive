#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Beastmaster_DLCSkill_Start_Parent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Beastmaster_DLCSkill_Start_Parent.Action_Beastmaster_DLCSkill_Start_Parent_C.Notify_SpawnTrap
struct UAction_Beastmaster_DLCSkill_Start_Parent_C_Notify_SpawnTrap_Params
{
};

// Function Action_Beastmaster_DLCSkill_Start_Parent.Action_Beastmaster_DLCSkill_Start_Parent_C.OnServerBegin
struct UAction_Beastmaster_DLCSkill_Start_Parent_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Beastmaster_DLCSkill_Start_Parent.Action_Beastmaster_DLCSkill_Start_Parent_C.ExecuteUbergraph_Action_Beastmaster_DLCSkill_Start_Parent
struct UAction_Beastmaster_DLCSkill_Start_Parent_C_ExecuteUbergraph_Action_Beastmaster_DLCSkill_Start_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
