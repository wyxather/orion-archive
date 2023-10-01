#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_AOE_Weapon_WorldBreaker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_AOE_Weapon_WorldBreaker.Action_AOE_Weapon_WorldBreaker_C.Get Socket Location
struct UAction_AOE_Weapon_WorldBreaker_C_Get_Socket_Location_Params
{
	struct FName*                                      InSocketName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_AOE_Weapon_WorldBreaker.Action_AOE_Weapon_WorldBreaker_C.OnActionStart
struct UAction_AOE_Weapon_WorldBreaker_C_OnActionStart_Params
{
};

// Function Action_AOE_Weapon_WorldBreaker.Action_AOE_Weapon_WorldBreaker_C.ExecuteUbergraph_Action_AOE_Weapon_WorldBreaker
struct UAction_AOE_Weapon_WorldBreaker_C_ExecuteUbergraph_Action_AOE_Weapon_WorldBreaker_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
