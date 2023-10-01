#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_CompanyMan_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_CompanyMan.Ability_CompanyMan_C.OnActivated
struct UAbility_CompanyMan_C_OnActivated_Params
{
};

// Function Ability_CompanyMan.Ability_CompanyMan_C.OnCausedDeath
struct UAbility_CompanyMan_C_OnCausedDeath_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_CompanyMan.Ability_CompanyMan_C.OnInventoryItemPickedUp
struct UAbility_CompanyMan_C_OnInventoryItemPickedUp_Params
{
	class AActor*                                      PickedUpActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_CompanyMan.Ability_CompanyMan_C.OnDeactivated
struct UAbility_CompanyMan_C_OnDeactivated_Params
{
};

// Function Ability_CompanyMan.Ability_CompanyMan_C.Start Investing
struct UAbility_CompanyMan_C_Start_Investing_Params
{
};

// Function Ability_CompanyMan.Ability_CompanyMan_C.Stop Investing
struct UAbility_CompanyMan_C_Stop_Investing_Params
{
};

// Function Ability_CompanyMan.Ability_CompanyMan_C.ExecuteUbergraph_Ability_CompanyMan
struct UAbility_CompanyMan_C_ExecuteUbergraph_Ability_CompanyMan_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
