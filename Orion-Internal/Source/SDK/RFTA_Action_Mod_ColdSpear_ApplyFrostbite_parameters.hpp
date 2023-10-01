#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_ColdSpear_ApplyFrostbite_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mod_ColdSpear_ApplyFrostbite.Action_Mod_ColdSpear_ApplyFrostbite_C.GetDamageCause
struct UAction_Mod_ColdSpear_ApplyFrostbite_C_GetDamageCause_Params
{
	class AActor*                                      Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_ColdSpear_ApplyFrostbite.Action_Mod_ColdSpear_ApplyFrostbite_C.AddFrostbiteStack
struct UAction_Mod_ColdSpear_ApplyFrostbite_C_AddFrostbiteStack_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_ColdSpear_ApplyFrostbite.Action_Mod_ColdSpear_ApplyFrostbite_C.OnActionStart
struct UAction_Mod_ColdSpear_ApplyFrostbite_C_OnActionStart_Params
{
};

// Function Action_Mod_ColdSpear_ApplyFrostbite.Action_Mod_ColdSpear_ApplyFrostbite_C.ExecuteUbergraph_Action_Mod_ColdSpear_ApplyFrostbite
struct UAction_Mod_ColdSpear_ApplyFrostbite_C_ExecuteUbergraph_Action_Mod_ColdSpear_ApplyFrostbite_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
