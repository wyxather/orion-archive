#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PetLoader_EXPLode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_PetLoader_EXPLode.Action_PetLoader_EXPLode_C.OnServerBegin
struct UAction_PetLoader_EXPLode_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PetLoader_EXPLode.Action_PetLoader_EXPLode_C.OnServerEnd
struct UAction_PetLoader_EXPLode_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PetLoader_EXPLode.Action_PetLoader_EXPLode_C.ExecuteUbergraph_Action_PetLoader_EXPLode
struct UAction_PetLoader_EXPLode_C_ExecuteUbergraph_Action_PetLoader_EXPLode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
