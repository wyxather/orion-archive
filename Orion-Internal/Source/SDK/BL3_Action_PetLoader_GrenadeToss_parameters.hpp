#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PetLoader_GrenadeToss_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_PetLoader_GrenadeToss.Action_PetLoader_GrenadeToss_C.OnBegin
struct UAction_PetLoader_GrenadeToss_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PetLoader_GrenadeToss.Action_PetLoader_GrenadeToss_C.OnEnd
struct UAction_PetLoader_GrenadeToss_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PetLoader_GrenadeToss.Action_PetLoader_GrenadeToss_C.Notify_Throw
struct UAction_PetLoader_GrenadeToss_C_Notify_Throw_Params
{
};

// Function Action_PetLoader_GrenadeToss.Action_PetLoader_GrenadeToss_C.ExecuteUbergraph_Action_PetLoader_GrenadeToss
struct UAction_PetLoader_GrenadeToss_C_ExecuteUbergraph_Action_PetLoader_GrenadeToss_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
