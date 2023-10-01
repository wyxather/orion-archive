#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAug_VersionOmNom_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ShieldAug_VersionOmNom.ShieldAug_VersionOmNom_C.K2_OnShieldDepleted
struct UShieldAug_VersionOmNom_C_K2_OnShieldDepleted_Params
{
	class AShield**                                    Shield;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameResourcePoolReference*                 ResourcePool;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FAugmentData                                StackData;                                                // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
