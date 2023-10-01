#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Operative_CM_Raid1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.OnActivated
struct UOakAbility_Operative_CM_Raid1_C_OnActivated_Params
{
};

// Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.OnStartSliding
struct UOakAbility_Operative_CM_Raid1_C_OnStartSliding_Params
{
};

// Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.OnStopSliding
struct UOakAbility_Operative_CM_Raid1_C_OnStopSliding_Params
{
	struct FSlideEndedDetails                          Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.StartClassModBonus
struct UOakAbility_Operative_CM_Raid1_C_StartClassModBonus_Params
{
};

// Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.StopClassModBonus
struct UOakAbility_Operative_CM_Raid1_C_StopClassModBonus_Params
{
};

// Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.ExecuteUbergraph_OakAbility_Operative_CM_Raid1
struct UOakAbility_Operative_CM_Raid1_C_ExecuteUbergraph_OakAbility_Operative_CM_Raid1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
