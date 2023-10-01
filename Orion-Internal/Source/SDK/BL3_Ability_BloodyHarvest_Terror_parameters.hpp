#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_BloodyHarvest_Terror_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ForceResetAllTerror
struct UAbility_BloodyHarvest_Terror_C_ForceResetAllTerror_Params
{
};

// Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.SetTerrorResourcePool
struct UAbility_BloodyHarvest_Terror_C_SetTerrorResourcePool_Params
{
};

// Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.GetTerrorResourcePoolValues
struct UAbility_BloodyHarvest_Terror_C_GetTerrorResourcePoolValues_Params
{
	bool                                               IsValid_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Terror_Current_Value;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.RemoveTerror
struct UAbility_BloodyHarvest_Terror_C_RemoveTerror_Params
{
};

// Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ApplyTerror3_Presentation
struct UAbility_BloodyHarvest_Terror_C_ApplyTerror3_Presentation_Params
{
};

// Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ApplyTerror2_Presentation
struct UAbility_BloodyHarvest_Terror_C_ApplyTerror2_Presentation_Params
{
};

// Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ApplyTerror1_Presentation
struct UAbility_BloodyHarvest_Terror_C_ApplyTerror1_Presentation_Params
{
};

// Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.RemoveTerror3_Presentation
struct UAbility_BloodyHarvest_Terror_C_RemoveTerror3_Presentation_Params
{
};

// Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.RemoveTerror2_Presentation
struct UAbility_BloodyHarvest_Terror_C_RemoveTerror2_Presentation_Params
{
};

// Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.RemoveTerror1_Presentation
struct UAbility_BloodyHarvest_Terror_C_RemoveTerror1_Presentation_Params
{
};

// Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ApplyTerror
struct UAbility_BloodyHarvest_Terror_C_ApplyTerror_Params
{
};

// Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.Terror
struct UAbility_BloodyHarvest_Terror_C_Terror_Params
{
};

// Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.Update Terror
struct UAbility_BloodyHarvest_Terror_C_Update_Terror_Params
{
	struct FGameResourcePoolReference                  ResourcePool;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.OnDeath_Terror
struct UAbility_BloodyHarvest_Terror_C_OnDeath_Terror_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.OnActivated
struct UAbility_BloodyHarvest_Terror_C_OnActivated_Params
{
};

// Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.OnDeactivated
struct UAbility_BloodyHarvest_Terror_C_OnDeactivated_Params
{
};

// Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ExecuteUbergraph_Ability_BloodyHarvest_Terror
struct UAbility_BloodyHarvest_Terror_C_ExecuteUbergraph_Ability_BloodyHarvest_Terror_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
