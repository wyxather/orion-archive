#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PetLoader_Melee_R_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_PetLoader_Melee_R.Action_PetLoader_Melee_R_C.OnBegin
struct UAction_PetLoader_Melee_R_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PetLoader_Melee_R.Action_PetLoader_Melee_R_C.Notify_Melee
struct UAction_PetLoader_Melee_R_C_Notify_Melee_Params
{
};

// Function Action_PetLoader_Melee_R.Action_PetLoader_Melee_R_C.ExecuteUbergraph_Action_PetLoader_Melee_R
struct UAction_PetLoader_Melee_R_C_ExecuteUbergraph_Action_PetLoader_Melee_R_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
