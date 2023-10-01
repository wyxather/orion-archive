#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DroneProj_TED_DarkArmy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.DistanceCHeck
struct ADroneProj_TED_DarkArmy_C_DistanceCHeck_Params
{
};

// Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.DestroyDrone
struct ADroneProj_TED_DarkArmy_C_DestroyDrone_Params
{
};

// Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.FireWeapon
struct ADroneProj_TED_DarkArmy_C_FireWeapon_Params
{
};

// Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.UserConstructionScript
struct ADroneProj_TED_DarkArmy_C_UserConstructionScript_Params
{
};

// Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.ReceiveBeginPlay
struct ADroneProj_TED_DarkArmy_C_ReceiveBeginPlay_Params
{
};

// Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.PutDownNotify
struct ADroneProj_TED_DarkArmy_C_PutDownNotify_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.OnBeginExplode
struct ADroneProj_TED_DarkArmy_C_OnBeginExplode_Params
{
};

// Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.ReloadStarted
struct ADroneProj_TED_DarkArmy_C_ReloadStarted_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.ExecuteUbergraph_DroneProj_TED_DarkArmy
struct ADroneProj_TED_DarkArmy_C_ExecuteUbergraph_DroneProj_TED_DarkArmy_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
