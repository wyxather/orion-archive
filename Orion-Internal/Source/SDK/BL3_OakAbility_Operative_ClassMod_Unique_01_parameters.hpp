#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Operative_ClassMod_Unique_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Operative_ClassMod_Unique_01.OakAbility_Operative_ClassMod_Unique_01_C.OnActivated
struct UOakAbility_Operative_ClassMod_Unique_01_C_OnActivated_Params
{
};

// Function OakAbility_Operative_ClassMod_Unique_01.OakAbility_Operative_ClassMod_Unique_01_C.OnActionSkillActivated
struct UOakAbility_Operative_ClassMod_Unique_01_C_OnActionSkillActivated_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Operative_ClassMod_Unique_01.OakAbility_Operative_ClassMod_Unique_01_C.ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_01
struct UOakAbility_Operative_ClassMod_Unique_01_C_ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_01_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
