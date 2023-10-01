#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_SpiritOfMaya_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_SpiritOfMaya.Ability_SpiritOfMaya_C.OnRegistered
struct UAbility_SpiritOfMaya_C_OnRegistered_Params
{
};

// Function Ability_SpiritOfMaya.Ability_SpiritOfMaya_C.OnHitFriendly
struct UAbility_SpiritOfMaya_C_OnHitFriendly_Params
{
	struct FHitFriendlyEventDetails                    Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_SpiritOfMaya.Ability_SpiritOfMaya_C.ExecuteUbergraph_Ability_SpiritOfMaya
struct UAbility_SpiritOfMaya_C_ExecuteUbergraph_Ability_SpiritOfMaya_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
