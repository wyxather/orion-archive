#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Lilith_Grenade_3_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Lilith_Grenade_3.Action_Lilith_Grenade_2_C.OnBegin
struct UAction_Lilith_Grenade_2_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Lilith_Grenade_3.Action_Lilith_Grenade_2_C.Notify_SpawnGrenade
struct UAction_Lilith_Grenade_2_C_Notify_SpawnGrenade_Params
{
};

// Function Action_Lilith_Grenade_3.Action_Lilith_Grenade_2_C.Notify_ThrowGrenadeLil
struct UAction_Lilith_Grenade_2_C_Notify_ThrowGrenadeLil_Params
{
};

// Function Action_Lilith_Grenade_3.Action_Lilith_Grenade_2_C.OnEnd
struct UAction_Lilith_Grenade_2_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Lilith_Grenade_3.Action_Lilith_Grenade_2_C.ExecuteUbergraph_Action_Lilith_Grenade_3
struct UAction_Lilith_Grenade_2_C_ExecuteUbergraph_Action_Lilith_Grenade_3_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
