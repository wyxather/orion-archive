#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_BossHealthBars_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_BossHealthBars.Widget_BossHealthBars_C.RemoveBoss
struct UWidget_BossHealthBars_C_RemoveBoss_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BossHealthBars.Widget_BossHealthBars_C.AddBoss
struct UWidget_BossHealthBars_C_AddBoss_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BossHealthBars.Widget_BossHealthBars_C.Construct
struct UWidget_BossHealthBars_C_Construct_Params
{
};

// Function Widget_BossHealthBars.Widget_BossHealthBars_C.OnBossRelevant_Event_1
struct UWidget_BossHealthBars_C_OnBossRelevant_Event_1_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BossHealthBars.Widget_BossHealthBars_C.OnBossNotRelevant_Event_1
struct UWidget_BossHealthBars_C_OnBossNotRelevant_Event_1_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BossHealthBars.Widget_BossHealthBars_C.ExecuteUbergraph_Widget_BossHealthBars
struct UWidget_BossHealthBars_C_ExecuteUbergraph_Widget_BossHealthBars_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
