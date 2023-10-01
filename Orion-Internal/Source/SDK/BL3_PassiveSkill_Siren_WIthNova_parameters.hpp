#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_WIthNova_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_WIthNova.PassiveSkill_Siren_WIthNova_C.GetNovaExplosion
struct UPassiveSkill_Siren_WIthNova_C_GetNovaExplosion_Params
{
	class UClass*                                      DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UExplosionData*                              ExplosionData;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Siren_WIthNova.PassiveSkill_Siren_WIthNova_C.GetNovaDamage
struct UPassiveSkill_Siren_WIthNova_C_GetNovaDamage_Params
{
	float                                              res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Siren_WIthNova.PassiveSkill_Siren_WIthNova_C.DoStandaloneNova
struct UPassiveSkill_Siren_WIthNova_C_DoStandaloneNova_Params
{
	struct FVector                                     InLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UClass*                                      InElement;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Knockback;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
