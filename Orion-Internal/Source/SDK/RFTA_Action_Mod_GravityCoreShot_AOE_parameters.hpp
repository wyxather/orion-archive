#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_GravityCoreShot_AOE_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mod_GravityCoreShot_AOE.Action_Mod_GravityCoreShot_AOE_C.GetDamage
struct UAction_Mod_GravityCoreShot_AOE_C_GetDamage_Params
{
	float                                              Damage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_GravityCoreShot_AOE.Action_Mod_GravityCoreShot_AOE_C.Get Socket Location
struct UAction_Mod_GravityCoreShot_AOE_C_Get_Socket_Location_Params
{
	struct FName*                                      InSocketName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_GravityCoreShot_AOE.Action_Mod_GravityCoreShot_AOE_C.OnActionStart
struct UAction_Mod_GravityCoreShot_AOE_C_OnActionStart_Params
{
};

// Function Action_Mod_GravityCoreShot_AOE.Action_Mod_GravityCoreShot_AOE_C.PreprocessAOE
struct UAction_Mod_GravityCoreShot_AOE_C_PreprocessAOE_Params
{
	int*                                               NumHits;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_GravityCoreShot_AOE.Action_Mod_GravityCoreShot_AOE_C.ExecuteUbergraph_Action_Mod_GravityCoreShot_AOE
struct UAction_Mod_GravityCoreShot_AOE_C_ExecuteUbergraph_Action_Mod_GravityCoreShot_AOE_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
