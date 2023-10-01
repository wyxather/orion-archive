#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_DigiClone_Teleport_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_DigiClone_Teleport.Action_DigiClone_Teleport_C.OnServerEnd
struct UAction_DigiClone_Teleport_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_DigiClone_Teleport.Action_DigiClone_Teleport_C.ExecuteUbergraph_Action_DigiClone_Teleport
struct UAction_DigiClone_Teleport_C_ExecuteUbergraph_Action_DigiClone_Teleport_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
