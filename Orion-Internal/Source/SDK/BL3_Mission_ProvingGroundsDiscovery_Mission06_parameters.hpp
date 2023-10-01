#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_ProvingGroundsDiscovery_Mission06_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_ProvingGroundsDiscovery_Mission06.Mission_ProvingGroundsDiscovery_Mission06_C.Update_Navigate_NewPlanet
struct UMission_ProvingGroundsDiscovery_Mission06_C_Update_Navigate_NewPlanet_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_ProvingGroundsDiscovery_Mission06.Mission_ProvingGroundsDiscovery_Mission06_C.Obj_Navigate_NewPlanet
struct UMission_ProvingGroundsDiscovery_Mission06_C_Obj_Navigate_NewPlanet_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_ProvingGroundsDiscovery_Mission06.Mission_ProvingGroundsDiscovery_Mission06_C.Obj_UseDropPod
struct UMission_ProvingGroundsDiscovery_Mission06_C_Obj_UseDropPod_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_ProvingGroundsDiscovery_Mission06.Mission_ProvingGroundsDiscovery_Mission06_C.Set_Navigate_NewPlanet
struct UMission_ProvingGroundsDiscovery_Mission06_C_Set_Navigate_NewPlanet_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_ProvingGroundsDiscovery_Mission06.Mission_ProvingGroundsDiscovery_Mission06_C.Advance_Navigate_NewPlanet
struct UMission_ProvingGroundsDiscovery_Mission06_C_Advance_Navigate_NewPlanet_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_ProvingGroundsDiscovery_Mission06.Mission_ProvingGroundsDiscovery_Mission06_C.Obj_ReNavigate_NewPlanet
struct UMission_ProvingGroundsDiscovery_Mission06_C_Obj_ReNavigate_NewPlanet_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_ProvingGroundsDiscovery_Mission06.Mission_ProvingGroundsDiscovery_Mission06_C.AdvanceTo_ArriveAtMap
struct UMission_ProvingGroundsDiscovery_Mission06_C_AdvanceTo_ArriveAtMap_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_ProvingGroundsDiscovery_Mission06.Mission_ProvingGroundsDiscovery_Mission06_C.Set_UseDropPod
struct UMission_ProvingGroundsDiscovery_Mission06_C_Set_UseDropPod_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_ProvingGroundsDiscovery_Mission06.Mission_ProvingGroundsDiscovery_Mission06_C.Set_ArriveAtMap
struct UMission_ProvingGroundsDiscovery_Mission06_C_Set_ArriveAtMap_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_ProvingGroundsDiscovery_Mission06.Mission_ProvingGroundsDiscovery_Mission06_C.[OBJ_UseDropPod_Objective] PROXY
struct UMission_ProvingGroundsDiscovery_Mission06_C__OBJ_UseDropPod_Objective__PROXY_Params
{
};

// Function Mission_ProvingGroundsDiscovery_Mission06.Mission_ProvingGroundsDiscovery_Mission06_C.ExecuteUbergraph_Mission_ProvingGroundsDiscovery_Mission06
struct UMission_ProvingGroundsDiscovery_Mission06_C_ExecuteUbergraph_Mission_ProvingGroundsDiscovery_Mission06_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
