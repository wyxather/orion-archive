#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAug_Breakup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ShieldAug_Breakup.ShieldAug_Breakup_C.K2_OnReplicatedEffectTriggered
struct UShieldAug_Breakup_C_K2_OnReplicatedEffectTriggered_Params
{
	class AShield**                                    Shield;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAugmentData                                StackData;                                                // (BlueprintVisible, Parm, OutParm, ReferenceParm)
	class UObject**                                    AdditionalContext;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShieldAug_Breakup.ShieldAug_Breakup_C.K2_OnShieldUnequipped
struct UShieldAug_Breakup_C_K2_OnShieldUnequipped_Params
{
	class AShield**                                    Shield;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AOakCharacter**                              Equipper;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAugmentData                                StackData;                                                // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

// Function ShieldAug_Breakup.ShieldAug_Breakup_C.K2_OnShieldDepleted
struct UShieldAug_Breakup_C_K2_OnShieldDepleted_Params
{
	class AShield**                                    Shield;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameResourcePoolReference*                 ResourcePool;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FAugmentData                                StackData;                                                // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

// Function ShieldAug_Breakup.ShieldAug_Breakup_C.K2_OnShieldEquipped
struct UShieldAug_Breakup_C_K2_OnShieldEquipped_Params
{
	class AShield**                                    Shield;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AOakCharacter**                              Equipper;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAugmentData                                StackData;                                                // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
