#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_HuntersMark_Aura_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mod_HuntersMark_Aura.Mod_HuntersMark_Aura_C.OnActionRemoved
struct UMod_HuntersMark_Aura_C_OnActionRemoved_Params
{
	class UActionBase**                                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_HuntersMark_Aura.Mod_HuntersMark_Aura_C.Bind and add action id to map
struct UMod_HuntersMark_Aura_C_Bind_and_add_action_id_to_map_Params
{
	class UActionComponent**                           Action_Component;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Action_ID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_HuntersMark_Aura.Mod_HuntersMark_Aura_C.OnActionStart
struct UMod_HuntersMark_Aura_C_OnActionStart_Params
{
};

// Function Mod_HuntersMark_Aura.Mod_HuntersMark_Aura_C.OnActionStop
struct UMod_HuntersMark_Aura_C_OnActionStop_Params
{
};

// Function Mod_HuntersMark_Aura.Mod_HuntersMark_Aura_C.ExecuteUbergraph_Mod_HuntersMark_Aura
struct UMod_HuntersMark_Aura_C_ExecuteUbergraph_Mod_HuntersMark_Aura_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
