#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Siren_ClassMod_Raid1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Siren_ClassMod_Raid1.OakAbility_Siren_ClassMod_Raid1_C.OnActivated
struct UOakAbility_Siren_ClassMod_Raid1_C_OnActivated_Params
{
};

// Function OakAbility_Siren_ClassMod_Raid1.OakAbility_Siren_ClassMod_Raid1_C.SirenCMRaid1_OnActionSkillActivated
struct UOakAbility_Siren_ClassMod_Raid1_C_SirenCMRaid1_OnActionSkillActivated_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Siren_ClassMod_Raid1.OakAbility_Siren_ClassMod_Raid1_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Raid1
struct UOakAbility_Siren_ClassMod_Raid1_C_ExecuteUbergraph_OakAbility_Siren_ClassMod_Raid1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
