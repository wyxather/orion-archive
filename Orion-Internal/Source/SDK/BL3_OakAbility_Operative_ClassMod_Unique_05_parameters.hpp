#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Operative_ClassMod_Unique_05_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Operative_ClassMod_Unique_05.OakAbility_Operative_ClassMod_Unique_05_C.OnActivated
struct UOakAbility_Operative_ClassMod_Unique_05_C_OnActivated_Params
{
};

// Function OakAbility_Operative_ClassMod_Unique_05.OakAbility_Operative_ClassMod_Unique_05_C.OnCausedMaxResourceEffect
struct UOakAbility_Operative_ClassMod_Unique_05_C_OnCausedMaxResourceEffect_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EOakStatusEffectResourceEffectType                 ResourceEffectType;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Operative_ClassMod_Unique_05.OakAbility_Operative_ClassMod_Unique_05_C.ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_05
struct UOakAbility_Operative_ClassMod_Unique_05_C_ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_05_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
