#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PunkBadass_Taunt4_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_PunkBadass_Taunt4.Action_PunkBadass_Taunt4_C.OnEnd
struct UAction_PunkBadass_Taunt4_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PunkBadass_Taunt4.Action_PunkBadass_Taunt4_C.ExecuteUbergraph_Action_PunkBadass_Taunt4
struct UAction_PunkBadass_Taunt4_C_ExecuteUbergraph_Action_PunkBadass_Taunt4_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
