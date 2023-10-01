#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Siren_ClassMod_Unique_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Siren_ClassMod_Unique_01.OakAbility_Siren_ClassMod_Unique_01_C.OnActivated
struct UOakAbility_Siren_ClassMod_Unique_01_C_OnActivated_Params
{
};

// Function OakAbility_Siren_ClassMod_Unique_01.OakAbility_Siren_ClassMod_Unique_01_C.SirenUnique01_GraspedTarget
struct UOakAbility_Siren_ClassMod_Unique_01_C_SirenUnique01_GraspedTarget_Params
{
	class AGbxCharacter*                               GraspedTarget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Siren_ClassMod_Unique_01.OakAbility_Siren_ClassMod_Unique_01_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_01
struct UOakAbility_Siren_ClassMod_Unique_01_C_ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_01_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
