#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Interface_ActionSkill_Operative_ShoulderCannon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Interface_ActionSkill_Operative_ShoulderCannon.Interface_ActionSkill_Operative_ShoulderCannon_C.StartShoulderCannonMod3Timer
struct UInterface_ActionSkill_Operative_ShoulderCannon_C_StartShoulderCannonMod3Timer_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_ActionSkill_Operative_ShoulderCannon.Interface_ActionSkill_Operative_ShoulderCannon_C.GetCannonRef
struct UInterface_ActionSkill_Operative_ShoulderCannon_C_GetCannonRef_Params
{
	class AActor*                                      Ref;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_ActionSkill_Operative_ShoulderCannon.Interface_ActionSkill_Operative_ShoulderCannon_C.IsShouldCannonModSlotted
struct UInterface_ActionSkill_Operative_ShoulderCannon_C_IsShouldCannonModSlotted_Params
{
	TEnumAsByte<EShoulderCannonMods>                   Mod;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
