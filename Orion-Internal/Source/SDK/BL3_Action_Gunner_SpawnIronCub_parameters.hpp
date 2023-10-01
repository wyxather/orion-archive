#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Gunner_SpawnIronCub_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_SpawnIronCub
struct UAction_Gunner_SpawnIronCub_C_AN_SpawnIronCub_Params
{
};

// Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.OnServerEnd
struct UAction_Gunner_SpawnIronCub_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_EnableDevice
struct UAction_Gunner_SpawnIronCub_C_AN_EnableDevice_Params
{
};

// Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_DisableDevice
struct UAction_Gunner_SpawnIronCub_C_AN_DisableDevice_Params
{
};

// Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.OnBegin
struct UAction_Gunner_SpawnIronCub_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_EnableHologram
struct UAction_Gunner_SpawnIronCub_C_AN_EnableHologram_Params
{
};

// Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_DisableHologram
struct UAction_Gunner_SpawnIronCub_C_AN_DisableHologram_Params
{
};

// Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.ExecuteUbergraph_Action_Gunner_SpawnIronCub
struct UAction_Gunner_SpawnIronCub_C_ExecuteUbergraph_Action_Gunner_SpawnIronCub_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
