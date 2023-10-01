#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAugAtt_SuperSoldier_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ShieldAugAtt_SuperSoldier.ShieldAugAtt_SuperSoldier_C.K2_OnShieldNotFilled
struct UShieldAugAtt_SuperSoldier_C_K2_OnShieldNotFilled_Params
{
	class AShield**                                    Shield;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameResourcePoolReference*                 ResourcePool;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FAugmentData                                StackData;                                                // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

// Function ShieldAugAtt_SuperSoldier.ShieldAugAtt_SuperSoldier_C.K2_OnShieldFilled
struct UShieldAugAtt_SuperSoldier_C_K2_OnShieldFilled_Params
{
	class AShield**                                    Shield;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameResourcePoolReference*                 ResourcePool;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FAugmentData                                StackData;                                                // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
