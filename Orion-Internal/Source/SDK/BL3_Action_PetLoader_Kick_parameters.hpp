#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PetLoader_Kick_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_PetLoader_Kick.Action_PetLoader_Kick_C.OnBegin
struct UAction_PetLoader_Kick_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PetLoader_Kick.Action_PetLoader_Kick_C.DoDamageNow
struct UAction_PetLoader_Kick_C_DoDamageNow_Params
{
};

// Function Action_PetLoader_Kick.Action_PetLoader_Kick_C.ExecuteUbergraph_Action_PetLoader_Kick
struct UAction_PetLoader_Kick_C_ExecuteUbergraph_Action_PetLoader_Kick_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
