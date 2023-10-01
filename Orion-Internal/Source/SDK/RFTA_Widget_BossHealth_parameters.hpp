#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_BossHealth_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_BossHealth.Widget_BossHealth_C.UpdateHealthPercentage
struct UWidget_BossHealth_C_UpdateHealthPercentage_Params
{
	bool*                                              Ease_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_BossHealth.Widget_BossHealth_C.SetLabel
struct UWidget_BossHealth_C_SetLabel_Params
{
};

// Function Widget_BossHealth.Widget_BossHealth_C.SetAttributes
struct UWidget_BossHealth_C_SetAttributes_Params
{
};

// Function Widget_BossHealth.Widget_BossHealth_C.SetHealthBarColor
struct UWidget_BossHealth_C_SetHealthBarColor_Params
{
};

// Function Widget_BossHealth.Widget_BossHealth_C.Construct
struct UWidget_BossHealth_C_Construct_Params
{
};

// Function Widget_BossHealth.Widget_BossHealth_C.OnNotifyHealthChanged_Event_1
struct UWidget_BossHealth_C_OnNotifyHealthChanged_Event_1_Params
{
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BossHealth.Widget_BossHealth_C.ExecuteUbergraph_Widget_BossHealth
struct UWidget_BossHealth_C_ExecuteUbergraph_Widget_BossHealth_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
