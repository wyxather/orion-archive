#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Player_ComputedStats_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ClampEncumbrance
struct UCharacter_Player_ComputedStats_C_ClampEncumbrance_Params
{
};

// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ModifyDamageVisualStats
struct UCharacter_Player_ComputedStats_C_ModifyDamageVisualStats_Params
{
};

// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.GenerateTotalDamageModStat
struct UCharacter_Player_ComputedStats_C_GenerateTotalDamageModStat_Params
{
	struct FName*                                      OutputStat;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      DamageModStat;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      DamageScalarStat;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ModifyCritChance
struct UCharacter_Player_ComputedStats_C_ModifyCritChance_Params
{
};

// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ModifyEquipLoad
struct UCharacter_Player_ComputedStats_C_ModifyEquipLoad_Params
{
};

// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ModifyDamageBonus
struct UCharacter_Player_ComputedStats_C_ModifyDamageBonus_Params
{
	struct FName*                                      Attribute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      AttributeMod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      DamageBonusStat;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ModifyDamageBonuses
struct UCharacter_Player_ComputedStats_C_ModifyDamageBonuses_Params
{
};

// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ModifyResistances
struct UCharacter_Player_ComputedStats_C_ModifyResistances_Params
{
};

// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.OnComputeStats
struct UCharacter_Player_ComputedStats_C_OnComputeStats_Params
{
};

// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.OnPostComputeStats
struct UCharacter_Player_ComputedStats_C_OnPostComputeStats_Params
{
};

// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.OnComputeDerivedStats
struct UCharacter_Player_ComputedStats_C_OnComputeDerivedStats_Params
{
};

// Function Character_Player_ComputedStats.Character_Player_ComputedStats_C.ExecuteUbergraph_Character_Player_ComputedStats
struct UCharacter_Player_ComputedStats_C_ExecuteUbergraph_Character_Player_ComputedStats_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
