#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Beastmaster_StandInRakk_Rakk_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Beastmaster_StandInRakk_Rakk.Action_Beastmaster_StandInRakk_Rakk_C.OnEnd
struct UAction_Beastmaster_StandInRakk_Rakk_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Beastmaster_StandInRakk_Rakk.Action_Beastmaster_StandInRakk_Rakk_C.ExecuteUbergraph_Action_Beastmaster_StandInRakk_Rakk
struct UAction_Beastmaster_StandInRakk_Rakk_C_ExecuteUbergraph_Action_Beastmaster_StandInRakk_Rakk_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
