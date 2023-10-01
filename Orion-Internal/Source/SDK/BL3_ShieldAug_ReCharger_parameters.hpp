#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAug_ReCharger_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ShieldAug_ReCharger.ShieldAug_ReCharger_C.K2_OnBarrierEnd
struct UShieldAug_ReCharger_C_K2_OnBarrierEnd_Params
{
	class AActor**                                     BarrierActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AShield**                                    Shield;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAugmentData                                StackData;                                                // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

// Function ShieldAug_ReCharger.ShieldAug_ReCharger_C.RestoreShield
struct UShieldAug_ReCharger_C_RestoreShield_Params
{
	class AOakCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShieldAug_ReCharger.ShieldAug_ReCharger_C.K2_OnShieldUnequipped
struct UShieldAug_ReCharger_C_K2_OnShieldUnequipped_Params
{
	class AShield**                                    Shield;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AOakCharacter**                              Equipper;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAugmentData                                StackData;                                                // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

// Function ShieldAug_ReCharger.ShieldAug_ReCharger_C.K2_NativeDelayCallback
struct UShieldAug_ReCharger_C_K2_NativeDelayCallback_Params
{
	class AShield**                                    Shield;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAugmentData                                StackData;                                                // (BlueprintVisible, Parm, OutParm, ReferenceParm)
	struct FName*                                      DelayName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShieldAug_ReCharger.ShieldAug_ReCharger_C.K2_OnShieldDepleted
struct UShieldAug_ReCharger_C_K2_OnShieldDepleted_Params
{
	class AShield**                                    Shield;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameResourcePoolReference*                 ResourcePool;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FAugmentData                                StackData;                                                // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
