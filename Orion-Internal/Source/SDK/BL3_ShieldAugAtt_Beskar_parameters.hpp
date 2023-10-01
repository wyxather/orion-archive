#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAugAtt_Beskar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ShieldAugAtt_Beskar.ShieldAugAtt_Beskar_C.K2_OnShieldEquipped
struct UShieldAugAtt_Beskar_C_K2_OnShieldEquipped_Params
{
	class AShield**                                    Shield;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AOakCharacter**                              Equipper;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAugmentData                                StackData;                                                // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

// Function ShieldAugAtt_Beskar.ShieldAugAtt_Beskar_C.K2_OnShieldUnequipped
struct UShieldAugAtt_Beskar_C_K2_OnShieldUnequipped_Params
{
	class AShield**                                    Shield;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AOakCharacter**                              Equipper;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAugmentData                                StackData;                                                // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
