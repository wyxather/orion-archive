#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_TechSlaughterDiscovery_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Set_GoToSanctuary
struct UMission_TechSlaughterDiscovery_C_Set_GoToSanctuary_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.OBJ_GoToSanctuary
struct UMission_TechSlaughterDiscovery_C_OBJ_GoToSanctuary_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Set_TechSlaughterTitleCard
struct UMission_TechSlaughterDiscovery_C_Set_TechSlaughterTitleCard_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Obj_PlanetTitleCard
struct UMission_TechSlaughterDiscovery_C_Obj_PlanetTitleCard_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.SET_UseDropPod_OnSanctuary
struct UMission_TechSlaughterDiscovery_C_SET_UseDropPod_OnSanctuary_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Obj_UseDropPod
struct UMission_TechSlaughterDiscovery_C_Obj_UseDropPod_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.OBJ_ReNavigate_TechSlaughter
struct UMission_TechSlaughterDiscovery_C_OBJ_ReNavigate_TechSlaughter_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Update_ReNavigate_TechSlaughter
struct UMission_TechSlaughterDiscovery_C_Update_ReNavigate_TechSlaughter_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Set_Navigate_TechSlaughter
struct UMission_TechSlaughterDiscovery_C_Set_Navigate_TechSlaughter_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Obj_Navigate_TechSlaughter
struct UMission_TechSlaughterDiscovery_C_Obj_Navigate_TechSlaughter_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.UPDATE_Navigate_TechSlaughter
struct UMission_TechSlaughterDiscovery_C_UPDATE_Navigate_TechSlaughter_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.ADVANCE_Navigate_TechSlaughter
struct UMission_TechSlaughterDiscovery_C_ADVANCE_Navigate_TechSlaughter_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.AdvanceTo_PlanetTitleCard
struct UMission_TechSlaughterDiscovery_C_AdvanceTo_PlanetTitleCard_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Set_UseDropPod_OnPlanet
struct UMission_TechSlaughterDiscovery_C_Set_UseDropPod_OnPlanet_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.[OBJ_UseDropPod_Objective] PROXY
struct UMission_TechSlaughterDiscovery_C__OBJ_UseDropPod_Objective__PROXY_Params
{
};

// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Set_TalkToNPC
struct UMission_TechSlaughterDiscovery_C_Set_TalkToNPC_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Obj_TalkToNPC
struct UMission_TechSlaughterDiscovery_C_Obj_TalkToNPC_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Update_TalkToNPC
struct UMission_TechSlaughterDiscovery_C_Update_TalkToNPC_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.Update_GoToSanctuary
struct UMission_TechSlaughterDiscovery_C_Update_GoToSanctuary_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_TechSlaughterDiscovery.Mission_TechSlaughterDiscovery_C.ExecuteUbergraph_Mission_TechSlaughterDiscovery
struct UMission_TechSlaughterDiscovery_C_ExecuteUbergraph_Mission_TechSlaughterDiscovery_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
