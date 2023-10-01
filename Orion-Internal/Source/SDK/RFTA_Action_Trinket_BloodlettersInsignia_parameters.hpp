#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Trinket_BloodlettersInsignia_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Trinket_BloodlettersInsignia.Action_Trinket_BloodlettersInsignia_C.GetLifeSteal
struct UAction_Trinket_BloodlettersInsignia_C_GetLifeSteal_Params
{
	float*                                             Lifesteal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scalar;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Trinket_BloodlettersInsignia.Action_Trinket_BloodlettersInsignia_C.DoDevoted
struct UAction_Trinket_BloodlettersInsignia_C_DoDevoted_Params
{
	float*                                             Heal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Trinket_BloodlettersInsignia.Action_Trinket_BloodlettersInsignia_C.GetCharactersForDevotion
struct UAction_Trinket_BloodlettersInsignia_C_GetCharactersForDevotion_Params
{
	class ACharacterGunfire**                          Ref;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACharacterGunfire*>                   Characters;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Action_Trinket_BloodlettersInsignia.Action_Trinket_BloodlettersInsignia_C.GetSiphonerTraitLifeStealMod
struct UAction_Trinket_BloodlettersInsignia_C_GetSiphonerTraitLifeStealMod_Params
{
	float                                              ModDamage;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Trinket_BloodlettersInsignia.Action_Trinket_BloodlettersInsignia_C.IsDamageTypeBleed
struct UAction_Trinket_BloodlettersInsignia_C_IsDamageTypeBleed_Params
{
	class UClass**                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isbleed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Trinket_BloodlettersInsignia.Action_Trinket_BloodlettersInsignia_C.ModifyDamage
struct UAction_Trinket_BloodlettersInsignia_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
